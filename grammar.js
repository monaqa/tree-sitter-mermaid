const tokens = {
    _whitespace: /[ \t]+/,
    _comment: /%%([^\{].*)?\n/,
    type_directive: /[^\}:.][^:.]*/,
    arg_directive: /([^\}:.]|\n)([^:.]|\n)*/,
    _newline: /(\n)+/,
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
    note_placement_left: "left of",
    note_placement_right: "right of",
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
        $._comment,
    ],

    supertypes: $ => [
        $._diagram_stmt,
    ],

    rules: {
        source_file: $ => $.diagram_sequence,

        diagram_sequence: $ => seq(
            repeat($.directive),
            "sequenceDiagram", repeat(choice($._diagram_stmt, $._newline))
        ),

        _diagram_stmt: $ => choice(
            $.stmt_participant,
            $.stmt_actor,
            $.signal,
            $.stmt_autonumber,
            $.stmt_activate,
            $.stmt_deactivate,
            $.stmt_note,
            $.stmt_links,
            // $.stmt_link,
            // $.stmt_properties,
            // $.stmt_details,
            $.stmt_title,
            $.stmt_loop,
            $.stmt_rect,
            $.stmt_opt,
            // $.stmt_alt,
            // $.stmt_par,
            $.directive,
        ),

        directive: $ => seq(
            "%%{",
            $.type_directive,
            optional(seq(":", $.arg_directive)),
            "}%%"
        ),

        stmt_participant: $ => seq(
            "participant", $.actor, optional(seq("as", alias($._rest_text, $.alias))),
            $._newline,
        ),
        stmt_actor: $ => seq("actor", $.actor, optional(seq("as", alias($._rest_text, $.alias))), $._newline),
        actor: $ => repeat1($._actor_word),

        signal: $ => seq(
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

        stmt_autonumber: _ => "autonumber",
        stmt_activate: $ => seq("activate", $.actor, $._newline),
        stmt_deactivate: $ => seq("deactivate", $.actor, $._newline),

        stmt_note: $ => seq(
            "note",
            choice(
                seq( $.note_placement, $.actor),
                seq( "over", $.actor, optional(seq(",", $.actor))),
            ),
            ":", alias($._rest_text, $.text),
            $._newline,
        ),

        stmt_links: $ => seq( "links", $.actor, ":", alias($._rest_text, $.text)),
        stmt_link: $ => seq( "link", $.actor, ":", alias($._rest_text, $.text)),
        stmt_properties: $ => seq( "properties", $.actor, ":", alias($._rest_text, $.text)),
        stmt_details: $ => seq( "details", $.actor, ":", alias($._rest_text, $.text)),

        note_placement: $ => choice($.note_placement_left, $.note_placement_right),

        stmt_title: $ => seq("title", ":", alias($._rest_text, $.title), $._newline),

        stmt_loop: $ => seq(
            "loop", alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.stmt_loop_inner)),
            "end"
        ),
        stmt_rect: $ => seq(
            "rect", alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.stmt_rect_inner)),
            "end"
        ),
        stmt_opt: $ => seq(
            "opt", alias($._rest_text, $.text), $._newline,
            optional(alias($._subdocument, $.stmt_opt_inner)),
            "end"
        ),
        _subdocument: $ => repeat1(choice($._diagram_stmt, $._newline)),


        ... tokensFunc
    }
});
