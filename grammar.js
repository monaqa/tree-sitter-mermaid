const tokens = {
    /// common tokens
    _whitespace: /[ \t]+/,
    _newline: /(\n)+/,
    comment: /%%([^\{].*)?\n/,

    type_directive: /[^\}:.][^:.]*/,
    arg_directive: /([^\}:.]|\n)([^:.]|\n)*/,

    /// tokens in
    direction_tb: kwd("direction tb"),
    direction_bt: kwd("direction bt"),
    direction_rl: kwd("direction rl"),
    direction_lr: kwd("direction lr"),

    // rest: /(?:[:]?(?:no)?wrap:)?[^#\n;]*/,
    _sequence_rest_text: /[^#\n;]+/,
    // tree-sitter doesn't support negative lookahead
    // TODO: Replicate more precise rule
    // sequence_actor: /[^\+\->:\n,;]+((?!(\-x|\-\-x|\-\)|\-\-\)))[\-]*[^\+\->:\n,;]+)*/,
    _sequence_actor_word: /[^ \+\->:\n,;]+/,
    solid_arrow: "->>",
    dotted_arrow: "-->>",
    solid_open_arrow: "->",
    dotted_open_arrow: "-->",
    solid_cross: "-x",
    dotted_cross: "--x",
    solid_point: "-)",
    dotted_point: "--)",
    sequence_signal_plus_sign: "+",
    sequence_signal_minus_sign: "-",
    note_placement_left: kwd("left of"),
    note_placement_right: kwd("right of"),

    /// tokens in class diagram
    _class_name: /[a-zA-Z0-9_]+/,
    _alpha_num_token: /[a-zA-Z0-9_~!?]+/,
    _bquote_string: /`[^`]+`/,
    _dquote_string: /"[^"]+"/,

    class_reltype_aggregation: "o",
    class_reltype_extension: choice("<|", "|>"),
    class_reltype_composition: "*",
    class_reltype_dependency: choice("<", ">"),
    class_linetype_solid: "--",
    class_linetype_dotted: "..",
    class_label: /[^:\n;]+/,

    /// tokens in state diagram
    state_name: choice(
        "[*]",  // initial/final state
        /[_a-zA-Z0-9]+/
    ),
    state_arrow: "-->",
    state_description: /[^:\n;]+/,
    state_hide_empty_description: kwd("hide empty description"),
    state_id: /[^:\n\s\-\{]+/,
    state_division: "--",
    state_annotation_fork: choice(
        token.immediate(seq("<<", kwd("fork"), ">>")),
        token.immediate(seq("[[", kwd("fork"), "]]")),
    ),
    state_annotation_join: choice(
        token.immediate(seq("<<", kwd("join"), ">>")),
        token.immediate(seq("[[", kwd("join"), "]]")),
    ),
    state_annotation_choice: choice(
        token.immediate(seq("<<", kwd("choice"), ">>")),
        token.immediate(seq("[[", kwd("choice"), "]]")),
    ),

    /// tokens in Gantt chart
    gantt_meta_format: /[^#\n;]+/,
    // gantt_task_text: /[^#:\n;]+/,
    gantt_task_text: repeat1(/[^#:\n;\s]+/),
    gantt_task_data: /[^#:\n;]+/,

    /// tokens in pie chart
    pie_showdata: kwd("showdata"),
    pie_title: /[^\n;#]+/,
    pie_label: /"[^"]*"/,
    pie_value: /[\s]*[\d]+(\.[\d]+)?/,

    /// tokens in flow chart
    flowchart_direction_lr: choice(kwd("lr"), kwd("br"), ">"),
    flowchart_direction_rl: choice(kwd("rl"), "<"),
    flowchart_direction_tb: choice(kwd("tb"), kwd("td"), "v"),
    flowchart_direction_bt: choice(kwd("bt"), "^"),

    flow_text_literal: repeat1(/[^-|}\])\s\n;/\\]+/),
    flow_text_quoted: (/"[^"\n]*"/),

    // 適当
    flow_link_arrow: choice(
        /[xo<]?--+[-xo>]/,
        /[xo<]?==+[=xo>]/,
        /[xo<]?-?\.+-[xo>]/,
    ),
    flow_link_arrow_start: choice(
        /[xo<]?--+/,
        /[xo<]?==+/,
        /[xo<]?-\.+/,
    ),

    /// tokens in ER diagram
    _er_word: /"[^"]*"/,
    _er_alphanum: /[A-Za-z][A-Za-z0-9\-_]*/,

    er_cardinarity_zero_or_one: choice("|o", "o|"),
    er_cardinarity_zero_or_more: choice("}o", "o{"),
    er_cardinarity_one_or_more: choice("}|", "|{"),
    er_cardinarity_only_one: "||",
    er_reltype_non_identifying: choice("..", ".-", "-."),
    er_reltype_identifying: "--",

    er_attribute_key_type_pk: kwd("pk"),
    er_attribute_key_type_fk: kwd("fk"),
}

const tokensFunc = Object.fromEntries(
    Object.entries(tokens).map(
      ([k, v]) => [k, (_) => v]
    )
  )

module.exports = grammar({
    /// meta information
    name: 'mermaid',

    extras: $ => [
        $._whitespace,
        $.comment,
    ],

    supertypes: $ => [
        $._direction,
        $._flowchart_direction,

        $._sequence_stmt,
        $._class_stmt,
        $._state_stmt,
        $._gantt_stmt,
        $._pie_stmt,
        $._flow_stmt,
        $._er_stmt,

        $._class_reltype,
        $._class_linetype,
        $._state_annotation,
        $._flow_link,
        $._flow_vertex_kind,
        $._er_cardinarity,
        $._er_reltype,
        $._er_attribute_key_type,
    ],

    rules: {

        /// source file, common
        source_file: $ => choice(
            $.diagram_sequence,
            $.diagram_class,
            $.diagram_state,
            $.diagram_gantt,
            $.diagram_pie,
            $.diagram_flow,
            $.diagram_er,
        ),

        directive: $ => seq(
            "%%{",
            $.type_directive,
            optseq(":", $.arg_directive),
            "}%%"
        ),

        _direction: $ => choice(
            $.direction_tb,
            $.direction_bt,
            $.direction_rl,
            $.direction_lr,
        ),

        /// sequence diagram
        diagram_sequence: $ => seq(
            repeat(choice($.directive, $._newline)),
            kwd("sequenceDiagram"), repeat(choice($._sequence_stmt, $._newline))
        ),

        _sequence_stmt: $ => choice(
            $.sequence_stmt_participant,
            $.sequence_stmt_actor,
            $.sequence_stmt_signal,
            $.sequence_stmt_autonumber,
            $.sequence_stmt_activate,
            $.sequence_stmt_deactivate,
            $.sequence_stmt_note,
            $.sequence_stmt_links,
            $.sequence_stmt_link,
            $.sequence_stmt_properties,
            $.sequence_stmt_details,
            $.sequence_stmt_title,
            $.sequence_stmt_loop,
            $.sequence_stmt_rect,
            $.sequence_stmt_opt,
            $.sequence_stmt_alt,
            $.sequence_stmt_par,
            $.directive,
        ),

        sequence_stmt_participant: $ => seq(
            kwd("participant"), $.sequence_actor, optional(seq(kwd("as"), alias($._sequence_rest_text, $.sequence_alias))),
            $._newline,
        ),
        sequence_stmt_actor: $ => seq(kwd("sequence_actor"), $.sequence_actor, optional(seq(kwd("as"), alias($._sequence_rest_text, $.sequence_alias))), $._newline),
        sequence_actor: $ => repeat1($._sequence_actor_word),

        sequence_stmt_signal: $ => seq(
            $.sequence_actor,
            $.sequence_signal_type,
            optional(choice($.sequence_signal_plus_sign, $.sequence_signal_minus_sign)),
            $.sequence_actor,
            ":", $.sequence_text,
            $._newline,
        ),
        sequence_signal_type: $ => choice(
            $.solid_arrow,
            $.dotted_arrow,
            $.solid_open_arrow,
            $.dotted_open_arrow,
            $.solid_cross,
            $.dotted_cross,
            $.solid_point,
            $.dotted_point,
        ),
        sequence_text: $ => $._sequence_rest_text,

        sequence_stmt_autonumber: _ => kwd("autonumber"),
        sequence_stmt_activate: $ => seq(kwd("activate"), $.sequence_actor, $._newline),
        sequence_stmt_deactivate: $ => seq(kwd("deactivate"), $.sequence_actor, $._newline),

        sequence_stmt_note: $ => seq(
            kwd("note "),
            choice(
                seq( $.sequence_note_placement, $.sequence_actor),
                seq( kwd("over"), $.sequence_actor, optional(seq(",", $.sequence_actor))),
            ),
            ":", $.sequence_text,
            $._newline,
        ),

        sequence_stmt_links: $ => seq( kwd("links"), $.sequence_actor, ":", $.sequence_text),
        sequence_stmt_link: $ => seq( kwd("link"), $.sequence_actor, ":", $.sequence_text),
        sequence_stmt_properties: $ => seq( kwd("properties"), $.sequence_actor, ":", $.sequence_text),
        sequence_stmt_details: $ => seq( kwd("details"), $.sequence_actor, ":", $.sequence_text),

        sequence_note_placement: $ => choice($.note_placement_left, $.note_placement_right),

        sequence_stmt_title: $ => seq(kwd("title"), ":", alias($._sequence_rest_text, $.title), $._newline),

        sequence_stmt_loop: $ => seq(
            kwd("loop"), $.sequence_text, $._newline,
            optional(alias($._sequence_subdocument, $.sequence_stmt_loop_inner)),
            kwd("end")
        ),
        sequence_stmt_rect: $ => seq(
            kwd("rect"), $.sequence_text, $._newline,
            optional(alias($._sequence_subdocument, $.sequence_stmt_rect_inner)),
            kwd("end")
        ),
        sequence_stmt_opt: $ => seq(
            kwd("opt"), $.sequence_text, $._newline,
            optional(alias($._sequence_subdocument, $.sequence_stmt_opt_inner)),
            kwd("end")
        ),
        _sequence_subdocument: $ => repeat1(choice($._sequence_stmt, $._newline)),

        sequence_stmt_alt: $ => seq(
            kwd("alt"), $.sequence_text, $._newline,
            sep(alias($._sequence_subdocument, $.sequence_stmt_alt_branch), kwd("else")),
            kwd("end")
        ),

        sequence_stmt_par: $ => seq(
            kwd("par"), $.sequence_text, $._newline,
            sep(alias($._sequence_subdocument, $.sequence_stmt_alt_branch), kwd("and")),
            kwd("end")
        ),


        /// class diagram
        diagram_class: $ => seq(
            repeat(choice($.directive, $._newline)),
            choice(
                kwd("classDiagram-v2"),
                kwd("classDiagram"),
            ),
            $._newline,
            sep($._class_stmt, $._newline),
            optional($._newline),
            // repeat(choice($._class_stmt, $._newline))
        ),

        _class_stmt: $ => choice(
            $.class_stmt_relation,
            $.class_stmt_class,
            $.class_stmt_method,
            $.class_stmt_annotation,
            // TODO
            // $.class_stmt_click,
            // $.class_stmt_css,
        ),

        class_stmt_relation: $ => seq(
            $.class_name,
            optional(alias($._dquote_string, $.cardinality)),
            $.class_relation,
            optional(alias($._dquote_string, $.cardinality)),
            $.class_name,
            optseq(":", optional($.class_label))
        ),
        class_name: $ => seq($.class_name_body, optional($.class_generics)),
        class_name_body: $ => seq(
            repeat($._class_name),
            choice(
                $._class_name,
                $._bquote_string,
            ),
        ),
        class_generics: $ => seq(
            "~", alias(/[^~]+/, $.class_name), "~"
        ),
        class_relation: $ => seq(
            optional($._class_reltype),
            $._class_linetype,
            optional($._class_reltype),
        ),
        _class_reltype: $ => choice(
            $.class_reltype_aggregation,
            $.class_reltype_extension,
            $.class_reltype_composition,
            $.class_reltype_dependency,
        ),
        _class_linetype: $ => choice(
            $.class_linetype_solid,
            $.class_linetype_dotted,
        ),

        class_stmt_class: $ => seq(
            "class", $.class_name,
            optseq(":::", alias($._alpha_num_token, $.class_style_name)),
            optseq(
                "{",
                optional($._newline),
                sep(choice($.class_method_line, $.class_annotation_line), $._newline),
                optional($._newline),
                "}",
            )
        ),
        class_method_line: $ => seq(
            optional(choice(
                alias("+", $.class_visibility_public),
                alias("-", $.class_visibility_private),
                alias("#", $.class_visibility_protected),
                alias("~", $.class_visibility_internal),
            )),
            repeat1(
                choice(
                    "(",
                    ")",
                    $._alpha_num_token,
                ),
            ),
            optional(choice(
                alias("*", $.class_classifier_abstract),
                alias("$", $.class_classifier_static),
            )),
        ),
        class_annotation_line: $ => seq(
            "<<", alias($._alpha_num_token, $.annotation), ">>",
        ),

        class_stmt_method: $ => seq(
            $.class_name, ":", $.class_method_line,
        ),

        class_stmt_annotation: $ => seq(
            "<<", alias($._alpha_num_token, $.annotation), ">>",
            $.class_name
        ),
        // class_stmt_click: $ => seq(),
        // class_stmt_css: $ => seq(),

        /// state diagram
        diagram_state: $ => seq(
            repeat(choice($.directive, $._newline)),
            choice(kwd("stateDiagram"), kwd("stateDiagram-v2")),
            optional($._newline),
            sep($._state_stmt, $._newline),
            optional($._newline),
        ),
        _state_stmt: $ => choice(
            // s1
            // s1: foo
            // state "foo" as s1
            $.state_stmt_simple,

            // s1 --> s2
            $.state_stmt_arrow,

            // state s1 { ... }
            $.state_stmt_composite,

            // state s1 <<join>>
            $.state_stmt_annotation,
            $.state_stmt_hide_empty_description,
            $.state_division,
            $.state_note,
            $._direction,
        ),

        state_stmt_simple: $ => choice(
            seq( $.state_name, optseq(":", $.state_description)),
            seq( kwd("state "), $.state_alias),
        ),

        state_stmt_arrow: $ => seq(
            $.state_name,
            $.state_arrow,
            $.state_name,
            optseq(":", $.state_description),
        ),

        state_stmt_composite: $ => seq(
            kwd("state "),
            choice($.state_name, $.state_alias),
            optseq(kwd("as"), $.state_id),
            $.state_composite_body,
        ),
        state_composite_body: $ => seq(
            "{",
            optional($._newline),
            sep($._state_stmt, optional($._newline)),
            optional($._newline),
            "}",
        ),

        state_stmt_annotation: $ => seq(
            kwd("state "),
            $.state_name,
            $._state_annotation,
        ),

        state_alias: $ => seq(
            alias($._dquote_string, $.state_description),
            kwd("as"), $.state_id,
        ),

        state_stmt_hide_empty_description: $ => $.state_hide_empty_description,

        _state_annotation: $ => choice(
            $.state_annotation_fork,
            $.state_annotation_join,
            $.state_annotation_choice,
        ),

        state_note: $ => seq(
            kwd("note "),
            $.state_note_placement,
            $.state_name,
            choice(
                seq( ":", optional(alias($.state_description, $.note_content))),
                // seq($._newline, alias(repeat(seq(/[^\n]+/, $._newline)), $.note_content), optional(/\s+/), kwd("end note"))
            ),
        ),
        state_note_placement: $ => choice($.note_placement_left, $.note_placement_right),

        /// Gantt chart
        diagram_gantt: $ => seq(
            repeat(choice($.directive, $._newline)),
            kwd("gantt"), $._newline,
            repeat(choice($._gantt_stmt, $._newline))
        ),

        _gantt_stmt: $ => choice(
            $.gantt_stmt_dateformat,
            $.gantt_stmt_inclusiveenddates,
            $.gantt_stmt_topaxis,
            $.gantt_stmt_axisformat,
            $.gantt_stmt_includes,
            $.gantt_stmt_excludes,
            $.gantt_stmt_todaymarker,
            $.gantt_stmt_title,
            $.gantt_stmt_section,
            $.gantt_stmt_task,
            // $.gantt_stmt_click,
            $.directive,
        ),

        gantt_stmt_dateformat: $ => seq(
            kwd("dateformat"), alias($.gantt_meta_format, $.gantt_date_format),
        ),
        gantt_stmt_inclusiveenddates: $ => seq(
            kwd("inclusiveenddates"), alias($.gantt_meta_format, $.gantt_end_dates),
        ),
        gantt_stmt_topaxis: $ => seq(
            kwd("topaxis"), alias($.gantt_meta_format, $.gantt_top_axis),
        ),
        gantt_stmt_axisformat: $ => seq(
            kwd("axisformat"), alias($.gantt_meta_format, $.gantt_axis_format),
        ),
        gantt_stmt_includes: $ => seq(
            kwd("includes"), alias($.gantt_meta_format, $.gantt_includes),
        ),
        gantt_stmt_excludes: $ => seq(
            kwd("excludes"), alias($.gantt_meta_format, $.gantt_excludes),
        ),
        gantt_stmt_todaymarker: $ => seq(
            kwd("todaymarker"), alias($.gantt_meta_format, $.gantt_today_marker),
        ),
        gantt_stmt_title: $ => seq(
            kwd("title"), alias($.gantt_meta_format, $.gantt_title),
        ),
        gantt_stmt_section: $ => seq(
            kwd("section"), alias($.gantt_meta_format, $.gantt_section),
        ),

        gantt_stmt_task: $ => seq(
            $.gantt_task_text, ":", $.gantt_task_data,
        ),

        /// pie chart
        diagram_pie: $ => seq(
            repeat(choice($.directive, $._newline)),
            kwd("pie"),
            optional($.pie_showdata),
            repeat(choice($._pie_stmt, $._newline))
        ),

        _pie_stmt: $ => choice(
            $.pie_stmt_title,
            $.pie_stmt_element,
            $.directive,
        ),

        pie_stmt_title: $ => seq(
            kwd("title"),
            optional($.pie_title),
        ),

        pie_stmt_element: $ => seq(
            $.pie_label,
            ":",
            $.pie_value,
        ),

        /// flow chart
        diagram_flow: $ => seq(
            repeat(choice($.directive, $._newline)),
            kwd("flowchart"),
            choice(
                $._flowchart_direction,
                $._newline,
            ),
            optional($._newline),
            sep($._flow_stmt, choice($._newline, ";")),
            optional(choice($._newline, ";")),
        ),
        _flowchart_direction: $ => choice(
            $.flowchart_direction_lr,
            $.flowchart_direction_rl,
            $.flowchart_direction_tb,
            $.flowchart_direction_bt,
        ),

        _flow_stmt: $ => choice(
            $.flow_stmt_vertice,
            // $.flow_stmt_style,
            // $.flow_stmt_linkstyle,
            // $.flow_stmt_classdef,
            // $.flow_stmt_class,
            $.flow_stmt_subgraph,
            $.flow_stmt_direction,
        ),

        flow_stmt_direction: $ => seq(kwd("direction"), $._flowchart_direction),

        flow_stmt_vertice: $ => sep($.flow_node, $._flow_link),

        flow_node: $ => sep($.flow_vertex, "&"),

        _flow_link: $ => choice(
            $.flow_link_simplelink,
            $.flow_link_arrowtext,
            $.flow_link_middletext,
        ),

        flow_link_simplelink: $ => seq($.flow_link_arrow),
        flow_link_arrowtext: $ => seq($.flow_link_arrow, "|", $.flow_arrow_text, "|"),
        flow_link_middletext: $ => seq(
            $.flow_link_arrow_start,
            $.flow_arrow_text,
            $.flow_link_arrow,
        ),
        flow_arrow_text: $ => repeat1($._alpha_num_token),

        flow_vertex_id: $ => $._alpha_num_token,

        flow_vertex: $ => seq(
            $.flow_vertex_id,
            optional($._flow_vertex_kind),
        ),
        _flow_vertex_kind: $ => choice(
            $.flow_vertex_square,
            $.flow_vertex_circle,
            $.flow_vertex_ellipse,
            $.flow_vertex_stadium,
            $.flow_vertex_subroutine,
            $.flow_vertex_rect,
            $.flow_vertex_cylinder,
            $.flow_vertex_round,
            $.flow_vertex_diamond,
            $.flow_vertex_hexagon,
            $.flow_vertex_odd,
            $.flow_vertex_trapezoid,
            $.flow_vertex_inv_trapezoid,
            $.flow_vertex_leanright,
            $.flow_vertex_leanleft,
        ),
        flow_vertex_square: $ => seq( "[", $._flow_text, "]" ),
        flow_vertex_circle: $ => seq("((", $._flow_text, "))"),
        flow_vertex_ellipse: $ => seq( "(-", $._flow_text, "-)" ),
        flow_vertex_stadium: $ => seq("([", $._flow_text, "])"),
        flow_vertex_subroutine: $ => seq("[[", $._flow_text, "]]"),
        flow_vertex_rect: $ => seq( "[|", $._flow_text, "|]" ),
        flow_vertex_cylinder: $ => seq("[(", $._flow_text, ")]"),
        flow_vertex_round: $ => seq("(", $._flow_text, ")"),
        flow_vertex_diamond: $ => seq( "{", $._flow_text, "}" ),
        flow_vertex_hexagon: $ => seq( "{{", $._flow_text, "}}" ),
        flow_vertex_odd: $ => seq( ">", $._flow_text, "]" ),
        flow_vertex_trapezoid: $ => seq( "[/", $._flow_text, "\\]" ),
        flow_vertex_inv_trapezoid: $ => seq( "[\\", $._flow_text, "/]" ),
        flow_vertex_leanright: $ => seq("[/", $._flow_text, "/]" ),
        flow_vertex_leanleft: $ => seq( "[\\", $._flow_text, "\\]" ),
        _flow_text: $ => choice($.flow_text_literal, $.flow_text_quoted),

        flow_stmt_subgraph: $ => seq(
            "subgraph",
            optional(
                choice(
                    seq($.flow_vertex_id, "[", $.flow_vertex_text, "]",),
                    seq($.flow_vertex_text),
                ),
            ),
            choice(";", $._newline),
            optional($.flow_stmt_subgraph_inner),
            "end",
        ),
        flow_stmt_subgraph_inner: $ => repeat1(seq($._flow_stmt, choice($._newline, ";"))),
        flow_vertex_text: $ => repeat1($._alpha_num_token),

        /// ER diagram
        diagram_er: $ => seq(
            repeat(choice($.directive, $._newline)),
            kwd("erdiagram"),
            optional($._newline),
            sep($._er_stmt, $._newline),
            optional($._newline),
        ),

        _er_stmt: $ => choice(
            $.er_stmt_entity,
            $.er_stmt_entity_relation,
            $.er_stmt_entity_block,
            $.directive,
        ),

        er_stmt_entity: $ => $.er_entity_name,

        er_stmt_entity_relation: $ => seq(
            $.er_entity_name,
            $.er_relation,
            $.er_entity_name,
            ":", $.er_role,
        ),
        er_entity_name: $ => $._er_alphanum,
        er_relation: $ => seq(
            $._er_cardinarity,
            $._er_reltype,
            $._er_cardinarity,
        ),
        _er_cardinarity: $ => choice(
            $.er_cardinarity_zero_or_one,
            $.er_cardinarity_zero_or_more,
            $.er_cardinarity_one_or_more,
            $.er_cardinarity_only_one,
        ),
        _er_reltype: $ => choice(
            $.er_reltype_non_identifying,
            $.er_reltype_identifying,
        ),
        er_role: $ => choice( $._er_word, $._er_alphanum,),

        er_stmt_entity_block: $ => seq(
            $.er_entity_name,
            "{",
            $._newline,
            optional($.er_stmt_entity_block_inner),
            "}"
        ),

        er_stmt_entity_block_inner: $ => repeat1($.er_attribute),

        er_attribute: $ => seq(
            $.er_attribute_type,
            $.er_attribute_name,
            optional($._er_attribute_key_type),
            optional($.er_attribute_comment),
            $._newline,
        ),

        er_attribute_type: $ => $._er_alphanum,
        er_attribute_name: $ => $._er_alphanum,

        _er_attribute_key_type: $ => choice(
            $.er_attribute_key_type_pk,
            $.er_attribute_key_type_fk,
        ),

        er_attribute_comment: $ => $._er_word,

        ... tokensFunc
    }
});

/// common functions
function kwd(word) {
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

function optseq(...args) {
    return optional(seq(...args))
}

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

