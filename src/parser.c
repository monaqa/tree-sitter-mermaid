#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 839
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 302
#define ALIAS_COUNT 21
#define TOKEN_COUNT 148
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 28

enum {
  anon_sym_PERCENT_PERCENT_LBRACE = 1,
  anon_sym_COLON = 2,
  anon_sym_RBRACE_PERCENT_PERCENT = 3,
  aux_sym_diagram_sequence_token1 = 4,
  aux_sym_sequence_stmt_participant_token1 = 5,
  aux_sym_sequence_stmt_participant_token2 = 6,
  aux_sym_sequence_stmt_actor_token1 = 7,
  aux_sym_sequence_stmt_autonumber_token1 = 8,
  aux_sym_sequence_stmt_activate_token1 = 9,
  aux_sym_sequence_stmt_deactivate_token1 = 10,
  aux_sym_sequence_stmt_note_token1 = 11,
  aux_sym_sequence_stmt_note_token2 = 12,
  anon_sym_COMMA = 13,
  aux_sym_sequence_stmt_links_token1 = 14,
  aux_sym_sequence_stmt_link_token1 = 15,
  aux_sym_sequence_stmt_properties_token1 = 16,
  aux_sym_sequence_stmt_details_token1 = 17,
  aux_sym_sequence_stmt_title_token1 = 18,
  aux_sym_sequence_stmt_loop_token1 = 19,
  aux_sym_sequence_stmt_loop_token2 = 20,
  aux_sym_sequence_stmt_rect_token1 = 21,
  aux_sym_sequence_stmt_opt_token1 = 22,
  aux_sym_sequence_stmt_alt_token1 = 23,
  aux_sym_sequence_stmt_alt_token2 = 24,
  aux_sym_sequence_stmt_par_token1 = 25,
  aux_sym_sequence_stmt_par_token2 = 26,
  aux_sym_diagram_class_token1 = 27,
  aux_sym_diagram_class_token2 = 28,
  anon_sym_TILDE = 29,
  aux_sym_class_generics_token1 = 30,
  anon_sym_class = 31,
  anon_sym_COLON_COLON_COLON = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_POUND = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_STAR = 40,
  anon_sym_DOLLAR = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  aux_sym_diagram_state_token1 = 44,
  aux_sym_diagram_state_token2 = 45,
  aux_sym_state_stmt_simple_token1 = 46,
  aux_sym_diagram_gantt_token1 = 47,
  aux_sym_gantt_stmt_dateformat_token1 = 48,
  aux_sym_gantt_stmt_inclusiveenddates_token1 = 49,
  aux_sym_gantt_stmt_topaxis_token1 = 50,
  aux_sym_gantt_stmt_axisformat_token1 = 51,
  aux_sym_gantt_stmt_includes_token1 = 52,
  aux_sym_gantt_stmt_excludes_token1 = 53,
  aux_sym_gantt_stmt_todaymarker_token1 = 54,
  aux_sym_gantt_stmt_section_token1 = 55,
  aux_sym_diagram_pie_token1 = 56,
  aux_sym_diagram_flow_token1 = 57,
  anon_sym_SEMI = 58,
  aux_sym_flow_stmt_direction_token1 = 59,
  anon_sym_AMP = 60,
  anon_sym_PIPE = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  anon_sym_LPAREN_LPAREN = 64,
  anon_sym_RPAREN_RPAREN = 65,
  anon_sym_LPAREN_DASH = 66,
  anon_sym_DASH_RPAREN = 67,
  anon_sym_LPAREN_LBRACK = 68,
  anon_sym_RBRACK_RPAREN = 69,
  anon_sym_LBRACK_LBRACK = 70,
  anon_sym_RBRACK_RBRACK = 71,
  anon_sym_LBRACK_PIPE = 72,
  anon_sym_PIPE_RBRACK = 73,
  anon_sym_LBRACK_LPAREN = 74,
  anon_sym_RPAREN_RBRACK = 75,
  anon_sym_LBRACE_LBRACE = 76,
  anon_sym_RBRACE_RBRACE = 77,
  anon_sym_GT = 78,
  anon_sym_LBRACK_SLASH = 79,
  anon_sym_BSLASH_RBRACK = 80,
  anon_sym_LBRACK_BSLASH = 81,
  anon_sym_SLASH_RBRACK = 82,
  anon_sym_subgraph = 83,
  anon_sym_end = 84,
  sym__whitespace = 85,
  sym__newline = 86,
  sym_comment = 87,
  sym_type_directive = 88,
  sym_arg_directive = 89,
  aux_sym_direction_tb_token1 = 90,
  aux_sym_direction_bt_token1 = 91,
  aux_sym_direction_rl_token1 = 92,
  aux_sym_direction_lr_token1 = 93,
  aux_sym__rest_text_token1 = 94,
  sym__actor_word = 95,
  sym_solid_arrow = 96,
  sym_dotted_arrow = 97,
  sym_solid_open_arrow = 98,
  anon_sym_DASH_DASH_GT = 99,
  sym_solid_cross = 100,
  sym_dotted_cross = 101,
  sym_dotted_point = 102,
  aux_sym_note_placement_left_token1 = 103,
  aux_sym_note_placement_right_token1 = 104,
  sym__class_name = 105,
  sym__alpha_num_token = 106,
  sym__bquote_string = 107,
  sym__dquote_string = 108,
  sym_class_reltype_aggregation = 109,
  anon_sym_LT_PIPE = 110,
  anon_sym_PIPE_GT = 111,
  anon_sym_LT = 112,
  anon_sym_DASH_DASH = 113,
  sym_class_linetype_dotted = 114,
  aux_sym_class_label_token1 = 115,
  anon_sym_LBRACK_STAR_RBRACK = 116,
  aux_sym_state_name_token1 = 117,
  aux_sym_state_hide_empty_description_token1 = 118,
  sym_state_id = 119,
  aux_sym_state_annotation_fork_token1 = 120,
  aux_sym_state_annotation_fork_token2 = 121,
  aux_sym_state_annotation_join_token1 = 122,
  aux_sym_state_annotation_join_token2 = 123,
  aux_sym_state_annotation_choice_token1 = 124,
  aux_sym_state_annotation_choice_token2 = 125,
  aux_sym_gantt_task_text_token1 = 126,
  sym_gantt_task_data = 127,
  aux_sym_pie_showdata_token1 = 128,
  sym_pie_title = 129,
  sym_pie_label = 130,
  sym_pie_value = 131,
  anon_sym_LR = 132,
  anon_sym_BR = 133,
  anon_sym_RL = 134,
  anon_sym_TB = 135,
  anon_sym_TD = 136,
  anon_sym_v = 137,
  anon_sym_BT = 138,
  anon_sym_CARET = 139,
  aux_sym_flow_text_literal_token1 = 140,
  sym_flow_text_quoted = 141,
  aux_sym_flow_link_arrow_token1 = 142,
  aux_sym_flow_link_arrow_token2 = 143,
  aux_sym_flow_link_arrow_token3 = 144,
  aux_sym_flow_link_arrow_start_token1 = 145,
  aux_sym_flow_link_arrow_start_token2 = 146,
  aux_sym_flow_link_arrow_start_token3 = 147,
  sym_source_file = 148,
  sym_directive = 149,
  sym__direction = 150,
  sym_diagram_sequence = 151,
  sym__sequence_stmt = 152,
  sym_sequence_stmt_participant = 153,
  sym_sequence_stmt_actor = 154,
  sym_actor = 155,
  sym_sequence_stmt_signal = 156,
  sym_signal_type = 157,
  sym_sequence_stmt_autonumber = 158,
  sym_sequence_stmt_activate = 159,
  sym_sequence_stmt_deactivate = 160,
  sym_sequence_stmt_note = 161,
  sym_sequence_stmt_links = 162,
  sym_sequence_stmt_link = 163,
  sym_sequence_stmt_properties = 164,
  sym_sequence_stmt_details = 165,
  sym_note_placement = 166,
  sym_sequence_stmt_title = 167,
  sym_sequence_stmt_loop = 168,
  sym_sequence_stmt_rect = 169,
  sym_sequence_stmt_opt = 170,
  aux_sym__sequence_subdocument = 171,
  sym_sequence_stmt_alt = 172,
  sym_sequence_stmt_par = 173,
  sym_diagram_class = 174,
  sym__class_stmt = 175,
  sym_class_stmt_relation = 176,
  sym_class_name = 177,
  sym_class_name_body = 178,
  sym_class_generics = 179,
  sym_class_relation = 180,
  sym__class_reltype = 181,
  sym__class_linetype = 182,
  sym_class_stmt_class = 183,
  sym_class_method_line = 184,
  sym_class_annotation_line = 185,
  sym_class_stmt_method = 186,
  sym_class_stmt_annotation = 187,
  sym_diagram_state = 188,
  sym__state_stmt = 189,
  sym_state_stmt_simple = 190,
  sym_state_stmt_arrow = 191,
  sym_state_stmt_composite = 192,
  sym_state_composite_body = 193,
  sym_state_stmt_annotation = 194,
  sym_state_alias = 195,
  sym_state_stmt_hide_empty_description = 196,
  sym__state_annotation = 197,
  sym_state_note = 198,
  sym_diagram_gantt = 199,
  sym__gantt_stmt = 200,
  sym_gantt_stmt_dateformat = 201,
  sym_gantt_stmt_inclusiveenddates = 202,
  sym_gantt_stmt_topaxis = 203,
  sym_gantt_stmt_axisformat = 204,
  sym_gantt_stmt_includes = 205,
  sym_gantt_stmt_excludes = 206,
  sym_gantt_stmt_todaymarker = 207,
  sym_gantt_stmt_title = 208,
  sym_gantt_stmt_section = 209,
  sym_gantt_stmt_task = 210,
  sym_diagram_pie = 211,
  sym__pie_stmt = 212,
  sym_pie_stmt_title = 213,
  sym_pie_stmt_element = 214,
  sym_diagram_flow = 215,
  sym__flowchart_direction = 216,
  sym__flow_stmt = 217,
  sym_flow_stmt_direction = 218,
  sym_flow_stmt_vertice = 219,
  sym_flow_node = 220,
  sym__flow_link = 221,
  sym_flow_link_simplelink = 222,
  sym_flow_link_arrowtext = 223,
  sym_flow_link_middletext = 224,
  sym_flow_arrow_text = 225,
  sym_flow_vertex_id = 226,
  sym_flow_vertex = 227,
  sym__flow_vertex_kind = 228,
  sym_flow_vertex_square = 229,
  sym_flow_vertex_circle = 230,
  sym_flow_vertex_ellipse = 231,
  sym_flow_vertex_stadium = 232,
  sym_flow_vertex_subroutine = 233,
  sym_flow_vertex_rect = 234,
  sym_flow_vertex_cylinder = 235,
  sym_flow_vertex_round = 236,
  sym_flow_vertex_diamond = 237,
  sym_flow_vertex_hexagon = 238,
  sym_flow_vertex_odd = 239,
  sym_flow_vertex_trapezoid = 240,
  sym_flow_vertex_inv_trapezoid = 241,
  sym_flow_vertex_leanright = 242,
  sym_flow_vertex_leanleft = 243,
  sym__flow_text = 244,
  sym_flow_stmt_subgraph = 245,
  sym_flow_stmt_subgraph_inner = 246,
  sym_flow_vertex_text = 247,
  sym_direction_tb = 248,
  sym_direction_bt = 249,
  sym_direction_rl = 250,
  sym_direction_lr = 251,
  sym__rest_text = 252,
  sym_dotted_open_arrow = 253,
  sym_solid_point = 254,
  sym_signal_plus_sign = 255,
  sym_signal_minus_sign = 256,
  sym_note_placement_left = 257,
  sym_note_placement_right = 258,
  sym_class_reltype_extension = 259,
  sym_class_reltype_composition = 260,
  sym_class_reltype_dependency = 261,
  sym_class_linetype_solid = 262,
  sym_class_label = 263,
  sym_state_name = 264,
  sym_state_arrow = 265,
  sym_state_description = 266,
  sym_state_hide_empty_description = 267,
  sym_state_division = 268,
  sym_state_annotation_fork = 269,
  sym_state_annotation_join = 270,
  sym_state_annotation_choice = 271,
  sym_gantt_meta_format = 272,
  sym_gantt_task_text = 273,
  sym_pie_showdata = 274,
  sym_flowchart_direction_lr = 275,
  sym_flowchart_direction_rl = 276,
  sym_flowchart_direction_tb = 277,
  sym_flowchart_direction_bt = 278,
  sym_flow_text_literal = 279,
  sym_flow_link_arrow = 280,
  sym_flow_link_arrow_start = 281,
  aux_sym_diagram_sequence_repeat1 = 282,
  aux_sym_diagram_sequence_repeat2 = 283,
  aux_sym_actor_repeat1 = 284,
  aux_sym_sequence_stmt_alt_repeat1 = 285,
  aux_sym_sequence_stmt_par_repeat1 = 286,
  aux_sym_diagram_class_repeat1 = 287,
  aux_sym_class_name_body_repeat1 = 288,
  aux_sym_class_stmt_class_repeat1 = 289,
  aux_sym_class_method_line_repeat1 = 290,
  aux_sym_diagram_state_repeat1 = 291,
  aux_sym_state_composite_body_repeat1 = 292,
  aux_sym_diagram_gantt_repeat1 = 293,
  aux_sym_diagram_pie_repeat1 = 294,
  aux_sym_diagram_flow_repeat1 = 295,
  aux_sym_flow_stmt_vertice_repeat1 = 296,
  aux_sym_flow_node_repeat1 = 297,
  aux_sym_flow_arrow_text_repeat1 = 298,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 299,
  aux_sym_gantt_task_text_repeat1 = 300,
  aux_sym_flow_text_literal_repeat1 = 301,
  alias_sym_alias = 302,
  alias_sym_annotation = 303,
  alias_sym_class_classifier_abstract = 304,
  alias_sym_class_style_name = 305,
  alias_sym_class_visibility_internal = 306,
  alias_sym_class_visibility_private = 307,
  alias_sym_class_visibility_public = 308,
  alias_sym_gantt_axis_format = 309,
  alias_sym_gantt_end_dates = 310,
  alias_sym_gantt_excludes = 311,
  alias_sym_gantt_includes = 312,
  alias_sym_gantt_section = 313,
  alias_sym_gantt_title = 314,
  alias_sym_gantt_today_marker = 315,
  alias_sym_gantt_top_axis = 316,
  alias_sym_note_content = 317,
  alias_sym_sequence_stmt_alt_branch = 318,
  alias_sym_sequence_stmt_loop_inner = 319,
  alias_sym_sequence_stmt_opt_inner = 320,
  alias_sym_sequence_stmt_rect_inner = 321,
  alias_sym_title = 322,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym_sequence_stmt_participant_token1] = "participant",
  [aux_sym_sequence_stmt_participant_token2] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "actor",
  [aux_sym_sequence_stmt_autonumber_token1] = "autonumber",
  [aux_sym_sequence_stmt_activate_token1] = "activate",
  [aux_sym_sequence_stmt_deactivate_token1] = "deactivate",
  [aux_sym_sequence_stmt_note_token1] = "note ",
  [aux_sym_sequence_stmt_note_token2] = "over",
  [anon_sym_COMMA] = ",",
  [aux_sym_sequence_stmt_links_token1] = "links",
  [aux_sym_sequence_stmt_link_token1] = "link",
  [aux_sym_sequence_stmt_properties_token1] = "properties",
  [aux_sym_sequence_stmt_details_token1] = "details",
  [aux_sym_sequence_stmt_title_token1] = "title",
  [aux_sym_sequence_stmt_loop_token1] = "loop",
  [aux_sym_sequence_stmt_loop_token2] = "end",
  [aux_sym_sequence_stmt_rect_token1] = "rect",
  [aux_sym_sequence_stmt_opt_token1] = "opt",
  [aux_sym_sequence_stmt_alt_token1] = "alt",
  [aux_sym_sequence_stmt_alt_token2] = "else",
  [aux_sym_sequence_stmt_par_token1] = "par",
  [aux_sym_sequence_stmt_par_token2] = "and",
  [aux_sym_diagram_class_token1] = "classDiagram-v2",
  [aux_sym_diagram_class_token2] = "classDiagram",
  [anon_sym_TILDE] = "~",
  [aux_sym_class_generics_token1] = "class_name",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "class_visibility_protected",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_DOLLAR] = "class_classifier_static",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [aux_sym_diagram_state_token1] = "stateDiagram",
  [aux_sym_diagram_state_token2] = "stateDiagram-v2",
  [aux_sym_state_stmt_simple_token1] = "state ",
  [aux_sym_diagram_gantt_token1] = "gantt",
  [aux_sym_gantt_stmt_dateformat_token1] = "dateformat",
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = "inclusiveenddates",
  [aux_sym_gantt_stmt_topaxis_token1] = "topaxis",
  [aux_sym_gantt_stmt_axisformat_token1] = "axisformat",
  [aux_sym_gantt_stmt_includes_token1] = "includes",
  [aux_sym_gantt_stmt_excludes_token1] = "excludes",
  [aux_sym_gantt_stmt_todaymarker_token1] = "todaymarker",
  [aux_sym_gantt_stmt_section_token1] = "section",
  [aux_sym_diagram_pie_token1] = "pie",
  [aux_sym_diagram_flow_token1] = "flowchart",
  [anon_sym_SEMI] = ";",
  [aux_sym_flow_stmt_direction_token1] = "direction",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN_LPAREN] = "((",
  [anon_sym_RPAREN_RPAREN] = "))",
  [anon_sym_LPAREN_DASH] = "(-",
  [anon_sym_DASH_RPAREN] = "-)",
  [anon_sym_LPAREN_LBRACK] = "([",
  [anon_sym_RBRACK_RPAREN] = "])",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK_PIPE] = "[|",
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_LBRACK_LPAREN] = "[(",
  [anon_sym_RPAREN_RBRACK] = ")]",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK_SLASH] = "[/",
  [anon_sym_BSLASH_RBRACK] = "\\]",
  [anon_sym_LBRACK_BSLASH] = "[\\",
  [anon_sym_SLASH_RBRACK] = "/]",
  [anon_sym_subgraph] = "subgraph",
  [anon_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__rest_text_token1] = "_rest_text_token1",
  [sym__actor_word] = "_actor_word",
  [sym_solid_arrow] = "solid_arrow",
  [sym_dotted_arrow] = "dotted_arrow",
  [sym_solid_open_arrow] = "solid_open_arrow",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_solid_cross] = "solid_cross",
  [sym_dotted_cross] = "dotted_cross",
  [sym_dotted_point] = "dotted_point",
  [aux_sym_note_placement_left_token1] = "left of",
  [aux_sym_note_placement_right_token1] = "right of",
  [sym__class_name] = "_class_name",
  [sym__alpha_num_token] = "_alpha_num_token",
  [sym__bquote_string] = "_bquote_string",
  [sym__dquote_string] = "cardinality",
  [sym_class_reltype_aggregation] = "class_reltype_aggregation",
  [anon_sym_LT_PIPE] = "<|",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_LT] = "<",
  [anon_sym_DASH_DASH] = "--",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
  [aux_sym_class_label_token1] = "class_label_token1",
  [anon_sym_LBRACK_STAR_RBRACK] = "[*]",
  [aux_sym_state_name_token1] = "state_name_token1",
  [aux_sym_state_hide_empty_description_token1] = "hide empty description",
  [sym_state_id] = "state_id",
  [aux_sym_state_annotation_fork_token1] = "state_annotation_fork_token1",
  [aux_sym_state_annotation_fork_token2] = "state_annotation_fork_token2",
  [aux_sym_state_annotation_join_token1] = "state_annotation_join_token1",
  [aux_sym_state_annotation_join_token2] = "state_annotation_join_token2",
  [aux_sym_state_annotation_choice_token1] = "state_annotation_choice_token1",
  [aux_sym_state_annotation_choice_token2] = "state_annotation_choice_token2",
  [aux_sym_gantt_task_text_token1] = "gantt_task_text_token1",
  [sym_gantt_task_data] = "gantt_task_data",
  [aux_sym_pie_showdata_token1] = "showdata",
  [sym_pie_title] = "pie_title",
  [sym_pie_label] = "pie_label",
  [sym_pie_value] = "pie_value",
  [anon_sym_LR] = "LR",
  [anon_sym_BR] = "BR",
  [anon_sym_RL] = "RL",
  [anon_sym_TB] = "TB",
  [anon_sym_TD] = "TD",
  [anon_sym_v] = "v",
  [anon_sym_BT] = "BT",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_actor] = "actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_signal_type] = "signal_type",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_note_placement] = "note_placement",
  [sym_sequence_stmt_title] = "sequence_stmt_title",
  [sym_sequence_stmt_loop] = "sequence_stmt_loop",
  [sym_sequence_stmt_rect] = "sequence_stmt_rect",
  [sym_sequence_stmt_opt] = "sequence_stmt_opt",
  [aux_sym__sequence_subdocument] = "_sequence_subdocument",
  [sym_sequence_stmt_alt] = "sequence_stmt_alt",
  [sym_sequence_stmt_par] = "sequence_stmt_par",
  [sym_diagram_class] = "diagram_class",
  [sym__class_stmt] = "_class_stmt",
  [sym_class_stmt_relation] = "class_stmt_relation",
  [sym_class_name] = "class_name",
  [sym_class_name_body] = "class_name_body",
  [sym_class_generics] = "class_generics",
  [sym_class_relation] = "class_relation",
  [sym__class_reltype] = "_class_reltype",
  [sym__class_linetype] = "_class_linetype",
  [sym_class_stmt_class] = "class_stmt_class",
  [sym_class_method_line] = "class_method_line",
  [sym_class_annotation_line] = "class_annotation_line",
  [sym_class_stmt_method] = "class_stmt_method",
  [sym_class_stmt_annotation] = "class_stmt_annotation",
  [sym_diagram_state] = "diagram_state",
  [sym__state_stmt] = "_state_stmt",
  [sym_state_stmt_simple] = "state_stmt_simple",
  [sym_state_stmt_arrow] = "state_stmt_arrow",
  [sym_state_stmt_composite] = "state_stmt_composite",
  [sym_state_composite_body] = "state_composite_body",
  [sym_state_stmt_annotation] = "state_stmt_annotation",
  [sym_state_alias] = "state_alias",
  [sym_state_stmt_hide_empty_description] = "state_stmt_hide_empty_description",
  [sym__state_annotation] = "_state_annotation",
  [sym_state_note] = "state_note",
  [sym_diagram_gantt] = "diagram_gantt",
  [sym__gantt_stmt] = "_gantt_stmt",
  [sym_gantt_stmt_dateformat] = "gantt_stmt_dateformat",
  [sym_gantt_stmt_inclusiveenddates] = "gantt_stmt_inclusiveenddates",
  [sym_gantt_stmt_topaxis] = "gantt_stmt_topaxis",
  [sym_gantt_stmt_axisformat] = "gantt_stmt_axisformat",
  [sym_gantt_stmt_includes] = "gantt_stmt_includes",
  [sym_gantt_stmt_excludes] = "gantt_stmt_excludes",
  [sym_gantt_stmt_todaymarker] = "gantt_stmt_todaymarker",
  [sym_gantt_stmt_title] = "gantt_stmt_title",
  [sym_gantt_stmt_section] = "gantt_stmt_section",
  [sym_gantt_stmt_task] = "gantt_stmt_task",
  [sym_diagram_pie] = "diagram_pie",
  [sym__pie_stmt] = "_pie_stmt",
  [sym_pie_stmt_title] = "pie_stmt_title",
  [sym_pie_stmt_element] = "pie_stmt_element",
  [sym_diagram_flow] = "diagram_flow",
  [sym__flowchart_direction] = "_flowchart_direction",
  [sym__flow_stmt] = "_flow_stmt",
  [sym_flow_stmt_direction] = "flow_stmt_direction",
  [sym_flow_stmt_vertice] = "flow_stmt_vertice",
  [sym_flow_node] = "flow_node",
  [sym__flow_link] = "_flow_link",
  [sym_flow_link_simplelink] = "flow_link_simplelink",
  [sym_flow_link_arrowtext] = "flow_link_arrowtext",
  [sym_flow_link_middletext] = "flow_link_middletext",
  [sym_flow_arrow_text] = "flow_arrow_text",
  [sym_flow_vertex_id] = "flow_vertex_id",
  [sym_flow_vertex] = "flow_vertex",
  [sym__flow_vertex_kind] = "_flow_vertex_kind",
  [sym_flow_vertex_square] = "flow_vertex_square",
  [sym_flow_vertex_circle] = "flow_vertex_circle",
  [sym_flow_vertex_ellipse] = "flow_vertex_ellipse",
  [sym_flow_vertex_stadium] = "flow_vertex_stadium",
  [sym_flow_vertex_subroutine] = "flow_vertex_subroutine",
  [sym_flow_vertex_rect] = "flow_vertex_rect",
  [sym_flow_vertex_cylinder] = "flow_vertex_cylinder",
  [sym_flow_vertex_round] = "flow_vertex_round",
  [sym_flow_vertex_diamond] = "flow_vertex_diamond",
  [sym_flow_vertex_hexagon] = "flow_vertex_hexagon",
  [sym_flow_vertex_odd] = "flow_vertex_odd",
  [sym_flow_vertex_trapezoid] = "flow_vertex_trapezoid",
  [sym_flow_vertex_inv_trapezoid] = "flow_vertex_inv_trapezoid",
  [sym_flow_vertex_leanright] = "flow_vertex_leanright",
  [sym_flow_vertex_leanleft] = "flow_vertex_leanleft",
  [sym__flow_text] = "_flow_text",
  [sym_flow_stmt_subgraph] = "flow_stmt_subgraph",
  [sym_flow_stmt_subgraph_inner] = "flow_stmt_subgraph_inner",
  [sym_flow_vertex_text] = "flow_vertex_text",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__rest_text] = "text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_signal_plus_sign] = "signal_plus_sign",
  [sym_signal_minus_sign] = "signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_label] = "class_label",
  [sym_state_name] = "state_name",
  [sym_state_arrow] = "state_arrow",
  [sym_state_description] = "state_description",
  [sym_state_hide_empty_description] = "state_hide_empty_description",
  [sym_state_division] = "state_division",
  [sym_state_annotation_fork] = "state_annotation_fork",
  [sym_state_annotation_join] = "state_annotation_join",
  [sym_state_annotation_choice] = "state_annotation_choice",
  [sym_gantt_meta_format] = "gantt_date_format",
  [sym_gantt_task_text] = "gantt_task_text",
  [sym_pie_showdata] = "pie_showdata",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_actor_repeat1] = "actor_repeat1",
  [aux_sym_sequence_stmt_alt_repeat1] = "sequence_stmt_alt_repeat1",
  [aux_sym_sequence_stmt_par_repeat1] = "sequence_stmt_par_repeat1",
  [aux_sym_diagram_class_repeat1] = "diagram_class_repeat1",
  [aux_sym_class_name_body_repeat1] = "class_name_body_repeat1",
  [aux_sym_class_stmt_class_repeat1] = "class_stmt_class_repeat1",
  [aux_sym_class_method_line_repeat1] = "class_method_line_repeat1",
  [aux_sym_diagram_state_repeat1] = "diagram_state_repeat1",
  [aux_sym_state_composite_body_repeat1] = "state_composite_body_repeat1",
  [aux_sym_diagram_gantt_repeat1] = "diagram_gantt_repeat1",
  [aux_sym_diagram_pie_repeat1] = "diagram_pie_repeat1",
  [aux_sym_diagram_flow_repeat1] = "diagram_flow_repeat1",
  [aux_sym_flow_stmt_vertice_repeat1] = "flow_stmt_vertice_repeat1",
  [aux_sym_flow_node_repeat1] = "flow_node_repeat1",
  [aux_sym_flow_arrow_text_repeat1] = "flow_arrow_text_repeat1",
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = "flow_stmt_subgraph_inner_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
  [alias_sym_alias] = "alias",
  [alias_sym_annotation] = "annotation",
  [alias_sym_class_classifier_abstract] = "class_classifier_abstract",
  [alias_sym_class_style_name] = "class_style_name",
  [alias_sym_class_visibility_internal] = "class_visibility_internal",
  [alias_sym_class_visibility_private] = "class_visibility_private",
  [alias_sym_class_visibility_public] = "class_visibility_public",
  [alias_sym_gantt_axis_format] = "gantt_axis_format",
  [alias_sym_gantt_end_dates] = "gantt_end_dates",
  [alias_sym_gantt_excludes] = "gantt_excludes",
  [alias_sym_gantt_includes] = "gantt_includes",
  [alias_sym_gantt_section] = "gantt_section",
  [alias_sym_gantt_title] = "gantt_title",
  [alias_sym_gantt_today_marker] = "gantt_today_marker",
  [alias_sym_gantt_top_axis] = "gantt_top_axis",
  [alias_sym_note_content] = "note_content",
  [alias_sym_sequence_stmt_alt_branch] = "sequence_stmt_alt_branch",
  [alias_sym_sequence_stmt_loop_inner] = "sequence_stmt_loop_inner",
  [alias_sym_sequence_stmt_opt_inner] = "sequence_stmt_opt_inner",
  [alias_sym_sequence_stmt_rect_inner] = "sequence_stmt_rect_inner",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_LBRACE] = anon_sym_PERCENT_PERCENT_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE_PERCENT_PERCENT] = anon_sym_RBRACE_PERCENT_PERCENT,
  [aux_sym_diagram_sequence_token1] = aux_sym_diagram_sequence_token1,
  [aux_sym_sequence_stmt_participant_token1] = aux_sym_sequence_stmt_participant_token1,
  [aux_sym_sequence_stmt_participant_token2] = aux_sym_sequence_stmt_participant_token2,
  [aux_sym_sequence_stmt_actor_token1] = aux_sym_sequence_stmt_actor_token1,
  [aux_sym_sequence_stmt_autonumber_token1] = aux_sym_sequence_stmt_autonumber_token1,
  [aux_sym_sequence_stmt_activate_token1] = aux_sym_sequence_stmt_activate_token1,
  [aux_sym_sequence_stmt_deactivate_token1] = aux_sym_sequence_stmt_deactivate_token1,
  [aux_sym_sequence_stmt_note_token1] = aux_sym_sequence_stmt_note_token1,
  [aux_sym_sequence_stmt_note_token2] = aux_sym_sequence_stmt_note_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_sequence_stmt_links_token1] = aux_sym_sequence_stmt_links_token1,
  [aux_sym_sequence_stmt_link_token1] = aux_sym_sequence_stmt_link_token1,
  [aux_sym_sequence_stmt_properties_token1] = aux_sym_sequence_stmt_properties_token1,
  [aux_sym_sequence_stmt_details_token1] = aux_sym_sequence_stmt_details_token1,
  [aux_sym_sequence_stmt_title_token1] = aux_sym_sequence_stmt_title_token1,
  [aux_sym_sequence_stmt_loop_token1] = aux_sym_sequence_stmt_loop_token1,
  [aux_sym_sequence_stmt_loop_token2] = anon_sym_end,
  [aux_sym_sequence_stmt_rect_token1] = aux_sym_sequence_stmt_rect_token1,
  [aux_sym_sequence_stmt_opt_token1] = aux_sym_sequence_stmt_opt_token1,
  [aux_sym_sequence_stmt_alt_token1] = aux_sym_sequence_stmt_alt_token1,
  [aux_sym_sequence_stmt_alt_token2] = aux_sym_sequence_stmt_alt_token2,
  [aux_sym_sequence_stmt_par_token1] = aux_sym_sequence_stmt_par_token1,
  [aux_sym_sequence_stmt_par_token2] = aux_sym_sequence_stmt_par_token2,
  [aux_sym_diagram_class_token1] = aux_sym_diagram_class_token1,
  [aux_sym_diagram_class_token2] = aux_sym_diagram_class_token2,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_class_generics_token1] = sym_class_name,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON_COLON] = anon_sym_COLON_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [aux_sym_diagram_state_token1] = aux_sym_diagram_state_token1,
  [aux_sym_diagram_state_token2] = aux_sym_diagram_state_token2,
  [aux_sym_state_stmt_simple_token1] = aux_sym_state_stmt_simple_token1,
  [aux_sym_diagram_gantt_token1] = aux_sym_diagram_gantt_token1,
  [aux_sym_gantt_stmt_dateformat_token1] = aux_sym_gantt_stmt_dateformat_token1,
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = aux_sym_gantt_stmt_inclusiveenddates_token1,
  [aux_sym_gantt_stmt_topaxis_token1] = aux_sym_gantt_stmt_topaxis_token1,
  [aux_sym_gantt_stmt_axisformat_token1] = aux_sym_gantt_stmt_axisformat_token1,
  [aux_sym_gantt_stmt_includes_token1] = aux_sym_gantt_stmt_includes_token1,
  [aux_sym_gantt_stmt_excludes_token1] = aux_sym_gantt_stmt_excludes_token1,
  [aux_sym_gantt_stmt_todaymarker_token1] = aux_sym_gantt_stmt_todaymarker_token1,
  [aux_sym_gantt_stmt_section_token1] = aux_sym_gantt_stmt_section_token1,
  [aux_sym_diagram_pie_token1] = aux_sym_diagram_pie_token1,
  [aux_sym_diagram_flow_token1] = aux_sym_diagram_flow_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_flow_stmt_direction_token1] = aux_sym_flow_stmt_direction_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN_LPAREN] = anon_sym_LPAREN_LPAREN,
  [anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
  [anon_sym_LPAREN_DASH] = anon_sym_LPAREN_DASH,
  [anon_sym_DASH_RPAREN] = anon_sym_DASH_RPAREN,
  [anon_sym_LPAREN_LBRACK] = anon_sym_LPAREN_LBRACK,
  [anon_sym_RBRACK_RPAREN] = anon_sym_RBRACK_RPAREN,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_LBRACK_LPAREN] = anon_sym_LBRACK_LPAREN,
  [anon_sym_RPAREN_RBRACK] = anon_sym_RPAREN_RBRACK,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK_SLASH] = anon_sym_LBRACK_SLASH,
  [anon_sym_BSLASH_RBRACK] = anon_sym_BSLASH_RBRACK,
  [anon_sym_LBRACK_BSLASH] = anon_sym_LBRACK_BSLASH,
  [anon_sym_SLASH_RBRACK] = anon_sym_SLASH_RBRACK,
  [anon_sym_subgraph] = anon_sym_subgraph,
  [anon_sym_end] = anon_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__rest_text_token1] = aux_sym__rest_text_token1,
  [sym__actor_word] = sym__actor_word,
  [sym_solid_arrow] = sym_solid_arrow,
  [sym_dotted_arrow] = sym_dotted_arrow,
  [sym_solid_open_arrow] = sym_solid_open_arrow,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_solid_cross] = sym_solid_cross,
  [sym_dotted_cross] = sym_dotted_cross,
  [sym_dotted_point] = sym_dotted_point,
  [aux_sym_note_placement_left_token1] = aux_sym_note_placement_left_token1,
  [aux_sym_note_placement_right_token1] = aux_sym_note_placement_right_token1,
  [sym__class_name] = sym__class_name,
  [sym__alpha_num_token] = sym__alpha_num_token,
  [sym__bquote_string] = sym__bquote_string,
  [sym__dquote_string] = sym__dquote_string,
  [sym_class_reltype_aggregation] = sym_class_reltype_aggregation,
  [anon_sym_LT_PIPE] = anon_sym_LT_PIPE,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
  [aux_sym_class_label_token1] = aux_sym_class_label_token1,
  [anon_sym_LBRACK_STAR_RBRACK] = anon_sym_LBRACK_STAR_RBRACK,
  [aux_sym_state_name_token1] = aux_sym_state_name_token1,
  [aux_sym_state_hide_empty_description_token1] = aux_sym_state_hide_empty_description_token1,
  [sym_state_id] = sym_state_id,
  [aux_sym_state_annotation_fork_token1] = aux_sym_state_annotation_fork_token1,
  [aux_sym_state_annotation_fork_token2] = aux_sym_state_annotation_fork_token2,
  [aux_sym_state_annotation_join_token1] = aux_sym_state_annotation_join_token1,
  [aux_sym_state_annotation_join_token2] = aux_sym_state_annotation_join_token2,
  [aux_sym_state_annotation_choice_token1] = aux_sym_state_annotation_choice_token1,
  [aux_sym_state_annotation_choice_token2] = aux_sym_state_annotation_choice_token2,
  [aux_sym_gantt_task_text_token1] = aux_sym_gantt_task_text_token1,
  [sym_gantt_task_data] = sym_gantt_task_data,
  [aux_sym_pie_showdata_token1] = aux_sym_pie_showdata_token1,
  [sym_pie_title] = sym_pie_title,
  [sym_pie_label] = sym_pie_label,
  [sym_pie_value] = sym_pie_value,
  [anon_sym_LR] = anon_sym_LR,
  [anon_sym_BR] = anon_sym_BR,
  [anon_sym_RL] = anon_sym_RL,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_TD] = anon_sym_TD,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_BT] = anon_sym_BT,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_actor] = sym_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_signal_type] = sym_signal_type,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_note_placement] = sym_note_placement,
  [sym_sequence_stmt_title] = sym_sequence_stmt_title,
  [sym_sequence_stmt_loop] = sym_sequence_stmt_loop,
  [sym_sequence_stmt_rect] = sym_sequence_stmt_rect,
  [sym_sequence_stmt_opt] = sym_sequence_stmt_opt,
  [aux_sym__sequence_subdocument] = aux_sym__sequence_subdocument,
  [sym_sequence_stmt_alt] = sym_sequence_stmt_alt,
  [sym_sequence_stmt_par] = sym_sequence_stmt_par,
  [sym_diagram_class] = sym_diagram_class,
  [sym__class_stmt] = sym__class_stmt,
  [sym_class_stmt_relation] = sym_class_stmt_relation,
  [sym_class_name] = sym_class_name,
  [sym_class_name_body] = sym_class_name_body,
  [sym_class_generics] = sym_class_generics,
  [sym_class_relation] = sym_class_relation,
  [sym__class_reltype] = sym__class_reltype,
  [sym__class_linetype] = sym__class_linetype,
  [sym_class_stmt_class] = sym_class_stmt_class,
  [sym_class_method_line] = sym_class_method_line,
  [sym_class_annotation_line] = sym_class_annotation_line,
  [sym_class_stmt_method] = sym_class_stmt_method,
  [sym_class_stmt_annotation] = sym_class_stmt_annotation,
  [sym_diagram_state] = sym_diagram_state,
  [sym__state_stmt] = sym__state_stmt,
  [sym_state_stmt_simple] = sym_state_stmt_simple,
  [sym_state_stmt_arrow] = sym_state_stmt_arrow,
  [sym_state_stmt_composite] = sym_state_stmt_composite,
  [sym_state_composite_body] = sym_state_composite_body,
  [sym_state_stmt_annotation] = sym_state_stmt_annotation,
  [sym_state_alias] = sym_state_alias,
  [sym_state_stmt_hide_empty_description] = sym_state_stmt_hide_empty_description,
  [sym__state_annotation] = sym__state_annotation,
  [sym_state_note] = sym_state_note,
  [sym_diagram_gantt] = sym_diagram_gantt,
  [sym__gantt_stmt] = sym__gantt_stmt,
  [sym_gantt_stmt_dateformat] = sym_gantt_stmt_dateformat,
  [sym_gantt_stmt_inclusiveenddates] = sym_gantt_stmt_inclusiveenddates,
  [sym_gantt_stmt_topaxis] = sym_gantt_stmt_topaxis,
  [sym_gantt_stmt_axisformat] = sym_gantt_stmt_axisformat,
  [sym_gantt_stmt_includes] = sym_gantt_stmt_includes,
  [sym_gantt_stmt_excludes] = sym_gantt_stmt_excludes,
  [sym_gantt_stmt_todaymarker] = sym_gantt_stmt_todaymarker,
  [sym_gantt_stmt_title] = sym_gantt_stmt_title,
  [sym_gantt_stmt_section] = sym_gantt_stmt_section,
  [sym_gantt_stmt_task] = sym_gantt_stmt_task,
  [sym_diagram_pie] = sym_diagram_pie,
  [sym__pie_stmt] = sym__pie_stmt,
  [sym_pie_stmt_title] = sym_pie_stmt_title,
  [sym_pie_stmt_element] = sym_pie_stmt_element,
  [sym_diagram_flow] = sym_diagram_flow,
  [sym__flowchart_direction] = sym__flowchart_direction,
  [sym__flow_stmt] = sym__flow_stmt,
  [sym_flow_stmt_direction] = sym_flow_stmt_direction,
  [sym_flow_stmt_vertice] = sym_flow_stmt_vertice,
  [sym_flow_node] = sym_flow_node,
  [sym__flow_link] = sym__flow_link,
  [sym_flow_link_simplelink] = sym_flow_link_simplelink,
  [sym_flow_link_arrowtext] = sym_flow_link_arrowtext,
  [sym_flow_link_middletext] = sym_flow_link_middletext,
  [sym_flow_arrow_text] = sym_flow_arrow_text,
  [sym_flow_vertex_id] = sym_flow_vertex_id,
  [sym_flow_vertex] = sym_flow_vertex,
  [sym__flow_vertex_kind] = sym__flow_vertex_kind,
  [sym_flow_vertex_square] = sym_flow_vertex_square,
  [sym_flow_vertex_circle] = sym_flow_vertex_circle,
  [sym_flow_vertex_ellipse] = sym_flow_vertex_ellipse,
  [sym_flow_vertex_stadium] = sym_flow_vertex_stadium,
  [sym_flow_vertex_subroutine] = sym_flow_vertex_subroutine,
  [sym_flow_vertex_rect] = sym_flow_vertex_rect,
  [sym_flow_vertex_cylinder] = sym_flow_vertex_cylinder,
  [sym_flow_vertex_round] = sym_flow_vertex_round,
  [sym_flow_vertex_diamond] = sym_flow_vertex_diamond,
  [sym_flow_vertex_hexagon] = sym_flow_vertex_hexagon,
  [sym_flow_vertex_odd] = sym_flow_vertex_odd,
  [sym_flow_vertex_trapezoid] = sym_flow_vertex_trapezoid,
  [sym_flow_vertex_inv_trapezoid] = sym_flow_vertex_inv_trapezoid,
  [sym_flow_vertex_leanright] = sym_flow_vertex_leanright,
  [sym_flow_vertex_leanleft] = sym_flow_vertex_leanleft,
  [sym__flow_text] = sym__flow_text,
  [sym_flow_stmt_subgraph] = sym_flow_stmt_subgraph,
  [sym_flow_stmt_subgraph_inner] = sym_flow_stmt_subgraph_inner,
  [sym_flow_vertex_text] = sym_flow_vertex_text,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__rest_text] = sym__rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_signal_plus_sign] = sym_signal_plus_sign,
  [sym_signal_minus_sign] = sym_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_label] = sym_class_label,
  [sym_state_name] = sym_state_name,
  [sym_state_arrow] = sym_state_arrow,
  [sym_state_description] = sym_state_description,
  [sym_state_hide_empty_description] = sym_state_hide_empty_description,
  [sym_state_division] = sym_state_division,
  [sym_state_annotation_fork] = sym_state_annotation_fork,
  [sym_state_annotation_join] = sym_state_annotation_join,
  [sym_state_annotation_choice] = sym_state_annotation_choice,
  [sym_gantt_meta_format] = sym_gantt_meta_format,
  [sym_gantt_task_text] = sym_gantt_task_text,
  [sym_pie_showdata] = sym_pie_showdata,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_actor_repeat1] = aux_sym_actor_repeat1,
  [aux_sym_sequence_stmt_alt_repeat1] = aux_sym_sequence_stmt_alt_repeat1,
  [aux_sym_sequence_stmt_par_repeat1] = aux_sym_sequence_stmt_par_repeat1,
  [aux_sym_diagram_class_repeat1] = aux_sym_diagram_class_repeat1,
  [aux_sym_class_name_body_repeat1] = aux_sym_class_name_body_repeat1,
  [aux_sym_class_stmt_class_repeat1] = aux_sym_class_stmt_class_repeat1,
  [aux_sym_class_method_line_repeat1] = aux_sym_class_method_line_repeat1,
  [aux_sym_diagram_state_repeat1] = aux_sym_diagram_state_repeat1,
  [aux_sym_state_composite_body_repeat1] = aux_sym_state_composite_body_repeat1,
  [aux_sym_diagram_gantt_repeat1] = aux_sym_diagram_gantt_repeat1,
  [aux_sym_diagram_pie_repeat1] = aux_sym_diagram_pie_repeat1,
  [aux_sym_diagram_flow_repeat1] = aux_sym_diagram_flow_repeat1,
  [aux_sym_flow_stmt_vertice_repeat1] = aux_sym_flow_stmt_vertice_repeat1,
  [aux_sym_flow_node_repeat1] = aux_sym_flow_node_repeat1,
  [aux_sym_flow_arrow_text_repeat1] = aux_sym_flow_arrow_text_repeat1,
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = aux_sym_flow_stmt_subgraph_inner_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
  [alias_sym_alias] = alias_sym_alias,
  [alias_sym_annotation] = alias_sym_annotation,
  [alias_sym_class_classifier_abstract] = alias_sym_class_classifier_abstract,
  [alias_sym_class_style_name] = alias_sym_class_style_name,
  [alias_sym_class_visibility_internal] = alias_sym_class_visibility_internal,
  [alias_sym_class_visibility_private] = alias_sym_class_visibility_private,
  [alias_sym_class_visibility_public] = alias_sym_class_visibility_public,
  [alias_sym_gantt_axis_format] = alias_sym_gantt_axis_format,
  [alias_sym_gantt_end_dates] = alias_sym_gantt_end_dates,
  [alias_sym_gantt_excludes] = alias_sym_gantt_excludes,
  [alias_sym_gantt_includes] = alias_sym_gantt_includes,
  [alias_sym_gantt_section] = alias_sym_gantt_section,
  [alias_sym_gantt_title] = alias_sym_gantt_title,
  [alias_sym_gantt_today_marker] = alias_sym_gantt_today_marker,
  [alias_sym_gantt_top_axis] = alias_sym_gantt_top_axis,
  [alias_sym_note_content] = alias_sym_note_content,
  [alias_sym_sequence_stmt_alt_branch] = alias_sym_sequence_stmt_alt_branch,
  [alias_sym_sequence_stmt_loop_inner] = alias_sym_sequence_stmt_loop_inner,
  [alias_sym_sequence_stmt_opt_inner] = alias_sym_sequence_stmt_opt_inner,
  [alias_sym_sequence_stmt_rect_inner] = alias_sym_sequence_stmt_rect_inner,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_diagram_sequence_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_participant_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_actor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_autonumber_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_activate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_deactivate_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_note_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_links_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_link_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_properties_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_details_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_title_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_loop_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_rect_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_opt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_alt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_class_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_generics_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_state_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_stmt_simple_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_gantt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_dateformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_inclusiveenddates_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_topaxis_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_axisformat_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_includes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_excludes_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_todaymarker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gantt_stmt_section_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_pie_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diagram_flow_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_stmt_direction_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subgraph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [aux_sym_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_bt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rest_text_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_solid_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_cross] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_point] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_placement_left_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_note_placement_right_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_num_token] = {
    .visible = false,
    .named = true,
  },
  [sym__bquote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__dquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_aggregation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_class_linetype_dotted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_STAR_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_state_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_hide_empty_description_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_state_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_state_annotation_fork_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_fork_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_annotation_choice_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_gantt_task_data] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pie_showdata_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_pie_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_label] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flow_text_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_flow_text_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flow_link_arrow_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_link_arrow_start_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__direction] = {
    .visible = false,
    .named = true,
  },
  [sym_diagram_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__sequence_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_sequence_stmt_participant] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_autonumber] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_activate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_deactivate] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_note] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_links] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_link] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_details] = {
    .visible = true,
    .named = true,
  },
  [sym_note_placement] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__sequence_subdocument] = {
    .visible = false,
    .named = false,
  },
  [sym_sequence_stmt_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_par] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_class] = {
    .visible = true,
    .named = true,
  },
  [sym__class_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_generics] = {
    .visible = true,
    .named = true,
  },
  [sym_class_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__class_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__class_linetype] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_stmt_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_state] = {
    .visible = true,
    .named = true,
  },
  [sym__state_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_state_stmt_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_composite] = {
    .visible = true,
    .named = true,
  },
  [sym_state_composite_body] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_state_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_state_stmt_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym__state_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_state_note] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_gantt] = {
    .visible = true,
    .named = true,
  },
  [sym__gantt_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_gantt_stmt_dateformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_inclusiveenddates] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_topaxis] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_axisformat] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_includes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_excludes] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_todaymarker] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_stmt_task] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_pie] = {
    .visible = true,
    .named = true,
  },
  [sym__pie_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pie_stmt_title] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_stmt_element] = {
    .visible = true,
    .named = true,
  },
  [sym_diagram_flow] = {
    .visible = true,
    .named = true,
  },
  [sym__flowchart_direction] = {
    .visible = false,
    .named = true,
  },
  [sym__flow_stmt] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_stmt_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_vertice] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_node] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_link] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_link_simplelink] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrowtext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_middletext] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_arrow_text] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_id] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_vertex_kind] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_flow_vertex_square] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_circle] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_ellipse] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_stadium] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_subroutine] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_rect] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_cylinder] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_round] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_diamond] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_hexagon] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_odd] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_inv_trapezoid] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanright] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_leanleft] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_text] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_stmt_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_stmt_subgraph_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_vertex_text] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym__rest_text] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_open_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_solid_point] = {
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
  [sym_class_reltype_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_reltype_dependency] = {
    .visible = true,
    .named = true,
  },
  [sym_class_linetype_solid] = {
    .visible = true,
    .named = true,
  },
  [sym_class_label] = {
    .visible = true,
    .named = true,
  },
  [sym_state_name] = {
    .visible = true,
    .named = true,
  },
  [sym_state_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_state_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_hide_empty_description] = {
    .visible = true,
    .named = true,
  },
  [sym_state_division] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_fork] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_join] = {
    .visible = true,
    .named = true,
  },
  [sym_state_annotation_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_meta_format] = {
    .visible = true,
    .named = true,
  },
  [sym_gantt_task_text] = {
    .visible = true,
    .named = true,
  },
  [sym_pie_showdata] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_lr] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_rl] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_tb] = {
    .visible = true,
    .named = true,
  },
  [sym_flowchart_direction_bt] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_link_arrow_start] = {
    .visible = true,
    .named = true,
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
  [aux_sym_sequence_stmt_alt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_stmt_par_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_stmt_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_state_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_composite_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_gantt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_pie_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_diagram_flow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_vertice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_arrow_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_stmt_subgraph_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gantt_task_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flow_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_alias] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_classifier_abstract] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_style_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_private] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_visibility_public] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_axis_format] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_end_dates] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_excludes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_includes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_section] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_today_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_gantt_top_axis] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_alt_branch] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_loop_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_opt_inner] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_sequence_stmt_rect_inner] = {
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
    [1] = alias_sym_gantt_title,
  },
  [2] = {
    [1] = alias_sym_gantt_end_dates,
  },
  [3] = {
    [1] = alias_sym_gantt_top_axis,
  },
  [4] = {
    [1] = alias_sym_gantt_axis_format,
  },
  [5] = {
    [1] = alias_sym_gantt_includes,
  },
  [6] = {
    [1] = alias_sym_gantt_excludes,
  },
  [7] = {
    [1] = alias_sym_gantt_today_marker,
  },
  [8] = {
    [1] = alias_sym_gantt_section,
  },
  [9] = {
    [2] = alias_sym_title,
  },
  [10] = {
    [0] = sym_state_description,
  },
  [11] = {
    [3] = alias_sym_alias,
  },
  [12] = {
    [3] = alias_sym_sequence_stmt_loop_inner,
  },
  [13] = {
    [3] = alias_sym_sequence_stmt_rect_inner,
  },
  [14] = {
    [3] = alias_sym_sequence_stmt_opt_inner,
  },
  [15] = {
    [3] = alias_sym_sequence_stmt_alt_branch,
  },
  [16] = {
    [3] = alias_sym_class_style_name,
  },
  [17] = {
    [1] = alias_sym_annotation,
  },
  [18] = {
    [0] = alias_sym_class_visibility_internal,
  },
  [19] = {
    [0] = alias_sym_class_visibility_public,
  },
  [20] = {
    [0] = alias_sym_class_visibility_private,
  },
  [21] = {
    [1] = alias_sym_class_classifier_abstract,
  },
  [22] = {
    [4] = alias_sym_note_content,
  },
  [23] = {
    [1] = alias_sym_sequence_stmt_alt_branch,
  },
  [24] = {
    [0] = alias_sym_class_visibility_internal,
    [2] = alias_sym_class_classifier_abstract,
  },
  [25] = {
    [0] = alias_sym_class_visibility_public,
    [2] = alias_sym_class_classifier_abstract,
  },
  [26] = {
    [0] = alias_sym_class_visibility_private,
    [2] = alias_sym_class_classifier_abstract,
  },
  [27] = {
    [2] = alias_sym_class_classifier_abstract,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sequence_subdocument, 5,
    aux_sym__sequence_subdocument,
    alias_sym_sequence_stmt_alt_branch,
    alias_sym_sequence_stmt_loop_inner,
    alias_sym_sequence_stmt_opt_inner,
    alias_sym_sequence_stmt_rect_inner,
  sym__rest_text, 3,
    sym__rest_text,
    alias_sym_alias,
    alias_sym_title,
  sym_state_description, 2,
    sym_state_description,
    alias_sym_note_content,
  sym_gantt_meta_format, 9,
    sym_gantt_meta_format,
    alias_sym_gantt_axis_format,
    alias_sym_gantt_end_dates,
    alias_sym_gantt_excludes,
    alias_sym_gantt_includes,
    alias_sym_gantt_section,
    alias_sym_gantt_title,
    alias_sym_gantt_today_marker,
    alias_sym_gantt_top_axis,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
  [8] = 2,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 16,
  [23] = 17,
  [24] = 15,
  [25] = 19,
  [26] = 26,
  [27] = 21,
  [28] = 28,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 16,
  [34] = 17,
  [35] = 21,
  [36] = 36,
  [37] = 15,
  [38] = 21,
  [39] = 14,
  [40] = 14,
  [41] = 19,
  [42] = 19,
  [43] = 12,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 44,
  [50] = 47,
  [51] = 44,
  [52] = 47,
  [53] = 47,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 87,
  [98] = 90,
  [99] = 99,
  [100] = 100,
  [101] = 91,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 94,
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
  [116] = 109,
  [117] = 107,
  [118] = 106,
  [119] = 102,
  [120] = 112,
  [121] = 115,
  [122] = 83,
  [123] = 113,
  [124] = 84,
  [125] = 82,
  [126] = 85,
  [127] = 86,
  [128] = 111,
  [129] = 110,
  [130] = 114,
  [131] = 81,
  [132] = 88,
  [133] = 89,
  [134] = 108,
  [135] = 104,
  [136] = 103,
  [137] = 100,
  [138] = 99,
  [139] = 96,
  [140] = 95,
  [141] = 93,
  [142] = 92,
  [143] = 91,
  [144] = 100,
  [145] = 96,
  [146] = 99,
  [147] = 100,
  [148] = 86,
  [149] = 103,
  [150] = 85,
  [151] = 84,
  [152] = 83,
  [153] = 104,
  [154] = 89,
  [155] = 108,
  [156] = 110,
  [157] = 111,
  [158] = 88,
  [159] = 82,
  [160] = 93,
  [161] = 92,
  [162] = 82,
  [163] = 113,
  [164] = 90,
  [165] = 113,
  [166] = 114,
  [167] = 115,
  [168] = 109,
  [169] = 107,
  [170] = 106,
  [171] = 115,
  [172] = 102,
  [173] = 112,
  [174] = 81,
  [175] = 83,
  [176] = 109,
  [177] = 84,
  [178] = 85,
  [179] = 86,
  [180] = 87,
  [181] = 94,
  [182] = 107,
  [183] = 106,
  [184] = 88,
  [185] = 89,
  [186] = 102,
  [187] = 112,
  [188] = 111,
  [189] = 90,
  [190] = 110,
  [191] = 108,
  [192] = 104,
  [193] = 103,
  [194] = 95,
  [195] = 99,
  [196] = 81,
  [197] = 94,
  [198] = 87,
  [199] = 96,
  [200] = 95,
  [201] = 91,
  [202] = 93,
  [203] = 92,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 94,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 94,
  [244] = 244,
  [245] = 245,
  [246] = 81,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 81,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 216,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 216,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 298,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 298,
  [307] = 307,
  [308] = 298,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 228,
  [351] = 349,
  [352] = 259,
  [353] = 349,
  [354] = 349,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 218,
  [361] = 361,
  [362] = 361,
  [363] = 363,
  [364] = 364,
  [365] = 228,
  [366] = 366,
  [367] = 361,
  [368] = 368,
  [369] = 361,
  [370] = 259,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 258,
  [379] = 379,
  [380] = 380,
  [381] = 379,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 214,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 356,
  [403] = 403,
  [404] = 226,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 230,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 269,
  [418] = 275,
  [419] = 292,
  [420] = 420,
  [421] = 281,
  [422] = 215,
  [423] = 423,
  [424] = 282,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 442,
  [450] = 450,
  [451] = 445,
  [452] = 452,
  [453] = 453,
  [454] = 447,
  [455] = 455,
  [456] = 448,
  [457] = 442,
  [458] = 458,
  [459] = 445,
  [460] = 460,
  [461] = 442,
  [462] = 447,
  [463] = 463,
  [464] = 448,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 467,
  [474] = 469,
  [475] = 475,
  [476] = 476,
  [477] = 470,
  [478] = 478,
  [479] = 471,
  [480] = 480,
  [481] = 467,
  [482] = 482,
  [483] = 469,
  [484] = 470,
  [485] = 471,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 486,
  [494] = 487,
  [495] = 495,
  [496] = 488,
  [497] = 489,
  [498] = 498,
  [499] = 486,
  [500] = 500,
  [501] = 487,
  [502] = 488,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 489,
  [508] = 508,
  [509] = 445,
  [510] = 510,
  [511] = 511,
  [512] = 489,
  [513] = 488,
  [514] = 514,
  [515] = 403,
  [516] = 487,
  [517] = 486,
  [518] = 518,
  [519] = 471,
  [520] = 470,
  [521] = 521,
  [522] = 510,
  [523] = 511,
  [524] = 469,
  [525] = 525,
  [526] = 467,
  [527] = 521,
  [528] = 528,
  [529] = 510,
  [530] = 511,
  [531] = 510,
  [532] = 532,
  [533] = 511,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 521,
  [543] = 543,
  [544] = 544,
  [545] = 448,
  [546] = 447,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 498,
  [552] = 521,
  [553] = 495,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 554,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 570,
  [578] = 571,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 570,
  [583] = 571,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 585,
  [595] = 586,
  [596] = 589,
  [597] = 591,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 585,
  [603] = 555,
  [604] = 604,
  [605] = 588,
  [606] = 587,
  [607] = 607,
  [608] = 586,
  [609] = 609,
  [610] = 589,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 591,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 554,
  [621] = 566,
  [622] = 622,
  [623] = 623,
  [624] = 570,
  [625] = 625,
  [626] = 626,
  [627] = 575,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 618,
  [632] = 618,
  [633] = 619,
  [634] = 555,
  [635] = 588,
  [636] = 587,
  [637] = 637,
  [638] = 566,
  [639] = 619,
  [640] = 622,
  [641] = 611,
  [642] = 612,
  [643] = 613,
  [644] = 614,
  [645] = 626,
  [646] = 575,
  [647] = 571,
  [648] = 586,
  [649] = 618,
  [650] = 619,
  [651] = 589,
  [652] = 591,
  [653] = 554,
  [654] = 566,
  [655] = 622,
  [656] = 626,
  [657] = 626,
  [658] = 622,
  [659] = 659,
  [660] = 575,
  [661] = 661,
  [662] = 555,
  [663] = 588,
  [664] = 587,
  [665] = 665,
  [666] = 555,
  [667] = 585,
  [668] = 613,
  [669] = 611,
  [670] = 612,
  [671] = 613,
  [672] = 614,
  [673] = 614,
  [674] = 674,
  [675] = 611,
  [676] = 612,
  [677] = 555,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 679,
  [684] = 680,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 691,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 690,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 689,
  [709] = 688,
  [710] = 685,
  [711] = 679,
  [712] = 712,
  [713] = 713,
  [714] = 682,
  [715] = 691,
  [716] = 716,
  [717] = 679,
  [718] = 694,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 699,
  [724] = 700,
  [725] = 701,
  [726] = 702,
  [727] = 703,
  [728] = 682,
  [729] = 705,
  [730] = 706,
  [731] = 707,
  [732] = 694,
  [733] = 680,
  [734] = 734,
  [735] = 735,
  [736] = 691,
  [737] = 696,
  [738] = 697,
  [739] = 690,
  [740] = 694,
  [741] = 689,
  [742] = 688,
  [743] = 688,
  [744] = 744,
  [745] = 699,
  [746] = 700,
  [747] = 701,
  [748] = 702,
  [749] = 703,
  [750] = 685,
  [751] = 705,
  [752] = 706,
  [753] = 707,
  [754] = 735,
  [755] = 685,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 691,
  [760] = 682,
  [761] = 761,
  [762] = 694,
  [763] = 699,
  [764] = 694,
  [765] = 699,
  [766] = 766,
  [767] = 713,
  [768] = 689,
  [769] = 769,
  [770] = 716,
  [771] = 771,
  [772] = 680,
  [773] = 691,
  [774] = 696,
  [775] = 775,
  [776] = 776,
  [777] = 697,
  [778] = 681,
  [779] = 695,
  [780] = 780,
  [781] = 744,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 716,
  [787] = 787,
  [788] = 788,
  [789] = 789,
  [790] = 775,
  [791] = 776,
  [792] = 792,
  [793] = 681,
  [794] = 695,
  [795] = 780,
  [796] = 744,
  [797] = 797,
  [798] = 761,
  [799] = 799,
  [800] = 800,
  [801] = 716,
  [802] = 802,
  [803] = 803,
  [804] = 699,
  [805] = 775,
  [806] = 776,
  [807] = 697,
  [808] = 681,
  [809] = 695,
  [810] = 780,
  [811] = 744,
  [812] = 696,
  [813] = 628,
  [814] = 629,
  [815] = 815,
  [816] = 816,
  [817] = 817,
  [818] = 630,
  [819] = 700,
  [820] = 701,
  [821] = 702,
  [822] = 822,
  [823] = 703,
  [824] = 87,
  [825] = 705,
  [826] = 706,
  [827] = 707,
  [828] = 828,
  [829] = 690,
  [830] = 775,
  [831] = 831,
  [832] = 776,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 780,
  [838] = 838,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static inline bool aux_sym_flow_text_literal_token1_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ')'))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static inline bool aux_sym_flow_text_literal_token1_character_set_2(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < ')'
        ? c == ' '
        : c <= ')')))
    : (c <= '-' || (c < '\\'
      ? (c < ';'
        ? c == '/'
        : c <= ';')
      : (c <= ']' || (c >= '|' && c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(470);
      if (lookahead == '(') ADVANCE(447);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '+') ADVANCE(442);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '<') ADVANCE(652);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == 'B') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(474);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(842);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '{') ADVANCE(439);
      if (lookahead == '|') ADVANCE(472);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(536);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(536);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(536);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead == '+') ADVANCE(442);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '+') ADVANCE(442);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '~') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(666);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead == '[') ADVANCE(667);
      if (lookahead == '}') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(683);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(834);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(646);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(396);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(409);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(834);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(646);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '<') ADVANCE(653);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(649);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(847);
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(849);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(401);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == ']') ADVANCE(476);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(849);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(848);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '}') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(849);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(531);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(519);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(741);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(822);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(823);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '}') ADVANCE(490);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(626);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(505);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(752);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == ']') ADVANCE(484);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(618);
      if (lookahead == '>') ADVANCE(615);
      if (lookahead == 'x') ADVANCE(617);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(478);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == ']') ADVANCE(488);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(480);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '-') ADVANCE(856);
      if (lookahead == '.') ADVANCE(858);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead == 'x') ADVANCE(616);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '[') ADVANCE(161);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(856);
      if (lookahead == '.') ADVANCE(858);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(852);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(851);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(654);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(656);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(658);
      END_STATE();
    case 61:
      if (lookahead == '2') ADVANCE(455);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(426);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(437);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '<') ADVANCE(452);
      END_STATE();
    case 66:
      if (lookahead == '<') ADVANCE(150);
      END_STATE();
    case 67:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(857);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(854);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(614);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(453);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(742);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(744);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(746);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == 'B') ADVANCE(840);
      if (lookahead == 'D') ADVANCE(841);
      END_STATE();
    case 81:
      if (lookahead == 'B') ADVANCE(840);
      if (lookahead == 'D') ADVANCE(841);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(418);
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(239);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(240);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(839);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(839);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(838);
      if (lookahead == 'T') ADVANCE(843);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(837);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(837);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 92:
      if (lookahead == '[') ADVANCE(161);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(495);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(493);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(486);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(711);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(743);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(745);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(747);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == '`') ADVANCE(645);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'b') ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(496);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == '}') ADVANCE(490);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(524);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(339);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(331);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(346);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(222);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(288);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(290);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(361);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(289);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(291);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(223);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(277);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(619);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(620);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 207:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      END_STATE();
    case 208:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 213:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 217:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 219:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(367);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 242:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(413);
      END_STATE();
    case 243:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 244:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(100);
      END_STATE();
    case 245:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(362);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 255:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 256:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      END_STATE();
    case 257:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      END_STATE();
    case 258:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(427);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 263:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 265:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 277:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 278:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 279:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 289:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 290:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 291:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 295:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 296:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 297:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 298:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 299:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 300:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(361);
      END_STATE();
    case 301:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 303:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 305:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 319:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 322:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      END_STATE();
    case 324:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      END_STATE();
    case 325:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 326:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      END_STATE();
    case 332:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      END_STATE();
    case 334:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 335:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 336:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(281);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 359:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 360:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 361:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 362:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 363:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 364:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 365:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 366:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      END_STATE();
    case 367:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 368:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 369:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 370:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 371:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      END_STATE();
    case 372:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 373:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 374:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(855);
      END_STATE();
    case 375:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      END_STATE();
    case 376:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      END_STATE();
    case 377:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(523);
      if (lookahead == '%') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(508);
      END_STATE();
    case 378:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 379:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(103);
      END_STATE();
    case 380:
      if (eof) ADVANCE(395);
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead == '%') ADVANCE(536);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 381:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '<') ADVANCE(653);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == 'B') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == '[') ADVANCE(473);
      if (lookahead == '^') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 'v') ADVANCE(842);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      END_STATE();
    case 382:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 383:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(827);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(503);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 384:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(470);
      if (lookahead == '(') ADVANCE(447);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(491);
      if (lookahead == 'O') ADVANCE(366);
      if (lookahead == '[') ADVANCE(474);
      if (lookahead == ']') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '{') ADVANCE(439);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == '<' ||
          lookahead == 'x') ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(251);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(123);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 385:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '$') ADVANCE(451);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(446);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '*') ADVANCE(450);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == '[') ADVANCE(473);
      if (lookahead == ']') ADVANCE(475);
      if (lookahead == '|') ADVANCE(471);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 386:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(815);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(753);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(769);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 387:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 388:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 389:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 390:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '}') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(725);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(729);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 391:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '{') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 392:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == '~') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 393:
      if (eof) ADVANCE(395);
      if (lookahead == '\n') ADVANCE(509);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ';') ADVANCE(468);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(638);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 394:
      if (eof) ADVANCE(395);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '<') ADVANCE(65);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead == 'c') ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == '{') ADVANCE(434);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(489);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(655);
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(477);
      if (lookahead == '-') ADVANCE(479);
      if (lookahead == '[') ADVANCE(481);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ']') ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(651);
      if (lookahead == ']') ADVANCE(486);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == '/') ADVANCE(492);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead == '\\') ADVANCE(494);
      if (lookahead == '|') ADVANCE(485);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == ']') ADVANCE(484);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(500);
      if (lookahead == ' ') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(505);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(823);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(531);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(519);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(523);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '{') ADVANCE(519);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(514);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(513);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(515);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(523);
      if (lookahead == '%') ADVANCE(520);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '%') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(397);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(549);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(608);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(611);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(612);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(499);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(634);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(497);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(629);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(631);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(628);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(643);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(640);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(639);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(452);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '|') ADVANCE(650);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(650);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(618);
      if (lookahead == '>') ADVANCE(614);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(614);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_class_linetype_dotted);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(710);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(701);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(710);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(736);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(739);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(741);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(819);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(754);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(810);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(821);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(823);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(823);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(399);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(510);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(833);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(20);
      if (lookahead != 0) ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(833);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_pie_label);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(835);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(836);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LR);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_BR);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_RL);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_TD);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_BT);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{') ADVANCE(849);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(846);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(510);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(849);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(847);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(845);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(849);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(852);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(854);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(852);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(851);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(854);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(858);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 384},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 380},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 380},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 380},
  [31] = {.lex_state = 380},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 380},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 380},
  [45] = {.lex_state = 380},
  [46] = {.lex_state = 380},
  [47] = {.lex_state = 380},
  [48] = {.lex_state = 380},
  [49] = {.lex_state = 380},
  [50] = {.lex_state = 380},
  [51] = {.lex_state = 380},
  [52] = {.lex_state = 380},
  [53] = {.lex_state = 380},
  [54] = {.lex_state = 384},
  [55] = {.lex_state = 386},
  [56] = {.lex_state = 388},
  [57] = {.lex_state = 388},
  [58] = {.lex_state = 388},
  [59] = {.lex_state = 386},
  [60] = {.lex_state = 386},
  [61] = {.lex_state = 388},
  [62] = {.lex_state = 388},
  [63] = {.lex_state = 386},
  [64] = {.lex_state = 386},
  [65] = {.lex_state = 388},
  [66] = {.lex_state = 388},
  [67] = {.lex_state = 388},
  [68] = {.lex_state = 388},
  [69] = {.lex_state = 388},
  [70] = {.lex_state = 388},
  [71] = {.lex_state = 388},
  [72] = {.lex_state = 388},
  [73] = {.lex_state = 388},
  [74] = {.lex_state = 388},
  [75] = {.lex_state = 388},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 388},
  [78] = {.lex_state = 388},
  [79] = {.lex_state = 388},
  [80] = {.lex_state = 384},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 380},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 380},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 380},
  [151] = {.lex_state = 380},
  [152] = {.lex_state = 380},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 380},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 380},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 380},
  [163] = {.lex_state = 380},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 380},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 380},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 380},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 380},
  [181] = {.lex_state = 380},
  [182] = {.lex_state = 380},
  [183] = {.lex_state = 380},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 380},
  [187] = {.lex_state = 380},
  [188] = {.lex_state = 380},
  [189] = {.lex_state = 380},
  [190] = {.lex_state = 380},
  [191] = {.lex_state = 380},
  [192] = {.lex_state = 380},
  [193] = {.lex_state = 380},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 380},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 380},
  [200] = {.lex_state = 380},
  [201] = {.lex_state = 380},
  [202] = {.lex_state = 380},
  [203] = {.lex_state = 380},
  [204] = {.lex_state = 381},
  [205] = {.lex_state = 384},
  [206] = {.lex_state = 384},
  [207] = {.lex_state = 381},
  [208] = {.lex_state = 384},
  [209] = {.lex_state = 381},
  [210] = {.lex_state = 389},
  [211] = {.lex_state = 381},
  [212] = {.lex_state = 381},
  [213] = {.lex_state = 389},
  [214] = {.lex_state = 390},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 390},
  [217] = {.lex_state = 388},
  [218] = {.lex_state = 381},
  [219] = {.lex_state = 388},
  [220] = {.lex_state = 37},
  [221] = {.lex_state = 389},
  [222] = {.lex_state = 388},
  [223] = {.lex_state = 37},
  [224] = {.lex_state = 388},
  [225] = {.lex_state = 388},
  [226] = {.lex_state = 381},
  [227] = {.lex_state = 388},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 386},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 394},
  [232] = {.lex_state = 388},
  [233] = {.lex_state = 388},
  [234] = {.lex_state = 388},
  [235] = {.lex_state = 388},
  [236] = {.lex_state = 384},
  [237] = {.lex_state = 388},
  [238] = {.lex_state = 386},
  [239] = {.lex_state = 388},
  [240] = {.lex_state = 386},
  [241] = {.lex_state = 388},
  [242] = {.lex_state = 388},
  [243] = {.lex_state = 386},
  [244] = {.lex_state = 388},
  [245] = {.lex_state = 386},
  [246] = {.lex_state = 386},
  [247] = {.lex_state = 388},
  [248] = {.lex_state = 386},
  [249] = {.lex_state = 37},
  [250] = {.lex_state = 386},
  [251] = {.lex_state = 388},
  [252] = {.lex_state = 388},
  [253] = {.lex_state = 388},
  [254] = {.lex_state = 388},
  [255] = {.lex_state = 388},
  [256] = {.lex_state = 386},
  [257] = {.lex_state = 384},
  [258] = {.lex_state = 381},
  [259] = {.lex_state = 22},
  [260] = {.lex_state = 22},
  [261] = {.lex_state = 388},
  [262] = {.lex_state = 386},
  [263] = {.lex_state = 394},
  [264] = {.lex_state = 386},
  [265] = {.lex_state = 388},
  [266] = {.lex_state = 386},
  [267] = {.lex_state = 388},
  [268] = {.lex_state = 386},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 386},
  [271] = {.lex_state = 22},
  [272] = {.lex_state = 394},
  [273] = {.lex_state = 7},
  [274] = {.lex_state = 7},
  [275] = {.lex_state = 29},
  [276] = {.lex_state = 37},
  [277] = {.lex_state = 384},
  [278] = {.lex_state = 37},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 391},
  [281] = {.lex_state = 381},
  [282] = {.lex_state = 381},
  [283] = {.lex_state = 394},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 388},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 394},
  [289] = {.lex_state = 384},
  [290] = {.lex_state = 394},
  [291] = {.lex_state = 7},
  [292] = {.lex_state = 29},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 384},
  [295] = {.lex_state = 384},
  [296] = {.lex_state = 384},
  [297] = {.lex_state = 7},
  [298] = {.lex_state = 37},
  [299] = {.lex_state = 384},
  [300] = {.lex_state = 393},
  [301] = {.lex_state = 37},
  [302] = {.lex_state = 393},
  [303] = {.lex_state = 7},
  [304] = {.lex_state = 384},
  [305] = {.lex_state = 393},
  [306] = {.lex_state = 37},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 37},
  [309] = {.lex_state = 393},
  [310] = {.lex_state = 393},
  [311] = {.lex_state = 393},
  [312] = {.lex_state = 384},
  [313] = {.lex_state = 384},
  [314] = {.lex_state = 393},
  [315] = {.lex_state = 384},
  [316] = {.lex_state = 384},
  [317] = {.lex_state = 384},
  [318] = {.lex_state = 384},
  [319] = {.lex_state = 384},
  [320] = {.lex_state = 384},
  [321] = {.lex_state = 384},
  [322] = {.lex_state = 384},
  [323] = {.lex_state = 384},
  [324] = {.lex_state = 393},
  [325] = {.lex_state = 384},
  [326] = {.lex_state = 384},
  [327] = {.lex_state = 384},
  [328] = {.lex_state = 384},
  [329] = {.lex_state = 384},
  [330] = {.lex_state = 384},
  [331] = {.lex_state = 384},
  [332] = {.lex_state = 393},
  [333] = {.lex_state = 384},
  [334] = {.lex_state = 384},
  [335] = {.lex_state = 384},
  [336] = {.lex_state = 384},
  [337] = {.lex_state = 384},
  [338] = {.lex_state = 384},
  [339] = {.lex_state = 385},
  [340] = {.lex_state = 384},
  [341] = {.lex_state = 22},
  [342] = {.lex_state = 22},
  [343] = {.lex_state = 385},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 385},
  [346] = {.lex_state = 385},
  [347] = {.lex_state = 385},
  [348] = {.lex_state = 385},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 382},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 382},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 6},
  [355] = {.lex_state = 393},
  [356] = {.lex_state = 385},
  [357] = {.lex_state = 385},
  [358] = {.lex_state = 382},
  [359] = {.lex_state = 393},
  [360] = {.lex_state = 389},
  [361] = {.lex_state = 384},
  [362] = {.lex_state = 384},
  [363] = {.lex_state = 393},
  [364] = {.lex_state = 393},
  [365] = {.lex_state = 392},
  [366] = {.lex_state = 383},
  [367] = {.lex_state = 384},
  [368] = {.lex_state = 382},
  [369] = {.lex_state = 384},
  [370] = {.lex_state = 392},
  [371] = {.lex_state = 384},
  [372] = {.lex_state = 382},
  [373] = {.lex_state = 382},
  [374] = {.lex_state = 382},
  [375] = {.lex_state = 24},
  [376] = {.lex_state = 24},
  [377] = {.lex_state = 24},
  [378] = {.lex_state = 389},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 24},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 382},
  [383] = {.lex_state = 23},
  [384] = {.lex_state = 382},
  [385] = {.lex_state = 390},
  [386] = {.lex_state = 382},
  [387] = {.lex_state = 382},
  [388] = {.lex_state = 385},
  [389] = {.lex_state = 382},
  [390] = {.lex_state = 24},
  [391] = {.lex_state = 24},
  [392] = {.lex_state = 24},
  [393] = {.lex_state = 24},
  [394] = {.lex_state = 24},
  [395] = {.lex_state = 24},
  [396] = {.lex_state = 24},
  [397] = {.lex_state = 24},
  [398] = {.lex_state = 384},
  [399] = {.lex_state = 24},
  [400] = {.lex_state = 384},
  [401] = {.lex_state = 384},
  [402] = {.lex_state = 38},
  [403] = {.lex_state = 38},
  [404] = {.lex_state = 389},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 385},
  [407] = {.lex_state = 384},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 5},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 387},
  [416] = {.lex_state = 388},
  [417] = {.lex_state = 5},
  [418] = {.lex_state = 30},
  [419] = {.lex_state = 30},
  [420] = {.lex_state = 37},
  [421] = {.lex_state = 389},
  [422] = {.lex_state = 387},
  [423] = {.lex_state = 389},
  [424] = {.lex_state = 389},
  [425] = {.lex_state = 387},
  [426] = {.lex_state = 385},
  [427] = {.lex_state = 387},
  [428] = {.lex_state = 385},
  [429] = {.lex_state = 385},
  [430] = {.lex_state = 385},
  [431] = {.lex_state = 385},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 4},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 40},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 4},
  [448] = {.lex_state = 4},
  [449] = {.lex_state = 4},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 4},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 4},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 4},
  [457] = {.lex_state = 4},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 4},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 4},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 4},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 4},
  [471] = {.lex_state = 4},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 4},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 4},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 4},
  [480] = {.lex_state = 382},
  [481] = {.lex_state = 4},
  [482] = {.lex_state = 382},
  [483] = {.lex_state = 4},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 4},
  [486] = {.lex_state = 4},
  [487] = {.lex_state = 4},
  [488] = {.lex_state = 4},
  [489] = {.lex_state = 4},
  [490] = {.lex_state = 384},
  [491] = {.lex_state = 384},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 4},
  [495] = {.lex_state = 23},
  [496] = {.lex_state = 4},
  [497] = {.lex_state = 4},
  [498] = {.lex_state = 23},
  [499] = {.lex_state = 4},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 4},
  [502] = {.lex_state = 4},
  [503] = {.lex_state = 385},
  [504] = {.lex_state = 382},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 4},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 4},
  [510] = {.lex_state = 384},
  [511] = {.lex_state = 384},
  [512] = {.lex_state = 4},
  [513] = {.lex_state = 4},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 385},
  [516] = {.lex_state = 4},
  [517] = {.lex_state = 4},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 4},
  [520] = {.lex_state = 4},
  [521] = {.lex_state = 382},
  [522] = {.lex_state = 384},
  [523] = {.lex_state = 384},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 4},
  [527] = {.lex_state = 382},
  [528] = {.lex_state = 388},
  [529] = {.lex_state = 384},
  [530] = {.lex_state = 384},
  [531] = {.lex_state = 384},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 384},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 385},
  [540] = {.lex_state = 385},
  [541] = {.lex_state = 40},
  [542] = {.lex_state = 382},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 385},
  [545] = {.lex_state = 4},
  [546] = {.lex_state = 4},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 6},
  [550] = {.lex_state = 6},
  [551] = {.lex_state = 23},
  [552] = {.lex_state = 382},
  [553] = {.lex_state = 23},
  [554] = {.lex_state = 31},
  [555] = {.lex_state = 384},
  [556] = {.lex_state = 31},
  [557] = {.lex_state = 31},
  [558] = {.lex_state = 31},
  [559] = {.lex_state = 31},
  [560] = {.lex_state = 31},
  [561] = {.lex_state = 23},
  [562] = {.lex_state = 387},
  [563] = {.lex_state = 31},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 31},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 31},
  [571] = {.lex_state = 31},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 31},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 31},
  [578] = {.lex_state = 31},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 31},
  [583] = {.lex_state = 31},
  [584] = {.lex_state = 31},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 31},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 31},
  [590] = {.lex_state = 388},
  [591] = {.lex_state = 31},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 31},
  [596] = {.lex_state = 31},
  [597] = {.lex_state = 31},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 31},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 384},
  [604] = {.lex_state = 31},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 31},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 31},
  [611] = {.lex_state = 31},
  [612] = {.lex_state = 31},
  [613] = {.lex_state = 31},
  [614] = {.lex_state = 31},
  [615] = {.lex_state = 31},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 31},
  [619] = {.lex_state = 31},
  [620] = {.lex_state = 31},
  [621] = {.lex_state = 31},
  [622] = {.lex_state = 31},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 31},
  [625] = {.lex_state = 387},
  [626] = {.lex_state = 31},
  [627] = {.lex_state = 31},
  [628] = {.lex_state = 23},
  [629] = {.lex_state = 23},
  [630] = {.lex_state = 23},
  [631] = {.lex_state = 31},
  [632] = {.lex_state = 31},
  [633] = {.lex_state = 31},
  [634] = {.lex_state = 384},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 385},
  [638] = {.lex_state = 31},
  [639] = {.lex_state = 31},
  [640] = {.lex_state = 31},
  [641] = {.lex_state = 31},
  [642] = {.lex_state = 31},
  [643] = {.lex_state = 31},
  [644] = {.lex_state = 31},
  [645] = {.lex_state = 31},
  [646] = {.lex_state = 31},
  [647] = {.lex_state = 31},
  [648] = {.lex_state = 31},
  [649] = {.lex_state = 31},
  [650] = {.lex_state = 31},
  [651] = {.lex_state = 31},
  [652] = {.lex_state = 31},
  [653] = {.lex_state = 31},
  [654] = {.lex_state = 31},
  [655] = {.lex_state = 31},
  [656] = {.lex_state = 31},
  [657] = {.lex_state = 31},
  [658] = {.lex_state = 31},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 31},
  [661] = {.lex_state = 385},
  [662] = {.lex_state = 384},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 31},
  [666] = {.lex_state = 384},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 31},
  [669] = {.lex_state = 31},
  [670] = {.lex_state = 31},
  [671] = {.lex_state = 31},
  [672] = {.lex_state = 31},
  [673] = {.lex_state = 31},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 31},
  [676] = {.lex_state = 31},
  [677] = {.lex_state = 384},
  [678] = {.lex_state = 388},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 4},
  [687] = {.lex_state = 4},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 384},
  [692] = {.lex_state = 385},
  [693] = {.lex_state = 384},
  [694] = {.lex_state = 32},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 385},
  [699] = {.lex_state = 377},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 33},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 384},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 32},
  [719] = {.lex_state = 381},
  [720] = {.lex_state = 384},
  [721] = {.lex_state = 385},
  [722] = {.lex_state = 384},
  [723] = {.lex_state = 377},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 32},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 384},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 32},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 377},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 381},
  [759] = {.lex_state = 384},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 32},
  [763] = {.lex_state = 377},
  [764] = {.lex_state = 32},
  [765] = {.lex_state = 377},
  [766] = {.lex_state = 39},
  [767] = {.lex_state = 33},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 381},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 384},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 388},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 388},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 384},
  [788] = {.lex_state = 384},
  [789] = {.lex_state = 384},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 388},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 381},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 388},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 388},
  [804] = {.lex_state = 377},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 4},
  [814] = {.lex_state = 4},
  [815] = {.lex_state = 384},
  [816] = {.lex_state = 34},
  [817] = {.lex_state = 34},
  [818] = {.lex_state = 4},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 385},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 35},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 385},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 384},
  [834] = {.lex_state = 384},
  [835] = {.lex_state = 385},
  [836] = {.lex_state = 385},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_diagram_sequence_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_participant_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_actor_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_autonumber_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_activate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_deactivate_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_note_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_sequence_stmt_links_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_link_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_properties_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_details_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_title_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_loop_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_rect_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_alt_token2] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token1] = ACTIONS(1),
    [aux_sym_sequence_stmt_par_token2] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [aux_sym_diagram_state_token1] = ACTIONS(1),
    [aux_sym_diagram_state_token2] = ACTIONS(1),
    [aux_sym_state_stmt_simple_token1] = ACTIONS(1),
    [aux_sym_diagram_gantt_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_dateformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_inclusiveenddates_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_topaxis_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_axisformat_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_includes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_excludes_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_todaymarker_token1] = ACTIONS(1),
    [aux_sym_gantt_stmt_section_token1] = ACTIONS(1),
    [aux_sym_diagram_pie_token1] = ACTIONS(1),
    [aux_sym_diagram_flow_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_flow_stmt_direction_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_DASH] = ACTIONS(1),
    [anon_sym_LPAREN_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_BSLASH] = ACTIONS(1),
    [anon_sym_SLASH_RBRACK] = ACTIONS(1),
    [anon_sym_subgraph] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_solid_arrow] = ACTIONS(1),
    [sym_solid_open_arrow] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_dotted_point] = ACTIONS(1),
    [aux_sym_note_placement_left_token1] = ACTIONS(1),
    [aux_sym_note_placement_right_token1] = ACTIONS(1),
    [sym__bquote_string] = ACTIONS(1),
    [sym__dquote_string] = ACTIONS(1),
    [sym_class_reltype_aggregation] = ACTIONS(1),
    [anon_sym_LT_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_class_linetype_dotted] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [sym_pie_label] = ACTIONS(1),
    [anon_sym_LR] = ACTIONS(1),
    [anon_sym_BR] = ACTIONS(1),
    [anon_sym_RL] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_TD] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_BT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_flow_text_quoted] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(734),
    [sym_directive] = STATE(295),
    [sym_diagram_sequence] = STATE(712),
    [sym_diagram_class] = STATE(712),
    [sym_diagram_state] = STATE(712),
    [sym_diagram_gantt] = STATE(712),
    [sym_diagram_pie] = STATE(712),
    [sym_diagram_flow] = STATE(712),
    [aux_sym_diagram_sequence_repeat1] = STATE(295),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [aux_sym_diagram_pie_token1] = ACTIONS(19),
    [aux_sym_diagram_flow_token1] = ACTIONS(21),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(523), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [105] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(69), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(530), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [210] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(109), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(531), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [315] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(529), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [420] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(533), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [525] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(510), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [630] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(511), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [735] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(522), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [840] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    ACTIONS(121), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [940] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    ACTIONS(123), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1040] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(125), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(128), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(131), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(134), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(137), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(140), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(143), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(146), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(149), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(152), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(155), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(158), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(161), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(166), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(169), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(172), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(175), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(178), 1,
      sym__newline,
    ACTIONS(181), 1,
      sym__actor_word,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1140] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(181), 1,
      sym__actor_word,
    ACTIONS(184), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(187), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(190), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(193), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(196), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(199), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(202), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(205), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(208), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(211), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(214), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(217), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(220), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(223), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(226), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(229), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(232), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(235), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1240] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1339] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(276), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1438] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1537] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1636] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(282), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1735] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1834] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(17), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [1933] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(18), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2032] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2131] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2230] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2329] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2428] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(334), 1,
      sym__newline,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(301), 1,
      sym_actor,
    STATE(36), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(158), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2525] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2624] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(343), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(349), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(376), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(382), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(385), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(388), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(391), 1,
      sym__newline,
    ACTIONS(394), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(301), 1,
      sym_actor,
    STATE(28), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(158), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2721] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(397), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2820] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(300), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      sym__newline,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(301), 1,
      sym_actor,
    STATE(31), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(158), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [2917] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(403), 1,
      sym__newline,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(301), 1,
      sym_actor,
    STATE(28), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(158), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3014] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3113] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3212] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(409), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3311] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(411), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3410] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(300), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(318), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(322), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(403), 1,
      sym__newline,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(301), 1,
      sym_actor,
    STATE(28), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(158), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3507] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(415), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3606] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(417), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3705] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(34), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3804] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(421), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [3903] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(29), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4002] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(238), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(240), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(274), 1,
      sym__newline,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4101] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(164), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(181), 1,
      sym__actor_word,
    ACTIONS(427), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(430), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(433), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(436), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(439), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(442), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(445), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(448), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(454), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(460), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(466), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(472), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(478), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym__sequence_subdocument,
    STATE(166), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(184), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4200] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4296] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4392] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4488] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4584] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4680] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4776] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4872] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(27), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(130), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(132), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [4968] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5064] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(71), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(73), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(114), 1,
      sym__sequence_stmt,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(298), 1,
      sym_actor,
    STATE(88), 18,
      sym_directive,
      sym_sequence_stmt_participant,
      sym_sequence_stmt_actor,
      sym_sequence_stmt_signal,
      sym_sequence_stmt_autonumber,
      sym_sequence_stmt_activate,
      sym_sequence_stmt_deactivate,
      sym_sequence_stmt_note,
      sym_sequence_stmt_links,
      sym_sequence_stmt_link,
      sym_sequence_stmt_properties,
      sym_sequence_stmt_details,
      sym_sequence_stmt_title,
      sym_sequence_stmt_loop,
      sym_sequence_stmt_rect,
      sym_sequence_stmt_opt,
      sym_sequence_stmt_alt,
      sym_sequence_stmt_par,
  [5160] = 18,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(491), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(493), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(495), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(497), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(499), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_GT,
    ACTIONS(505), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(507), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(334), 1,
      sym__flow_vertex_kind,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(509), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(321), 15,
      sym_flow_vertex_square,
      sym_flow_vertex_circle,
      sym_flow_vertex_ellipse,
      sym_flow_vertex_stadium,
      sym_flow_vertex_subroutine,
      sym_flow_vertex_rect,
      sym_flow_vertex_cylinder,
      sym_flow_vertex_round,
      sym_flow_vertex_diamond,
      sym_flow_vertex_hexagon,
      sym_flow_vertex_odd,
      sym_flow_vertex_trapezoid,
      sym_flow_vertex_inv_trapezoid,
      sym_flow_vertex_leanright,
      sym_flow_vertex_leanleft,
  [5238] = 18,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(516), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(519), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(522), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(525), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(528), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(531), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(534), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(537), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(540), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(543), 1,
      sym__newline,
    ACTIONS(546), 1,
      aux_sym_gantt_task_text_token1,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(771), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(229), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5305] = 17,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5370] = 17,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(555), 1,
      sym__newline,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5435] = 17,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    ACTIONS(575), 1,
      sym__newline,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5500] = 18,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(771), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(229), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5567] = 18,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
    ACTIONS(605), 1,
      sym__newline,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(771), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(229), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5634] = 17,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 1,
      sym__newline,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(57), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5699] = 17,
    ACTIONS(611), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(619), 1,
      sym__newline,
    ACTIONS(622), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(625), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(628), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(631), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(634), 1,
      anon_sym_DASH_DASH,
    ACTIONS(637), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(640), 1,
      aux_sym_state_name_token1,
    ACTIONS(643), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5764] = 18,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(605), 1,
      sym__newline,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(771), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(229), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5831] = 18,
    ACTIONS(579), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(581), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(583), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 1,
      sym__newline,
    STATE(541), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(771), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(229), 11,
      sym_directive,
      sym_gantt_stmt_dateformat,
      sym_gantt_stmt_inclusiveenddates,
      sym_gantt_stmt_topaxis,
      sym_gantt_stmt_axisformat,
      sym_gantt_stmt_includes,
      sym_gantt_stmt_excludes,
      sym_gantt_stmt_todaymarker,
      sym_gantt_stmt_title,
      sym_gantt_stmt_section,
      sym_gantt_stmt_task,
  [5898] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [5959] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(652), 1,
      sym__newline,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(536), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6020] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(658), 1,
      sym__newline,
    STATE(61), 1,
      sym__state_stmt,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6081] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(579), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6142] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6203] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(579), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6264] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(579), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6325] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    ACTIONS(668), 1,
      sym__newline,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(432), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6386] = 16,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6447] = 16,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(579), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6508] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(579), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6566] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(286), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6624] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(518), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6682] = 15,
    ACTIONS(549), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(567), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(569), 1,
      aux_sym_state_name_token1,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(56), 1,
      sym__state_stmt,
    STATE(214), 1,
      sym_state_name,
    STATE(244), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6740] = 15,
    ACTIONS(553), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(557), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(559), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(561), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(563), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(565), 1,
      anon_sym_DASH_DASH,
    ACTIONS(571), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(650), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(656), 1,
      aux_sym_state_name_token1,
    STATE(244), 1,
      sym_state_hide_empty_description,
    STATE(385), 1,
      sym_state_name,
    STATE(432), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 12,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
      sym_state_division,
  [6798] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(674), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(672), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_LPAREN_LPAREN,
      anon_sym_LPAREN_DASH,
      anon_sym_LPAREN_LBRACK,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK_PIPE,
      anon_sym_LBRACK_LPAREN,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      anon_sym_LBRACK_SLASH,
      anon_sym_LBRACK_BSLASH,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [6830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [6894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [6926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [6958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [6990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(766), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(770), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(774), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(778), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(782), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(786), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(790), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(794), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [7918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(798), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(774), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [7982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(766), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(786), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(798), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(790), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(782), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(778), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(794), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_alt_token2,
      sym__newline,
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(770), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 17,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      aux_sym_sequence_stmt_par_token2,
      sym__newline,
  [8814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(744), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(746), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [8969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(770), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(778), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(782), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(680), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(682), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(790), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(788), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(790), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(792), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(794), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(798), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(774), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(766), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(796), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(798), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(786), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(684), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(686), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(772), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(774), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(688), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(690), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(692), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(694), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(696), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(698), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [9992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(764), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(766), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(760), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(762), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(704), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(706), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(708), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(710), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(748), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(750), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(784), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(786), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(780), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(782), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(712), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(714), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(776), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(778), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(768), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(770), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(756), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(758), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(752), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(754), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(740), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(742), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(676), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(678), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(728), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(730), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(700), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(702), 16,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(736), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(738), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(732), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(734), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(716), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(718), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(724), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(726), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(720), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(722), 16,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token1,
      aux_sym_sequence_stmt_actor_token1,
      aux_sym_sequence_stmt_autonumber_token1,
      aux_sym_sequence_stmt_activate_token1,
      aux_sym_sequence_stmt_deactivate_token1,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_sequence_stmt_links_token1,
      aux_sym_sequence_stmt_properties_token1,
      aux_sym_sequence_stmt_details_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_sequence_stmt_loop_token1,
      aux_sym_sequence_stmt_rect_token1,
      aux_sym_sequence_stmt_opt_token1,
      aux_sym_sequence_stmt_alt_token1,
      sym__newline,
  [10705] = 15,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      anon_sym_GT,
    ACTIONS(806), 1,
      sym__dquote_string,
    ACTIONS(808), 1,
      sym_class_reltype_aggregation,
    ACTIONS(812), 1,
      anon_sym_LT,
    ACTIONS(814), 1,
      anon_sym_DASH_DASH,
    ACTIONS(816), 1,
      sym_class_linetype_dotted,
    STATE(260), 1,
      sym__class_linetype,
    STATE(342), 1,
      sym_class_linetype_solid,
    STATE(368), 1,
      sym_class_relation,
    STATE(416), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(382), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10755] = 9,
    STATE(208), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(406), 1,
      sym__flow_link,
    STATE(503), 1,
      sym_flow_link_arrow_start,
    STATE(661), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(818), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(820), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(822), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(698), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10792] = 9,
    STATE(205), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(406), 1,
      sym__flow_link,
    STATE(503), 1,
      sym_flow_link_arrow_start,
    STATE(661), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(820), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(822), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(824), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(698), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10829] = 7,
    ACTIONS(828), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_LT,
      anon_sym_RL,
    ACTIONS(834), 2,
      anon_sym_BT,
      anon_sym_CARET,
    ACTIONS(826), 3,
      anon_sym_GT,
      anon_sym_LR,
      anon_sym_BR,
    ACTIONS(832), 3,
      anon_sym_TB,
      anon_sym_TD,
      anon_sym_v,
    STATE(309), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [10862] = 9,
    STATE(208), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(406), 1,
      sym__flow_link,
    STATE(503), 1,
      sym_flow_link_arrow_start,
    STATE(661), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(838), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(841), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(698), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10899] = 7,
    ACTIONS(844), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_LT,
      anon_sym_RL,
    ACTIONS(834), 2,
      anon_sym_BT,
      anon_sym_CARET,
    ACTIONS(826), 3,
      anon_sym_GT,
      anon_sym_LR,
      anon_sym_BR,
    ACTIONS(832), 3,
      anon_sym_TB,
      anon_sym_TD,
      anon_sym_v,
    STATE(302), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [10932] = 6,
    ACTIONS(848), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    ACTIONS(852), 1,
      aux_sym_state_name_token1,
    STATE(242), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(846), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [10963] = 6,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_LT,
      anon_sym_RL,
    ACTIONS(834), 2,
      anon_sym_BT,
      anon_sym_CARET,
    ACTIONS(826), 3,
      anon_sym_GT,
      anon_sym_LR,
      anon_sym_BR,
    ACTIONS(832), 3,
      anon_sym_TB,
      anon_sym_TD,
      anon_sym_v,
    STATE(443), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [10993] = 13,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      anon_sym_GT,
    ACTIONS(808), 1,
      sym_class_reltype_aggregation,
    ACTIONS(812), 1,
      anon_sym_LT,
    ACTIONS(814), 1,
      anon_sym_DASH_DASH,
    ACTIONS(816), 1,
      sym_class_linetype_dotted,
    STATE(260), 1,
      sym__class_linetype,
    STATE(342), 1,
      sym_class_linetype_solid,
    STATE(358), 1,
      sym_class_relation,
    STATE(416), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(382), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11037] = 3,
    ACTIONS(856), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(854), 14,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_participant_token2,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11061] = 6,
    ACTIONS(858), 1,
      anon_sym_COLON,
    ACTIONS(862), 1,
      anon_sym_DASH_DASH_GT,
    STATE(495), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(860), 10,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11091] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(870), 1,
      aux_sym_class_label_token1,
    STATE(219), 1,
      sym_state_description,
    ACTIONS(868), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(866), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11120] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(872), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11143] = 4,
    ACTIONS(878), 1,
      anon_sym_COLON,
    ACTIONS(880), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(876), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11168] = 5,
    ACTIONS(884), 1,
      anon_sym_TILDE,
    ACTIONS(886), 1,
      anon_sym_LT,
    STATE(281), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(882), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11195] = 3,
    ACTIONS(890), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(888), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11217] = 12,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(896), 1,
      anon_sym_end,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(276), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(623), 1,
      sym__flow_stmt,
    STATE(797), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11257] = 8,
    ACTIONS(848), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    STATE(242), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(900), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(902), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(904), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(233), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [11289] = 3,
    ACTIONS(908), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(906), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11311] = 12,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(910), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(276), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(623), 1,
      sym__flow_stmt,
    STATE(758), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11351] = 3,
    ACTIONS(914), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(912), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11373] = 3,
    ACTIONS(918), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(916), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11395] = 3,
    ACTIONS(922), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(920), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11417] = 3,
    ACTIONS(926), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(924), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11439] = 5,
    ACTIONS(928), 1,
      sym__class_name,
    ACTIONS(930), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(922), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(920), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [11465] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(934), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(932), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11487] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(938), 1,
      sym__actor_word,
    STATE(230), 1,
      aux_sym_actor_repeat1,
    ACTIONS(941), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(936), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [11515] = 11,
    ACTIONS(943), 1,
      ts_builtin_sym_end,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    STATE(564), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11553] = 3,
    ACTIONS(955), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(953), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11575] = 3,
    ACTIONS(959), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(957), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11597] = 3,
    ACTIONS(963), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(961), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11619] = 3,
    ACTIONS(967), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(965), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11641] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(730), 11,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      sym__newline,
      sym_pie_label,
  [11663] = 3,
    ACTIONS(971), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(969), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11685] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(973), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11707] = 3,
    ACTIONS(979), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(977), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11729] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(981), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11751] = 3,
    ACTIONS(987), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(985), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11773] = 3,
    ACTIONS(991), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(989), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11795] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(730), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11817] = 3,
    ACTIONS(995), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(993), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11839] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(999), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(997), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11861] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(678), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11883] = 3,
    ACTIONS(1003), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1001), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [11905] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1005), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11927] = 12,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1009), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(276), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(623), 1,
      sym__flow_stmt,
    STATE(719), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11967] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1013), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1011), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [11989] = 3,
    ACTIONS(1017), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1015), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12011] = 3,
    ACTIONS(1021), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1019), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12033] = 3,
    ACTIONS(1025), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1023), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12055] = 3,
    ACTIONS(1029), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1027), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12077] = 3,
    ACTIONS(1033), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1031), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12099] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1037), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1035), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12121] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(676), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(678), 11,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      sym__newline,
      sym_pie_label,
  [12143] = 3,
    ACTIONS(1041), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1039), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12165] = 5,
    ACTIONS(928), 1,
      sym__class_name,
    ACTIONS(930), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1041), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1039), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12191] = 10,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      anon_sym_GT,
    ACTIONS(812), 1,
      anon_sym_LT,
    ACTIONS(1043), 1,
      sym__class_name,
    ACTIONS(1047), 1,
      sym_class_reltype_aggregation,
    STATE(480), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1045), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(382), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12227] = 3,
    ACTIONS(874), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(872), 12,
      anon_sym_COLON,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12249] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1051), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1049), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12271] = 11,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    STATE(564), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12309] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1057), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1055), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12331] = 3,
    ACTIONS(1061), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1059), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12353] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1065), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1063), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12375] = 3,
    ACTIONS(1069), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1067), 12,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12397] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1073), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1071), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12419] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1077), 1,
      sym__actor_word,
    STATE(230), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1079), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1075), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12447] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1083), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1081), 11,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_gantt_stmt_dateformat_token1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
      aux_sym_gantt_stmt_topaxis_token1,
      aux_sym_gantt_stmt_axisformat_token1,
      aux_sym_gantt_stmt_includes_token1,
      aux_sym_gantt_stmt_excludes_token1,
      aux_sym_gantt_stmt_todaymarker_token1,
      aux_sym_gantt_stmt_section_token1,
      sym__newline,
  [12469] = 10,
    ACTIONS(802), 1,
      anon_sym_STAR,
    ACTIONS(804), 1,
      anon_sym_GT,
    ACTIONS(812), 1,
      anon_sym_LT,
    ACTIONS(1047), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1085), 1,
      sym__class_name,
    STATE(504), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1087), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(382), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12505] = 11,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    STATE(564), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12543] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1103), 1,
      sym__newline,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(450), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12580] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12617] = 5,
    ACTIONS(1113), 1,
      aux_sym_flow_text_literal_token1,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1111), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1109), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [12642] = 11,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1115), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(278), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(623), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12679] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1121), 1,
      sym__newline,
    ACTIONS(1123), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    STATE(322), 1,
      sym_pie_showdata,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(337), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12714] = 11,
    ACTIONS(1127), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1130), 1,
      anon_sym_subgraph,
    ACTIONS(1133), 1,
      anon_sym_end,
    ACTIONS(1135), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(278), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(623), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12751] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1138), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(525), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12788] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(872), 12,
      ts_builtin_sym_end,
      anon_sym_COLON,
      aux_sym_sequence_stmt_participant_token2,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_DASH_DASH_GT,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
  [12807] = 3,
    ACTIONS(1142), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1140), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12828] = 3,
    ACTIONS(1146), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1144), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_STAR,
      anon_sym_GT,
      sym__newline,
      sym__dquote_string,
      sym_class_reltype_aggregation,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [12849] = 10,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    STATE(564), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12884] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12921] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12958] = 3,
    ACTIONS(1152), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(614), 11,
      aux_sym_sequence_stmt_note_token1,
      anon_sym_RBRACE,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_hide_empty_description_token1,
  [12979] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13016] = 10,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(547), 1,
      sym__class_stmt,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13051] = 6,
    ACTIONS(1156), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1163), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(289), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1159), 6,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
  [13078] = 10,
    ACTIONS(945), 1,
      anon_sym_class,
    ACTIONS(947), 1,
      anon_sym_LT_LT,
    ACTIONS(949), 1,
      sym__class_name,
    ACTIONS(951), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(534), 1,
      sym__class_stmt,
    STATE(552), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(565), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13113] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13150] = 5,
    ACTIONS(1172), 1,
      aux_sym_flow_text_literal_token1,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1170), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1168), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13175] = 11,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    ACTIONS(1175), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13212] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1123), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(1177), 1,
      ts_builtin_sym_end,
    ACTIONS(1179), 1,
      sym__newline,
    STATE(318), 1,
      sym_pie_showdata,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(312), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13247] = 12,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1181), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(1183), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1185), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1187), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1189), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1191), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1193), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(1195), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(1197), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(289), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [13286] = 5,
    ACTIONS(1201), 1,
      anon_sym_AMP,
    STATE(304), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1203), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1199), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13310] = 10,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(574), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13344] = 7,
    ACTIONS(1205), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1209), 1,
      sym_solid_open_arrow,
    ACTIONS(1211), 1,
      anon_sym_DASH_DASH_GT,
    STATE(353), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(550), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1207), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13372] = 5,
    ACTIONS(1215), 1,
      anon_sym_AMP,
    STATE(299), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1218), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1213), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13396] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1220), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(543), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13430] = 7,
    ACTIONS(1205), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1209), 1,
      sym_solid_open_arrow,
    ACTIONS(1211), 1,
      anon_sym_DASH_DASH_GT,
    STATE(351), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(550), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1207), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13458] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1222), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(414), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13492] = 10,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(475), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13526] = 5,
    ACTIONS(1201), 1,
      anon_sym_AMP,
    STATE(299), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1226), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1224), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13550] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1228), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(543), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13584] = 7,
    ACTIONS(1205), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1209), 1,
      sym_solid_open_arrow,
    ACTIONS(1211), 1,
      anon_sym_DASH_DASH_GT,
    STATE(354), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(550), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1207), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13612] = 10,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      anon_sym_LT_LT,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(463), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13646] = 7,
    ACTIONS(1205), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1209), 1,
      sym_solid_open_arrow,
    ACTIONS(1211), 1,
      anon_sym_DASH_DASH_GT,
    STATE(349), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(550), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1207), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13674] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1230), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(413), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13708] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(543), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13742] = 10,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(543), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13776] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(1236), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13805] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1240), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1238), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13824] = 9,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(543), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13855] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1244), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1242), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13874] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1248), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1246), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13893] = 8,
    ACTIONS(1250), 1,
      ts_builtin_sym_end,
    ACTIONS(1252), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1255), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1258), 1,
      sym__newline,
    ACTIONS(1261), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13922] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1117), 1,
      ts_builtin_sym_end,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1121), 1,
      sym__newline,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(337), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13951] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1266), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1264), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13970] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1270), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1268), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13989] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1274), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1272), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14008] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    ACTIONS(1278), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(336), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14037] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1282), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1280), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14056] = 9,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(409), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14087] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1286), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1284), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14106] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1290), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1288), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14125] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1294), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1292), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14144] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1298), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1296), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14163] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1302), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1300), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14182] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1306), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1304), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14201] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1310), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1308), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14220] = 9,
    ACTIONS(892), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(894), 1,
      anon_sym_subgraph,
    ACTIONS(898), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(206), 1,
      sym_flow_node,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(414), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(532), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14251] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1314), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1312), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14270] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1318), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1316), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14289] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1218), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1213), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14308] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(1236), 1,
      sym__newline,
    ACTIONS(1320), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14337] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1119), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1125), 1,
      sym_pie_label,
    ACTIONS(1236), 1,
      sym__newline,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(317), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(371), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14366] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1324), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1322), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14385] = 6,
    ACTIONS(1330), 1,
      anon_sym_STAR,
    ACTIONS(1332), 1,
      anon_sym_DOLLAR,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1326), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1328), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14409] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1334), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(836), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14427] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1338), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1336), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14445] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1342), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1340), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14463] = 4,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1346), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1344), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [14483] = 9,
    ACTIONS(1091), 1,
      anon_sym_TILDE,
    ACTIONS(1093), 1,
      anon_sym_PLUS,
    ACTIONS(1095), 1,
      anon_sym_DASH,
    ACTIONS(1097), 1,
      anon_sym_POUND,
    ACTIONS(1105), 1,
      sym__alpha_num_token,
    STATE(339), 1,
      aux_sym_class_method_line_repeat1,
    STATE(569), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14513] = 6,
    ACTIONS(1351), 1,
      anon_sym_STAR,
    ACTIONS(1353), 1,
      anon_sym_DOLLAR,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1349), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14537] = 6,
    ACTIONS(1357), 1,
      anon_sym_STAR,
    ACTIONS(1359), 1,
      anon_sym_DOLLAR,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1355), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14561] = 6,
    ACTIONS(1363), 1,
      anon_sym_STAR,
    ACTIONS(1365), 1,
      anon_sym_DOLLAR,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1361), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14585] = 6,
    ACTIONS(1369), 1,
      anon_sym_STAR,
    ACTIONS(1371), 1,
      anon_sym_DOLLAR,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1367), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14609] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(1373), 1,
      anon_sym_PLUS,
    ACTIONS(1375), 1,
      anon_sym_DASH,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(794), 1,
      sym_actor,
    STATE(451), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [14635] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(920), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [14651] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(1373), 1,
      anon_sym_PLUS,
    ACTIONS(1375), 1,
      anon_sym_DASH,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(695), 1,
      sym_actor,
    STATE(509), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [14677] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1039), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [14693] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(1373), 1,
      anon_sym_PLUS,
    ACTIONS(1375), 1,
      anon_sym_DASH,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(809), 1,
      sym_actor,
    STATE(445), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [14719] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    ACTIONS(1373), 1,
      anon_sym_PLUS,
    ACTIONS(1375), 1,
      anon_sym_DASH,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(779), 1,
      sym_actor,
    STATE(459), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [14745] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1379), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1377), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [14760] = 4,
    ACTIONS(1383), 1,
      sym__alpha_num_token,
    STATE(356), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1381), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [14777] = 6,
    ACTIONS(1388), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(616), 1,
      sym_flow_vertex_text,
    STATE(769), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1386), 2,
      anon_sym_SEMI,
      sym__newline,
  [14798] = 7,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1390), 1,
      sym__class_name,
    ACTIONS(1392), 1,
      sym__dquote_string,
    STATE(218), 1,
      sym_class_name_body,
    STATE(505), 1,
      sym_class_name,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [14821] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1396), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1394), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [14836] = 4,
    ACTIONS(1398), 1,
      anon_sym_TILDE,
    STATE(421), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(882), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [14853] = 6,
    ACTIONS(1400), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1402), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1404), 1,
      aux_sym_note_placement_right_token1,
    STATE(447), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(818), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [14874] = 6,
    ACTIONS(1402), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1404), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1406), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(546), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(818), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [14895] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1410), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1408), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [14910] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1414), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1412), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [14925] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(920), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [14940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1420), 1,
      sym_pie_title,
    ACTIONS(1418), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      sym_pie_label,
    ACTIONS(1416), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [14959] = 6,
    ACTIONS(1402), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1404), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1422), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(462), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(818), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [14980] = 7,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1390), 1,
      sym__class_name,
    ACTIONS(1424), 1,
      sym__dquote_string,
    STATE(218), 1,
      sym_class_name_body,
    STATE(452), 1,
      sym_class_name,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15003] = 6,
    ACTIONS(1402), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1404), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1426), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(454), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(818), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15024] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1039), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15039] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1428), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [15051] = 6,
    ACTIONS(1430), 1,
      sym__class_name,
    ACTIONS(1432), 1,
      sym__bquote_string,
    STATE(360), 1,
      sym_class_name_body,
    STATE(423), 1,
      sym_class_name,
    STATE(542), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15071] = 6,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1390), 1,
      sym__class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(505), 1,
      sym_class_name,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15091] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1434), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [15103] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1438), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(787), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15121] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1440), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(785), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15139] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1442), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(784), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15157] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1039), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15169] = 5,
    ACTIONS(1444), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1446), 1,
      aux_sym_note_placement_right_token1,
    STATE(498), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(630), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15187] = 5,
    ACTIONS(1448), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1450), 1,
      sym_flow_text_quoted,
    STATE(418), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(788), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15205] = 5,
    ACTIONS(1444), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1446), 1,
      aux_sym_note_placement_right_token1,
    STATE(551), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(630), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15223] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1452), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [15235] = 5,
    ACTIONS(1454), 1,
      sym__dquote_string,
    STATE(210), 1,
      sym_state_alias,
    STATE(221), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15253] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1456), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [15265] = 5,
    ACTIONS(858), 1,
      anon_sym_COLON,
    ACTIONS(862), 1,
      anon_sym_DASH_DASH_GT,
    STATE(553), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15283] = 6,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1390), 1,
      sym__class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(440), 1,
      sym_class_name,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15303] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1458), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      sym_class_linetype_dotted,
  [15315] = 4,
    ACTIONS(1462), 1,
      sym__alpha_num_token,
    STATE(356), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1460), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [15331] = 6,
    ACTIONS(951), 1,
      sym__bquote_string,
    ACTIONS(1430), 1,
      sym__class_name,
    STATE(218), 1,
      sym_class_name_body,
    STATE(521), 1,
      aux_sym_class_name_body_repeat1,
    STATE(674), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15351] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1464), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(789), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15369] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1466), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(792), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15387] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1468), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(799), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15405] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1470), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(803), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15423] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1472), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(722), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15441] = 5,
    ACTIONS(1448), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1474), 1,
      sym_flow_text_quoted,
    STATE(418), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(833), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15459] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1476), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(834), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15477] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1478), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(609), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15495] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1480), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [15507] = 5,
    ACTIONS(1436), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1482), 1,
      sym_flow_text_quoted,
    STATE(275), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(617), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15525] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1484), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [15537] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1486), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      sym_pie_label,
  [15549] = 4,
    ACTIONS(1488), 1,
      sym__alpha_num_token,
    STATE(402), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1381), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15565] = 4,
    ACTIONS(1491), 1,
      sym__alpha_num_token,
    STATE(402), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1493), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15581] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(920), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15593] = 4,
    ACTIONS(1495), 1,
      ts_builtin_sym_end,
    STATE(405), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1497), 2,
      anon_sym_SEMI,
      sym__newline,
  [15608] = 5,
    ACTIONS(1500), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(296), 1,
      sym_flow_vertex,
    STATE(340), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15625] = 3,
    STATE(721), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(820), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15638] = 4,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
    STATE(405), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1502), 2,
      anon_sym_SEMI,
      sym__newline,
  [15653] = 4,
    ACTIONS(1220), 1,
      ts_builtin_sym_end,
    STATE(408), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1504), 2,
      anon_sym_SEMI,
      sym__newline,
  [15668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1506), 1,
      sym__actor_word,
    STATE(410), 1,
      aux_sym_actor_repeat1,
    ACTIONS(936), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [15685] = 4,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    STATE(405), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1509), 2,
      anon_sym_SEMI,
      sym__newline,
  [15700] = 4,
    ACTIONS(1220), 1,
      ts_builtin_sym_end,
    STATE(405), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1504), 2,
      anon_sym_SEMI,
      sym__newline,
  [15715] = 4,
    ACTIONS(1511), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1513), 2,
      anon_sym_SEMI,
      sym__newline,
  [15730] = 4,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    STATE(412), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1509), 2,
      anon_sym_SEMI,
      sym__newline,
  [15745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1517), 1,
      aux_sym_class_label_token1,
    STATE(567), 1,
      sym_class_label,
    ACTIONS(1515), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15762] = 5,
    ACTIONS(814), 1,
      anon_sym_DASH_DASH,
    ACTIONS(816), 1,
      sym_class_linetype_dotted,
    STATE(271), 1,
      sym__class_linetype,
    STATE(342), 1,
      sym_class_linetype_solid,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1519), 1,
      sym__actor_word,
    STATE(410), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1075), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [15796] = 4,
    ACTIONS(1521), 1,
      aux_sym_flow_text_literal_token1,
    STATE(419), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1109), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [15811] = 4,
    ACTIONS(1523), 1,
      aux_sym_flow_text_literal_token1,
    STATE(419), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1168), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [15826] = 3,
    ACTIONS(1526), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1133), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [15839] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1140), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(870), 1,
      aux_sym_class_label_token1,
    STATE(219), 1,
      sym_state_description,
    ACTIONS(866), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15867] = 4,
    ACTIONS(1530), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1532), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1528), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15882] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1144), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1517), 1,
      aux_sym_class_label_token1,
    STATE(593), 1,
      sym_class_label,
    ACTIONS(1534), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15910] = 3,
    STATE(345), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1536), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [15923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1517), 1,
      aux_sym_class_label_token1,
    STATE(576), 1,
      sym_class_label,
    ACTIONS(1538), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15940] = 3,
    STATE(346), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1540), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [15953] = 3,
    STATE(347), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1542), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [15966] = 3,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1544), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [15979] = 3,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1546), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [15992] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1548), 1,
      sym__newline,
    STATE(460), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1552), 1,
      sym__actor_word,
    ACTIONS(1550), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [16020] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1554), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16030] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1556), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16040] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1558), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16050] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1560), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16060] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1562), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16070] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1564), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16080] = 3,
    ACTIONS(1566), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1538), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16092] = 4,
    ACTIONS(1568), 1,
      ts_builtin_sym_end,
    ACTIONS(1570), 1,
      sym__newline,
    STATE(441), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(811), 1,
      sym_actor,
  [16122] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1573), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16132] = 4,
    ACTIONS(1575), 1,
      anon_sym_COLON,
    ACTIONS(1577), 1,
      aux_sym_gantt_task_text_token1,
    STATE(444), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(810), 1,
      sym_actor,
  [16162] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(808), 1,
      sym_actor,
  [16188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(585), 1,
      sym_actor,
  [16204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(796), 1,
      sym_actor,
  [16220] = 4,
    ACTIONS(1582), 1,
      anon_sym_RBRACE,
    ACTIONS(1584), 1,
      sym__newline,
    STATE(466), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(795), 1,
      sym_actor,
  [16250] = 3,
    ACTIONS(1588), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16262] = 4,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    ACTIONS(1590), 1,
      sym__newline,
    STATE(455), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(793), 1,
      sym_actor,
  [16292] = 4,
    ACTIONS(1592), 1,
      anon_sym_RBRACE,
    ACTIONS(1594), 1,
      sym__newline,
    STATE(455), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(594), 1,
      sym_actor,
  [16322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(781), 1,
      sym_actor,
  [16338] = 4,
    ACTIONS(1597), 1,
      ts_builtin_sym_end,
    ACTIONS(1599), 1,
      sym__newline,
    STATE(458), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(780), 1,
      sym_actor,
  [16368] = 4,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(1602), 1,
      sym__newline,
    STATE(458), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(744), 1,
      sym_actor,
  [16398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(778), 1,
      sym_actor,
  [16414] = 4,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(1604), 1,
      sym__newline,
    STATE(476), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(602), 1,
      sym_actor,
  [16444] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1606), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16454] = 4,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(1604), 1,
      sym__newline,
    STATE(455), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(749), 1,
      sym_actor,
  [16484] = 4,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    ACTIONS(1608), 1,
      sym__newline,
    STATE(455), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16498] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(748), 1,
      sym_actor,
  [16514] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(747), 1,
      sym_actor,
  [16530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(746), 1,
      sym_actor,
  [16546] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1610), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16556] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(727), 1,
      sym_actor,
  [16572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(726), 1,
      sym_actor,
  [16588] = 4,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    ACTIONS(1608), 1,
      sym__newline,
    STATE(453), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16602] = 4,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    ACTIONS(1612), 1,
      sym__newline,
    STATE(455), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(725), 1,
      sym_actor,
  [16632] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1614), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(724), 1,
      sym_actor,
  [16658] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1087), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [16668] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(703), 1,
      sym_actor,
  [16684] = 4,
    ACTIONS(1616), 1,
      sym__class_name,
    ACTIONS(1619), 1,
      sym__bquote_string,
    STATE(482), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(702), 1,
      sym_actor,
  [16714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(701), 1,
      sym_actor,
  [16730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(700), 1,
      sym_actor,
  [16746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(696), 1,
      sym_actor,
  [16762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(697), 1,
      sym_actor,
  [16778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(664), 1,
      sym_actor,
  [16794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(663), 1,
      sym_actor,
  [16810] = 4,
    ACTIONS(1623), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1625), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16824] = 4,
    ACTIONS(1628), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1630), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16838] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1633), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(737), 1,
      sym_actor,
  [16864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(738), 1,
      sym_actor,
  [16880] = 3,
    STATE(217), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1635), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(636), 1,
      sym_actor,
  [16908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(635), 1,
      sym_actor,
  [16924] = 3,
    STATE(761), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(774), 1,
      sym_actor,
  [16952] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1637), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(777), 1,
      sym_actor,
  [16978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(606), 1,
      sym_actor,
  [16994] = 4,
    ACTIONS(1639), 1,
      sym__alpha_num_token,
    STATE(403), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(407), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17008] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1641), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [17018] = 3,
    ACTIONS(1643), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1515), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17030] = 4,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    ACTIONS(1645), 1,
      sym__newline,
    STATE(441), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(605), 1,
      sym_actor,
  [17060] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1349), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(837), 1,
      sym_actor,
  [17086] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1647), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17100] = 4,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1649), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(588), 1,
      sym_actor,
  [17130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1621), 1,
      sym__actor_word,
    STATE(417), 1,
      aux_sym_actor_repeat1,
    STATE(587), 1,
      sym_actor,
  [17146] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1651), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17156] = 4,
    ACTIONS(1462), 1,
      sym__alpha_num_token,
    ACTIONS(1493), 1,
      anon_sym_PIPE,
    STATE(356), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(807), 1,
      sym_actor,
  [17186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(812), 1,
      sym_actor,
  [17202] = 4,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(1602), 1,
      sym__newline,
    STATE(537), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(819), 1,
      sym_actor,
  [17232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(820), 1,
      sym_actor,
  [17248] = 4,
    ACTIONS(1653), 1,
      sym__class_name,
    ACTIONS(1655), 1,
      sym__bquote_string,
    STATE(482), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17262] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1657), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17276] = 4,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1659), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(821), 1,
      sym_actor,
  [17306] = 4,
    ACTIONS(1661), 1,
      anon_sym_RBRACE,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(468), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(823), 1,
      sym_actor,
  [17336] = 4,
    ACTIONS(1655), 1,
      sym__bquote_string,
    ACTIONS(1665), 1,
      sym__class_name,
    STATE(482), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17350] = 3,
    ACTIONS(1669), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1667), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17362] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1671), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17376] = 4,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1673), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17390] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1675), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17404] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1677), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17414] = 4,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1679), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17428] = 4,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
    ACTIONS(1645), 1,
      sym__newline,
    STATE(538), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17442] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1681), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17452] = 4,
    ACTIONS(1683), 1,
      ts_builtin_sym_end,
    ACTIONS(1685), 1,
      sym__newline,
    STATE(548), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17466] = 4,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    ACTIONS(1687), 1,
      sym__newline,
    STATE(458), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17480] = 4,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
    ACTIONS(1689), 1,
      sym__newline,
    STATE(441), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17494] = 4,
    ACTIONS(1691), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(815), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17508] = 4,
    ACTIONS(1500), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(335), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17522] = 4,
    ACTIONS(1693), 1,
      anon_sym_COLON,
    ACTIONS(1695), 1,
      aux_sym_gantt_task_text_token1,
    STATE(444), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17536] = 4,
    ACTIONS(1653), 1,
      sym__class_name,
    ACTIONS(1697), 1,
      sym__bquote_string,
    STATE(482), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17550] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1495), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17560] = 4,
    ACTIONS(1699), 1,
      sym__alpha_num_token,
    STATE(515), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(720), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(667), 1,
      sym_actor,
  [17590] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__actor_word,
    STATE(269), 1,
      aux_sym_actor_repeat1,
    STATE(681), 1,
      sym_actor,
  [17606] = 4,
    ACTIONS(1701), 1,
      ts_builtin_sym_end,
    ACTIONS(1703), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17620] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1548), 1,
      sym__newline,
    STATE(458), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1707), 1,
      sym__actor_word,
    ACTIONS(1705), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1711), 1,
      sym__actor_word,
    ACTIONS(1709), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17662] = 3,
    STATE(798), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17674] = 4,
    ACTIONS(1655), 1,
      sym__bquote_string,
    ACTIONS(1713), 1,
      sym__class_name,
    STATE(482), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17688] = 3,
    STATE(217), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(709), 1,
      sym__rest_text,
  [17713] = 3,
    ACTIONS(1717), 1,
      anon_sym_COLON,
    ACTIONS(1719), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(262), 1,
      sym_gantt_meta_format,
  [17737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(264), 1,
      sym_gantt_meta_format,
  [17750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(266), 1,
      sym_gantt_meta_format,
  [17763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(268), 1,
      sym_gantt_meta_format,
  [17776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(270), 1,
      sym_gantt_meta_format,
  [17789] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1723), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(870), 1,
      aux_sym_class_label_token1,
    STATE(224), 1,
      sym_state_description,
  [17811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(743), 1,
      sym__rest_text,
  [17824] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1568), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17833] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1725), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(755), 1,
      sym__rest_text,
  [17855] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1538), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17864] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1727), 2,
      anon_sym_SEMI,
      sym__newline,
  [17873] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1729), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(806), 1,
      sym__rest_text,
  [17895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(805), 1,
      sym__rest_text,
  [17908] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1731), 2,
      anon_sym_RBRACE,
      sym__newline,
  [17917] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1733), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17926] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1592), 2,
      anon_sym_RBRACE,
      sym__newline,
  [17935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(684), 1,
      sym__rest_text,
  [17948] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1534), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(791), 1,
      sym__rest_text,
  [17970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(790), 1,
      sym__rest_text,
  [17983] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1597), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17992] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1735), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18001] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1737), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(776), 1,
      sym__rest_text,
  [18023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(775), 1,
      sym__rest_text,
  [18036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(248), 1,
      sym_gantt_meta_format,
  [18049] = 3,
    ACTIONS(1739), 1,
      anon_sym_COLON,
    ACTIONS(1741), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(753), 1,
      sym__rest_text,
  [18073] = 3,
    ACTIONS(1743), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1745), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18084] = 3,
    ACTIONS(1747), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1749), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(752), 1,
      sym__rest_text,
  [18108] = 3,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(751), 1,
      sym__rest_text,
  [18132] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1751), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18141] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1753), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18150] = 3,
    ACTIONS(1755), 1,
      anon_sym_COLON,
    ACTIONS(1757), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(731), 1,
      sym__rest_text,
  [18174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(730), 1,
      sym__rest_text,
  [18187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(729), 1,
      sym__rest_text,
  [18200] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1759), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18209] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1761), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18218] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1763), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(245), 1,
      sym_gantt_meta_format,
  [18240] = 3,
    ACTIONS(1765), 1,
      anon_sym_COLON,
    ACTIONS(1767), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18251] = 3,
    ACTIONS(1769), 1,
      anon_sym_COLON,
    ACTIONS(1771), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(240), 1,
      sym_gantt_meta_format,
  [18275] = 3,
    ACTIONS(1773), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1775), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18286] = 3,
    ACTIONS(1777), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1779), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18297] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1781), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(707), 1,
      sym__rest_text,
  [18319] = 3,
    ACTIONS(1783), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1785), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(706), 1,
      sym__rest_text,
  [18343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1787), 1,
      aux_sym__rest_text_token1,
    STATE(173), 1,
      sym__rest_text,
  [18356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1787), 1,
      aux_sym__rest_text_token1,
    STATE(172), 1,
      sym__rest_text,
  [18369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1787), 1,
      aux_sym__rest_text_token1,
    STATE(170), 1,
      sym__rest_text,
  [18382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1787), 1,
      aux_sym__rest_text_token1,
    STATE(169), 1,
      sym__rest_text,
  [18395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(705), 1,
      sym__rest_text,
  [18408] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1789), 2,
      anon_sym_SEMI,
      sym__newline,
  [18417] = 3,
    ACTIONS(1791), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1793), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(690), 1,
      sym__rest_text,
  [18441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(689), 1,
      sym__rest_text,
  [18454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(688), 1,
      sym__rest_text,
  [18467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(685), 1,
      sym__rest_text,
  [18480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(683), 1,
      sym__rest_text,
  [18493] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1795), 2,
      anon_sym_SEMI,
      sym__newline,
  [18502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(832), 1,
      sym__rest_text,
  [18515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(870), 1,
      aux_sym_class_label_token1,
    STATE(232), 1,
      sym_state_description,
  [18528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(682), 1,
      sym__rest_text,
  [18541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(680), 1,
      sym__rest_text,
  [18554] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1797), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18563] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1799), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18572] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1801), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(829), 1,
      sym__rest_text,
  [18594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(704), 1,
      sym__rest_text,
  [18607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(708), 1,
      sym__rest_text,
  [18620] = 3,
    ACTIONS(1803), 1,
      anon_sym_COLON,
    ACTIONS(1805), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18631] = 3,
    ACTIONS(1807), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1809), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18642] = 3,
    ACTIONS(1811), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1813), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18653] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1815), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [18662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(710), 1,
      sym__rest_text,
  [18675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(768), 1,
      sym__rest_text,
  [18688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(717), 1,
      sym__rest_text,
  [18701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1817), 1,
      aux_sym__rest_text_token1,
    STATE(120), 1,
      sym__rest_text,
  [18714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1817), 1,
      aux_sym__rest_text_token1,
    STATE(119), 1,
      sym__rest_text,
  [18727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1817), 1,
      aux_sym__rest_text_token1,
    STATE(118), 1,
      sym__rest_text,
  [18740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1817), 1,
      aux_sym__rest_text_token1,
    STATE(117), 1,
      sym__rest_text,
  [18753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(728), 1,
      sym__rest_text,
  [18766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(733), 1,
      sym__rest_text,
  [18779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(830), 1,
      sym__rest_text,
  [18792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(827), 1,
      sym__rest_text,
  [18805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(739), 1,
      sym__rest_text,
  [18818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(741), 1,
      sym__rest_text,
  [18831] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(826), 1,
      sym__rest_text,
  [18844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(825), 1,
      sym__rest_text,
  [18857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(742), 1,
      sym__rest_text,
  [18870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(750), 1,
      sym__rest_text,
  [18883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(679), 1,
      sym__rest_text,
  [18896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(760), 1,
      sym__rest_text,
  [18909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(714), 1,
      sym__rest_text,
  [18922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(711), 1,
      sym__rest_text,
  [18935] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1819), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1715), 1,
      aux_sym__rest_text_token1,
    STATE(772), 1,
      sym__rest_text,
  [18957] = 3,
    ACTIONS(1821), 1,
      anon_sym_PIPE,
    ACTIONS(1823), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18968] = 3,
    ACTIONS(1825), 1,
      anon_sym_COLON,
    ACTIONS(1827), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18979] = 3,
    ACTIONS(1829), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1831), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18990] = 3,
    ACTIONS(1833), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1835), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1721), 1,
      aux_sym__rest_text_token1,
    STATE(256), 1,
      sym_gantt_meta_format,
  [19014] = 3,
    ACTIONS(1837), 1,
      anon_sym_COLON,
    ACTIONS(1839), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19025] = 3,
    ACTIONS(1841), 1,
      anon_sym_COLON,
    ACTIONS(1843), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1845), 1,
      aux_sym__rest_text_token1,
    STATE(183), 1,
      sym__rest_text,
  [19049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(112), 1,
      sym__rest_text,
  [19062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(102), 1,
      sym__rest_text,
  [19075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(106), 1,
      sym__rest_text,
  [19088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(107), 1,
      sym__rest_text,
  [19101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1845), 1,
      aux_sym__rest_text_token1,
    STATE(182), 1,
      sym__rest_text,
  [19114] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1849), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1845), 1,
      aux_sym__rest_text_token1,
    STATE(187), 1,
      sym__rest_text,
  [19136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1845), 1,
      aux_sym__rest_text_token1,
    STATE(186), 1,
      sym__rest_text,
  [19149] = 3,
    ACTIONS(1851), 1,
      anon_sym_COLON,
    ACTIONS(1853), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19160] = 2,
    ACTIONS(1855), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19168] = 2,
    ACTIONS(1857), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19176] = 2,
    ACTIONS(1859), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19184] = 2,
    ACTIONS(1841), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19192] = 2,
    ACTIONS(1861), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19200] = 2,
    ACTIONS(1863), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19208] = 2,
    ACTIONS(1865), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19216] = 2,
    ACTIONS(1867), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1869), 1,
      sym__actor_word,
  [19234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(1871), 1,
      sym__actor_word,
  [19244] = 2,
    ACTIONS(1873), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19252] = 2,
    ACTIONS(1875), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19260] = 2,
    ACTIONS(1877), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19268] = 2,
    ACTIONS(1879), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19276] = 2,
    ACTIONS(1881), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19284] = 2,
    ACTIONS(1883), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19292] = 2,
    ACTIONS(1885), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19300] = 2,
    ACTIONS(1887), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19308] = 2,
    ACTIONS(1889), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19316] = 2,
    ACTIONS(1891), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19324] = 2,
    ACTIONS(1893), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19332] = 2,
    ACTIONS(1895), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19340] = 2,
    ACTIONS(1897), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19348] = 2,
    ACTIONS(1899), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19356] = 2,
    ACTIONS(1901), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19364] = 2,
    ACTIONS(1903), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19372] = 2,
    ACTIONS(1905), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19380] = 2,
    ACTIONS(1907), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19388] = 2,
    ACTIONS(1909), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19396] = 2,
    ACTIONS(1911), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19404] = 2,
    ACTIONS(1913), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19412] = 2,
    ACTIONS(1915), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19420] = 2,
    ACTIONS(1917), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19428] = 2,
    ACTIONS(1919), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19436] = 2,
    ACTIONS(1921), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19444] = 2,
    ACTIONS(1923), 1,
      aux_sym_class_generics_token1,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19452] = 2,
    ACTIONS(1925), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19460] = 2,
    ACTIONS(1927), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19468] = 2,
    ACTIONS(1929), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19476] = 2,
    ACTIONS(1931), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19484] = 2,
    ACTIONS(1933), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19492] = 2,
    ACTIONS(1935), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19500] = 2,
    ACTIONS(1937), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19508] = 2,
    ACTIONS(1939), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19516] = 2,
    ACTIONS(1941), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19524] = 2,
    ACTIONS(1943), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19532] = 2,
    ACTIONS(1945), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19540] = 2,
    ACTIONS(1947), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19548] = 2,
    ACTIONS(1949), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19556] = 2,
    ACTIONS(1951), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19564] = 2,
    ACTIONS(1953), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19572] = 2,
    ACTIONS(1955), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19580] = 2,
    ACTIONS(1957), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19588] = 2,
    ACTIONS(1959), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19596] = 2,
    ACTIONS(1961), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19604] = 2,
    ACTIONS(1963), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19612] = 2,
    ACTIONS(1965), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19620] = 2,
    ACTIONS(1967), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19628] = 2,
    ACTIONS(1969), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19636] = 2,
    ACTIONS(1971), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19644] = 2,
    ACTIONS(1973), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19652] = 2,
    ACTIONS(1975), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19660] = 2,
    ACTIONS(1977), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19668] = 2,
    ACTIONS(1979), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19676] = 2,
    ACTIONS(1981), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19684] = 2,
    ACTIONS(1983), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19692] = 2,
    ACTIONS(1985), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19700] = 2,
    ACTIONS(1987), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19708] = 2,
    ACTIONS(1989), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19716] = 2,
    ACTIONS(1991), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19724] = 2,
    ACTIONS(1993), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19732] = 2,
    ACTIONS(1995), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19740] = 2,
    ACTIONS(1997), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19748] = 2,
    ACTIONS(1999), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19756] = 2,
    ACTIONS(2001), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19764] = 2,
    ACTIONS(2003), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19772] = 2,
    ACTIONS(2005), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19780] = 2,
    ACTIONS(2007), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19788] = 2,
    ACTIONS(2009), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19796] = 2,
    ACTIONS(2011), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19804] = 2,
    ACTIONS(2013), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19812] = 2,
    ACTIONS(2015), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19820] = 2,
    ACTIONS(2017), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19828] = 2,
    ACTIONS(2019), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19836] = 2,
    ACTIONS(2021), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19844] = 2,
    ACTIONS(2023), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19852] = 2,
    ACTIONS(2025), 1,
      sym_type_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19860] = 2,
    ACTIONS(2027), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(2029), 1,
      sym_pie_value,
  [19878] = 2,
    ACTIONS(2031), 1,
      aux_sym_class_generics_token1,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [19886] = 2,
    ACTIONS(2033), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19894] = 2,
    ACTIONS(2035), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19902] = 2,
    ACTIONS(2037), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19910] = 2,
    ACTIONS(2039), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19918] = 2,
    ACTIONS(2041), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19926] = 2,
    ACTIONS(2043), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19934] = 2,
    ACTIONS(2045), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19942] = 2,
    ACTIONS(2047), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19950] = 2,
    ACTIONS(2049), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19958] = 2,
    ACTIONS(2051), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19966] = 2,
    ACTIONS(1765), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19974] = 2,
    ACTIONS(2053), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19982] = 2,
    ACTIONS(2055), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19990] = 2,
    ACTIONS(2057), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19998] = 2,
    ACTIONS(2059), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20006] = 2,
    ACTIONS(2061), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20014] = 2,
    ACTIONS(2063), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20022] = 2,
    ACTIONS(2065), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20030] = 2,
    ACTIONS(2067), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20038] = 2,
    ACTIONS(2069), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20046] = 2,
    ACTIONS(2071), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20054] = 2,
    ACTIONS(2073), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20062] = 2,
    ACTIONS(2075), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20070] = 2,
    ACTIONS(2077), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20078] = 2,
    ACTIONS(2079), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20086] = 2,
    ACTIONS(1755), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20094] = 2,
    ACTIONS(2081), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20102] = 2,
    ACTIONS(2083), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20110] = 2,
    ACTIONS(2085), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20118] = 2,
    ACTIONS(2087), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20126] = 2,
    ACTIONS(2089), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20134] = 2,
    ACTIONS(2091), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20142] = 2,
    ACTIONS(2093), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20150] = 2,
    ACTIONS(2095), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20158] = 2,
    ACTIONS(2097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20166] = 2,
    ACTIONS(2099), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20174] = 2,
    ACTIONS(2101), 1,
      sym_arg_directive,
    ACTIONS(63), 2,
      sym__whitespace,
      sym_comment,
  [20182] = 2,
    ACTIONS(2103), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20190] = 2,
    ACTIONS(2105), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20198] = 2,
    ACTIONS(2107), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20206] = 2,
    ACTIONS(1739), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20214] = 2,
    ACTIONS(2109), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20222] = 2,
    ACTIONS(2111), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20230] = 2,
    ACTIONS(2113), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20238] = 2,
    ACTIONS(2115), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(2117), 1,
      sym__actor_word,
  [20256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(2119), 1,
      sym__actor_word,
  [20266] = 2,
    ACTIONS(2121), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20274] = 2,
    ACTIONS(2123), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20282] = 2,
    ACTIONS(2125), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(2127), 1,
      sym__actor_word,
  [20300] = 2,
    ACTIONS(2129), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20308] = 2,
    ACTIONS(2131), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20316] = 2,
    ACTIONS(2133), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20324] = 2,
    ACTIONS(2135), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20332] = 2,
    ACTIONS(2137), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20340] = 2,
    ACTIONS(702), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20348] = 2,
    ACTIONS(2139), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20356] = 2,
    ACTIONS(2141), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20364] = 2,
    ACTIONS(2143), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__whitespace,
    ACTIONS(2145), 1,
      sym_gantt_task_data,
  [20382] = 2,
    ACTIONS(2147), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20390] = 2,
    ACTIONS(2149), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20398] = 2,
    ACTIONS(2151), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20406] = 2,
    ACTIONS(2153), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20414] = 2,
    ACTIONS(2155), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20422] = 2,
    ACTIONS(2157), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20430] = 2,
    ACTIONS(2159), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20438] = 2,
    ACTIONS(2161), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20446] = 2,
    ACTIONS(2163), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20454] = 2,
    ACTIONS(2165), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 420,
  [SMALL_STATE(7)] = 525,
  [SMALL_STATE(8)] = 630,
  [SMALL_STATE(9)] = 735,
  [SMALL_STATE(10)] = 840,
  [SMALL_STATE(11)] = 940,
  [SMALL_STATE(12)] = 1040,
  [SMALL_STATE(13)] = 1140,
  [SMALL_STATE(14)] = 1240,
  [SMALL_STATE(15)] = 1339,
  [SMALL_STATE(16)] = 1438,
  [SMALL_STATE(17)] = 1537,
  [SMALL_STATE(18)] = 1636,
  [SMALL_STATE(19)] = 1735,
  [SMALL_STATE(20)] = 1834,
  [SMALL_STATE(21)] = 1933,
  [SMALL_STATE(22)] = 2032,
  [SMALL_STATE(23)] = 2131,
  [SMALL_STATE(24)] = 2230,
  [SMALL_STATE(25)] = 2329,
  [SMALL_STATE(26)] = 2428,
  [SMALL_STATE(27)] = 2525,
  [SMALL_STATE(28)] = 2624,
  [SMALL_STATE(29)] = 2721,
  [SMALL_STATE(30)] = 2820,
  [SMALL_STATE(31)] = 2917,
  [SMALL_STATE(32)] = 3014,
  [SMALL_STATE(33)] = 3113,
  [SMALL_STATE(34)] = 3212,
  [SMALL_STATE(35)] = 3311,
  [SMALL_STATE(36)] = 3410,
  [SMALL_STATE(37)] = 3507,
  [SMALL_STATE(38)] = 3606,
  [SMALL_STATE(39)] = 3705,
  [SMALL_STATE(40)] = 3804,
  [SMALL_STATE(41)] = 3903,
  [SMALL_STATE(42)] = 4002,
  [SMALL_STATE(43)] = 4101,
  [SMALL_STATE(44)] = 4200,
  [SMALL_STATE(45)] = 4296,
  [SMALL_STATE(46)] = 4392,
  [SMALL_STATE(47)] = 4488,
  [SMALL_STATE(48)] = 4584,
  [SMALL_STATE(49)] = 4680,
  [SMALL_STATE(50)] = 4776,
  [SMALL_STATE(51)] = 4872,
  [SMALL_STATE(52)] = 4968,
  [SMALL_STATE(53)] = 5064,
  [SMALL_STATE(54)] = 5160,
  [SMALL_STATE(55)] = 5238,
  [SMALL_STATE(56)] = 5305,
  [SMALL_STATE(57)] = 5370,
  [SMALL_STATE(58)] = 5435,
  [SMALL_STATE(59)] = 5500,
  [SMALL_STATE(60)] = 5567,
  [SMALL_STATE(61)] = 5634,
  [SMALL_STATE(62)] = 5699,
  [SMALL_STATE(63)] = 5764,
  [SMALL_STATE(64)] = 5831,
  [SMALL_STATE(65)] = 5898,
  [SMALL_STATE(66)] = 5959,
  [SMALL_STATE(67)] = 6020,
  [SMALL_STATE(68)] = 6081,
  [SMALL_STATE(69)] = 6142,
  [SMALL_STATE(70)] = 6203,
  [SMALL_STATE(71)] = 6264,
  [SMALL_STATE(72)] = 6325,
  [SMALL_STATE(73)] = 6386,
  [SMALL_STATE(74)] = 6447,
  [SMALL_STATE(75)] = 6508,
  [SMALL_STATE(76)] = 6566,
  [SMALL_STATE(77)] = 6624,
  [SMALL_STATE(78)] = 6682,
  [SMALL_STATE(79)] = 6740,
  [SMALL_STATE(80)] = 6798,
  [SMALL_STATE(81)] = 6830,
  [SMALL_STATE(82)] = 6862,
  [SMALL_STATE(83)] = 6894,
  [SMALL_STATE(84)] = 6926,
  [SMALL_STATE(85)] = 6958,
  [SMALL_STATE(86)] = 6990,
  [SMALL_STATE(87)] = 7022,
  [SMALL_STATE(88)] = 7054,
  [SMALL_STATE(89)] = 7086,
  [SMALL_STATE(90)] = 7118,
  [SMALL_STATE(91)] = 7150,
  [SMALL_STATE(92)] = 7182,
  [SMALL_STATE(93)] = 7214,
  [SMALL_STATE(94)] = 7246,
  [SMALL_STATE(95)] = 7278,
  [SMALL_STATE(96)] = 7310,
  [SMALL_STATE(97)] = 7342,
  [SMALL_STATE(98)] = 7374,
  [SMALL_STATE(99)] = 7406,
  [SMALL_STATE(100)] = 7438,
  [SMALL_STATE(101)] = 7470,
  [SMALL_STATE(102)] = 7502,
  [SMALL_STATE(103)] = 7534,
  [SMALL_STATE(104)] = 7566,
  [SMALL_STATE(105)] = 7598,
  [SMALL_STATE(106)] = 7630,
  [SMALL_STATE(107)] = 7662,
  [SMALL_STATE(108)] = 7694,
  [SMALL_STATE(109)] = 7726,
  [SMALL_STATE(110)] = 7758,
  [SMALL_STATE(111)] = 7790,
  [SMALL_STATE(112)] = 7822,
  [SMALL_STATE(113)] = 7854,
  [SMALL_STATE(114)] = 7886,
  [SMALL_STATE(115)] = 7918,
  [SMALL_STATE(116)] = 7950,
  [SMALL_STATE(117)] = 7982,
  [SMALL_STATE(118)] = 8014,
  [SMALL_STATE(119)] = 8046,
  [SMALL_STATE(120)] = 8078,
  [SMALL_STATE(121)] = 8110,
  [SMALL_STATE(122)] = 8142,
  [SMALL_STATE(123)] = 8174,
  [SMALL_STATE(124)] = 8206,
  [SMALL_STATE(125)] = 8238,
  [SMALL_STATE(126)] = 8270,
  [SMALL_STATE(127)] = 8302,
  [SMALL_STATE(128)] = 8334,
  [SMALL_STATE(129)] = 8366,
  [SMALL_STATE(130)] = 8398,
  [SMALL_STATE(131)] = 8430,
  [SMALL_STATE(132)] = 8462,
  [SMALL_STATE(133)] = 8494,
  [SMALL_STATE(134)] = 8526,
  [SMALL_STATE(135)] = 8558,
  [SMALL_STATE(136)] = 8590,
  [SMALL_STATE(137)] = 8622,
  [SMALL_STATE(138)] = 8654,
  [SMALL_STATE(139)] = 8686,
  [SMALL_STATE(140)] = 8718,
  [SMALL_STATE(141)] = 8750,
  [SMALL_STATE(142)] = 8782,
  [SMALL_STATE(143)] = 8814,
  [SMALL_STATE(144)] = 8845,
  [SMALL_STATE(145)] = 8876,
  [SMALL_STATE(146)] = 8907,
  [SMALL_STATE(147)] = 8938,
  [SMALL_STATE(148)] = 8969,
  [SMALL_STATE(149)] = 9000,
  [SMALL_STATE(150)] = 9031,
  [SMALL_STATE(151)] = 9062,
  [SMALL_STATE(152)] = 9093,
  [SMALL_STATE(153)] = 9124,
  [SMALL_STATE(154)] = 9155,
  [SMALL_STATE(155)] = 9186,
  [SMALL_STATE(156)] = 9217,
  [SMALL_STATE(157)] = 9248,
  [SMALL_STATE(158)] = 9279,
  [SMALL_STATE(159)] = 9310,
  [SMALL_STATE(160)] = 9341,
  [SMALL_STATE(161)] = 9372,
  [SMALL_STATE(162)] = 9403,
  [SMALL_STATE(163)] = 9434,
  [SMALL_STATE(164)] = 9465,
  [SMALL_STATE(165)] = 9496,
  [SMALL_STATE(166)] = 9527,
  [SMALL_STATE(167)] = 9558,
  [SMALL_STATE(168)] = 9589,
  [SMALL_STATE(169)] = 9620,
  [SMALL_STATE(170)] = 9651,
  [SMALL_STATE(171)] = 9682,
  [SMALL_STATE(172)] = 9713,
  [SMALL_STATE(173)] = 9744,
  [SMALL_STATE(174)] = 9775,
  [SMALL_STATE(175)] = 9806,
  [SMALL_STATE(176)] = 9837,
  [SMALL_STATE(177)] = 9868,
  [SMALL_STATE(178)] = 9899,
  [SMALL_STATE(179)] = 9930,
  [SMALL_STATE(180)] = 9961,
  [SMALL_STATE(181)] = 9992,
  [SMALL_STATE(182)] = 10023,
  [SMALL_STATE(183)] = 10054,
  [SMALL_STATE(184)] = 10085,
  [SMALL_STATE(185)] = 10116,
  [SMALL_STATE(186)] = 10147,
  [SMALL_STATE(187)] = 10178,
  [SMALL_STATE(188)] = 10209,
  [SMALL_STATE(189)] = 10240,
  [SMALL_STATE(190)] = 10271,
  [SMALL_STATE(191)] = 10302,
  [SMALL_STATE(192)] = 10333,
  [SMALL_STATE(193)] = 10364,
  [SMALL_STATE(194)] = 10395,
  [SMALL_STATE(195)] = 10426,
  [SMALL_STATE(196)] = 10457,
  [SMALL_STATE(197)] = 10488,
  [SMALL_STATE(198)] = 10519,
  [SMALL_STATE(199)] = 10550,
  [SMALL_STATE(200)] = 10581,
  [SMALL_STATE(201)] = 10612,
  [SMALL_STATE(202)] = 10643,
  [SMALL_STATE(203)] = 10674,
  [SMALL_STATE(204)] = 10705,
  [SMALL_STATE(205)] = 10755,
  [SMALL_STATE(206)] = 10792,
  [SMALL_STATE(207)] = 10829,
  [SMALL_STATE(208)] = 10862,
  [SMALL_STATE(209)] = 10899,
  [SMALL_STATE(210)] = 10932,
  [SMALL_STATE(211)] = 10963,
  [SMALL_STATE(212)] = 10993,
  [SMALL_STATE(213)] = 11037,
  [SMALL_STATE(214)] = 11061,
  [SMALL_STATE(215)] = 11091,
  [SMALL_STATE(216)] = 11120,
  [SMALL_STATE(217)] = 11143,
  [SMALL_STATE(218)] = 11168,
  [SMALL_STATE(219)] = 11195,
  [SMALL_STATE(220)] = 11217,
  [SMALL_STATE(221)] = 11257,
  [SMALL_STATE(222)] = 11289,
  [SMALL_STATE(223)] = 11311,
  [SMALL_STATE(224)] = 11351,
  [SMALL_STATE(225)] = 11373,
  [SMALL_STATE(226)] = 11395,
  [SMALL_STATE(227)] = 11417,
  [SMALL_STATE(228)] = 11439,
  [SMALL_STATE(229)] = 11465,
  [SMALL_STATE(230)] = 11487,
  [SMALL_STATE(231)] = 11515,
  [SMALL_STATE(232)] = 11553,
  [SMALL_STATE(233)] = 11575,
  [SMALL_STATE(234)] = 11597,
  [SMALL_STATE(235)] = 11619,
  [SMALL_STATE(236)] = 11641,
  [SMALL_STATE(237)] = 11663,
  [SMALL_STATE(238)] = 11685,
  [SMALL_STATE(239)] = 11707,
  [SMALL_STATE(240)] = 11729,
  [SMALL_STATE(241)] = 11751,
  [SMALL_STATE(242)] = 11773,
  [SMALL_STATE(243)] = 11795,
  [SMALL_STATE(244)] = 11817,
  [SMALL_STATE(245)] = 11839,
  [SMALL_STATE(246)] = 11861,
  [SMALL_STATE(247)] = 11883,
  [SMALL_STATE(248)] = 11905,
  [SMALL_STATE(249)] = 11927,
  [SMALL_STATE(250)] = 11967,
  [SMALL_STATE(251)] = 11989,
  [SMALL_STATE(252)] = 12011,
  [SMALL_STATE(253)] = 12033,
  [SMALL_STATE(254)] = 12055,
  [SMALL_STATE(255)] = 12077,
  [SMALL_STATE(256)] = 12099,
  [SMALL_STATE(257)] = 12121,
  [SMALL_STATE(258)] = 12143,
  [SMALL_STATE(259)] = 12165,
  [SMALL_STATE(260)] = 12191,
  [SMALL_STATE(261)] = 12227,
  [SMALL_STATE(262)] = 12249,
  [SMALL_STATE(263)] = 12271,
  [SMALL_STATE(264)] = 12309,
  [SMALL_STATE(265)] = 12331,
  [SMALL_STATE(266)] = 12353,
  [SMALL_STATE(267)] = 12375,
  [SMALL_STATE(268)] = 12397,
  [SMALL_STATE(269)] = 12419,
  [SMALL_STATE(270)] = 12447,
  [SMALL_STATE(271)] = 12469,
  [SMALL_STATE(272)] = 12505,
  [SMALL_STATE(273)] = 12543,
  [SMALL_STATE(274)] = 12580,
  [SMALL_STATE(275)] = 12617,
  [SMALL_STATE(276)] = 12642,
  [SMALL_STATE(277)] = 12679,
  [SMALL_STATE(278)] = 12714,
  [SMALL_STATE(279)] = 12751,
  [SMALL_STATE(280)] = 12788,
  [SMALL_STATE(281)] = 12807,
  [SMALL_STATE(282)] = 12828,
  [SMALL_STATE(283)] = 12849,
  [SMALL_STATE(284)] = 12884,
  [SMALL_STATE(285)] = 12921,
  [SMALL_STATE(286)] = 12958,
  [SMALL_STATE(287)] = 12979,
  [SMALL_STATE(288)] = 13016,
  [SMALL_STATE(289)] = 13051,
  [SMALL_STATE(290)] = 13078,
  [SMALL_STATE(291)] = 13113,
  [SMALL_STATE(292)] = 13150,
  [SMALL_STATE(293)] = 13175,
  [SMALL_STATE(294)] = 13212,
  [SMALL_STATE(295)] = 13247,
  [SMALL_STATE(296)] = 13286,
  [SMALL_STATE(297)] = 13310,
  [SMALL_STATE(298)] = 13344,
  [SMALL_STATE(299)] = 13372,
  [SMALL_STATE(300)] = 13396,
  [SMALL_STATE(301)] = 13430,
  [SMALL_STATE(302)] = 13458,
  [SMALL_STATE(303)] = 13492,
  [SMALL_STATE(304)] = 13526,
  [SMALL_STATE(305)] = 13550,
  [SMALL_STATE(306)] = 13584,
  [SMALL_STATE(307)] = 13612,
  [SMALL_STATE(308)] = 13646,
  [SMALL_STATE(309)] = 13674,
  [SMALL_STATE(310)] = 13708,
  [SMALL_STATE(311)] = 13742,
  [SMALL_STATE(312)] = 13776,
  [SMALL_STATE(313)] = 13805,
  [SMALL_STATE(314)] = 13824,
  [SMALL_STATE(315)] = 13855,
  [SMALL_STATE(316)] = 13874,
  [SMALL_STATE(317)] = 13893,
  [SMALL_STATE(318)] = 13922,
  [SMALL_STATE(319)] = 13951,
  [SMALL_STATE(320)] = 13970,
  [SMALL_STATE(321)] = 13989,
  [SMALL_STATE(322)] = 14008,
  [SMALL_STATE(323)] = 14037,
  [SMALL_STATE(324)] = 14056,
  [SMALL_STATE(325)] = 14087,
  [SMALL_STATE(326)] = 14106,
  [SMALL_STATE(327)] = 14125,
  [SMALL_STATE(328)] = 14144,
  [SMALL_STATE(329)] = 14163,
  [SMALL_STATE(330)] = 14182,
  [SMALL_STATE(331)] = 14201,
  [SMALL_STATE(332)] = 14220,
  [SMALL_STATE(333)] = 14251,
  [SMALL_STATE(334)] = 14270,
  [SMALL_STATE(335)] = 14289,
  [SMALL_STATE(336)] = 14308,
  [SMALL_STATE(337)] = 14337,
  [SMALL_STATE(338)] = 14366,
  [SMALL_STATE(339)] = 14385,
  [SMALL_STATE(340)] = 14409,
  [SMALL_STATE(341)] = 14427,
  [SMALL_STATE(342)] = 14445,
  [SMALL_STATE(343)] = 14463,
  [SMALL_STATE(344)] = 14483,
  [SMALL_STATE(345)] = 14513,
  [SMALL_STATE(346)] = 14537,
  [SMALL_STATE(347)] = 14561,
  [SMALL_STATE(348)] = 14585,
  [SMALL_STATE(349)] = 14609,
  [SMALL_STATE(350)] = 14635,
  [SMALL_STATE(351)] = 14651,
  [SMALL_STATE(352)] = 14677,
  [SMALL_STATE(353)] = 14693,
  [SMALL_STATE(354)] = 14719,
  [SMALL_STATE(355)] = 14745,
  [SMALL_STATE(356)] = 14760,
  [SMALL_STATE(357)] = 14777,
  [SMALL_STATE(358)] = 14798,
  [SMALL_STATE(359)] = 14821,
  [SMALL_STATE(360)] = 14836,
  [SMALL_STATE(361)] = 14853,
  [SMALL_STATE(362)] = 14874,
  [SMALL_STATE(363)] = 14895,
  [SMALL_STATE(364)] = 14910,
  [SMALL_STATE(365)] = 14925,
  [SMALL_STATE(366)] = 14940,
  [SMALL_STATE(367)] = 14959,
  [SMALL_STATE(368)] = 14980,
  [SMALL_STATE(369)] = 15003,
  [SMALL_STATE(370)] = 15024,
  [SMALL_STATE(371)] = 15039,
  [SMALL_STATE(372)] = 15051,
  [SMALL_STATE(373)] = 15071,
  [SMALL_STATE(374)] = 15091,
  [SMALL_STATE(375)] = 15103,
  [SMALL_STATE(376)] = 15121,
  [SMALL_STATE(377)] = 15139,
  [SMALL_STATE(378)] = 15157,
  [SMALL_STATE(379)] = 15169,
  [SMALL_STATE(380)] = 15187,
  [SMALL_STATE(381)] = 15205,
  [SMALL_STATE(382)] = 15223,
  [SMALL_STATE(383)] = 15235,
  [SMALL_STATE(384)] = 15253,
  [SMALL_STATE(385)] = 15265,
  [SMALL_STATE(386)] = 15283,
  [SMALL_STATE(387)] = 15303,
  [SMALL_STATE(388)] = 15315,
  [SMALL_STATE(389)] = 15331,
  [SMALL_STATE(390)] = 15351,
  [SMALL_STATE(391)] = 15369,
  [SMALL_STATE(392)] = 15387,
  [SMALL_STATE(393)] = 15405,
  [SMALL_STATE(394)] = 15423,
  [SMALL_STATE(395)] = 15441,
  [SMALL_STATE(396)] = 15459,
  [SMALL_STATE(397)] = 15477,
  [SMALL_STATE(398)] = 15495,
  [SMALL_STATE(399)] = 15507,
  [SMALL_STATE(400)] = 15525,
  [SMALL_STATE(401)] = 15537,
  [SMALL_STATE(402)] = 15549,
  [SMALL_STATE(403)] = 15565,
  [SMALL_STATE(404)] = 15581,
  [SMALL_STATE(405)] = 15593,
  [SMALL_STATE(406)] = 15608,
  [SMALL_STATE(407)] = 15625,
  [SMALL_STATE(408)] = 15638,
  [SMALL_STATE(409)] = 15653,
  [SMALL_STATE(410)] = 15668,
  [SMALL_STATE(411)] = 15685,
  [SMALL_STATE(412)] = 15700,
  [SMALL_STATE(413)] = 15715,
  [SMALL_STATE(414)] = 15730,
  [SMALL_STATE(415)] = 15745,
  [SMALL_STATE(416)] = 15762,
  [SMALL_STATE(417)] = 15779,
  [SMALL_STATE(418)] = 15796,
  [SMALL_STATE(419)] = 15811,
  [SMALL_STATE(420)] = 15826,
  [SMALL_STATE(421)] = 15839,
  [SMALL_STATE(422)] = 15850,
  [SMALL_STATE(423)] = 15867,
  [SMALL_STATE(424)] = 15882,
  [SMALL_STATE(425)] = 15893,
  [SMALL_STATE(426)] = 15910,
  [SMALL_STATE(427)] = 15923,
  [SMALL_STATE(428)] = 15940,
  [SMALL_STATE(429)] = 15953,
  [SMALL_STATE(430)] = 15966,
  [SMALL_STATE(431)] = 15979,
  [SMALL_STATE(432)] = 15992,
  [SMALL_STATE(433)] = 16006,
  [SMALL_STATE(434)] = 16020,
  [SMALL_STATE(435)] = 16030,
  [SMALL_STATE(436)] = 16040,
  [SMALL_STATE(437)] = 16050,
  [SMALL_STATE(438)] = 16060,
  [SMALL_STATE(439)] = 16070,
  [SMALL_STATE(440)] = 16080,
  [SMALL_STATE(441)] = 16092,
  [SMALL_STATE(442)] = 16106,
  [SMALL_STATE(443)] = 16122,
  [SMALL_STATE(444)] = 16132,
  [SMALL_STATE(445)] = 16146,
  [SMALL_STATE(446)] = 16162,
  [SMALL_STATE(447)] = 16172,
  [SMALL_STATE(448)] = 16188,
  [SMALL_STATE(449)] = 16204,
  [SMALL_STATE(450)] = 16220,
  [SMALL_STATE(451)] = 16234,
  [SMALL_STATE(452)] = 16250,
  [SMALL_STATE(453)] = 16262,
  [SMALL_STATE(454)] = 16276,
  [SMALL_STATE(455)] = 16292,
  [SMALL_STATE(456)] = 16306,
  [SMALL_STATE(457)] = 16322,
  [SMALL_STATE(458)] = 16338,
  [SMALL_STATE(459)] = 16352,
  [SMALL_STATE(460)] = 16368,
  [SMALL_STATE(461)] = 16382,
  [SMALL_STATE(462)] = 16398,
  [SMALL_STATE(463)] = 16414,
  [SMALL_STATE(464)] = 16428,
  [SMALL_STATE(465)] = 16444,
  [SMALL_STATE(466)] = 16454,
  [SMALL_STATE(467)] = 16468,
  [SMALL_STATE(468)] = 16484,
  [SMALL_STATE(469)] = 16498,
  [SMALL_STATE(470)] = 16514,
  [SMALL_STATE(471)] = 16530,
  [SMALL_STATE(472)] = 16546,
  [SMALL_STATE(473)] = 16556,
  [SMALL_STATE(474)] = 16572,
  [SMALL_STATE(475)] = 16588,
  [SMALL_STATE(476)] = 16602,
  [SMALL_STATE(477)] = 16616,
  [SMALL_STATE(478)] = 16632,
  [SMALL_STATE(479)] = 16642,
  [SMALL_STATE(480)] = 16658,
  [SMALL_STATE(481)] = 16668,
  [SMALL_STATE(482)] = 16684,
  [SMALL_STATE(483)] = 16698,
  [SMALL_STATE(484)] = 16714,
  [SMALL_STATE(485)] = 16730,
  [SMALL_STATE(486)] = 16746,
  [SMALL_STATE(487)] = 16762,
  [SMALL_STATE(488)] = 16778,
  [SMALL_STATE(489)] = 16794,
  [SMALL_STATE(490)] = 16810,
  [SMALL_STATE(491)] = 16824,
  [SMALL_STATE(492)] = 16838,
  [SMALL_STATE(493)] = 16848,
  [SMALL_STATE(494)] = 16864,
  [SMALL_STATE(495)] = 16880,
  [SMALL_STATE(496)] = 16892,
  [SMALL_STATE(497)] = 16908,
  [SMALL_STATE(498)] = 16924,
  [SMALL_STATE(499)] = 16936,
  [SMALL_STATE(500)] = 16952,
  [SMALL_STATE(501)] = 16962,
  [SMALL_STATE(502)] = 16978,
  [SMALL_STATE(503)] = 16994,
  [SMALL_STATE(504)] = 17008,
  [SMALL_STATE(505)] = 17018,
  [SMALL_STATE(506)] = 17030,
  [SMALL_STATE(507)] = 17044,
  [SMALL_STATE(508)] = 17060,
  [SMALL_STATE(509)] = 17070,
  [SMALL_STATE(510)] = 17086,
  [SMALL_STATE(511)] = 17100,
  [SMALL_STATE(512)] = 17114,
  [SMALL_STATE(513)] = 17130,
  [SMALL_STATE(514)] = 17146,
  [SMALL_STATE(515)] = 17156,
  [SMALL_STATE(516)] = 17170,
  [SMALL_STATE(517)] = 17186,
  [SMALL_STATE(518)] = 17202,
  [SMALL_STATE(519)] = 17216,
  [SMALL_STATE(520)] = 17232,
  [SMALL_STATE(521)] = 17248,
  [SMALL_STATE(522)] = 17262,
  [SMALL_STATE(523)] = 17276,
  [SMALL_STATE(524)] = 17290,
  [SMALL_STATE(525)] = 17306,
  [SMALL_STATE(526)] = 17320,
  [SMALL_STATE(527)] = 17336,
  [SMALL_STATE(528)] = 17350,
  [SMALL_STATE(529)] = 17362,
  [SMALL_STATE(530)] = 17376,
  [SMALL_STATE(531)] = 17390,
  [SMALL_STATE(532)] = 17404,
  [SMALL_STATE(533)] = 17414,
  [SMALL_STATE(534)] = 17428,
  [SMALL_STATE(535)] = 17442,
  [SMALL_STATE(536)] = 17452,
  [SMALL_STATE(537)] = 17466,
  [SMALL_STATE(538)] = 17480,
  [SMALL_STATE(539)] = 17494,
  [SMALL_STATE(540)] = 17508,
  [SMALL_STATE(541)] = 17522,
  [SMALL_STATE(542)] = 17536,
  [SMALL_STATE(543)] = 17550,
  [SMALL_STATE(544)] = 17560,
  [SMALL_STATE(545)] = 17574,
  [SMALL_STATE(546)] = 17590,
  [SMALL_STATE(547)] = 17606,
  [SMALL_STATE(548)] = 17620,
  [SMALL_STATE(549)] = 17634,
  [SMALL_STATE(550)] = 17648,
  [SMALL_STATE(551)] = 17662,
  [SMALL_STATE(552)] = 17674,
  [SMALL_STATE(553)] = 17688,
  [SMALL_STATE(554)] = 17700,
  [SMALL_STATE(555)] = 17713,
  [SMALL_STATE(556)] = 17724,
  [SMALL_STATE(557)] = 17737,
  [SMALL_STATE(558)] = 17750,
  [SMALL_STATE(559)] = 17763,
  [SMALL_STATE(560)] = 17776,
  [SMALL_STATE(561)] = 17789,
  [SMALL_STATE(562)] = 17798,
  [SMALL_STATE(563)] = 17811,
  [SMALL_STATE(564)] = 17824,
  [SMALL_STATE(565)] = 17833,
  [SMALL_STATE(566)] = 17842,
  [SMALL_STATE(567)] = 17855,
  [SMALL_STATE(568)] = 17864,
  [SMALL_STATE(569)] = 17873,
  [SMALL_STATE(570)] = 17882,
  [SMALL_STATE(571)] = 17895,
  [SMALL_STATE(572)] = 17908,
  [SMALL_STATE(573)] = 17917,
  [SMALL_STATE(574)] = 17926,
  [SMALL_STATE(575)] = 17935,
  [SMALL_STATE(576)] = 17948,
  [SMALL_STATE(577)] = 17957,
  [SMALL_STATE(578)] = 17970,
  [SMALL_STATE(579)] = 17983,
  [SMALL_STATE(580)] = 17992,
  [SMALL_STATE(581)] = 18001,
  [SMALL_STATE(582)] = 18010,
  [SMALL_STATE(583)] = 18023,
  [SMALL_STATE(584)] = 18036,
  [SMALL_STATE(585)] = 18049,
  [SMALL_STATE(586)] = 18060,
  [SMALL_STATE(587)] = 18073,
  [SMALL_STATE(588)] = 18084,
  [SMALL_STATE(589)] = 18095,
  [SMALL_STATE(590)] = 18108,
  [SMALL_STATE(591)] = 18119,
  [SMALL_STATE(592)] = 18132,
  [SMALL_STATE(593)] = 18141,
  [SMALL_STATE(594)] = 18150,
  [SMALL_STATE(595)] = 18161,
  [SMALL_STATE(596)] = 18174,
  [SMALL_STATE(597)] = 18187,
  [SMALL_STATE(598)] = 18200,
  [SMALL_STATE(599)] = 18209,
  [SMALL_STATE(600)] = 18218,
  [SMALL_STATE(601)] = 18227,
  [SMALL_STATE(602)] = 18240,
  [SMALL_STATE(603)] = 18251,
  [SMALL_STATE(604)] = 18262,
  [SMALL_STATE(605)] = 18275,
  [SMALL_STATE(606)] = 18286,
  [SMALL_STATE(607)] = 18297,
  [SMALL_STATE(608)] = 18306,
  [SMALL_STATE(609)] = 18319,
  [SMALL_STATE(610)] = 18330,
  [SMALL_STATE(611)] = 18343,
  [SMALL_STATE(612)] = 18356,
  [SMALL_STATE(613)] = 18369,
  [SMALL_STATE(614)] = 18382,
  [SMALL_STATE(615)] = 18395,
  [SMALL_STATE(616)] = 18408,
  [SMALL_STATE(617)] = 18417,
  [SMALL_STATE(618)] = 18428,
  [SMALL_STATE(619)] = 18441,
  [SMALL_STATE(620)] = 18454,
  [SMALL_STATE(621)] = 18467,
  [SMALL_STATE(622)] = 18480,
  [SMALL_STATE(623)] = 18493,
  [SMALL_STATE(624)] = 18502,
  [SMALL_STATE(625)] = 18515,
  [SMALL_STATE(626)] = 18528,
  [SMALL_STATE(627)] = 18541,
  [SMALL_STATE(628)] = 18554,
  [SMALL_STATE(629)] = 18563,
  [SMALL_STATE(630)] = 18572,
  [SMALL_STATE(631)] = 18581,
  [SMALL_STATE(632)] = 18594,
  [SMALL_STATE(633)] = 18607,
  [SMALL_STATE(634)] = 18620,
  [SMALL_STATE(635)] = 18631,
  [SMALL_STATE(636)] = 18642,
  [SMALL_STATE(637)] = 18653,
  [SMALL_STATE(638)] = 18662,
  [SMALL_STATE(639)] = 18675,
  [SMALL_STATE(640)] = 18688,
  [SMALL_STATE(641)] = 18701,
  [SMALL_STATE(642)] = 18714,
  [SMALL_STATE(643)] = 18727,
  [SMALL_STATE(644)] = 18740,
  [SMALL_STATE(645)] = 18753,
  [SMALL_STATE(646)] = 18766,
  [SMALL_STATE(647)] = 18779,
  [SMALL_STATE(648)] = 18792,
  [SMALL_STATE(649)] = 18805,
  [SMALL_STATE(650)] = 18818,
  [SMALL_STATE(651)] = 18831,
  [SMALL_STATE(652)] = 18844,
  [SMALL_STATE(653)] = 18857,
  [SMALL_STATE(654)] = 18870,
  [SMALL_STATE(655)] = 18883,
  [SMALL_STATE(656)] = 18896,
  [SMALL_STATE(657)] = 18909,
  [SMALL_STATE(658)] = 18922,
  [SMALL_STATE(659)] = 18935,
  [SMALL_STATE(660)] = 18944,
  [SMALL_STATE(661)] = 18957,
  [SMALL_STATE(662)] = 18968,
  [SMALL_STATE(663)] = 18979,
  [SMALL_STATE(664)] = 18990,
  [SMALL_STATE(665)] = 19001,
  [SMALL_STATE(666)] = 19014,
  [SMALL_STATE(667)] = 19025,
  [SMALL_STATE(668)] = 19036,
  [SMALL_STATE(669)] = 19049,
  [SMALL_STATE(670)] = 19062,
  [SMALL_STATE(671)] = 19075,
  [SMALL_STATE(672)] = 19088,
  [SMALL_STATE(673)] = 19101,
  [SMALL_STATE(674)] = 19114,
  [SMALL_STATE(675)] = 19123,
  [SMALL_STATE(676)] = 19136,
  [SMALL_STATE(677)] = 19149,
  [SMALL_STATE(678)] = 19160,
  [SMALL_STATE(679)] = 19168,
  [SMALL_STATE(680)] = 19176,
  [SMALL_STATE(681)] = 19184,
  [SMALL_STATE(682)] = 19192,
  [SMALL_STATE(683)] = 19200,
  [SMALL_STATE(684)] = 19208,
  [SMALL_STATE(685)] = 19216,
  [SMALL_STATE(686)] = 19224,
  [SMALL_STATE(687)] = 19234,
  [SMALL_STATE(688)] = 19244,
  [SMALL_STATE(689)] = 19252,
  [SMALL_STATE(690)] = 19260,
  [SMALL_STATE(691)] = 19268,
  [SMALL_STATE(692)] = 19276,
  [SMALL_STATE(693)] = 19284,
  [SMALL_STATE(694)] = 19292,
  [SMALL_STATE(695)] = 19300,
  [SMALL_STATE(696)] = 19308,
  [SMALL_STATE(697)] = 19316,
  [SMALL_STATE(698)] = 19324,
  [SMALL_STATE(699)] = 19332,
  [SMALL_STATE(700)] = 19340,
  [SMALL_STATE(701)] = 19348,
  [SMALL_STATE(702)] = 19356,
  [SMALL_STATE(703)] = 19364,
  [SMALL_STATE(704)] = 19372,
  [SMALL_STATE(705)] = 19380,
  [SMALL_STATE(706)] = 19388,
  [SMALL_STATE(707)] = 19396,
  [SMALL_STATE(708)] = 19404,
  [SMALL_STATE(709)] = 19412,
  [SMALL_STATE(710)] = 19420,
  [SMALL_STATE(711)] = 19428,
  [SMALL_STATE(712)] = 19436,
  [SMALL_STATE(713)] = 19444,
  [SMALL_STATE(714)] = 19452,
  [SMALL_STATE(715)] = 19460,
  [SMALL_STATE(716)] = 19468,
  [SMALL_STATE(717)] = 19476,
  [SMALL_STATE(718)] = 19484,
  [SMALL_STATE(719)] = 19492,
  [SMALL_STATE(720)] = 19500,
  [SMALL_STATE(721)] = 19508,
  [SMALL_STATE(722)] = 19516,
  [SMALL_STATE(723)] = 19524,
  [SMALL_STATE(724)] = 19532,
  [SMALL_STATE(725)] = 19540,
  [SMALL_STATE(726)] = 19548,
  [SMALL_STATE(727)] = 19556,
  [SMALL_STATE(728)] = 19564,
  [SMALL_STATE(729)] = 19572,
  [SMALL_STATE(730)] = 19580,
  [SMALL_STATE(731)] = 19588,
  [SMALL_STATE(732)] = 19596,
  [SMALL_STATE(733)] = 19604,
  [SMALL_STATE(734)] = 19612,
  [SMALL_STATE(735)] = 19620,
  [SMALL_STATE(736)] = 19628,
  [SMALL_STATE(737)] = 19636,
  [SMALL_STATE(738)] = 19644,
  [SMALL_STATE(739)] = 19652,
  [SMALL_STATE(740)] = 19660,
  [SMALL_STATE(741)] = 19668,
  [SMALL_STATE(742)] = 19676,
  [SMALL_STATE(743)] = 19684,
  [SMALL_STATE(744)] = 19692,
  [SMALL_STATE(745)] = 19700,
  [SMALL_STATE(746)] = 19708,
  [SMALL_STATE(747)] = 19716,
  [SMALL_STATE(748)] = 19724,
  [SMALL_STATE(749)] = 19732,
  [SMALL_STATE(750)] = 19740,
  [SMALL_STATE(751)] = 19748,
  [SMALL_STATE(752)] = 19756,
  [SMALL_STATE(753)] = 19764,
  [SMALL_STATE(754)] = 19772,
  [SMALL_STATE(755)] = 19780,
  [SMALL_STATE(756)] = 19788,
  [SMALL_STATE(757)] = 19796,
  [SMALL_STATE(758)] = 19804,
  [SMALL_STATE(759)] = 19812,
  [SMALL_STATE(760)] = 19820,
  [SMALL_STATE(761)] = 19828,
  [SMALL_STATE(762)] = 19836,
  [SMALL_STATE(763)] = 19844,
  [SMALL_STATE(764)] = 19852,
  [SMALL_STATE(765)] = 19860,
  [SMALL_STATE(766)] = 19868,
  [SMALL_STATE(767)] = 19878,
  [SMALL_STATE(768)] = 19886,
  [SMALL_STATE(769)] = 19894,
  [SMALL_STATE(770)] = 19902,
  [SMALL_STATE(771)] = 19910,
  [SMALL_STATE(772)] = 19918,
  [SMALL_STATE(773)] = 19926,
  [SMALL_STATE(774)] = 19934,
  [SMALL_STATE(775)] = 19942,
  [SMALL_STATE(776)] = 19950,
  [SMALL_STATE(777)] = 19958,
  [SMALL_STATE(778)] = 19966,
  [SMALL_STATE(779)] = 19974,
  [SMALL_STATE(780)] = 19982,
  [SMALL_STATE(781)] = 19990,
  [SMALL_STATE(782)] = 19998,
  [SMALL_STATE(783)] = 20006,
  [SMALL_STATE(784)] = 20014,
  [SMALL_STATE(785)] = 20022,
  [SMALL_STATE(786)] = 20030,
  [SMALL_STATE(787)] = 20038,
  [SMALL_STATE(788)] = 20046,
  [SMALL_STATE(789)] = 20054,
  [SMALL_STATE(790)] = 20062,
  [SMALL_STATE(791)] = 20070,
  [SMALL_STATE(792)] = 20078,
  [SMALL_STATE(793)] = 20086,
  [SMALL_STATE(794)] = 20094,
  [SMALL_STATE(795)] = 20102,
  [SMALL_STATE(796)] = 20110,
  [SMALL_STATE(797)] = 20118,
  [SMALL_STATE(798)] = 20126,
  [SMALL_STATE(799)] = 20134,
  [SMALL_STATE(800)] = 20142,
  [SMALL_STATE(801)] = 20150,
  [SMALL_STATE(802)] = 20158,
  [SMALL_STATE(803)] = 20166,
  [SMALL_STATE(804)] = 20174,
  [SMALL_STATE(805)] = 20182,
  [SMALL_STATE(806)] = 20190,
  [SMALL_STATE(807)] = 20198,
  [SMALL_STATE(808)] = 20206,
  [SMALL_STATE(809)] = 20214,
  [SMALL_STATE(810)] = 20222,
  [SMALL_STATE(811)] = 20230,
  [SMALL_STATE(812)] = 20238,
  [SMALL_STATE(813)] = 20246,
  [SMALL_STATE(814)] = 20256,
  [SMALL_STATE(815)] = 20266,
  [SMALL_STATE(816)] = 20274,
  [SMALL_STATE(817)] = 20282,
  [SMALL_STATE(818)] = 20290,
  [SMALL_STATE(819)] = 20300,
  [SMALL_STATE(820)] = 20308,
  [SMALL_STATE(821)] = 20316,
  [SMALL_STATE(822)] = 20324,
  [SMALL_STATE(823)] = 20332,
  [SMALL_STATE(824)] = 20340,
  [SMALL_STATE(825)] = 20348,
  [SMALL_STATE(826)] = 20356,
  [SMALL_STATE(827)] = 20364,
  [SMALL_STATE(828)] = 20372,
  [SMALL_STATE(829)] = 20382,
  [SMALL_STATE(830)] = 20390,
  [SMALL_STATE(831)] = 20398,
  [SMALL_STATE(832)] = 20406,
  [SMALL_STATE(833)] = 20414,
  [SMALL_STATE(834)] = 20422,
  [SMALL_STATE(835)] = 20430,
  [SMALL_STATE(836)] = 20438,
  [SMALL_STATE(837)] = 20446,
  [SMALL_STATE(838)] = 20454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(762),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(497),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(496),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(133),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(494),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(493),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(369),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(479),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(477),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(474),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(473),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(786),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(597),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(596),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(595),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(578),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(577),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(130),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(269),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(764),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(489),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(488),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(89),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(487),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(486),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(361),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(471),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(470),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(469),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(467),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(801),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(591),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(589),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(586),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(571),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(570),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(114),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(694),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(512),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(513),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(154),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(516),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(517),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(362),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(519),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(520),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(524),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(526),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(716),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(652),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(651),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(648),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(647),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(624),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(28),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(269),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(740),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(507),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(502),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(185),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(501),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(499),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(367),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(485),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(484),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(483),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(481),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(770),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(615),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(610),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(608),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(583),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(582),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(166),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(718),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(560),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(559),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(558),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(557),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(556),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(665),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(584),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(601),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(604),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(55),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(541),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(379),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(383),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(76),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(267),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(265),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(255),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(254),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(253),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(216),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(216),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(252),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_text, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_text, 1),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(637),
  [841] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(822),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [938] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(230),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(211),
  [1130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(357),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(80),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(732),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(289),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(292),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(550),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(540),
  [1218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(732),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(366),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(317),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(783),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3),
  [1286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(343),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(356),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(785),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [1470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(402),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(314),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(410),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(419),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(283),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(444),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(297),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(75),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(482),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(48),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(46),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [1711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement, 1),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_plus_sign, 1),
  [1871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_minus_sign, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [1895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1965] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [2021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [2023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [2025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [2027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [2125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [2127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [2145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
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
