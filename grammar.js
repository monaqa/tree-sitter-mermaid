const tokens = {
    _whitespace: /[ \t]+/,
    _newline: /(\n)+/,
    comment: /%%([^\{].*)?\n/,

    type_directive: /[^\}:.][^:.]*/,
    arg_directive: /([^\}:.]|\n)([^:.]|\n)*/,

    direction_tb: kwd("direction tb"),
    direction_bt: kwd("direction bt"),
    direction_rl: kwd("direction rl"),
    direction_lr: kwd("direction lr"),

    // rest: /(?:[:]?(?:no)?wrap:)?[^#\n;]*/,
    _rest_text: /[^#\n;]+/,
    // tree-sitter doesn't support negative lookahead
    // TODO: Replicate more precise rule
    // actor: /[^\+\->:\n,;]+((?!(\-x|\-\-x|\-\)|\-\-\)))[\-]*[^\+\->:\n,;]+)*/,
    _actor_word: /[^ \+\->:\n,;]+/,
    solid_arrow: "->>",
    dotted_arrow: "-->>",
    solid_open_arrow: "->",
    dotted_open_arrow: "-->",
    solid_cross: "-x",
    dotted_cross: "--x",
    solid_point: "-)",
    dotted_point: "--)",
    signal_plus_sign: "+",
    signal_minus_sign: "-",
    note_placement_left: kwd("left of"),
    note_placement_right: kwd("right of"),

    _class_name: /[a-zA-Z0-9_]+/,
    _alpha_num_token: /[a-zA-Z0-9_~]+/,
    _bquote_string: /`[^`]+`/,
    _dquote_string: /"[^"]+"/,

    class_reltype_aggregation: "o",
    class_reltype_extension: choice("<|", "|>"),
    class_reltype_composition: "*",
    class_reltype_dependency: choice("<", ">"),
    class_linetype_solid: "--",
    class_linetype_dotted: "..",
    class_label: /[^:\n;]+/,

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
}

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

const tokensFunc = Object.fromEntries(
    Object.entries(tokens).map(
      ([k, v]) => [k, (_) => v]
    )
  )

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}

module.exports = grammar({
    name: 'mermaid',

    extras: $ => [
        $._whitespace,
        $.comment,
    ],

    supertypes: $ => [
        $._sequence_stmt,
        $._class_stmt,
        $._class_reltype,
        $._class_linetype,
    ],

    rules: {

        /// source file, common
        source_file: $ => choice(
            $.diagram_sequence,
            $.diagram_class,
            $.diagram_state,
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
            kwd("participant"), $.actor, optional(seq(kwd("as"), alias($._rest_text, $.alias))),
            $._newline,
        ),
        sequence_stmt_actor: $ => seq(kwd("actor"), $.actor, optional(seq(kwd("as"), alias($._rest_text, $.alias))), $._newline),
        actor: $ => repeat1($._actor_word),

        sequence_stmt_signal: $ => seq(
            $.actor,
            $.signal_type,
            optional(choice($.signal_plus_sign, $.signal_minus_sign)),
            $.actor,
            ":", alias($._rest_text, $.text),
            $._newline,
        ),
        signal_type: $ => choice(
            $.solid_arrow,
            $.dotted_arrow,
            $.solid_open_arrow,
            $.dotted_open_arrow,
            $.solid_cross,
            $.dotted_cross,
            $.solid_point,
            $.dotted_point,
        ),

        sequence_stmt_autonumber: _ => kwd("autonumber"),
        sequence_stmt_activate: $ => seq(kwd("activate"), $.actor, $._newline),
        sequence_stmt_deactivate: $ => seq(kwd("deactivate"), $.actor, $._newline),

        sequence_stmt_note: $ => seq(
            kwd("note "),
            choice(
                seq( $.note_placement, $.actor),
                seq( kwd("over"), $.actor, optional(seq(",", $.actor))),
            ),
            ":", alias($._rest_text, $.text),
            $._newline,
        ),

        sequence_stmt_links: $ => seq( kwd("links"), $.actor, ":", alias($._rest_text, $.text)),
        sequence_stmt_link: $ => seq( kwd("link"), $.actor, ":", alias($._rest_text, $.text)),
        sequence_stmt_properties: $ => seq( kwd("properties"), $.actor, ":", alias($._rest_text, $.text)),
        sequence_stmt_details: $ => seq( kwd("details"), $.actor, ":", alias($._rest_text, $.text)),

        note_placement: $ => choice($.note_placement_left, $.note_placement_right),

        sequence_stmt_title: $ => seq(kwd("title"), ":", alias($._rest_text, $.title), $._newline),

        sequence_stmt_loop: $ => seq(
            kwd("loop"), alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.sequence_stmt_loop_inner)),
            kwd("end")
        ),
        sequence_stmt_rect: $ => seq(
            kwd("rect"), alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.sequence_stmt_rect_inner)),
            kwd("end")
        ),
        sequence_stmt_opt: $ => seq(
            kwd("opt"), alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.sequence_stmt_opt_inner)),
            kwd("end")
        ),
        _subdocument: $ => repeat1(choice($._sequence_stmt, $._newline)),

        sequence_stmt_alt: $ => seq(
            kwd("alt"), alias($._rest_text, $.text), $._newline,
            sep(alias($._subdocument, $.sequence_stmt_alt_branch), kwd("else")),
            kwd("end")
        ),

        sequence_stmt_par: $ => seq(
            kwd("par"), alias($._rest_text, $.text), $._newline,
            sep(alias($._subdocument, $.sequence_stmt_alt_branch), kwd("and")),
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
            $.note_placement,
            $.state_name,
            choice(
                seq( ":", optional(alias($.state_description, $.note_content))),
                // seq($._newline, alias(repeat(seq(/[^\n]+/, $._newline)), $.note_content), optional(/\s+/), kwd("end note"))
            ),
        ),

        ... tokensFunc
    }
});
