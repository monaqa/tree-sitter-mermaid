#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_sequenceDiagram = 1,
  anon_sym_PERCENT_PERCENT_LBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACE_PERCENT_PERCENT = 4,
  anon_sym_participant = 5,
  anon_sym_as = 6,
  anon_sym_actor = 7,
  sym_stmt_autonumber = 8,
  anon_sym_activate = 9,
  anon_sym_deactivate = 10,
  anon_sym_note = 11,
  anon_sym_over = 12,
  anon_sym_COMMA = 13,
  anon_sym_links = 14,
  anon_sym_link = 15,
  anon_sym_properties = 16,
  anon_sym_details = 17,
  anon_sym_title = 18,
  anon_sym_loop = 19,
  anon_sym_end = 20,
  anon_sym_rect = 21,
  anon_sym_opt = 22,
  sym__whitespace = 23,
  sym__comment = 24,
  sym_type_directive = 25,
  sym_arg_directive = 26,
  sym__newline = 27,
  sym__rest_text = 28,
  sym__actor_word = 29,
  sym_solid_arrow = 30,
  sym_dotted_arrow = 31,
  sym_solid_open_arrow = 32,
  sym_dotted_open_arrow = 33,
  sym_solid_cross = 34,
  sym_dotted_cross = 35,
  sym_solid_point = 36,
  sym_dotted_point = 37,
  sym_signal_plus_sign = 38,
  sym_signal_minus_sign = 39,
  sym_note_placement_left = 40,
  sym_note_placement_right = 41,
  sym_source_file = 42,
  sym_diagram_sequence = 43,
  sym__diagram_stmt = 44,
  sym_directive = 45,
  sym_stmt_participant = 46,
  sym_stmt_actor = 47,
  sym_actor = 48,
  sym_signal = 49,
  sym_signal_type = 50,
  sym_stmt_activate = 51,
  sym_stmt_deactivate = 52,
  sym_stmt_note = 53,
  sym_stmt_links = 54,
  sym_note_placement = 55,
  sym_stmt_title = 56,
  sym_stmt_loop = 57,
  sym_stmt_rect = 58,
  sym_stmt_opt = 59,
  aux_sym__subdocument = 60,
  aux_sym_diagram_sequence_repeat1 = 61,
  aux_sym_diagram_sequence_repeat2 = 62,
  aux_sym_actor_repeat1 = 63,
  alias_sym_alias = 64,
  alias_sym_stmt_loop_inner = 65,
  alias_sym_stmt_opt_inner = 66,
  alias_sym_stmt_rect_inner = 67,
  alias_sym_title = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_sequenceDiagram] = "sequenceDiagram",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [anon_sym_participant] = "participant",
  [anon_sym_as] = "as",
  [anon_sym_actor] = "actor",
  [sym_stmt_autonumber] = "stmt_autonumber",
  [anon_sym_activate] = "activate",
  [anon_sym_deactivate] = "deactivate",
  [anon_sym_note] = "note",
  [anon_sym_over] = "over",
  [anon_sym_COMMA] = ",",
  [anon_sym_links] = "links",
  [anon_sym_link] = "link",
  [anon_sym_properties] = "properties",
  [anon_sym_details] = "details",
  [anon_sym_title] = "title",
  [anon_sym_loop] = "loop",
  [anon_sym_end] = "end",
  [anon_sym_rect] = "rect",
  [anon_sym_opt] = "opt",
  [sym__whitespace] = "_whitespace",
  [sym__comment] = "_comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [sym__newline] = "_newline",
  [sym__rest_text] = "text",
  [sym__actor_word] = "_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_solid_point] = "solid_point",
  [sym_dotted_point] = "dotted_point",
  [sym_signal_plus_sign] = "signal_plus_sign",
  [sym_signal_minus_sign] = "signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_source_file] = "source_file",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__diagram_stmt] = "_diagram_stmt",
  [sym_directive] = "directive",
  [sym_stmt_participant] = "stmt_participant",
  [sym_stmt_actor] = "stmt_actor",
  [sym_actor] = "actor",
  [sym_signal] = "signal",
  [sym_signal_type] = "signal_type",
  [sym_stmt_activate] = "stmt_activate",
  [sym_stmt_deactivate] = "stmt_deactivate",
  [sym_stmt_note] = "stmt_note",
  [sym_stmt_links] = "stmt_links",
  [sym_note_placement] = "note_placement",
  [sym_stmt_title] = "stmt_title",
  [sym_stmt_loop] = "stmt_loop",
  [sym_stmt_rect] = "stmt_rect",
  [sym_stmt_opt] = "stmt_opt",
  [aux_sym__subdocument] = "_subdocument",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_actor_repeat1] = "actor_repeat1",
  [alias_sym_alias] = "alias",
  [alias_sym_stmt_loop_inner] = "stmt_loop_inner",
  [alias_sym_stmt_opt_inner] = "stmt_opt_inner",
  [alias_sym_stmt_rect_inner] = "stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_sequenceDiagram] = anon_sym_sequenceDiagram,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE_PERCENT_PERCENT] = anon_sym_RBRACE_PERCENT_PERCENT,
  [anon_sym_participant] = anon_sym_participant,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_actor] = anon_sym_actor,
  [sym_stmt_autonumber] = sym_stmt_autonumber,
  [anon_sym_activate] = anon_sym_activate,
  [anon_sym_deactivate] = anon_sym_deactivate,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_over] = anon_sym_over,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_links] = anon_sym_links,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_properties] = anon_sym_properties,
  [anon_sym_details] = anon_sym_details,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_rect] = anon_sym_rect,
  [anon_sym_opt] = anon_sym_opt,
  [sym__whitespace] = sym__whitespace,
  [sym__comment] = sym__comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [sym__newline] = sym__newline,
  [sym__rest_text] = sym__rest_text,
  [sym__actor_word] = sym__actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_solid_point] = sym_solid_point,
  [sym_dotted_point] = sym_dotted_point,
  [sym_signal_plus_sign] = sym_signal_plus_sign,
  [sym_signal_minus_sign] = sym_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_source_file] = sym_source_file,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__diagram_stmt] = sym__diagram_stmt,
  [sym_directive] = sym_directive,
  [sym_stmt_participant] = sym_stmt_participant,
  [sym_stmt_actor] = sym_stmt_actor,
  [sym_actor] = sym_actor,
  [sym_signal] = sym_signal,
  [sym_signal_type] = sym_signal_type,
  [sym_stmt_activate] = sym_stmt_activate,
  [sym_stmt_deactivate] = sym_stmt_deactivate,
  [sym_stmt_note] = sym_stmt_note,
  [sym_stmt_links] = sym_stmt_links,
  [sym_note_placement] = sym_note_placement,
  [sym_stmt_title] = sym_stmt_title,
  [sym_stmt_loop] = sym_stmt_loop,
  [sym_stmt_rect] = sym_stmt_rect,
  [sym_stmt_opt] = sym_stmt_opt,
  [aux_sym__subdocument] = aux_sym__subdocument,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_actor_repeat1] = aux_sym_actor_repeat1,
  [alias_sym_alias] = alias_sym_alias,
  [alias_sym_stmt_loop_inner] = alias_sym_stmt_loop_inner,
  [alias_sym_stmt_opt_inner] = alias_sym_stmt_opt_inner,
  [alias_sym_stmt_rect_inner] = alias_sym_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_sequenceDiagram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_participant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [sym_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_activate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deactivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_over] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_links] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_properties] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_details] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_type_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__rest_text] = {
    .visible = true,
    .named = true,
  },
  [sym__actor_word] = {
    .visible = false,
    .named = true,
  },
  [sym_solid_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_minus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_left] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement_right] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__diagram_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__subdocument] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_sequence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_stmt_rect_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_title,
  },
  [2] = {
    [3] = alias_sym_alias,
  },
  [3] = {
    [3] = alias_sym_stmt_loop_inner,
  },
  [4] = {
    [3] = alias_sym_stmt_rect_inner,
  },
  [5] = {
    [3] = alias_sym_stmt_opt_inner,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__subdocument, 4,
    aux_sym__subdocument,
    alias_sym_stmt_loop_inner,
    alias_sym_stmt_opt_inner,
    alias_sym_stmt_rect_inner,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 9,
  [13] = 8,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 5,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 20,
  [41] = 39,
  [42] = 21,
  [43] = 43,
  [44] = 31,
  [45] = 38,
  [46] = 30,
  [47] = 29,
  [48] = 28,
  [49] = 37,
  [50] = 43,
  [51] = 36,
  [52] = 35,
  [53] = 23,
  [54] = 24,
  [55] = 33,
  [56] = 56,
  [57] = 25,
  [58] = 26,
  [59] = 22,
  [60] = 32,
  [61] = 34,
  [62] = 27,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 67,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 70,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 80,
  [85] = 83,
  [86] = 86,
  [87] = 78,
  [88] = 86,
  [89] = 77,
  [90] = 90,
  [91] = 79,
  [92] = 90,
  [93] = 81,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 22,
  [99] = 94,
  [100] = 94,
  [101] = 96,
  [102] = 32,
  [103] = 95,
  [104] = 97,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 122,
  [126] = 126,
  [127] = 118,
  [128] = 117,
  [129] = 116,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 112,
  [134] = 109,
  [135] = 108,
  [136] = 106,
  [137] = 137,
  [138] = 118,
  [139] = 107,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 143,
  [145] = 142,
  [146] = 141,
  [147] = 140,
  [148] = 137,
  [149] = 132,
  [150] = 131,
  [151] = 130,
  [152] = 115,
  [153] = 113,
  [154] = 110,
  [155] = 105,
  [156] = 107,
  [157] = 132,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 121,
  [164] = 126,
  [165] = 119,
  [166] = 114,
  [167] = 111,
  [168] = 120,
  [169] = 162,
  [170] = 161,
  [171] = 160,
  [172] = 159,
  [173] = 173,
  [174] = 174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(112);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '%') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == '+') ADVANCE(242);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '{') ADVANCE(114);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(171);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(162);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == '>') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(239);
      END_STATE();
    case 18:
      if (lookahead == ')') ADVANCE(240);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '>') ADVANCE(236);
      if (lookahead == 'x') ADVANCE(238);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 83:
      if (lookahead == 'q') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 109:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(166);
      if (lookahead == '%') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 111:
      if (eof) ADVANCE(112);
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == '\n') ADVANCE(167);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '%') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_sequenceDiagram);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_participant);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_participant);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_actor);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_stmt_autonumber);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_stmt_autonumber);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_activate);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_activate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_deactivate);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_deactivate);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_over);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_links);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_properties);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_details);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_loop);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_rect);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_rect);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_opt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(148);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(157);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '{') ADVANCE(166);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(7);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(166);
      if (lookahead == '%') ADVANCE(163);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '{') ADVANCE(171);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(7);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__rest_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '{') ADVANCE(115);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(7);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'k') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'v') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_dotted_open_arrow);
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_solid_point);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_signal_plus_sign);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_signal_minus_sign);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_signal_minus_sign);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '>') ADVANCE(236);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_note_placement_left);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_note_placement_right);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 111},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 111},
  [17] = {.lex_state = 111},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 111},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 111},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 111},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 111},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 111},
  [41] = {.lex_state = 111},
  [42] = {.lex_state = 111},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 111},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 111},
  [47] = {.lex_state = 111},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 111},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 111},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 111},
  [58] = {.lex_state = 111},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 111},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 110},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 110},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 110},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_sequenceDiagram] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_participant] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [sym_stmt_autonumber] = ACTIONS(1),
    [anon_sym_activate] = ACTIONS(1),
    [anon_sym_deactivate] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_over] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_properties] = ACTIONS(1),
    [anon_sym_details] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_rect] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_dotted_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [sym_dotted_open_arrow] = ACTIONS(1),
    [sym_dotted_cross] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [sym_signal_plus_sign] = ACTIONS(1),
    [sym_signal_minus_sign] = ACTIONS(1),
    [sym_note_placement_left] = ACTIONS(1),
    [sym_note_placement_right] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(174),
    [sym_diagram_sequence] = STATE(173),
    [sym_directive] = STATE(74),
    [aux_sym_diagram_sequence_repeat1] = STATE(74),
    [anon_sym_sequenceDiagram] = ACTIONS(5),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [3] = {
    [sym__diagram_stmt] = STATE(19),
    [sym_directive] = STATE(55),
    [sym_stmt_participant] = STATE(55),
    [sym_stmt_actor] = STATE(55),
    [sym_actor] = STATE(65),
    [sym_signal] = STATE(55),
    [sym_stmt_activate] = STATE(55),
    [sym_stmt_deactivate] = STATE(55),
    [sym_stmt_note] = STATE(55),
    [sym_stmt_links] = STATE(55),
    [sym_stmt_title] = STATE(55),
    [sym_stmt_loop] = STATE(55),
    [sym_stmt_rect] = STATE(55),
    [sym_stmt_opt] = STATE(55),
    [aux_sym_diagram_sequence_repeat2] = STATE(19),
    [aux_sym_actor_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(43),
    [anon_sym_participant] = ACTIONS(45),
    [anon_sym_actor] = ACTIONS(47),
    [sym_stmt_autonumber] = ACTIONS(49),
    [anon_sym_activate] = ACTIONS(51),
    [anon_sym_deactivate] = ACTIONS(53),
    [anon_sym_note] = ACTIONS(55),
    [anon_sym_links] = ACTIONS(57),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_loop] = ACTIONS(61),
    [anon_sym_rect] = ACTIONS(63),
    [anon_sym_opt] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(67),
    [sym__actor_word] = ACTIONS(39),
  },
  [4] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(69),
    [anon_sym_participant] = ACTIONS(72),
    [anon_sym_actor] = ACTIONS(75),
    [sym_stmt_autonumber] = ACTIONS(78),
    [anon_sym_activate] = ACTIONS(81),
    [anon_sym_deactivate] = ACTIONS(84),
    [anon_sym_note] = ACTIONS(87),
    [anon_sym_links] = ACTIONS(90),
    [anon_sym_title] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(96),
    [anon_sym_end] = ACTIONS(99),
    [anon_sym_rect] = ACTIONS(101),
    [anon_sym_opt] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(107),
    [sym__actor_word] = ACTIONS(110),
  },
  [5] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [6] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(115),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [7] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(117),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [8] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(5),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(119),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [9] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(6),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(121),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [10] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(7),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(123),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [11] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(14),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [12] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(2),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(127),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [13] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(18),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [14] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [15] = {
    [sym__diagram_stmt] = STATE(17),
    [sym_directive] = STATE(55),
    [sym_stmt_participant] = STATE(55),
    [sym_stmt_actor] = STATE(55),
    [sym_actor] = STATE(65),
    [sym_signal] = STATE(55),
    [sym_stmt_activate] = STATE(55),
    [sym_stmt_deactivate] = STATE(55),
    [sym_stmt_note] = STATE(55),
    [sym_stmt_links] = STATE(55),
    [sym_stmt_title] = STATE(55),
    [sym_stmt_loop] = STATE(55),
    [sym_stmt_rect] = STATE(55),
    [sym_stmt_opt] = STATE(55),
    [aux_sym_diagram_sequence_repeat2] = STATE(17),
    [aux_sym_actor_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(43),
    [anon_sym_participant] = ACTIONS(45),
    [anon_sym_actor] = ACTIONS(47),
    [sym_stmt_autonumber] = ACTIONS(49),
    [anon_sym_activate] = ACTIONS(51),
    [anon_sym_deactivate] = ACTIONS(53),
    [anon_sym_note] = ACTIONS(55),
    [anon_sym_links] = ACTIONS(57),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_loop] = ACTIONS(61),
    [anon_sym_rect] = ACTIONS(63),
    [anon_sym_opt] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(135),
    [sym__actor_word] = ACTIONS(39),
  },
  [16] = {
    [sym__diagram_stmt] = STATE(16),
    [sym_directive] = STATE(55),
    [sym_stmt_participant] = STATE(55),
    [sym_stmt_actor] = STATE(55),
    [sym_actor] = STATE(65),
    [sym_signal] = STATE(55),
    [sym_stmt_activate] = STATE(55),
    [sym_stmt_deactivate] = STATE(55),
    [sym_stmt_note] = STATE(55),
    [sym_stmt_links] = STATE(55),
    [sym_stmt_title] = STATE(55),
    [sym_stmt_loop] = STATE(55),
    [sym_stmt_rect] = STATE(55),
    [sym_stmt_opt] = STATE(55),
    [aux_sym_diagram_sequence_repeat2] = STATE(16),
    [aux_sym_actor_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(139),
    [anon_sym_participant] = ACTIONS(142),
    [anon_sym_actor] = ACTIONS(145),
    [sym_stmt_autonumber] = ACTIONS(148),
    [anon_sym_activate] = ACTIONS(151),
    [anon_sym_deactivate] = ACTIONS(154),
    [anon_sym_note] = ACTIONS(157),
    [anon_sym_links] = ACTIONS(160),
    [anon_sym_title] = ACTIONS(163),
    [anon_sym_loop] = ACTIONS(166),
    [anon_sym_rect] = ACTIONS(169),
    [anon_sym_opt] = ACTIONS(172),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(175),
    [sym__actor_word] = ACTIONS(178),
  },
  [17] = {
    [sym__diagram_stmt] = STATE(16),
    [sym_directive] = STATE(55),
    [sym_stmt_participant] = STATE(55),
    [sym_stmt_actor] = STATE(55),
    [sym_actor] = STATE(65),
    [sym_signal] = STATE(55),
    [sym_stmt_activate] = STATE(55),
    [sym_stmt_deactivate] = STATE(55),
    [sym_stmt_note] = STATE(55),
    [sym_stmt_links] = STATE(55),
    [sym_stmt_title] = STATE(55),
    [sym_stmt_loop] = STATE(55),
    [sym_stmt_rect] = STATE(55),
    [sym_stmt_opt] = STATE(55),
    [aux_sym_diagram_sequence_repeat2] = STATE(16),
    [aux_sym_actor_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(43),
    [anon_sym_participant] = ACTIONS(45),
    [anon_sym_actor] = ACTIONS(47),
    [sym_stmt_autonumber] = ACTIONS(49),
    [anon_sym_activate] = ACTIONS(51),
    [anon_sym_deactivate] = ACTIONS(53),
    [anon_sym_note] = ACTIONS(55),
    [anon_sym_links] = ACTIONS(57),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_loop] = ACTIONS(61),
    [anon_sym_rect] = ACTIONS(63),
    [anon_sym_opt] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(183),
    [sym__actor_word] = ACTIONS(39),
  },
  [18] = {
    [sym__diagram_stmt] = STATE(56),
    [sym_directive] = STATE(33),
    [sym_stmt_participant] = STATE(33),
    [sym_stmt_actor] = STATE(33),
    [sym_actor] = STATE(66),
    [sym_signal] = STATE(33),
    [sym_stmt_activate] = STATE(33),
    [sym_stmt_deactivate] = STATE(33),
    [sym_stmt_note] = STATE(33),
    [sym_stmt_links] = STATE(33),
    [sym_stmt_title] = STATE(33),
    [sym_stmt_loop] = STATE(33),
    [sym_stmt_rect] = STATE(33),
    [sym_stmt_opt] = STATE(33),
    [aux_sym__subdocument] = STATE(4),
    [aux_sym_actor_repeat1] = STATE(63),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(11),
    [anon_sym_actor] = ACTIONS(13),
    [sym_stmt_autonumber] = ACTIONS(15),
    [anon_sym_activate] = ACTIONS(17),
    [anon_sym_deactivate] = ACTIONS(19),
    [anon_sym_note] = ACTIONS(21),
    [anon_sym_links] = ACTIONS(23),
    [anon_sym_title] = ACTIONS(25),
    [anon_sym_loop] = ACTIONS(27),
    [anon_sym_end] = ACTIONS(185),
    [anon_sym_rect] = ACTIONS(31),
    [anon_sym_opt] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(37),
    [sym__actor_word] = ACTIONS(39),
  },
  [19] = {
    [sym__diagram_stmt] = STATE(16),
    [sym_directive] = STATE(55),
    [sym_stmt_participant] = STATE(55),
    [sym_stmt_actor] = STATE(55),
    [sym_actor] = STATE(65),
    [sym_signal] = STATE(55),
    [sym_stmt_activate] = STATE(55),
    [sym_stmt_deactivate] = STATE(55),
    [sym_stmt_note] = STATE(55),
    [sym_stmt_links] = STATE(55),
    [sym_stmt_title] = STATE(55),
    [sym_stmt_loop] = STATE(55),
    [sym_stmt_rect] = STATE(55),
    [sym_stmt_opt] = STATE(55),
    [aux_sym_diagram_sequence_repeat2] = STATE(16),
    [aux_sym_actor_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(43),
    [anon_sym_participant] = ACTIONS(45),
    [anon_sym_actor] = ACTIONS(47),
    [sym_stmt_autonumber] = ACTIONS(49),
    [anon_sym_activate] = ACTIONS(51),
    [anon_sym_deactivate] = ACTIONS(53),
    [anon_sym_note] = ACTIONS(55),
    [anon_sym_links] = ACTIONS(57),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_loop] = ACTIONS(61),
    [anon_sym_rect] = ACTIONS(63),
    [anon_sym_opt] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(183),
    [sym__actor_word] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(187), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [26] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(191), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [52] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(197), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [78] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(201), 1,
      sym__newline,
    ACTIONS(199), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [104] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(203), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [130] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(209), 1,
      sym__newline,
    ACTIONS(207), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [156] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(213), 1,
      sym__newline,
    ACTIONS(211), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [182] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(217), 1,
      sym__newline,
    ACTIONS(215), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [208] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(221), 1,
      sym__newline,
    ACTIONS(219), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [234] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(225), 1,
      sym__newline,
    ACTIONS(223), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [260] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(229), 1,
      sym__newline,
    ACTIONS(227), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [286] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(233), 1,
      sym__newline,
    ACTIONS(231), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [312] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(237), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [338] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(239), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [364] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(245), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [390] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(249), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [416] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(253), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [442] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(257), 1,
      sym__newline,
    ACTIONS(255), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [468] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(261), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [494] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(265), 1,
      sym__newline,
    ACTIONS(263), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [520] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(187), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [546] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(263), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [572] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(191), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [598] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(269), 1,
      sym__newline,
    ACTIONS(267), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [624] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(231), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [650] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(259), 1,
      sym__newline,
    ACTIONS(261), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [676] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(227), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [702] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(223), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [728] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(219), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [754] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(255), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [780] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(267), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [806] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(251), 1,
      sym__newline,
    ACTIONS(253), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [832] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(247), 1,
      sym__newline,
    ACTIONS(249), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [858] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(199), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [884] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(203), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [910] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(239), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [936] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(271), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [962] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(207), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [988] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(211), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [1014] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__newline,
    ACTIONS(197), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [1040] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(235), 1,
      sym__newline,
    ACTIONS(237), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [1066] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(243), 1,
      sym__newline,
    ACTIONS(245), 14,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_end,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [1092] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(215), 13,
      anon_sym_PERCENT_PERCENT_LBRACE,
      anon_sym_participant,
      anon_sym_actor,
      sym_stmt_autonumber,
      anon_sym_activate,
      anon_sym_deactivate,
      anon_sym_note,
      anon_sym_links,
      anon_sym_title,
      anon_sym_loop,
      anon_sym_rect,
      anon_sym_opt,
      sym__actor_word,
  [1118] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(277), 1,
      sym__actor_word,
    STATE(64), 1,
      aux_sym_actor_repeat1,
    ACTIONS(279), 2,
      sym_solid_open_arrow,
      sym_dotted_open_arrow,
    ACTIONS(275), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [1146] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(283), 1,
      sym__actor_word,
    STATE(64), 1,
      aux_sym_actor_repeat1,
    ACTIONS(286), 2,
      sym_solid_open_arrow,
      sym_dotted_open_arrow,
    ACTIONS(281), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [1174] = 4,
    STATE(67), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(290), 2,
      sym_solid_open_arrow,
      sym_dotted_open_arrow,
    ACTIONS(288), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [1194] = 4,
    STATE(68), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(290), 2,
      sym_solid_open_arrow,
      sym_dotted_open_arrow,
    ACTIONS(288), 6,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_solid_point,
      sym_dotted_point,
  [1214] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(119), 1,
      sym_actor,
    ACTIONS(292), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [1234] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(165), 1,
      sym_actor,
    ACTIONS(294), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [1254] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(281), 1,
      sym__newline,
    ACTIONS(286), 1,
      anon_sym_as,
    ACTIONS(296), 1,
      sym__actor_word,
    STATE(69), 1,
      aux_sym_actor_repeat1,
  [1273] = 4,
    ACTIONS(299), 1,
      anon_sym_over,
    STATE(89), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(301), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [1288] = 4,
    ACTIONS(303), 1,
      anon_sym_sequenceDiagram,
    ACTIONS(305), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    STATE(71), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [1303] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(275), 1,
      sym__newline,
    ACTIONS(279), 1,
      anon_sym_as,
    ACTIONS(308), 1,
      sym__actor_word,
    STATE(69), 1,
      aux_sym_actor_repeat1,
  [1322] = 4,
    ACTIONS(310), 1,
      anon_sym_over,
    STATE(77), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(301), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [1337] = 4,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(312), 1,
      anon_sym_sequenceDiagram,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    STATE(71), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [1352] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(143), 1,
      sym_actor,
  [1368] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(144), 1,
      sym_actor,
  [1384] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(164), 1,
      sym_actor,
  [1400] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(314), 1,
      sym__actor_word,
    STATE(72), 1,
      aux_sym_actor_repeat1,
    STATE(96), 1,
      sym_actor,
  [1416] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(95), 1,
      sym_actor,
  [1432] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(114), 1,
      sym_actor,
  [1448] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(167), 1,
      sym_actor,
  [1464] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(316), 1,
      sym__actor_word,
    ACTIONS(318), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [1478] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(314), 1,
      sym__actor_word,
    STATE(72), 1,
      aux_sym_actor_repeat1,
    STATE(97), 1,
      sym_actor,
  [1494] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(166), 1,
      sym_actor,
  [1510] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(314), 1,
      sym__actor_word,
    STATE(72), 1,
      aux_sym_actor_repeat1,
    STATE(104), 1,
      sym_actor,
  [1526] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(168), 1,
      sym_actor,
  [1542] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(314), 1,
      sym__actor_word,
    STATE(72), 1,
      aux_sym_actor_repeat1,
    STATE(101), 1,
      sym_actor,
  [1558] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(120), 1,
      sym_actor,
  [1574] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(126), 1,
      sym_actor,
  [1590] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(121), 1,
      sym_actor,
  [1606] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(103), 1,
      sym_actor,
  [1622] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(163), 1,
      sym_actor,
  [1638] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(39), 1,
      sym__actor_word,
    STATE(63), 1,
      aux_sym_actor_repeat1,
    STATE(111), 1,
      sym_actor,
  [1654] = 3,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1665] = 3,
    ACTIONS(324), 1,
      anon_sym_COLON,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1676] = 3,
    ACTIONS(328), 1,
      anon_sym_as,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1687] = 3,
    ACTIONS(332), 1,
      anon_sym_as,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1698] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(195), 2,
      anon_sym_sequenceDiagram,
      anon_sym_PERCENT_PERCENT_LBRACE,
  [1707] = 3,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(338), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1718] = 3,
    ACTIONS(340), 1,
      anon_sym_COLON,
    ACTIONS(342), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1729] = 3,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(346), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1740] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
    ACTIONS(235), 2,
      anon_sym_sequenceDiagram,
      anon_sym_PERCENT_PERCENT_LBRACE,
  [1749] = 3,
    ACTIONS(348), 1,
      anon_sym_COLON,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1760] = 3,
    ACTIONS(352), 1,
      anon_sym_as,
    ACTIONS(354), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1771] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(356), 1,
      sym__rest_text,
  [1781] = 2,
    ACTIONS(358), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1789] = 2,
    ACTIONS(360), 1,
      sym_type_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [1797] = 2,
    ACTIONS(362), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1805] = 2,
    ACTIONS(364), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1813] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(366), 1,
      sym__rest_text,
  [1823] = 2,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1831] = 2,
    ACTIONS(370), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1839] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(372), 1,
      sym__rest_text,
  [1849] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1857] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(376), 1,
      sym__rest_text,
  [1867] = 2,
    ACTIONS(378), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1875] = 2,
    ACTIONS(380), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1883] = 2,
    ACTIONS(382), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1891] = 2,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1899] = 2,
    ACTIONS(386), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1907] = 2,
    ACTIONS(388), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1915] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(390), 1,
      sym__rest_text,
  [1925] = 2,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1933] = 2,
    ACTIONS(394), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1941] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(396), 1,
      sym__rest_text,
  [1951] = 2,
    ACTIONS(348), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1959] = 2,
    ACTIONS(398), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1967] = 2,
    ACTIONS(400), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1975] = 2,
    ACTIONS(402), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [1983] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      sym__rest_text,
  [1993] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(406), 1,
      sym__rest_text,
  [2003] = 2,
    ACTIONS(408), 1,
      sym_arg_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [2011] = 2,
    ACTIONS(410), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2019] = 2,
    ACTIONS(412), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2027] = 2,
    ACTIONS(414), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2035] = 2,
    ACTIONS(416), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2043] = 2,
    ACTIONS(418), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2051] = 2,
    ACTIONS(420), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2059] = 2,
    ACTIONS(422), 1,
      sym_type_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [2067] = 2,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2075] = 2,
    ACTIONS(426), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2083] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(428), 1,
      sym__rest_text,
  [2093] = 2,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2101] = 2,
    ACTIONS(432), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2109] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(434), 1,
      sym__rest_text,
  [2119] = 2,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2127] = 2,
    ACTIONS(438), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2135] = 2,
    ACTIONS(440), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2143] = 2,
    ACTIONS(442), 1,
      sym_arg_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [2151] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(444), 1,
      sym__rest_text,
  [2161] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(446), 1,
      sym__rest_text,
  [2171] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(448), 1,
      sym__rest_text,
  [2181] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(450), 1,
      sym__rest_text,
  [2191] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(452), 1,
      sym__rest_text,
  [2201] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(454), 1,
      sym__rest_text,
  [2211] = 2,
    ACTIONS(456), 1,
      sym_type_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [2219] = 2,
    ACTIONS(458), 1,
      sym_arg_directive,
    ACTIONS(35), 2,
      sym__whitespace,
      sym__comment,
  [2227] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(460), 1,
      sym__actor_word,
  [2237] = 2,
    ACTIONS(462), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2245] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(464), 1,
      sym__rest_text,
  [2255] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(466), 1,
      sym__rest_text,
  [2265] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(468), 1,
      sym__rest_text,
  [2275] = 2,
    ACTIONS(470), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2283] = 2,
    ACTIONS(324), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2291] = 2,
    ACTIONS(472), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2299] = 2,
    ACTIONS(474), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2307] = 2,
    ACTIONS(476), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2315] = 2,
    ACTIONS(478), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2323] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(480), 1,
      sym__rest_text,
  [2333] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(482), 1,
      sym__rest_text,
  [2343] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym__whitespace,
    ACTIONS(484), 1,
      sym__rest_text,
  [2353] = 2,
    ACTIONS(486), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2361] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
  [2369] = 2,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym__comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 26,
  [SMALL_STATE(22)] = 52,
  [SMALL_STATE(23)] = 78,
  [SMALL_STATE(24)] = 104,
  [SMALL_STATE(25)] = 130,
  [SMALL_STATE(26)] = 156,
  [SMALL_STATE(27)] = 182,
  [SMALL_STATE(28)] = 208,
  [SMALL_STATE(29)] = 234,
  [SMALL_STATE(30)] = 260,
  [SMALL_STATE(31)] = 286,
  [SMALL_STATE(32)] = 312,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 364,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 416,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 468,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 598,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 650,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 702,
  [SMALL_STATE(48)] = 728,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 780,
  [SMALL_STATE(51)] = 806,
  [SMALL_STATE(52)] = 832,
  [SMALL_STATE(53)] = 858,
  [SMALL_STATE(54)] = 884,
  [SMALL_STATE(55)] = 910,
  [SMALL_STATE(56)] = 936,
  [SMALL_STATE(57)] = 962,
  [SMALL_STATE(58)] = 988,
  [SMALL_STATE(59)] = 1014,
  [SMALL_STATE(60)] = 1040,
  [SMALL_STATE(61)] = 1066,
  [SMALL_STATE(62)] = 1092,
  [SMALL_STATE(63)] = 1118,
  [SMALL_STATE(64)] = 1146,
  [SMALL_STATE(65)] = 1174,
  [SMALL_STATE(66)] = 1194,
  [SMALL_STATE(67)] = 1214,
  [SMALL_STATE(68)] = 1234,
  [SMALL_STATE(69)] = 1254,
  [SMALL_STATE(70)] = 1273,
  [SMALL_STATE(71)] = 1288,
  [SMALL_STATE(72)] = 1303,
  [SMALL_STATE(73)] = 1322,
  [SMALL_STATE(74)] = 1337,
  [SMALL_STATE(75)] = 1352,
  [SMALL_STATE(76)] = 1368,
  [SMALL_STATE(77)] = 1384,
  [SMALL_STATE(78)] = 1400,
  [SMALL_STATE(79)] = 1416,
  [SMALL_STATE(80)] = 1432,
  [SMALL_STATE(81)] = 1448,
  [SMALL_STATE(82)] = 1464,
  [SMALL_STATE(83)] = 1478,
  [SMALL_STATE(84)] = 1494,
  [SMALL_STATE(85)] = 1510,
  [SMALL_STATE(86)] = 1526,
  [SMALL_STATE(87)] = 1542,
  [SMALL_STATE(88)] = 1558,
  [SMALL_STATE(89)] = 1574,
  [SMALL_STATE(90)] = 1590,
  [SMALL_STATE(91)] = 1606,
  [SMALL_STATE(92)] = 1622,
  [SMALL_STATE(93)] = 1638,
  [SMALL_STATE(94)] = 1654,
  [SMALL_STATE(95)] = 1665,
  [SMALL_STATE(96)] = 1676,
  [SMALL_STATE(97)] = 1687,
  [SMALL_STATE(98)] = 1698,
  [SMALL_STATE(99)] = 1707,
  [SMALL_STATE(100)] = 1718,
  [SMALL_STATE(101)] = 1729,
  [SMALL_STATE(102)] = 1740,
  [SMALL_STATE(103)] = 1749,
  [SMALL_STATE(104)] = 1760,
  [SMALL_STATE(105)] = 1771,
  [SMALL_STATE(106)] = 1781,
  [SMALL_STATE(107)] = 1789,
  [SMALL_STATE(108)] = 1797,
  [SMALL_STATE(109)] = 1805,
  [SMALL_STATE(110)] = 1813,
  [SMALL_STATE(111)] = 1823,
  [SMALL_STATE(112)] = 1831,
  [SMALL_STATE(113)] = 1839,
  [SMALL_STATE(114)] = 1849,
  [SMALL_STATE(115)] = 1857,
  [SMALL_STATE(116)] = 1867,
  [SMALL_STATE(117)] = 1875,
  [SMALL_STATE(118)] = 1883,
  [SMALL_STATE(119)] = 1891,
  [SMALL_STATE(120)] = 1899,
  [SMALL_STATE(121)] = 1907,
  [SMALL_STATE(122)] = 1915,
  [SMALL_STATE(123)] = 1925,
  [SMALL_STATE(124)] = 1933,
  [SMALL_STATE(125)] = 1941,
  [SMALL_STATE(126)] = 1951,
  [SMALL_STATE(127)] = 1959,
  [SMALL_STATE(128)] = 1967,
  [SMALL_STATE(129)] = 1975,
  [SMALL_STATE(130)] = 1983,
  [SMALL_STATE(131)] = 1993,
  [SMALL_STATE(132)] = 2003,
  [SMALL_STATE(133)] = 2011,
  [SMALL_STATE(134)] = 2019,
  [SMALL_STATE(135)] = 2027,
  [SMALL_STATE(136)] = 2035,
  [SMALL_STATE(137)] = 2043,
  [SMALL_STATE(138)] = 2051,
  [SMALL_STATE(139)] = 2059,
  [SMALL_STATE(140)] = 2067,
  [SMALL_STATE(141)] = 2075,
  [SMALL_STATE(142)] = 2083,
  [SMALL_STATE(143)] = 2093,
  [SMALL_STATE(144)] = 2101,
  [SMALL_STATE(145)] = 2109,
  [SMALL_STATE(146)] = 2119,
  [SMALL_STATE(147)] = 2127,
  [SMALL_STATE(148)] = 2135,
  [SMALL_STATE(149)] = 2143,
  [SMALL_STATE(150)] = 2151,
  [SMALL_STATE(151)] = 2161,
  [SMALL_STATE(152)] = 2171,
  [SMALL_STATE(153)] = 2181,
  [SMALL_STATE(154)] = 2191,
  [SMALL_STATE(155)] = 2201,
  [SMALL_STATE(156)] = 2211,
  [SMALL_STATE(157)] = 2219,
  [SMALL_STATE(158)] = 2227,
  [SMALL_STATE(159)] = 2237,
  [SMALL_STATE(160)] = 2245,
  [SMALL_STATE(161)] = 2255,
  [SMALL_STATE(162)] = 2265,
  [SMALL_STATE(163)] = 2275,
  [SMALL_STATE(164)] = 2283,
  [SMALL_STATE(165)] = 2291,
  [SMALL_STATE(166)] = 2299,
  [SMALL_STATE(167)] = 2307,
  [SMALL_STATE(168)] = 2315,
  [SMALL_STATE(169)] = 2323,
  [SMALL_STATE(170)] = 2333,
  [SMALL_STATE(171)] = 2343,
  [SMALL_STATE(172)] = 2353,
  [SMALL_STATE(173)] = 2361,
  [SMALL_STATE(174)] = 2369,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(156),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(85),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(87),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(33),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(88),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(90),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(73),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(76),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(159),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(160),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__subdocument, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(161),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(162),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(56),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__subdocument, 2), SHIFT_REPEAT(63),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(139),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(83),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(78),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(55),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(86),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(92),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(70),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(75),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(172),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(171),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(170),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(169),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(16),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(63),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_opt, 5, .production_id = 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_opt, 5, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_loop, 5, .production_id = 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_loop, 5, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_opt, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_opt, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_rect, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_rect, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_loop, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_loop, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_title, 4, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_title, 4, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_links, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_links, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_deactivate, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_deactivate, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_activate, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_activate, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_actor, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_actor, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_participant, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_participant, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__diagram_stmt, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__diagram_stmt, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_note, 8),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_note, 8),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 6),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 6),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_actor, 5, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_actor, 5, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_note, 6),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_note, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_rect, 5, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_rect, 5, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt_participant, 5, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_participant, 5, .production_id = 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__subdocument, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__subdocument, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(64),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(69),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(107),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mermaid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
