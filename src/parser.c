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
#define STATE_COUNT 898
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 345
#define ALIAS_COUNT 21
#define TOKEN_COUNT 161
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
  aux_sym_diagram_er_token1 = 85,
  sym__whitespace = 86,
  sym__newline = 87,
  sym_comment = 88,
  sym_type_directive = 89,
  sym_arg_directive = 90,
  aux_sym_direction_tb_token1 = 91,
  aux_sym_direction_bt_token1 = 92,
  aux_sym_direction_rl_token1 = 93,
  aux_sym_direction_lr_token1 = 94,
  aux_sym__sequence_rest_text_token1 = 95,
  sym__sequence_actor_word = 96,
  sym_solid_arrow = 97,
  sym_dotted_arrow = 98,
  sym_solid_open_arrow = 99,
  anon_sym_DASH_DASH_GT = 100,
  sym_solid_cross = 101,
  sym_dotted_cross = 102,
  sym_dotted_point = 103,
  aux_sym_note_placement_left_token1 = 104,
  aux_sym_note_placement_right_token1 = 105,
  sym__class_name = 106,
  sym__alpha_num_token = 107,
  sym__bquote_string = 108,
  sym__dquote_string = 109,
  sym_class_reltype_aggregation = 110,
  anon_sym_LT_PIPE = 111,
  anon_sym_PIPE_GT = 112,
  anon_sym_LT = 113,
  anon_sym_DASH_DASH = 114,
  anon_sym_DOT_DOT = 115,
  aux_sym_class_label_token1 = 116,
  anon_sym_LBRACK_STAR_RBRACK = 117,
  aux_sym_state_name_token1 = 118,
  aux_sym_state_hide_empty_description_token1 = 119,
  sym_state_id = 120,
  aux_sym_state_annotation_fork_token1 = 121,
  aux_sym_state_annotation_fork_token2 = 122,
  aux_sym_state_annotation_join_token1 = 123,
  aux_sym_state_annotation_join_token2 = 124,
  aux_sym_state_annotation_choice_token1 = 125,
  aux_sym_state_annotation_choice_token2 = 126,
  aux_sym_gantt_task_text_token1 = 127,
  sym_gantt_task_data = 128,
  aux_sym_pie_showdata_token1 = 129,
  sym_pie_title = 130,
  aux_sym_pie_label_token1 = 131,
  sym_pie_value = 132,
  aux_sym_flowchart_direction_lr_token1 = 133,
  aux_sym_flowchart_direction_lr_token2 = 134,
  aux_sym_flowchart_direction_rl_token1 = 135,
  aux_sym_flowchart_direction_tb_token1 = 136,
  aux_sym_flowchart_direction_tb_token2 = 137,
  anon_sym_v = 138,
  aux_sym_flowchart_direction_bt_token1 = 139,
  anon_sym_CARET = 140,
  aux_sym_flow_text_literal_token1 = 141,
  sym_flow_text_quoted = 142,
  aux_sym_flow_link_arrow_token1 = 143,
  aux_sym_flow_link_arrow_token2 = 144,
  aux_sym_flow_link_arrow_token3 = 145,
  aux_sym_flow_link_arrow_start_token1 = 146,
  aux_sym_flow_link_arrow_start_token2 = 147,
  aux_sym_flow_link_arrow_start_token3 = 148,
  sym__er_alphanum = 149,
  anon_sym_PIPEo = 150,
  anon_sym_o_PIPE = 151,
  anon_sym_RBRACEo = 152,
  anon_sym_o_LBRACE = 153,
  anon_sym_RBRACE_PIPE = 154,
  anon_sym_PIPE_LBRACE = 155,
  sym_er_cardinarity_only_one = 156,
  anon_sym_DOT_DASH = 157,
  anon_sym_DASH_DOT = 158,
  aux_sym_er_attribute_key_type_pk_token1 = 159,
  aux_sym_er_attribute_key_type_fk_token1 = 160,
  sym_source_file = 161,
  sym_directive = 162,
  sym__direction = 163,
  sym_diagram_sequence = 164,
  sym__sequence_stmt = 165,
  sym_sequence_stmt_participant = 166,
  sym_sequence_stmt_actor = 167,
  sym_sequence_actor = 168,
  sym_sequence_stmt_signal = 169,
  sym_sequence_signal_type = 170,
  sym_sequence_text = 171,
  sym_sequence_stmt_autonumber = 172,
  sym_sequence_stmt_activate = 173,
  sym_sequence_stmt_deactivate = 174,
  sym_sequence_stmt_note = 175,
  sym_sequence_stmt_links = 176,
  sym_sequence_stmt_link = 177,
  sym_sequence_stmt_properties = 178,
  sym_sequence_stmt_details = 179,
  sym_sequence_note_placement = 180,
  sym_sequence_stmt_title = 181,
  sym_sequence_stmt_loop = 182,
  sym_sequence_stmt_rect = 183,
  sym_sequence_stmt_opt = 184,
  aux_sym__sequence_subdocument = 185,
  sym_sequence_stmt_alt = 186,
  sym_sequence_stmt_par = 187,
  sym_diagram_class = 188,
  sym__class_stmt = 189,
  sym_class_stmt_relation = 190,
  sym_class_name = 191,
  sym_class_name_body = 192,
  sym_class_generics = 193,
  sym_class_relation = 194,
  sym__class_reltype = 195,
  sym__class_linetype = 196,
  sym_class_stmt_class = 197,
  sym_class_method_line = 198,
  sym_class_annotation_line = 199,
  sym_class_stmt_method = 200,
  sym_class_stmt_annotation = 201,
  sym_diagram_state = 202,
  sym__state_stmt = 203,
  sym_state_stmt_simple = 204,
  sym_state_stmt_arrow = 205,
  sym_state_stmt_composite = 206,
  sym_state_composite_body = 207,
  sym_state_stmt_annotation = 208,
  sym_state_alias = 209,
  sym_state_stmt_hide_empty_description = 210,
  sym__state_annotation = 211,
  sym_state_note = 212,
  sym_state_note_placement = 213,
  sym_diagram_gantt = 214,
  sym__gantt_stmt = 215,
  sym_gantt_stmt_dateformat = 216,
  sym_gantt_stmt_inclusiveenddates = 217,
  sym_gantt_stmt_topaxis = 218,
  sym_gantt_stmt_axisformat = 219,
  sym_gantt_stmt_includes = 220,
  sym_gantt_stmt_excludes = 221,
  sym_gantt_stmt_todaymarker = 222,
  sym_gantt_stmt_title = 223,
  sym_gantt_stmt_section = 224,
  sym_gantt_stmt_task = 225,
  sym_diagram_pie = 226,
  sym__pie_stmt = 227,
  sym_pie_stmt_title = 228,
  sym_pie_stmt_element = 229,
  sym_diagram_flow = 230,
  sym__flowchart_direction = 231,
  sym__flow_stmt = 232,
  sym_flow_stmt_direction = 233,
  sym_flow_stmt_vertice = 234,
  sym_flow_node = 235,
  sym__flow_link = 236,
  sym_flow_link_simplelink = 237,
  sym_flow_link_arrowtext = 238,
  sym_flow_link_middletext = 239,
  sym_flow_arrow_text = 240,
  sym_flow_vertex_id = 241,
  sym_flow_vertex = 242,
  sym__flow_vertex_kind = 243,
  sym_flow_vertex_square = 244,
  sym_flow_vertex_circle = 245,
  sym_flow_vertex_ellipse = 246,
  sym_flow_vertex_stadium = 247,
  sym_flow_vertex_subroutine = 248,
  sym_flow_vertex_rect = 249,
  sym_flow_vertex_cylinder = 250,
  sym_flow_vertex_round = 251,
  sym_flow_vertex_diamond = 252,
  sym_flow_vertex_hexagon = 253,
  sym_flow_vertex_odd = 254,
  sym_flow_vertex_trapezoid = 255,
  sym_flow_vertex_inv_trapezoid = 256,
  sym_flow_vertex_leanright = 257,
  sym_flow_vertex_leanleft = 258,
  sym__flow_text = 259,
  sym_flow_stmt_subgraph = 260,
  sym_flow_stmt_subgraph_inner = 261,
  sym_flow_vertex_text = 262,
  sym_diagram_er = 263,
  sym__er_stmt = 264,
  sym_er_stmt_entity = 265,
  sym_er_stmt_entity_relation = 266,
  sym_er_entity_name = 267,
  sym_er_relation = 268,
  sym__er_cardinarity = 269,
  sym__er_reltype = 270,
  sym_er_role = 271,
  sym_er_stmt_entity_block = 272,
  sym_er_stmt_entity_block_inner = 273,
  sym_er_attribute = 274,
  sym_er_attribute_type = 275,
  sym_er_attribute_name = 276,
  sym__er_attribute_key_type = 277,
  sym_er_attribute_comment = 278,
  sym_direction_tb = 279,
  sym_direction_bt = 280,
  sym_direction_rl = 281,
  sym_direction_lr = 282,
  sym__sequence_rest_text = 283,
  sym_dotted_open_arrow = 284,
  sym_solid_point = 285,
  sym_sequence_signal_plus_sign = 286,
  sym_sequence_signal_minus_sign = 287,
  sym_note_placement_left = 288,
  sym_note_placement_right = 289,
  sym_class_reltype_extension = 290,
  sym_class_reltype_composition = 291,
  sym_class_reltype_dependency = 292,
  sym_class_linetype_solid = 293,
  sym_class_linetype_dotted = 294,
  sym_class_label = 295,
  sym_state_name = 296,
  sym_state_arrow = 297,
  sym_state_description = 298,
  sym_state_hide_empty_description = 299,
  sym_state_division = 300,
  sym_state_annotation_fork = 301,
  sym_state_annotation_join = 302,
  sym_state_annotation_choice = 303,
  sym_gantt_meta_format = 304,
  sym_gantt_task_text = 305,
  sym_pie_showdata = 306,
  sym_pie_label = 307,
  sym_flowchart_direction_lr = 308,
  sym_flowchart_direction_rl = 309,
  sym_flowchart_direction_tb = 310,
  sym_flowchart_direction_bt = 311,
  sym_flow_text_literal = 312,
  sym_flow_link_arrow = 313,
  sym_flow_link_arrow_start = 314,
  sym__er_word = 315,
  sym_er_cardinarity_zero_or_one = 316,
  sym_er_cardinarity_zero_or_more = 317,
  sym_er_cardinarity_one_or_more = 318,
  sym_er_reltype_non_identifying = 319,
  sym_er_reltype_identifying = 320,
  sym_er_attribute_key_type_pk = 321,
  sym_er_attribute_key_type_fk = 322,
  aux_sym_diagram_sequence_repeat1 = 323,
  aux_sym_diagram_sequence_repeat2 = 324,
  aux_sym_sequence_actor_repeat1 = 325,
  aux_sym_sequence_stmt_alt_repeat1 = 326,
  aux_sym_sequence_stmt_par_repeat1 = 327,
  aux_sym_diagram_class_repeat1 = 328,
  aux_sym_class_name_body_repeat1 = 329,
  aux_sym_class_stmt_class_repeat1 = 330,
  aux_sym_class_method_line_repeat1 = 331,
  aux_sym_diagram_state_repeat1 = 332,
  aux_sym_state_composite_body_repeat1 = 333,
  aux_sym_diagram_gantt_repeat1 = 334,
  aux_sym_diagram_pie_repeat1 = 335,
  aux_sym_diagram_flow_repeat1 = 336,
  aux_sym_flow_stmt_vertice_repeat1 = 337,
  aux_sym_flow_node_repeat1 = 338,
  aux_sym_flow_arrow_text_repeat1 = 339,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 340,
  aux_sym_diagram_er_repeat1 = 341,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 342,
  aux_sym_gantt_task_text_repeat1 = 343,
  aux_sym_flow_text_literal_repeat1 = 344,
  alias_sym_annotation = 345,
  alias_sym_class_classifier_abstract = 346,
  alias_sym_class_style_name = 347,
  alias_sym_class_visibility_internal = 348,
  alias_sym_class_visibility_private = 349,
  alias_sym_class_visibility_public = 350,
  alias_sym_gantt_axis_format = 351,
  alias_sym_gantt_end_dates = 352,
  alias_sym_gantt_excludes = 353,
  alias_sym_gantt_includes = 354,
  alias_sym_gantt_section = 355,
  alias_sym_gantt_title = 356,
  alias_sym_gantt_today_marker = 357,
  alias_sym_gantt_top_axis = 358,
  alias_sym_note_content = 359,
  alias_sym_sequence_alias = 360,
  alias_sym_sequence_stmt_alt_branch = 361,
  alias_sym_sequence_stmt_loop_inner = 362,
  alias_sym_sequence_stmt_opt_inner = 363,
  alias_sym_sequence_stmt_rect_inner = 364,
  alias_sym_title = 365,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_LBRACE] = "%%{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE_PERCENT_PERCENT] = "}%%",
  [aux_sym_diagram_sequence_token1] = "sequenceDiagram",
  [aux_sym_sequence_stmt_participant_token1] = "participant",
  [aux_sym_sequence_stmt_participant_token2] = "as",
  [aux_sym_sequence_stmt_actor_token1] = "sequence_actor",
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
  [aux_sym_diagram_er_token1] = "erdiagram",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
  [sym_type_directive] = "type_directive",
  [sym_arg_directive] = "arg_directive",
  [aux_sym_direction_tb_token1] = "direction tb",
  [aux_sym_direction_bt_token1] = "direction bt",
  [aux_sym_direction_rl_token1] = "direction rl",
  [aux_sym_direction_lr_token1] = "direction lr",
  [aux_sym__sequence_rest_text_token1] = "_sequence_rest_text_token1",
  [sym__sequence_actor_word] = "_sequence_actor_word",
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
  [anon_sym_DOT_DOT] = "..",
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
  [aux_sym_pie_label_token1] = "pie_label_token1",
  [sym_pie_value] = "pie_value",
  [aux_sym_flowchart_direction_lr_token1] = "lr",
  [aux_sym_flowchart_direction_lr_token2] = "br",
  [aux_sym_flowchart_direction_rl_token1] = "rl",
  [aux_sym_flowchart_direction_tb_token1] = "tb",
  [aux_sym_flowchart_direction_tb_token2] = "td",
  [anon_sym_v] = "v",
  [aux_sym_flowchart_direction_bt_token1] = "bt",
  [anon_sym_CARET] = "^",
  [aux_sym_flow_text_literal_token1] = "flow_text_literal_token1",
  [sym_flow_text_quoted] = "flow_text_quoted",
  [aux_sym_flow_link_arrow_token1] = "flow_link_arrow_token1",
  [aux_sym_flow_link_arrow_token2] = "flow_link_arrow_token2",
  [aux_sym_flow_link_arrow_token3] = "flow_link_arrow_token3",
  [aux_sym_flow_link_arrow_start_token1] = "flow_link_arrow_start_token1",
  [aux_sym_flow_link_arrow_start_token2] = "flow_link_arrow_start_token2",
  [aux_sym_flow_link_arrow_start_token3] = "flow_link_arrow_start_token3",
  [sym__er_alphanum] = "_er_alphanum",
  [anon_sym_PIPEo] = "|o",
  [anon_sym_o_PIPE] = "o|",
  [anon_sym_RBRACEo] = "}o",
  [anon_sym_o_LBRACE] = "o{",
  [anon_sym_RBRACE_PIPE] = "}|",
  [anon_sym_PIPE_LBRACE] = "|{",
  [sym_er_cardinarity_only_one] = "er_cardinarity_only_one",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DASH_DOT] = "-.",
  [aux_sym_er_attribute_key_type_pk_token1] = "pk",
  [aux_sym_er_attribute_key_type_fk_token1] = "fk",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym__direction] = "_direction",
  [sym_diagram_sequence] = "diagram_sequence",
  [sym__sequence_stmt] = "_sequence_stmt",
  [sym_sequence_stmt_participant] = "sequence_stmt_participant",
  [sym_sequence_stmt_actor] = "sequence_stmt_actor",
  [sym_sequence_actor] = "sequence_actor",
  [sym_sequence_stmt_signal] = "sequence_stmt_signal",
  [sym_sequence_signal_type] = "sequence_signal_type",
  [sym_sequence_text] = "sequence_text",
  [sym_sequence_stmt_autonumber] = "sequence_stmt_autonumber",
  [sym_sequence_stmt_activate] = "sequence_stmt_activate",
  [sym_sequence_stmt_deactivate] = "sequence_stmt_deactivate",
  [sym_sequence_stmt_note] = "sequence_stmt_note",
  [sym_sequence_stmt_links] = "sequence_stmt_links",
  [sym_sequence_stmt_link] = "sequence_stmt_link",
  [sym_sequence_stmt_properties] = "sequence_stmt_properties",
  [sym_sequence_stmt_details] = "sequence_stmt_details",
  [sym_sequence_note_placement] = "sequence_note_placement",
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
  [sym_state_note_placement] = "state_note_placement",
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
  [sym_diagram_er] = "diagram_er",
  [sym__er_stmt] = "_er_stmt",
  [sym_er_stmt_entity] = "er_stmt_entity",
  [sym_er_stmt_entity_relation] = "er_stmt_entity_relation",
  [sym_er_entity_name] = "er_entity_name",
  [sym_er_relation] = "er_relation",
  [sym__er_cardinarity] = "_er_cardinarity",
  [sym__er_reltype] = "_er_reltype",
  [sym_er_role] = "er_role",
  [sym_er_stmt_entity_block] = "er_stmt_entity_block",
  [sym_er_stmt_entity_block_inner] = "er_stmt_entity_block_inner",
  [sym_er_attribute] = "er_attribute",
  [sym_er_attribute_type] = "er_attribute_type",
  [sym_er_attribute_name] = "er_attribute_name",
  [sym__er_attribute_key_type] = "_er_attribute_key_type",
  [sym_er_attribute_comment] = "er_attribute_comment",
  [sym_direction_tb] = "direction_tb",
  [sym_direction_bt] = "direction_bt",
  [sym_direction_rl] = "direction_rl",
  [sym_direction_lr] = "direction_lr",
  [sym__sequence_rest_text] = "_sequence_rest_text",
  [sym_dotted_open_arrow] = "dotted_open_arrow",
  [sym_solid_point] = "solid_point",
  [sym_sequence_signal_plus_sign] = "sequence_signal_plus_sign",
  [sym_sequence_signal_minus_sign] = "sequence_signal_minus_sign",
  [sym_note_placement_left] = "note_placement_left",
  [sym_note_placement_right] = "note_placement_right",
  [sym_class_reltype_extension] = "class_reltype_extension",
  [sym_class_reltype_composition] = "class_reltype_composition",
  [sym_class_reltype_dependency] = "class_reltype_dependency",
  [sym_class_linetype_solid] = "class_linetype_solid",
  [sym_class_linetype_dotted] = "class_linetype_dotted",
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
  [sym_pie_label] = "pie_label",
  [sym_flowchart_direction_lr] = "flowchart_direction_lr",
  [sym_flowchart_direction_rl] = "flowchart_direction_rl",
  [sym_flowchart_direction_tb] = "flowchart_direction_tb",
  [sym_flowchart_direction_bt] = "flowchart_direction_bt",
  [sym_flow_text_literal] = "flow_text_literal",
  [sym_flow_link_arrow] = "flow_link_arrow",
  [sym_flow_link_arrow_start] = "flow_link_arrow_start",
  [sym__er_word] = "_er_word",
  [sym_er_cardinarity_zero_or_one] = "er_cardinarity_zero_or_one",
  [sym_er_cardinarity_zero_or_more] = "er_cardinarity_zero_or_more",
  [sym_er_cardinarity_one_or_more] = "er_cardinarity_one_or_more",
  [sym_er_reltype_non_identifying] = "er_reltype_non_identifying",
  [sym_er_reltype_identifying] = "er_reltype_identifying",
  [sym_er_attribute_key_type_pk] = "er_attribute_key_type_pk",
  [sym_er_attribute_key_type_fk] = "er_attribute_key_type_fk",
  [aux_sym_diagram_sequence_repeat1] = "diagram_sequence_repeat1",
  [aux_sym_diagram_sequence_repeat2] = "diagram_sequence_repeat2",
  [aux_sym_sequence_actor_repeat1] = "sequence_actor_repeat1",
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
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
  [aux_sym_gantt_task_text_repeat1] = "gantt_task_text_repeat1",
  [aux_sym_flow_text_literal_repeat1] = "flow_text_literal_repeat1",
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
  [alias_sym_sequence_alias] = "sequence_alias",
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
  [aux_sym_diagram_er_token1] = aux_sym_diagram_er_token1,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [sym_comment] = sym_comment,
  [sym_type_directive] = sym_type_directive,
  [sym_arg_directive] = sym_arg_directive,
  [aux_sym_direction_tb_token1] = aux_sym_direction_tb_token1,
  [aux_sym_direction_bt_token1] = aux_sym_direction_bt_token1,
  [aux_sym_direction_rl_token1] = aux_sym_direction_rl_token1,
  [aux_sym_direction_lr_token1] = aux_sym_direction_lr_token1,
  [aux_sym__sequence_rest_text_token1] = aux_sym__sequence_rest_text_token1,
  [sym__sequence_actor_word] = sym__sequence_actor_word,
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [aux_sym_pie_label_token1] = aux_sym_pie_label_token1,
  [sym_pie_value] = sym_pie_value,
  [aux_sym_flowchart_direction_lr_token1] = aux_sym_flowchart_direction_lr_token1,
  [aux_sym_flowchart_direction_lr_token2] = aux_sym_flowchart_direction_lr_token2,
  [aux_sym_flowchart_direction_rl_token1] = aux_sym_flowchart_direction_rl_token1,
  [aux_sym_flowchart_direction_tb_token1] = aux_sym_flowchart_direction_tb_token1,
  [aux_sym_flowchart_direction_tb_token2] = aux_sym_flowchart_direction_tb_token2,
  [anon_sym_v] = anon_sym_v,
  [aux_sym_flowchart_direction_bt_token1] = aux_sym_flowchart_direction_bt_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_flow_text_literal_token1] = aux_sym_flow_text_literal_token1,
  [sym_flow_text_quoted] = sym_flow_text_quoted,
  [aux_sym_flow_link_arrow_token1] = aux_sym_flow_link_arrow_token1,
  [aux_sym_flow_link_arrow_token2] = aux_sym_flow_link_arrow_token2,
  [aux_sym_flow_link_arrow_token3] = aux_sym_flow_link_arrow_token3,
  [aux_sym_flow_link_arrow_start_token1] = aux_sym_flow_link_arrow_start_token1,
  [aux_sym_flow_link_arrow_start_token2] = aux_sym_flow_link_arrow_start_token2,
  [aux_sym_flow_link_arrow_start_token3] = aux_sym_flow_link_arrow_start_token3,
  [sym__er_alphanum] = sym__er_alphanum,
  [anon_sym_PIPEo] = anon_sym_PIPEo,
  [anon_sym_o_PIPE] = anon_sym_o_PIPE,
  [anon_sym_RBRACEo] = anon_sym_RBRACEo,
  [anon_sym_o_LBRACE] = anon_sym_o_LBRACE,
  [anon_sym_RBRACE_PIPE] = anon_sym_RBRACE_PIPE,
  [anon_sym_PIPE_LBRACE] = anon_sym_PIPE_LBRACE,
  [sym_er_cardinarity_only_one] = sym_er_cardinarity_only_one,
  [anon_sym_DOT_DASH] = anon_sym_DOT_DASH,
  [anon_sym_DASH_DOT] = anon_sym_DASH_DOT,
  [aux_sym_er_attribute_key_type_pk_token1] = aux_sym_er_attribute_key_type_pk_token1,
  [aux_sym_er_attribute_key_type_fk_token1] = aux_sym_er_attribute_key_type_fk_token1,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym__direction] = sym__direction,
  [sym_diagram_sequence] = sym_diagram_sequence,
  [sym__sequence_stmt] = sym__sequence_stmt,
  [sym_sequence_stmt_participant] = sym_sequence_stmt_participant,
  [sym_sequence_stmt_actor] = sym_sequence_stmt_actor,
  [sym_sequence_actor] = sym_sequence_actor,
  [sym_sequence_stmt_signal] = sym_sequence_stmt_signal,
  [sym_sequence_signal_type] = sym_sequence_signal_type,
  [sym_sequence_text] = sym_sequence_text,
  [sym_sequence_stmt_autonumber] = sym_sequence_stmt_autonumber,
  [sym_sequence_stmt_activate] = sym_sequence_stmt_activate,
  [sym_sequence_stmt_deactivate] = sym_sequence_stmt_deactivate,
  [sym_sequence_stmt_note] = sym_sequence_stmt_note,
  [sym_sequence_stmt_links] = sym_sequence_stmt_links,
  [sym_sequence_stmt_link] = sym_sequence_stmt_link,
  [sym_sequence_stmt_properties] = sym_sequence_stmt_properties,
  [sym_sequence_stmt_details] = sym_sequence_stmt_details,
  [sym_sequence_note_placement] = sym_sequence_note_placement,
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
  [sym_state_note_placement] = sym_state_note_placement,
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
  [sym_diagram_er] = sym_diagram_er,
  [sym__er_stmt] = sym__er_stmt,
  [sym_er_stmt_entity] = sym_er_stmt_entity,
  [sym_er_stmt_entity_relation] = sym_er_stmt_entity_relation,
  [sym_er_entity_name] = sym_er_entity_name,
  [sym_er_relation] = sym_er_relation,
  [sym__er_cardinarity] = sym__er_cardinarity,
  [sym__er_reltype] = sym__er_reltype,
  [sym_er_role] = sym_er_role,
  [sym_er_stmt_entity_block] = sym_er_stmt_entity_block,
  [sym_er_stmt_entity_block_inner] = sym_er_stmt_entity_block_inner,
  [sym_er_attribute] = sym_er_attribute,
  [sym_er_attribute_type] = sym_er_attribute_type,
  [sym_er_attribute_name] = sym_er_attribute_name,
  [sym__er_attribute_key_type] = sym__er_attribute_key_type,
  [sym_er_attribute_comment] = sym_er_attribute_comment,
  [sym_direction_tb] = sym_direction_tb,
  [sym_direction_bt] = sym_direction_bt,
  [sym_direction_rl] = sym_direction_rl,
  [sym_direction_lr] = sym_direction_lr,
  [sym__sequence_rest_text] = sym__sequence_rest_text,
  [sym_dotted_open_arrow] = sym_dotted_open_arrow,
  [sym_solid_point] = sym_solid_point,
  [sym_sequence_signal_plus_sign] = sym_sequence_signal_plus_sign,
  [sym_sequence_signal_minus_sign] = sym_sequence_signal_minus_sign,
  [sym_note_placement_left] = sym_note_placement_left,
  [sym_note_placement_right] = sym_note_placement_right,
  [sym_class_reltype_extension] = sym_class_reltype_extension,
  [sym_class_reltype_composition] = sym_class_reltype_composition,
  [sym_class_reltype_dependency] = sym_class_reltype_dependency,
  [sym_class_linetype_solid] = sym_class_linetype_solid,
  [sym_class_linetype_dotted] = sym_class_linetype_dotted,
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
  [sym_pie_label] = sym_pie_label,
  [sym_flowchart_direction_lr] = sym_flowchart_direction_lr,
  [sym_flowchart_direction_rl] = sym_flowchart_direction_rl,
  [sym_flowchart_direction_tb] = sym_flowchart_direction_tb,
  [sym_flowchart_direction_bt] = sym_flowchart_direction_bt,
  [sym_flow_text_literal] = sym_flow_text_literal,
  [sym_flow_link_arrow] = sym_flow_link_arrow,
  [sym_flow_link_arrow_start] = sym_flow_link_arrow_start,
  [sym__er_word] = sym__er_word,
  [sym_er_cardinarity_zero_or_one] = sym_er_cardinarity_zero_or_one,
  [sym_er_cardinarity_zero_or_more] = sym_er_cardinarity_zero_or_more,
  [sym_er_cardinarity_one_or_more] = sym_er_cardinarity_one_or_more,
  [sym_er_reltype_non_identifying] = sym_er_reltype_non_identifying,
  [sym_er_reltype_identifying] = sym_er_reltype_identifying,
  [sym_er_attribute_key_type_pk] = sym_er_attribute_key_type_pk,
  [sym_er_attribute_key_type_fk] = sym_er_attribute_key_type_fk,
  [aux_sym_diagram_sequence_repeat1] = aux_sym_diagram_sequence_repeat1,
  [aux_sym_diagram_sequence_repeat2] = aux_sym_diagram_sequence_repeat2,
  [aux_sym_sequence_actor_repeat1] = aux_sym_sequence_actor_repeat1,
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
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
  [aux_sym_gantt_task_text_repeat1] = aux_sym_gantt_task_text_repeat1,
  [aux_sym_flow_text_literal_repeat1] = aux_sym_flow_text_literal_repeat1,
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
  [alias_sym_sequence_alias] = alias_sym_sequence_alias,
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
  [aux_sym_diagram_er_token1] = {
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
  [aux_sym__sequence_rest_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__sequence_actor_word] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [aux_sym_pie_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_pie_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_flowchart_direction_lr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_lr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_rl_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_tb_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_flowchart_direction_bt_token1] = {
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
  [sym__er_alphanum] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACEo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_er_cardinarity_only_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_pk_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_er_attribute_key_type_fk_token1] = {
    .visible = true,
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
  [sym_sequence_actor] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_stmt_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_text] = {
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
  [sym_sequence_note_placement] = {
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
  [sym_state_note_placement] = {
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
  [sym_diagram_er] = {
    .visible = true,
    .named = true,
  },
  [sym__er_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_er_stmt_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_er_entity_name] = {
    .visible = true,
    .named = true,
  },
  [sym_er_relation] = {
    .visible = true,
    .named = true,
  },
  [sym__er_cardinarity] = {
    .visible = false,
    .named = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
  },
  [sym_er_role] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block] = {
    .visible = true,
    .named = true,
  },
  [sym_er_stmt_entity_block_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_type] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__er_attribute_key_type] = {
    .visible = false,
    .named = true,
  },
  [sym_er_attribute_comment] = {
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
  [sym__sequence_rest_text] = {
    .visible = false,
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
  [sym_sequence_signal_plus_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_signal_minus_sign] = {
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
  [sym_class_linetype_dotted] = {
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
  [sym_pie_label] = {
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
  [sym__er_word] = {
    .visible = false,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_cardinarity_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_non_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_reltype_identifying] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_pk] = {
    .visible = true,
    .named = true,
  },
  [sym_er_attribute_key_type_fk] = {
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
  [aux_sym_sequence_actor_repeat1] = {
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
  [aux_sym_diagram_er_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_er_stmt_entity_block_inner_repeat1] = {
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
  [alias_sym_sequence_alias] = {
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
    [3] = alias_sym_sequence_alias,
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
  sym__sequence_rest_text, 3,
    sym__sequence_rest_text,
    alias_sym_sequence_alias,
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
  [6] = 4,
  [7] = 2,
  [8] = 4,
  [9] = 2,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 16,
  [27] = 24,
  [28] = 28,
  [29] = 17,
  [30] = 15,
  [31] = 28,
  [32] = 32,
  [33] = 17,
  [34] = 34,
  [35] = 16,
  [36] = 18,
  [37] = 24,
  [38] = 24,
  [39] = 28,
  [40] = 15,
  [41] = 28,
  [42] = 15,
  [43] = 16,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 45,
  [50] = 45,
  [51] = 44,
  [52] = 45,
  [53] = 44,
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
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 85,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 106,
  [112] = 102,
  [113] = 100,
  [114] = 83,
  [115] = 115,
  [116] = 116,
  [117] = 82,
  [118] = 118,
  [119] = 110,
  [120] = 81,
  [121] = 107,
  [122] = 115,
  [123] = 116,
  [124] = 118,
  [125] = 125,
  [126] = 87,
  [127] = 88,
  [128] = 104,
  [129] = 129,
  [130] = 130,
  [131] = 90,
  [132] = 103,
  [133] = 91,
  [134] = 125,
  [135] = 92,
  [136] = 93,
  [137] = 94,
  [138] = 129,
  [139] = 95,
  [140] = 96,
  [141] = 130,
  [142] = 97,
  [143] = 98,
  [144] = 99,
  [145] = 82,
  [146] = 103,
  [147] = 96,
  [148] = 97,
  [149] = 98,
  [150] = 99,
  [151] = 103,
  [152] = 104,
  [153] = 100,
  [154] = 107,
  [155] = 102,
  [156] = 85,
  [157] = 87,
  [158] = 84,
  [159] = 130,
  [160] = 95,
  [161] = 97,
  [162] = 96,
  [163] = 94,
  [164] = 93,
  [165] = 95,
  [166] = 129,
  [167] = 125,
  [168] = 92,
  [169] = 118,
  [170] = 116,
  [171] = 115,
  [172] = 129,
  [173] = 91,
  [174] = 108,
  [175] = 106,
  [176] = 108,
  [177] = 106,
  [178] = 101,
  [179] = 102,
  [180] = 107,
  [181] = 100,
  [182] = 104,
  [183] = 83,
  [184] = 110,
  [185] = 81,
  [186] = 85,
  [187] = 90,
  [188] = 130,
  [189] = 82,
  [190] = 110,
  [191] = 87,
  [192] = 81,
  [193] = 88,
  [194] = 94,
  [195] = 93,
  [196] = 92,
  [197] = 84,
  [198] = 88,
  [199] = 115,
  [200] = 116,
  [201] = 98,
  [202] = 118,
  [203] = 99,
  [204] = 90,
  [205] = 125,
  [206] = 91,
  [207] = 83,
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
  [221] = 84,
  [222] = 222,
  [223] = 85,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 85,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
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
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 220,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 84,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 220,
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
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 302,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 302,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 302,
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
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 233,
  [369] = 369,
  [370] = 369,
  [371] = 371,
  [372] = 369,
  [373] = 369,
  [374] = 226,
  [375] = 375,
  [376] = 224,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 233,
  [382] = 382,
  [383] = 226,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 387,
  [391] = 387,
  [392] = 387,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 395,
  [397] = 397,
  [398] = 217,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 232,
  [423] = 423,
  [424] = 382,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 239,
  [432] = 432,
  [433] = 290,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 285,
  [438] = 438,
  [439] = 439,
  [440] = 237,
  [441] = 282,
  [442] = 442,
  [443] = 291,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 240,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 222,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 491,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 496,
  [503] = 498,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 475,
  [508] = 508,
  [509] = 491,
  [510] = 510,
  [511] = 490,
  [512] = 512,
  [513] = 475,
  [514] = 514,
  [515] = 515,
  [516] = 476,
  [517] = 517,
  [518] = 518,
  [519] = 464,
  [520] = 520,
  [521] = 521,
  [522] = 465,
  [523] = 523,
  [524] = 524,
  [525] = 467,
  [526] = 499,
  [527] = 527,
  [528] = 500,
  [529] = 471,
  [530] = 469,
  [531] = 531,
  [532] = 532,
  [533] = 495,
  [534] = 534,
  [535] = 517,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 496,
  [541] = 490,
  [542] = 542,
  [543] = 491,
  [544] = 514,
  [545] = 512,
  [546] = 546,
  [547] = 547,
  [548] = 498,
  [549] = 475,
  [550] = 476,
  [551] = 551,
  [552] = 536,
  [553] = 499,
  [554] = 500,
  [555] = 500,
  [556] = 496,
  [557] = 498,
  [558] = 497,
  [559] = 505,
  [560] = 506,
  [561] = 561,
  [562] = 468,
  [563] = 563,
  [564] = 463,
  [565] = 565,
  [566] = 471,
  [567] = 567,
  [568] = 495,
  [569] = 499,
  [570] = 570,
  [571] = 419,
  [572] = 517,
  [573] = 515,
  [574] = 505,
  [575] = 464,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 506,
  [580] = 580,
  [581] = 490,
  [582] = 563,
  [583] = 465,
  [584] = 584,
  [585] = 463,
  [586] = 565,
  [587] = 567,
  [588] = 588,
  [589] = 570,
  [590] = 467,
  [591] = 536,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 476,
  [599] = 505,
  [600] = 506,
  [601] = 563,
  [602] = 463,
  [603] = 515,
  [604] = 464,
  [605] = 465,
  [606] = 467,
  [607] = 565,
  [608] = 469,
  [609] = 515,
  [610] = 565,
  [611] = 567,
  [612] = 514,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 570,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 468,
  [621] = 497,
  [622] = 512,
  [623] = 623,
  [624] = 514,
  [625] = 512,
  [626] = 469,
  [627] = 497,
  [628] = 468,
  [629] = 471,
  [630] = 495,
  [631] = 517,
  [632] = 536,
  [633] = 633,
  [634] = 551,
  [635] = 635,
  [636] = 567,
  [637] = 637,
  [638] = 638,
  [639] = 570,
  [640] = 640,
  [641] = 537,
  [642] = 563,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 650,
  [658] = 658,
  [659] = 659,
  [660] = 647,
  [661] = 646,
  [662] = 662,
  [663] = 646,
  [664] = 643,
  [665] = 651,
  [666] = 647,
  [667] = 650,
  [668] = 668,
  [669] = 668,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 668,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 668,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 651,
  [686] = 646,
  [687] = 647,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 650,
  [692] = 692,
  [693] = 662,
  [694] = 643,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 662,
  [705] = 662,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 662,
  [721] = 643,
  [722] = 651,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 662,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 733,
  [735] = 735,
  [736] = 727,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 737,
  [743] = 739,
  [744] = 727,
  [745] = 745,
  [746] = 735,
  [747] = 733,
  [748] = 730,
  [749] = 749,
  [750] = 731,
  [751] = 751,
  [752] = 731,
  [753] = 753,
  [754] = 732,
  [755] = 731,
  [756] = 729,
  [757] = 728,
  [758] = 751,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 730,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 735,
  [769] = 739,
  [770] = 753,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 728,
  [775] = 729,
  [776] = 737,
  [777] = 753,
  [778] = 778,
  [779] = 688,
  [780] = 672,
  [781] = 732,
  [782] = 751,
  [783] = 759,
  [784] = 760,
  [785] = 761,
  [786] = 762,
  [787] = 731,
  [788] = 764,
  [789] = 765,
  [790] = 766,
  [791] = 729,
  [792] = 728,
  [793] = 793,
  [794] = 759,
  [795] = 760,
  [796] = 761,
  [797] = 762,
  [798] = 88,
  [799] = 753,
  [800] = 764,
  [801] = 87,
  [802] = 765,
  [803] = 766,
  [804] = 751,
  [805] = 759,
  [806] = 760,
  [807] = 761,
  [808] = 762,
  [809] = 809,
  [810] = 764,
  [811] = 765,
  [812] = 766,
  [813] = 813,
  [814] = 735,
  [815] = 737,
  [816] = 816,
  [817] = 817,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 753,
  [822] = 751,
  [823] = 753,
  [824] = 751,
  [825] = 739,
  [826] = 826,
  [827] = 731,
  [828] = 828,
  [829] = 771,
  [830] = 732,
  [831] = 831,
  [832] = 832,
  [833] = 833,
  [834] = 809,
  [835] = 813,
  [836] = 836,
  [837] = 828,
  [838] = 833,
  [839] = 839,
  [840] = 819,
  [841] = 841,
  [842] = 772,
  [843] = 778,
  [844] = 844,
  [845] = 771,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 809,
  [850] = 813,
  [851] = 851,
  [852] = 828,
  [853] = 833,
  [854] = 839,
  [855] = 819,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 771,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 809,
  [865] = 813,
  [866] = 866,
  [867] = 828,
  [868] = 833,
  [869] = 839,
  [870] = 819,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 727,
  [884] = 884,
  [885] = 839,
  [886] = 886,
  [887] = 730,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 733,
  [893] = 773,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
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
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '$') ADVANCE(471);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(490);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '-') ADVANCE(464);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '<') ADVANCE(685);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == 'E') ADVANCE(258);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '^') ADVANCE(877);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'v') ADVANCE(875);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(492);
      if (lookahead == '}') ADVANCE(460);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(121);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(557);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(557);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(557);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(558);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '+') ADVANCE(462);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '~') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(699);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == '[') ADVANCE(700);
      if (lookahead == '}') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(716);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(717);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(758);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '"') ADVANCE(867);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '"') ADVANCE(679);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(415);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(428);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(476);
      if (lookahead == 'D') ADVANCE(248);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(867);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(679);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(880);
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(882);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(420);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == ')') ADVANCE(469);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(882);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(882);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(552);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(539);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(540);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(773);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(774);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(855);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(856);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == '|') ADVANCE(897);
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(659);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(671);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(785);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == ']') ADVANCE(504);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(651);
      if (lookahead == '>') ADVANCE(648);
      if (lookahead == 'x') ADVANCE(650);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(498);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ']') ADVANCE(508);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(500);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(500);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead == '.') ADVANCE(891);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(500);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(646);
      if (lookahead == 'x') ADVANCE(649);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '[') ADVANCE(165);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(900);
      if (lookahead == '.') ADVANCE(691);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(889);
      if (lookahead == '.') ADVANCE(891);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(884);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(687);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(687);
      if (lookahead == '.') ADVANCE(901);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(689);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '{') ADVANCE(896);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(691);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(475);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(445);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(456);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '<') ADVANCE(472);
      END_STATE();
    case 68:
      if (lookahead == '<') ADVANCE(154);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(890);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(887);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(886);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(684);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(473);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(775);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(777);
      END_STATE();
    case 77:
      if (lookahead == '>') ADVANCE(779);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(437);
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(248);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(249);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(249);
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(250);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      END_STATE();
    case 87:
      if (lookahead == '[') ADVANCE(165);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(515);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(513);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(506);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == '{') ADVANCE(898);
      if (lookahead == '|') ADVANCE(899);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(744);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(776);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(778);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(780);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(94);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == '`') ADVANCE(678);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(516);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == '{') ADVANCE(898);
      if (lookahead == '|') ADVANCE(899);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(895);
      if (lookahead == '|') ADVANCE(897);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == '{') ADVANCE(896);
      if (lookahead == '|') ADVANCE(894);
      END_STATE();
    case 116:
      if (lookahead == '}') ADVANCE(510);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(902);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 144:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 145:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(873);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(874);
      END_STATE();
    case 147:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(873);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(874);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 149:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(200);
      END_STATE();
    case 150:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(360);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(348);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(362);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(224);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(304);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(302);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(349);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(379);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 163:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 164:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 165:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(226);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(306);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(303);
      END_STATE();
    case 166:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 167:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(231);
      END_STATE();
    case 175:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 176:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 177:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(872);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 213:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(652);
      END_STATE();
    case 214:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(653);
      END_STATE();
    case 215:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 216:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 217:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(308);
      END_STATE();
    case 218:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 219:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 220:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 221:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 222:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 223:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 224:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 225:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 226:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(902);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 246:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 247:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 248:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 249:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 251:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 252:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(903);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 253:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(432);
      END_STATE();
    case 254:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 255:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 256:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(202);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(345);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(152);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(872);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 283:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 289:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 290:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 291:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 300:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 301:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 302:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 305:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 306:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 309:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(436);
      END_STATE();
    case 310:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 311:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(375);
      END_STATE();
    case 313:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 314:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(381);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 329:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(483);
      END_STATE();
    case 340:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      END_STATE();
    case 341:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      END_STATE();
    case 342:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      END_STATE();
    case 343:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      END_STATE();
    case 344:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 345:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 346:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 347:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(264);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(392);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(229);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      END_STATE();
    case 368:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 377:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 380:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 382:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 383:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 384:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      END_STATE();
    case 385:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 386:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 387:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 388:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 389:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 390:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 391:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 392:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 393:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(888);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 395:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 396:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(544);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      END_STATE();
    case 397:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 398:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(99);
      END_STATE();
    case 399:
      if (eof) ADVANCE(414);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead == '%') ADVANCE(557);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 400:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == '[') ADVANCE(493);
      if (lookahead == '^') ADVANCE(877);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead == 'v') ADVANCE(875);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 401:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 402:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(860);
      if (lookahead == '%') ADVANCE(861);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 403:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '&') ADVANCE(490);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(511);
      if (lookahead == 'O') ADVANCE(385);
      if (lookahead == '[') ADVANCE(494);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == '<' ||
          lookahead == 'x') ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 404:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(892);
      END_STATE();
    case 405:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '$') ADVANCE(471);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '*') ADVANCE(470);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(493);
      if (lookahead == ']') ADVANCE(495);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 406:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(786);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(826);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(802);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 407:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 408:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '|') ADVANCE(491);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(758);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 409:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(757);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(758);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 410:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == '{') ADVANCE(457);
      if (lookahead == '|') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 411:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == '~') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 412:
      if (eof) ADVANCE(414);
      if (lookahead == '\n') ADVANCE(530);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 's') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(671);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 413:
      if (eof) ADVANCE(414);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead == 'c') ADVANCE(655);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '{') ADVANCE(453);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(509);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '|') ADVANCE(897);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == '>') ADVANCE(646);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '[') ADVANCE(501);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ']') ADVANCE(508);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(684);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '{') ADVANCE(898);
      if (lookahead == '|') ADVANCE(899);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(507);
      if (lookahead == '/') ADVANCE(512);
      if (lookahead == '[') ADVANCE(503);
      if (lookahead == '\\') ADVANCE(514);
      if (lookahead == '|') ADVANCE(505);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == ']') ADVANCE(504);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(540);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(856);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(529);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(544);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(540);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(534);
      if (lookahead == '{') ADVANCE(540);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(536);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(533);
      if (lookahead == '{') ADVANCE(544);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(535);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0) ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(544);
      if (lookahead == '%') ADVANCE(541);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(552);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__sequence_rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(416);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '%') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(620);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(631);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(626);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(625);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__sequence_actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(644);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(645);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(663);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(519);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(667);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(664);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(661);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(676);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(674);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(673);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(670);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '{') ADVANCE(896);
      if (lookahead == '|') ADVANCE(894);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '|') ADVANCE(683);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(683);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(651);
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(647);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(743);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(693);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(734);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(730);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(743);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(772);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(14);
      if (lookahead != 0) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(774);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(852);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(806);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 808:
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
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(856);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(856);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(418);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(531);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(14);
      if (lookahead != 0) ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(866);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(21);
      if (lookahead != 0) ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(532);
      if (lookahead == '{') ADVANCE(882);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(14);
      if (lookahead != 0) ADVANCE(879);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(531);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(14);
      if (lookahead != 0) ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(882);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(880);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(878);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(882);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(884);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(887);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(886);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(885);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(884);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(887);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(886);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '.') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 403},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 399},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 399},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 399},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 399},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 399},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 399},
  [45] = {.lex_state = 399},
  [46] = {.lex_state = 399},
  [47] = {.lex_state = 399},
  [48] = {.lex_state = 399},
  [49] = {.lex_state = 399},
  [50] = {.lex_state = 399},
  [51] = {.lex_state = 399},
  [52] = {.lex_state = 399},
  [53] = {.lex_state = 399},
  [54] = {.lex_state = 403},
  [55] = {.lex_state = 408},
  [56] = {.lex_state = 408},
  [57] = {.lex_state = 406},
  [58] = {.lex_state = 406},
  [59] = {.lex_state = 408},
  [60] = {.lex_state = 406},
  [61] = {.lex_state = 406},
  [62] = {.lex_state = 408},
  [63] = {.lex_state = 408},
  [64] = {.lex_state = 406},
  [65] = {.lex_state = 408},
  [66] = {.lex_state = 408},
  [67] = {.lex_state = 408},
  [68] = {.lex_state = 408},
  [69] = {.lex_state = 408},
  [70] = {.lex_state = 408},
  [71] = {.lex_state = 408},
  [72] = {.lex_state = 408},
  [73] = {.lex_state = 408},
  [74] = {.lex_state = 408},
  [75] = {.lex_state = 408},
  [76] = {.lex_state = 408},
  [77] = {.lex_state = 408},
  [78] = {.lex_state = 408},
  [79] = {.lex_state = 408},
  [80] = {.lex_state = 403},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 399},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 399},
  [148] = {.lex_state = 399},
  [149] = {.lex_state = 399},
  [150] = {.lex_state = 399},
  [151] = {.lex_state = 399},
  [152] = {.lex_state = 399},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 399},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 399},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 399},
  [160] = {.lex_state = 399},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 399},
  [164] = {.lex_state = 399},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 399},
  [168] = {.lex_state = 399},
  [169] = {.lex_state = 399},
  [170] = {.lex_state = 399},
  [171] = {.lex_state = 399},
  [172] = {.lex_state = 399},
  [173] = {.lex_state = 399},
  [174] = {.lex_state = 399},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 399},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 399},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 399},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 399},
  [184] = {.lex_state = 399},
  [185] = {.lex_state = 399},
  [186] = {.lex_state = 399},
  [187] = {.lex_state = 399},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 399},
  [198] = {.lex_state = 399},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 400},
  [209] = {.lex_state = 403},
  [210] = {.lex_state = 400},
  [211] = {.lex_state = 403},
  [212] = {.lex_state = 400},
  [213] = {.lex_state = 409},
  [214] = {.lex_state = 403},
  [215] = {.lex_state = 400},
  [216] = {.lex_state = 410},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 409},
  [219] = {.lex_state = 400},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 403},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 403},
  [224] = {.lex_state = 400},
  [225] = {.lex_state = 408},
  [226] = {.lex_state = 23},
  [227] = {.lex_state = 408},
  [228] = {.lex_state = 413},
  [229] = {.lex_state = 409},
  [230] = {.lex_state = 406},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 400},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 408},
  [235] = {.lex_state = 403},
  [236] = {.lex_state = 23},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 413},
  [239] = {.lex_state = 400},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 408},
  [242] = {.lex_state = 408},
  [243] = {.lex_state = 408},
  [244] = {.lex_state = 408},
  [245] = {.lex_state = 408},
  [246] = {.lex_state = 403},
  [247] = {.lex_state = 408},
  [248] = {.lex_state = 408},
  [249] = {.lex_state = 406},
  [250] = {.lex_state = 406},
  [251] = {.lex_state = 406},
  [252] = {.lex_state = 406},
  [253] = {.lex_state = 406},
  [254] = {.lex_state = 406},
  [255] = {.lex_state = 406},
  [256] = {.lex_state = 406},
  [257] = {.lex_state = 406},
  [258] = {.lex_state = 406},
  [259] = {.lex_state = 406},
  [260] = {.lex_state = 408},
  [261] = {.lex_state = 39},
  [262] = {.lex_state = 408},
  [263] = {.lex_state = 408},
  [264] = {.lex_state = 408},
  [265] = {.lex_state = 408},
  [266] = {.lex_state = 408},
  [267] = {.lex_state = 408},
  [268] = {.lex_state = 408},
  [269] = {.lex_state = 408},
  [270] = {.lex_state = 408},
  [271] = {.lex_state = 403},
  [272] = {.lex_state = 408},
  [273] = {.lex_state = 406},
  [274] = {.lex_state = 406},
  [275] = {.lex_state = 408},
  [276] = {.lex_state = 413},
  [277] = {.lex_state = 403},
  [278] = {.lex_state = 39},
  [279] = {.lex_state = 408},
  [280] = {.lex_state = 408},
  [281] = {.lex_state = 39},
  [282] = {.lex_state = 400},
  [283] = {.lex_state = 7},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 30},
  [286] = {.lex_state = 413},
  [287] = {.lex_state = 408},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 410},
  [290] = {.lex_state = 400},
  [291] = {.lex_state = 30},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 39},
  [294] = {.lex_state = 413},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 7},
  [297] = {.lex_state = 413},
  [298] = {.lex_state = 39},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 7},
  [301] = {.lex_state = 412},
  [302] = {.lex_state = 410},
  [303] = {.lex_state = 403},
  [304] = {.lex_state = 412},
  [305] = {.lex_state = 410},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 403},
  [309] = {.lex_state = 410},
  [310] = {.lex_state = 412},
  [311] = {.lex_state = 403},
  [312] = {.lex_state = 403},
  [313] = {.lex_state = 403},
  [314] = {.lex_state = 410},
  [315] = {.lex_state = 403},
  [316] = {.lex_state = 403},
  [317] = {.lex_state = 412},
  [318] = {.lex_state = 403},
  [319] = {.lex_state = 410},
  [320] = {.lex_state = 403},
  [321] = {.lex_state = 412},
  [322] = {.lex_state = 412},
  [323] = {.lex_state = 403},
  [324] = {.lex_state = 7},
  [325] = {.lex_state = 403},
  [326] = {.lex_state = 403},
  [327] = {.lex_state = 403},
  [328] = {.lex_state = 412},
  [329] = {.lex_state = 403},
  [330] = {.lex_state = 412},
  [331] = {.lex_state = 412},
  [332] = {.lex_state = 403},
  [333] = {.lex_state = 403},
  [334] = {.lex_state = 403},
  [335] = {.lex_state = 403},
  [336] = {.lex_state = 403},
  [337] = {.lex_state = 403},
  [338] = {.lex_state = 403},
  [339] = {.lex_state = 403},
  [340] = {.lex_state = 403},
  [341] = {.lex_state = 403},
  [342] = {.lex_state = 403},
  [343] = {.lex_state = 403},
  [344] = {.lex_state = 403},
  [345] = {.lex_state = 403},
  [346] = {.lex_state = 405},
  [347] = {.lex_state = 403},
  [348] = {.lex_state = 23},
  [349] = {.lex_state = 405},
  [350] = {.lex_state = 405},
  [351] = {.lex_state = 405},
  [352] = {.lex_state = 403},
  [353] = {.lex_state = 405},
  [354] = {.lex_state = 404},
  [355] = {.lex_state = 404},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 404},
  [358] = {.lex_state = 23},
  [359] = {.lex_state = 404},
  [360] = {.lex_state = 23},
  [361] = {.lex_state = 405},
  [362] = {.lex_state = 404},
  [363] = {.lex_state = 404},
  [364] = {.lex_state = 404},
  [365] = {.lex_state = 404},
  [366] = {.lex_state = 404},
  [367] = {.lex_state = 408},
  [368] = {.lex_state = 401},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 6},
  [371] = {.lex_state = 403},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 401},
  [375] = {.lex_state = 403},
  [376] = {.lex_state = 409},
  [377] = {.lex_state = 412},
  [378] = {.lex_state = 412},
  [379] = {.lex_state = 412},
  [380] = {.lex_state = 404},
  [381] = {.lex_state = 411},
  [382] = {.lex_state = 405},
  [383] = {.lex_state = 411},
  [384] = {.lex_state = 402},
  [385] = {.lex_state = 401},
  [386] = {.lex_state = 412},
  [387] = {.lex_state = 403},
  [388] = {.lex_state = 405},
  [389] = {.lex_state = 401},
  [390] = {.lex_state = 403},
  [391] = {.lex_state = 403},
  [392] = {.lex_state = 403},
  [393] = {.lex_state = 404},
  [394] = {.lex_state = 25},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 24},
  [398] = {.lex_state = 410},
  [399] = {.lex_state = 403},
  [400] = {.lex_state = 403},
  [401] = {.lex_state = 401},
  [402] = {.lex_state = 403},
  [403] = {.lex_state = 401},
  [404] = {.lex_state = 404},
  [405] = {.lex_state = 404},
  [406] = {.lex_state = 404},
  [407] = {.lex_state = 25},
  [408] = {.lex_state = 401},
  [409] = {.lex_state = 401},
  [410] = {.lex_state = 401},
  [411] = {.lex_state = 25},
  [412] = {.lex_state = 401},
  [413] = {.lex_state = 401},
  [414] = {.lex_state = 401},
  [415] = {.lex_state = 408},
  [416] = {.lex_state = 25},
  [417] = {.lex_state = 404},
  [418] = {.lex_state = 25},
  [419] = {.lex_state = 38},
  [420] = {.lex_state = 403},
  [421] = {.lex_state = 25},
  [422] = {.lex_state = 409},
  [423] = {.lex_state = 25},
  [424] = {.lex_state = 38},
  [425] = {.lex_state = 405},
  [426] = {.lex_state = 25},
  [427] = {.lex_state = 25},
  [428] = {.lex_state = 25},
  [429] = {.lex_state = 25},
  [430] = {.lex_state = 25},
  [431] = {.lex_state = 409},
  [432] = {.lex_state = 25},
  [433] = {.lex_state = 409},
  [434] = {.lex_state = 405},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 31},
  [438] = {.lex_state = 405},
  [439] = {.lex_state = 39},
  [440] = {.lex_state = 5},
  [441] = {.lex_state = 409},
  [442] = {.lex_state = 403},
  [443] = {.lex_state = 31},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 404},
  [446] = {.lex_state = 407},
  [447] = {.lex_state = 403},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 407},
  [450] = {.lex_state = 5},
  [451] = {.lex_state = 407},
  [452] = {.lex_state = 403},
  [453] = {.lex_state = 405},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 405},
  [457] = {.lex_state = 405},
  [458] = {.lex_state = 405},
  [459] = {.lex_state = 407},
  [460] = {.lex_state = 409},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 6},
  [463] = {.lex_state = 4},
  [464] = {.lex_state = 32},
  [465] = {.lex_state = 32},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 32},
  [468] = {.lex_state = 32},
  [469] = {.lex_state = 401},
  [470] = {.lex_state = 403},
  [471] = {.lex_state = 4},
  [472] = {.lex_state = 401},
  [473] = {.lex_state = 403},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 4},
  [476] = {.lex_state = 4},
  [477] = {.lex_state = 408},
  [478] = {.lex_state = 408},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 408},
  [481] = {.lex_state = 408},
  [482] = {.lex_state = 408},
  [483] = {.lex_state = 408},
  [484] = {.lex_state = 408},
  [485] = {.lex_state = 408},
  [486] = {.lex_state = 408},
  [487] = {.lex_state = 408},
  [488] = {.lex_state = 408},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 403},
  [491] = {.lex_state = 403},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 403},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 4},
  [496] = {.lex_state = 32},
  [497] = {.lex_state = 32},
  [498] = {.lex_state = 32},
  [499] = {.lex_state = 4},
  [500] = {.lex_state = 4},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 32},
  [503] = {.lex_state = 32},
  [504] = {.lex_state = 408},
  [505] = {.lex_state = 32},
  [506] = {.lex_state = 32},
  [507] = {.lex_state = 4},
  [508] = {.lex_state = 408},
  [509] = {.lex_state = 403},
  [510] = {.lex_state = 408},
  [511] = {.lex_state = 403},
  [512] = {.lex_state = 32},
  [513] = {.lex_state = 4},
  [514] = {.lex_state = 32},
  [515] = {.lex_state = 32},
  [516] = {.lex_state = 4},
  [517] = {.lex_state = 4},
  [518] = {.lex_state = 408},
  [519] = {.lex_state = 32},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 408},
  [522] = {.lex_state = 32},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 32},
  [526] = {.lex_state = 4},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 4},
  [529] = {.lex_state = 4},
  [530] = {.lex_state = 401},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 408},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 4},
  [536] = {.lex_state = 4},
  [537] = {.lex_state = 24},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 405},
  [540] = {.lex_state = 32},
  [541] = {.lex_state = 403},
  [542] = {.lex_state = 405},
  [543] = {.lex_state = 403},
  [544] = {.lex_state = 32},
  [545] = {.lex_state = 32},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 405},
  [548] = {.lex_state = 32},
  [549] = {.lex_state = 4},
  [550] = {.lex_state = 4},
  [551] = {.lex_state = 24},
  [552] = {.lex_state = 4},
  [553] = {.lex_state = 4},
  [554] = {.lex_state = 4},
  [555] = {.lex_state = 4},
  [556] = {.lex_state = 32},
  [557] = {.lex_state = 32},
  [558] = {.lex_state = 32},
  [559] = {.lex_state = 32},
  [560] = {.lex_state = 32},
  [561] = {.lex_state = 405},
  [562] = {.lex_state = 32},
  [563] = {.lex_state = 32},
  [564] = {.lex_state = 4},
  [565] = {.lex_state = 4},
  [566] = {.lex_state = 4},
  [567] = {.lex_state = 4},
  [568] = {.lex_state = 4},
  [569] = {.lex_state = 4},
  [570] = {.lex_state = 4},
  [571] = {.lex_state = 405},
  [572] = {.lex_state = 4},
  [573] = {.lex_state = 32},
  [574] = {.lex_state = 32},
  [575] = {.lex_state = 32},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 41},
  [579] = {.lex_state = 32},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 403},
  [582] = {.lex_state = 32},
  [583] = {.lex_state = 32},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 4},
  [586] = {.lex_state = 4},
  [587] = {.lex_state = 4},
  [588] = {.lex_state = 401},
  [589] = {.lex_state = 4},
  [590] = {.lex_state = 32},
  [591] = {.lex_state = 4},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 401},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 408},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 4},
  [599] = {.lex_state = 32},
  [600] = {.lex_state = 32},
  [601] = {.lex_state = 32},
  [602] = {.lex_state = 4},
  [603] = {.lex_state = 32},
  [604] = {.lex_state = 32},
  [605] = {.lex_state = 32},
  [606] = {.lex_state = 32},
  [607] = {.lex_state = 4},
  [608] = {.lex_state = 401},
  [609] = {.lex_state = 32},
  [610] = {.lex_state = 4},
  [611] = {.lex_state = 4},
  [612] = {.lex_state = 32},
  [613] = {.lex_state = 408},
  [614] = {.lex_state = 408},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 4},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 32},
  [621] = {.lex_state = 32},
  [622] = {.lex_state = 32},
  [623] = {.lex_state = 41},
  [624] = {.lex_state = 32},
  [625] = {.lex_state = 32},
  [626] = {.lex_state = 401},
  [627] = {.lex_state = 32},
  [628] = {.lex_state = 32},
  [629] = {.lex_state = 4},
  [630] = {.lex_state = 4},
  [631] = {.lex_state = 4},
  [632] = {.lex_state = 4},
  [633] = {.lex_state = 6},
  [634] = {.lex_state = 24},
  [635] = {.lex_state = 6},
  [636] = {.lex_state = 4},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 4},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 24},
  [642] = {.lex_state = 32},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 32},
  [645] = {.lex_state = 407},
  [646] = {.lex_state = 32},
  [647] = {.lex_state = 32},
  [648] = {.lex_state = 24},
  [649] = {.lex_state = 32},
  [650] = {.lex_state = 32},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 32},
  [653] = {.lex_state = 32},
  [654] = {.lex_state = 32},
  [655] = {.lex_state = 32},
  [656] = {.lex_state = 32},
  [657] = {.lex_state = 32},
  [658] = {.lex_state = 32},
  [659] = {.lex_state = 404},
  [660] = {.lex_state = 32},
  [661] = {.lex_state = 32},
  [662] = {.lex_state = 403},
  [663] = {.lex_state = 32},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 32},
  [667] = {.lex_state = 32},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 404},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 24},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 405},
  [678] = {.lex_state = 405},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 32},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 24},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 32},
  [687] = {.lex_state = 32},
  [688] = {.lex_state = 24},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 32},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 403},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 404},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 404},
  [704] = {.lex_state = 403},
  [705] = {.lex_state = 403},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 408},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 408},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 403},
  [712] = {.lex_state = 403},
  [713] = {.lex_state = 404},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 403},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 408},
  [724] = {.lex_state = 407},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 403},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 403},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 405},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 403},
  [751] = {.lex_state = 396},
  [752] = {.lex_state = 403},
  [753] = {.lex_state = 33},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 403},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 396},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 408},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 33},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 34},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 33},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 4},
  [780] = {.lex_state = 4},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 396},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 403},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 4},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 33},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 396},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 405},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 40},
  [821] = {.lex_state = 33},
  [822] = {.lex_state = 396},
  [823] = {.lex_state = 33},
  [824] = {.lex_state = 396},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 403},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 4},
  [832] = {.lex_state = 4},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 400},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 404},
  [842] = {.lex_state = 34},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 35},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 35},
  [847] = {.lex_state = 408},
  [848] = {.lex_state = 36},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 400},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 403},
  [857] = {.lex_state = 400},
  [858] = {.lex_state = 408},
  [859] = {.lex_state = 405},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 405},
  [862] = {.lex_state = 405},
  [863] = {.lex_state = 403},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 403},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 403},
  [872] = {.lex_state = 403},
  [873] = {.lex_state = 408},
  [874] = {.lex_state = 408},
  [875] = {.lex_state = 403},
  [876] = {.lex_state = 403},
  [877] = {.lex_state = 403},
  [878] = {.lex_state = 408},
  [879] = {.lex_state = 408},
  [880] = {.lex_state = 404},
  [881] = {.lex_state = 400},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 405},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 405},
  [891] = {.lex_state = 408},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 0},
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
    [aux_sym_diagram_er_token1] = ACTIONS(1),
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_state_hide_empty_description_token1] = ACTIONS(1),
    [aux_sym_pie_showdata_token1] = ACTIONS(1),
    [aux_sym_pie_label_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_lr_token2] = ACTIONS(1),
    [aux_sym_flowchart_direction_rl_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token1] = ACTIONS(1),
    [aux_sym_flowchart_direction_tb_token2] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [aux_sym_flowchart_direction_bt_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_flow_text_quoted] = ACTIONS(1),
    [aux_sym_flow_link_arrow_token2] = ACTIONS(1),
    [aux_sym_flow_link_arrow_start_token2] = ACTIONS(1),
    [anon_sym_o_PIPE] = ACTIONS(1),
    [anon_sym_o_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_LBRACE] = ACTIONS(1),
    [sym_er_cardinarity_only_one] = ACTIONS(1),
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_pk_token1] = ACTIONS(1),
    [aux_sym_er_attribute_key_type_fk_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(895),
    [sym_directive] = STATE(246),
    [sym_diagram_sequence] = STATE(894),
    [sym_diagram_class] = STATE(894),
    [sym_diagram_state] = STATE(894),
    [sym_diagram_gantt] = STATE(894),
    [sym_diagram_pie] = STATE(894),
    [sym_diagram_flow] = STATE(894),
    [sym_diagram_er] = STATE(894),
    [aux_sym_diagram_sequence_repeat1] = STATE(246),
    [anon_sym_PERCENT_PERCENT_LBRACE] = ACTIONS(5),
    [aux_sym_diagram_sequence_token1] = ACTIONS(7),
    [aux_sym_diagram_class_token1] = ACTIONS(9),
    [aux_sym_diagram_class_token2] = ACTIONS(11),
    [aux_sym_diagram_state_token1] = ACTIONS(13),
    [aux_sym_diagram_state_token2] = ACTIONS(15),
    [aux_sym_diagram_gantt_token1] = ACTIONS(17),
    [aux_sym_diagram_pie_token1] = ACTIONS(19),
    [aux_sym_diagram_flow_token1] = ACTIONS(21),
    [aux_sym_diagram_er_token1] = ACTIONS(23),
    [sym__whitespace] = ACTIONS(3),
    [sym__newline] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(53), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(581), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(129), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(71), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(99), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(138), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(493), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(138), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(509), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(511), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(543), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(541), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(129), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    ACTIONS(123), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(129), 18,
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
    ACTIONS(65), 1,
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
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(138), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    ACTIONS(184), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(138), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(181), 1,
      sym__sequence_actor_word,
    ACTIONS(186), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(189), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(192), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(195), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(198), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(201), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(204), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(207), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(210), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(213), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(216), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(219), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(222), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(225), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(228), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(231), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(234), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(237), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(129), 18,
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
  [1240] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(245), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(251), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(257), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(263), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(269), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(275), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(281), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(287), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(293), 1,
      sym__newline,
    ACTIONS(296), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(14), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(172), 18,
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
  [1337] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(325), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1436] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(337), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1535] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(339), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1634] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(341), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1733] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(343), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1832] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(345), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [1931] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(383), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(34), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(172), 18,
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
  [2028] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(385), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2127] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(349), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(32), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(172), 18,
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
  [2224] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(391), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2323] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(164), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(181), 1,
      sym__sequence_actor_word,
    ACTIONS(393), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(396), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(399), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(402), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(405), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(408), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(411), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(414), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(417), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(420), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(423), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(426), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(429), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(432), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(438), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(444), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2422] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(38), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2521] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2620] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2719] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2818] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [2917] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [3016] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(14), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(172), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [3212] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(349), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(351), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(353), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(355), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(357), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(359), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(361), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(363), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(365), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(367), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(369), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(373), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(375), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(379), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(381), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(314), 1,
      sym_sequence_actor,
    STATE(14), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(172), 18,
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
  [3309] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
  [3408] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(477), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(479), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(299), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(301), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(303), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(307), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(309), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(313), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(315), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(319), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(321), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(327), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(329), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(331), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(333), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(24), 1,
      aux_sym__sequence_subdocument,
    STATE(178), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(302), 1,
      sym_sequence_actor,
    STATE(166), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(138), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(129), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(73), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(75), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(77), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(79), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(81), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(83), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(85), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(87), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(89), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(91), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(93), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(95), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(97), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(101), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(103), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(109), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(111), 1,
      sym__newline,
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(101), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(319), 1,
      sym_sequence_actor,
    STATE(138), 18,
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
    ACTIONS(27), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(29), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(31), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(33), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(35), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(37), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(39), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(41), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(43), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(45), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(47), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(49), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(51), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(55), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(57), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(59), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(105), 1,
      sym__sequence_stmt,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(129), 18,
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
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_LPAREN_LPAREN,
    ACTIONS(493), 1,
      anon_sym_LPAREN_DASH,
    ACTIONS(495), 1,
      anon_sym_LPAREN_LBRACK,
    ACTIONS(497), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(501), 1,
      anon_sym_LBRACK_LPAREN,
    ACTIONS(503), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(505), 1,
      anon_sym_GT,
    ACTIONS(507), 1,
      anon_sym_LBRACK_SLASH,
    ACTIONS(509), 1,
      anon_sym_LBRACK_BSLASH,
    STATE(325), 1,
      sym__flow_vertex_kind,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(511), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(483), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    STATE(339), 15,
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
  [5238] = 17,
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(519), 1,
      sym__newline,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(263), 12,
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
  [5303] = 17,
    ACTIONS(537), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(545), 1,
      sym__newline,
    ACTIONS(548), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(551), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(554), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(557), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(560), 1,
      anon_sym_DASH_DASH,
    ACTIONS(563), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(566), 1,
      aux_sym_state_name_token1,
    ACTIONS(569), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(263), 12,
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
  [5368] = 18,
    ACTIONS(572), 1,
      ts_builtin_sym_end,
    ACTIONS(574), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(576), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(594), 1,
      sym__newline,
    ACTIONS(596), 1,
      aux_sym_gantt_task_text_token1,
    STATE(623), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(58), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(259), 11,
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
  [5435] = 18,
    ACTIONS(574), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(576), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 1,
      sym__newline,
    STATE(623), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(259), 11,
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
  [5502] = 17,
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(263), 12,
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
  [5567] = 18,
    ACTIONS(574), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(576), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(606), 1,
      sym__newline,
    STATE(623), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(259), 11,
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
  [5634] = 18,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(613), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(616), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(619), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(622), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(625), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(628), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(631), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(634), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(637), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(640), 1,
      sym__newline,
    ACTIONS(643), 1,
      aux_sym_gantt_task_text_token1,
    STATE(623), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(259), 11,
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
  [5701] = 17,
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(59), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(263), 12,
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
  [5766] = 17,
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(263), 12,
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
  [5831] = 18,
    ACTIONS(574), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(576), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(580), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(582), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(586), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(588), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(592), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(600), 1,
      sym__newline,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    STATE(623), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(818), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(259), 11,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      sym__newline,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(479), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(671), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(662), 1,
      sym__newline,
    STATE(55), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(287), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(666), 1,
      sym__newline,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(638), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(287), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(671), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(671), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(671), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(287), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(523), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(671), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(62), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(531), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(533), 1,
      aux_sym_state_name_token1,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(287), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(517), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(521), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(523), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(525), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(527), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(529), 1,
      anon_sym_DASH_DASH,
    ACTIONS(535), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(260), 1,
      sym_state_hide_empty_description,
    STATE(398), 1,
      sym_state_name,
    STATE(638), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(263), 12,
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
    ACTIONS(676), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(674), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(680), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(684), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(688), 17,
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
  [6926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 17,
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
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 17,
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
  [7054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 17,
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
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 17,
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
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 17,
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
  [7182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 17,
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
  [7214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 17,
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
  [7246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 17,
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
  [7278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 17,
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
  [7310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 17,
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
  [7342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 17,
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
  [7438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 17,
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
  [7502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 17,
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
  [7534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 17,
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
  [7566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 17,
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
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 17,
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
  [7662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 17,
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
  [7726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 17,
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
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 17,
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
  [7822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 17,
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
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(688), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(684), 17,
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
  [8014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 17,
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
  [8078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(680), 17,
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
  [8110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 17,
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
  [8142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 17,
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
  [8174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 17,
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
  [8238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 17,
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
  [8366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 17,
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
  [8430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 17,
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
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 17,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 17,
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
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 17,
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
  [8590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 17,
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
  [8622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 17,
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
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 17,
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
  [8686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 17,
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
  [8718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 17,
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
  [8750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 17,
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
  [8782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 17,
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
  [8814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 17,
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
  [8846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 17,
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
  [8878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(684), 16,
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
  [8909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 16,
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
  [8940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 16,
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
  [8971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 16,
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
  [9002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 16,
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
  [9033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 16,
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
  [9064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(760), 16,
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
  [9095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 16,
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
  [9126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 16,
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
  [9157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 16,
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
  [9188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 16,
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
  [9219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 16,
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
  [9250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 16,
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
  [9281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 16,
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
  [9312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 16,
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
  [9343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 16,
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
  [9374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(736), 16,
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
  [9405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(732), 16,
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
  [9436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 16,
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
  [9467] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 16,
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
  [9498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(728), 16,
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
  [9529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 16,
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
  [9560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 16,
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
  [9591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 16,
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
  [9622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 16,
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
  [9653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 16,
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
  [9684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 16,
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
  [9715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(800), 16,
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
  [9746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 16,
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
  [9777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 16,
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
  [9808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 16,
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
  [9839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(776), 16,
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
  [9870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(768), 16,
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
  [9901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(752), 16,
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
  [9932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(756), 16,
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
  [9963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(772), 16,
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
  [9994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(748), 16,
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
  [10025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(764), 16,
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
  [10056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(688), 16,
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
  [10087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 16,
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
  [10118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(680), 16,
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
  [10149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(696), 16,
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
  [10180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 16,
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
  [10211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(802), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(804), 16,
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
  [10242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(684), 16,
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
  [10273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(780), 16,
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
  [10304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(700), 16,
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
  [10335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(680), 16,
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
  [10366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 16,
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
  [10397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(724), 16,
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
  [10428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(720), 16,
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
  [10459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(716), 16,
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
  [10490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(692), 16,
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
  [10521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(704), 16,
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
  [10552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(784), 16,
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
  [10583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(788), 16,
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
  [10614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(740), 16,
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
  [10645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(792), 16,
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
  [10676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(744), 16,
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
  [10707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(708), 16,
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
  [10738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(796), 16,
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
  [10769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(712), 16,
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
  [10800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__sequence_actor_word,
    ACTIONS(688), 16,
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
  [10831] = 15,
    ACTIONS(806), 1,
      anon_sym_COLON,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(812), 1,
      sym__dquote_string,
    ACTIONS(814), 1,
      sym_class_reltype_aggregation,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(820), 1,
      anon_sym_DASH_DASH,
    ACTIONS(822), 1,
      anon_sym_DOT_DOT,
    STATE(236), 1,
      sym__class_linetype,
    STATE(389), 1,
      sym_class_relation,
    STATE(415), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(358), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(413), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10882] = 9,
    STATE(211), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(434), 1,
      sym__flow_link,
    STATE(561), 1,
      sym_flow_link_arrow_start,
    STATE(678), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(824), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(826), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(828), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(862), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10919] = 13,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(814), 1,
      sym_class_reltype_aggregation,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(820), 1,
      anon_sym_DASH_DASH,
    ACTIONS(822), 1,
      anon_sym_DOT_DOT,
    STATE(236), 1,
      sym__class_linetype,
    STATE(385), 1,
      sym_class_relation,
    STATE(415), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(358), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(413), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10964] = 9,
    STATE(214), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(434), 1,
      sym__flow_link,
    STATE(561), 1,
      sym_flow_link_arrow_start,
    STATE(678), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(828), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(830), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(862), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11001] = 7,
    ACTIONS(834), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(322), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11034] = 6,
    ACTIONS(844), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      aux_sym_state_name_token1,
    STATE(241), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 12,
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
  [11065] = 9,
    STATE(214), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(434), 1,
      sym__flow_link,
    STATE(561), 1,
      sym_flow_link_arrow_start,
    STATE(678), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(850), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(852), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(855), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(862), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11102] = 7,
    ACTIONS(858), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(321), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11135] = 9,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      sym_er_cardinarity_only_one,
    STATE(659), 1,
      sym_er_relation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(860), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(864), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(866), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(868), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(367), 4,
      sym__er_cardinarity,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11171] = 6,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH_GT,
    STATE(551), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(874), 10,
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
  [11201] = 3,
    ACTIONS(882), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(880), 14,
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
  [11225] = 6,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(836), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(840), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(832), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(838), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(576), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11255] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(886), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(884), 12,
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
  [11278] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(690), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(692), 12,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [11301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(892), 1,
      aux_sym_class_label_token1,
    STATE(266), 1,
      sym_state_description,
    ACTIONS(890), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(888), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11330] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(694), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(696), 12,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_diagram_sequence_token1,
      aux_sym_sequence_stmt_title_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [11353] = 5,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_LT,
    STATE(290), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(894), 11,
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
      anon_sym_DOT_DOT,
  [11380] = 4,
    ACTIONS(902), 1,
      anon_sym_COLON,
    ACTIONS(904), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(900), 12,
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
  [11405] = 5,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(912), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(906), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [11431] = 3,
    ACTIONS(916), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(914), 12,
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
  [11453] = 11,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    STATE(710), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11491] = 8,
    ACTIONS(844), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(241), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(928), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(930), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(932), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(245), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [11523] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(696), 11,
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
  [11545] = 10,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(934), 1,
      sym__class_name,
    ACTIONS(938), 1,
      sym_class_reltype_aggregation,
    STATE(594), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(936), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(413), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11581] = 3,
    ACTIONS(942), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(940), 12,
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
      anon_sym_DOT_DOT,
  [11603] = 5,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(940), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [11629] = 3,
    ACTIONS(946), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 12,
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
  [11651] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(948), 1,
      ts_builtin_sym_end,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(952), 1,
      sym__newline,
    ACTIONS(954), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    STATE(308), 1,
      sym_pie_showdata,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(311), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [11689] = 10,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(938), 1,
      sym_class_reltype_aggregation,
    ACTIONS(958), 1,
      sym__class_name,
    STATE(472), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(960), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(413), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11725] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(964), 1,
      sym__sequence_actor_word,
    STATE(237), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(967), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(962), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [11753] = 11,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    STATE(710), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11791] = 3,
    ACTIONS(912), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(906), 12,
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
      anon_sym_DOT_DOT,
  [11813] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(973), 1,
      sym__sequence_actor_word,
    STATE(237), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(975), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(971), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [11841] = 3,
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
  [11863] = 3,
    ACTIONS(983), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(981), 12,
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
  [11885] = 3,
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
  [11907] = 3,
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
  [11929] = 3,
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
  [11951] = 13,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(997), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(999), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1001), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1003), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1005), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1007), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1009), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(1011), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(1013), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(1015), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(271), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [11993] = 3,
    ACTIONS(1019), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1017), 12,
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
  [12015] = 3,
    ACTIONS(1023), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1021), 12,
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
  [12037] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1027), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1025), 11,
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
  [12059] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1031), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1029), 11,
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
  [12081] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1033), 11,
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
  [12103] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1039), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1037), 11,
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
  [12125] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1043), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1041), 11,
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
  [12147] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1047), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1045), 11,
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
  [12169] = 3,
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
  [12191] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1053), 11,
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
  [12213] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1059), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1057), 11,
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
  [12235] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1063), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1061), 11,
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
  [12257] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1067), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1065), 11,
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
  [12279] = 3,
    ACTIONS(1071), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1069), 12,
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
  [12301] = 12,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1077), 1,
      anon_sym_end,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(293), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(725), 1,
      sym__flow_stmt,
    STATE(836), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12341] = 3,
    ACTIONS(1083), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1081), 12,
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
  [12363] = 3,
    ACTIONS(1087), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1085), 12,
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
  [12385] = 3,
    ACTIONS(1091), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1089), 12,
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
  [12407] = 3,
    ACTIONS(1095), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1093), 12,
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
  [12429] = 3,
    ACTIONS(1099), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1097), 12,
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
  [12451] = 3,
    ACTIONS(886), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 12,
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
  [12473] = 3,
    ACTIONS(1103), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1101), 12,
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
  [12495] = 3,
    ACTIONS(1107), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1105), 12,
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
  [12517] = 3,
    ACTIONS(1111), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1109), 12,
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
  [12539] = 6,
    ACTIONS(1113), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1120), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1118), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(271), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1116), 7,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
  [12567] = 3,
    ACTIONS(1125), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1123), 12,
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
  [12589] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(692), 11,
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
  [12611] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1129), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1127), 11,
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
  [12633] = 3,
    ACTIONS(1133), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1131), 12,
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
  [12655] = 11,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1135), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    STATE(710), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12693] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(954), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
    ACTIONS(1139), 1,
      sym__newline,
    STATE(323), 1,
      sym_pie_showdata,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(316), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12731] = 12,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1141), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(293), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(725), 1,
      sym__flow_stmt,
    STATE(857), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12771] = 3,
    ACTIONS(1145), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1143), 12,
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
  [12793] = 3,
    ACTIONS(1149), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1147), 12,
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
  [12815] = 12,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1151), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(293), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(725), 1,
      sym__flow_stmt,
    STATE(881), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12855] = 3,
    ACTIONS(1155), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 11,
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
      anon_sym_DOT_DOT,
  [12876] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1169), 1,
      sym__newline,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(504), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12913] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12950] = 5,
    ACTIONS(1179), 1,
      aux_sym_flow_text_literal_token1,
    STATE(291), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1175), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [12975] = 10,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(524), 1,
      sym__class_stmt,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13010] = 3,
    ACTIONS(1181), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(540), 11,
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
  [13031] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13068] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 12,
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
  [13087] = 3,
    ACTIONS(1187), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1185), 11,
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
      anon_sym_DOT_DOT,
  [13108] = 5,
    ACTIONS(1193), 1,
      aux_sym_flow_text_literal_token1,
    STATE(291), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1191), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1189), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13133] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13170] = 11,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1198), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(298), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(725), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13207] = 10,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    STATE(710), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13242] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1200), 1,
      sym__newline,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(478), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13279] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13316] = 10,
    ACTIONS(920), 1,
      anon_sym_class,
    ACTIONS(922), 1,
      anon_sym_LT_LT,
    ACTIONS(924), 1,
      sym__class_name,
    ACTIONS(926), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(626), 1,
      aux_sym_class_name_body_repeat1,
    STATE(640), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(695), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13351] = 11,
    ACTIONS(1204), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1207), 1,
      anon_sym_subgraph,
    ACTIONS(1210), 1,
      anon_sym_end,
    ACTIONS(1212), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(298), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(725), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13388] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13425] = 11,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    ACTIONS(1217), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13462] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1219), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(546), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13496] = 7,
    ACTIONS(1221), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1225), 1,
      sym_solid_open_arrow,
    ACTIONS(1227), 1,
      anon_sym_DASH_DASH_GT,
    STATE(373), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(635), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1223), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13524] = 5,
    ACTIONS(1231), 1,
      anon_sym_AMP,
    STATE(303), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1234), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1229), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13548] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1236), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(546), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13582] = 7,
    ACTIONS(1221), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1225), 1,
      sym_solid_open_arrow,
    ACTIONS(1227), 1,
      anon_sym_DASH_DASH_GT,
    STATE(370), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(635), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1223), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13610] = 10,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(707), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13644] = 10,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(518), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13678] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
    ACTIONS(1139), 1,
      sym__newline,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(316), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13710] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1238), 11,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACE,
      sym__newline,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [13728] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1240), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(546), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13762] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1137), 1,
      ts_builtin_sym_end,
    ACTIONS(1242), 1,
      sym__newline,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(315), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13794] = 5,
    ACTIONS(1246), 1,
      anon_sym_AMP,
    STATE(303), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1248), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1244), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13818] = 6,
    ACTIONS(1250), 1,
      sym_er_cardinarity_only_one,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(866), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(868), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(841), 4,
      sym__er_cardinarity,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [13844] = 7,
    ACTIONS(1221), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1225), 1,
      sym_solid_open_arrow,
    ACTIONS(1227), 1,
      anon_sym_DASH_DASH_GT,
    STATE(372), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(635), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1223), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13872] = 9,
    ACTIONS(1252), 1,
      ts_builtin_sym_end,
    ACTIONS(1254), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1257), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1260), 1,
      sym__newline,
    ACTIONS(1263), 1,
      aux_sym_pie_label_token1,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(315), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13904] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1242), 1,
      sym__newline,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(315), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13936] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(546), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13970] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1242), 1,
      sym__newline,
    ACTIONS(1270), 1,
      ts_builtin_sym_end,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(315), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14002] = 7,
    ACTIONS(1221), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1225), 1,
      sym_solid_open_arrow,
    ACTIONS(1227), 1,
      anon_sym_DASH_DASH_GT,
    STATE(369), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(635), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1223), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14030] = 5,
    ACTIONS(1246), 1,
      anon_sym_AMP,
    STATE(312), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1274), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1272), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14054] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1276), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(461), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14088] = 10,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(436), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14122] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(950), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(956), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    ACTIONS(1280), 1,
      sym__newline,
    STATE(741), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(318), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(400), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14154] = 10,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_LT_LT,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(477), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14188] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1284), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1282), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14207] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1288), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1286), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14226] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1234), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1229), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14245] = 9,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(546), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14276] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1292), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1290), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14295] = 9,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(436), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14326] = 9,
    ACTIONS(1073), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1075), 1,
      anon_sym_subgraph,
    ACTIONS(1079), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(209), 1,
      sym_flow_node,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(455), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(619), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14357] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1296), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1294), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14376] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1300), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1298), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14395] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1304), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1302), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14414] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1308), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1306), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14433] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1312), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1310), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14452] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1316), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1314), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14471] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1320), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1318), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14490] = 3,
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
  [14509] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1328), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1326), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14528] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1332), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1330), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14547] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1336), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1334), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14566] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1340), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1338), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14585] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1344), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1342), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14604] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1346), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14623] = 6,
    ACTIONS(1354), 1,
      anon_sym_STAR,
    ACTIONS(1356), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1350), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1352), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14647] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(850), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14665] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1362), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1360), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14683] = 6,
    ACTIONS(1366), 1,
      anon_sym_STAR,
    ACTIONS(1368), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1364), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14707] = 4,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1372), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1370), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [14727] = 6,
    ACTIONS(1377), 1,
      anon_sym_STAR,
    ACTIONS(1379), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1375), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14751] = 8,
    ACTIONS(1381), 1,
      sym__newline,
    ACTIONS(1383), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1385), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1387), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(888), 1,
      sym__er_word,
    STATE(889), 1,
      sym_er_attribute_comment,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(452), 3,
      sym__er_attribute_key_type,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [14779] = 6,
    ACTIONS(1391), 1,
      anon_sym_STAR,
    ACTIONS(1393), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1389), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14803] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1395), 1,
      sym__newline,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(618), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14827] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    ACTIONS(1399), 1,
      sym__newline,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(501), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14851] = 9,
    ACTIONS(1157), 1,
      anon_sym_TILDE,
    ACTIONS(1159), 1,
      anon_sym_PLUS,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    ACTIONS(1163), 1,
      anon_sym_POUND,
    ACTIONS(1171), 1,
      sym__alpha_num_token,
    STATE(361), 1,
      aux_sym_class_method_line_repeat1,
    STATE(718), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1165), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14881] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(692), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14905] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1405), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1403), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14923] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(692), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14947] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1411), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1409), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14965] = 6,
    ACTIONS(1415), 1,
      anon_sym_STAR,
    ACTIONS(1417), 1,
      anon_sym_DOLLAR,
    STATE(350), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1352), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1413), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14989] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    ACTIONS(1419), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(692), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15013] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    ACTIONS(1421), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(692), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15037] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(618), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15058] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15079] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(692), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15100] = 4,
    ACTIONS(1423), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1425), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
    STATE(313), 3,
      sym__er_reltype,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
  [15118] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(910), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(940), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15134] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1427), 1,
      anon_sym_PLUS,
    ACTIONS(1429), 1,
      anon_sym_DASH,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(853), 1,
      sym_sequence_actor,
    STATE(516), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15160] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1427), 1,
      anon_sym_PLUS,
    ACTIONS(1429), 1,
      anon_sym_DASH,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(868), 1,
      sym_sequence_actor,
    STATE(476), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15186] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1431), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15200] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1427), 1,
      anon_sym_PLUS,
    ACTIONS(1429), 1,
      anon_sym_DASH,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(833), 1,
      sym_sequence_actor,
    STATE(598), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15226] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1427), 1,
      anon_sym_PLUS,
    ACTIONS(1429), 1,
      anon_sym_DASH,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(838), 1,
      sym_sequence_actor,
    STATE(550), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15252] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(910), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(906), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15268] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1433), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15282] = 4,
    ACTIONS(1435), 1,
      anon_sym_TILDE,
    STATE(433), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(894), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15299] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1439), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1437), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15314] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1441), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15329] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1447), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1445), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15344] = 6,
    ACTIONS(1449), 1,
      anon_sym_RBRACE,
    ACTIONS(1451), 1,
      sym__er_alphanum,
    STATE(670), 1,
      sym_er_attribute_type,
    STATE(847), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(417), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15365] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(910), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(940), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15380] = 4,
    ACTIONS(1455), 1,
      sym__alpha_num_token,
    STATE(382), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1453), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15397] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(910), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(906), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15412] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1462), 1,
      sym_pie_title,
    ACTIONS(1460), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_pie_label_token1,
    ACTIONS(1458), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [15431] = 7,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1464), 1,
      sym__class_name,
    ACTIONS(1466), 1,
      sym__dquote_string,
    STATE(224), 1,
      sym_class_name_body,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    STATE(597), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15454] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1470), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1468), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15469] = 6,
    ACTIONS(1472), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1474), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1476), 1,
      aux_sym_note_placement_right_token1,
    STATE(553), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(793), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15490] = 6,
    ACTIONS(1480), 1,
      sym__alpha_num_token,
    STATE(425), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(673), 1,
      sym_flow_vertex_text,
    STATE(851), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1478), 2,
      anon_sym_SEMI,
      sym__newline,
  [15511] = 7,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1464), 1,
      sym__class_name,
    ACTIONS(1482), 1,
      sym__dquote_string,
    STATE(224), 1,
      sym_class_name_body,
    STATE(474), 1,
      sym_class_name,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15534] = 6,
    ACTIONS(1474), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1476), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1484), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(526), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(793), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15555] = 6,
    ACTIONS(1474), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1476), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1486), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(499), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(793), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15576] = 6,
    ACTIONS(1474), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1476), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1488), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(569), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(793), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15597] = 5,
    ACTIONS(1490), 1,
      anon_sym_RBRACE,
    ACTIONS(1492), 1,
      sym__er_alphanum,
    STATE(670), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(393), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15615] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1497), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(676), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15633] = 5,
    ACTIONS(1499), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1501), 1,
      aux_sym_note_placement_right_token1,
    STATE(537), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15651] = 5,
    ACTIONS(1499), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1501), 1,
      aux_sym_note_placement_right_token1,
    STATE(641), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(684), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15669] = 5,
    ACTIONS(1503), 1,
      sym__dquote_string,
    STATE(213), 1,
      sym_state_alias,
    STATE(229), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15687] = 5,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH_GT,
    STATE(634), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15705] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1505), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15717] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1507), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15729] = 6,
    ACTIONS(1509), 1,
      sym__class_name,
    ACTIONS(1511), 1,
      sym__bquote_string,
    STATE(376), 1,
      sym_class_name_body,
    STATE(460), 1,
      sym_class_name,
    STATE(608), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15749] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1513), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15761] = 6,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1509), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(469), 1,
      aux_sym_class_name_body_repeat1,
    STATE(714), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15781] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1515), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15793] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1517), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15805] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1519), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15817] = 5,
    ACTIONS(1521), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1523), 1,
      sym_flow_text_quoted,
    STATE(437), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(876), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15835] = 6,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1464), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    STATE(597), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15855] = 6,
    ACTIONS(926), 1,
      sym__bquote_string,
    ACTIONS(1464), 1,
      sym__class_name,
    STATE(224), 1,
      sym_class_name_body,
    STATE(489), 1,
      sym_class_name,
    STATE(530), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15875] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1525), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15887] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1527), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(675), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15905] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1529), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15917] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1531), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15929] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1533), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15941] = 5,
    ACTIONS(820), 1,
      anon_sym_DASH_DASH,
    ACTIONS(822), 1,
      anon_sym_DOT_DOT,
    STATE(231), 1,
      sym__class_linetype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(358), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [15959] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1535), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(863), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15977] = 5,
    ACTIONS(1451), 1,
      sym__er_alphanum,
    ACTIONS(1537), 1,
      anon_sym_RBRACE,
    STATE(670), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(393), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15995] = 5,
    ACTIONS(1521), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1539), 1,
      sym_flow_text_quoted,
    STATE(437), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(866), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16013] = 4,
    ACTIONS(1541), 1,
      sym__alpha_num_token,
    STATE(424), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1543), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16029] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1545), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16041] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1547), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(871), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16059] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(940), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16071] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1549), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(872), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16089] = 4,
    ACTIONS(1551), 1,
      sym__alpha_num_token,
    STATE(424), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1453), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16105] = 4,
    ACTIONS(1556), 1,
      sym__alpha_num_token,
    STATE(382), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1554), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [16121] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1558), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(873), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16139] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1560), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(874), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16157] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1562), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(875), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16175] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1564), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(879), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16193] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1566), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(878), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16211] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(906), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16223] = 5,
    ACTIONS(1495), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1568), 1,
      sym_flow_text_quoted,
    STATE(285), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(877), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16241] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1185), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16252] = 5,
    ACTIONS(1570), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(320), 1,
      sym_flow_vertex,
    STATE(347), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16269] = 4,
    ACTIONS(1236), 1,
      ts_builtin_sym_end,
    STATE(444), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1572), 2,
      anon_sym_SEMI,
      sym__newline,
  [16284] = 4,
    ACTIONS(1236), 1,
      ts_builtin_sym_end,
    STATE(448), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1572), 2,
      anon_sym_SEMI,
      sym__newline,
  [16299] = 4,
    ACTIONS(1574), 1,
      aux_sym_flow_text_literal_token1,
    STATE(443), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1175), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16314] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1576), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [16327] = 3,
    ACTIONS(1578), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1210), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [16340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1580), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(962), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16357] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16368] = 3,
    STATE(861), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16381] = 4,
    ACTIONS(1583), 1,
      aux_sym_flow_text_literal_token1,
    STATE(443), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1189), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16396] = 4,
    ACTIONS(1586), 1,
      ts_builtin_sym_end,
    STATE(444), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1588), 2,
      anon_sym_SEMI,
      sym__newline,
  [16411] = 4,
    STATE(679), 1,
      sym_er_role,
    STATE(689), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1591), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [16426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1595), 1,
      aux_sym_class_label_token1,
    STATE(706), 1,
      sym_class_label,
    ACTIONS(1593), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16443] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1597), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [16454] = 4,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
    STATE(444), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1599), 2,
      anon_sym_SEMI,
      sym__newline,
  [16469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1595), 1,
      aux_sym_class_label_token1,
    STATE(716), 1,
      sym_class_label,
    ACTIONS(1601), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1603), 1,
      sym__sequence_actor_word,
    STATE(440), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(971), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16503] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1595), 1,
      aux_sym_class_label_token1,
    STATE(700), 1,
      sym_class_label,
    ACTIONS(1605), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16520] = 5,
    ACTIONS(1383), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1607), 1,
      sym__newline,
    STATE(884), 1,
      sym_er_attribute_comment,
    STATE(888), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16537] = 3,
    STATE(349), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1609), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16550] = 4,
    ACTIONS(1219), 1,
      ts_builtin_sym_end,
    STATE(444), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1611), 2,
      anon_sym_SEMI,
      sym__newline,
  [16565] = 4,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
    STATE(454), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1599), 2,
      anon_sym_SEMI,
      sym__newline,
  [16580] = 3,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1613), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16593] = 3,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1615), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16606] = 3,
    STATE(346), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1617), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16619] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(892), 1,
      aux_sym_class_label_token1,
    STATE(266), 1,
      sym_state_description,
    ACTIONS(888), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16636] = 4,
    ACTIONS(1621), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1623), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16651] = 4,
    ACTIONS(1625), 1,
      ts_builtin_sym_end,
    STATE(435), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1627), 2,
      anon_sym_SEMI,
      sym__newline,
  [16666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1631), 1,
      sym__sequence_actor_word,
    ACTIONS(1629), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [16680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(797), 1,
      sym_sequence_actor,
  [16696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1633), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym__sequence_rest_text,
    STATE(117), 1,
      sym_sequence_text,
  [16712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1633), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym__sequence_rest_text,
    STATE(119), 1,
      sym_sequence_text,
  [16728] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1635), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1633), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym__sequence_rest_text,
    STATE(120), 1,
      sym_sequence_text,
  [16754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(887), 1,
      sym_sequence_text,
  [16770] = 4,
    ACTIONS(1639), 1,
      sym__class_name,
    ACTIONS(1641), 1,
      sym__bquote_string,
    STATE(588), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16784] = 4,
    ACTIONS(1643), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1645), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(470), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(643), 1,
      sym_sequence_actor,
  [16814] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(936), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [16824] = 4,
    ACTIONS(1650), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1652), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(473), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16838] = 3,
    ACTIONS(1657), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1655), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16850] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(870), 1,
      sym_sequence_actor,
  [16866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(869), 1,
      sym_sequence_actor,
  [16882] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1659), 1,
      sym__newline,
    STATE(508), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16896] = 4,
    ACTIONS(1661), 1,
      anon_sym_RBRACE,
    ACTIONS(1663), 1,
      sym__newline,
    STATE(480), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16910] = 4,
    ACTIONS(1665), 1,
      ts_builtin_sym_end,
    ACTIONS(1667), 1,
      sym__newline,
    STATE(637), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16924] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1659), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16938] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1669), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16948] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1671), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16958] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1673), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16968] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1675), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16978] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1677), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16988] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1679), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16998] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1681), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17008] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1683), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17018] = 3,
    ACTIONS(1685), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1593), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17030] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1687), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(473), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17044] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1689), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(470), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17058] = 4,
    ACTIONS(1691), 1,
      ts_builtin_sym_end,
    ACTIONS(1693), 1,
      sym__newline,
    STATE(492), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17072] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1696), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(470), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17086] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1698), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(651), 1,
      sym_sequence_actor,
  [17112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(813), 1,
      sym_sequence_text,
  [17128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(892), 1,
      sym_sequence_text,
  [17144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(809), 1,
      sym_sequence_text,
  [17160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(867), 1,
      sym_sequence_actor,
  [17176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(680), 1,
      sym_sequence_actor,
  [17192] = 4,
    ACTIONS(1700), 1,
      ts_builtin_sym_end,
    ACTIONS(1702), 1,
      sym__newline,
    STATE(617), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(865), 1,
      sym_sequence_text,
  [17222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(864), 1,
      sym_sequence_text,
  [17238] = 4,
    ACTIONS(1704), 1,
      anon_sym_RBRACE,
    ACTIONS(1706), 1,
      sym__newline,
    STATE(521), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(803), 1,
      sym_sequence_text,
  [17268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(802), 1,
      sym_sequence_text,
  [17284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(855), 1,
      sym_sequence_actor,
  [17300] = 4,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    ACTIONS(1708), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17314] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1710), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(470), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17328] = 4,
    ACTIONS(1712), 1,
      anon_sym_RBRACE,
    ACTIONS(1714), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17342] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1717), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(473), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(814), 1,
      sym_sequence_text,
  [17372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(819), 1,
      sym_sequence_actor,
  [17388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(825), 1,
      sym_sequence_text,
  [17404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1719), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(83), 1,
      sym_sequence_text,
    STATE(126), 1,
      sym__sequence_rest_text,
  [17420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(854), 1,
      sym_sequence_actor,
  [17436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(774), 1,
      sym_sequence_actor,
  [17452] = 4,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    ACTIONS(1721), 1,
      sym__newline,
    STATE(532), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1719), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(82), 1,
      sym_sequence_text,
    STATE(126), 1,
      sym__sequence_rest_text,
  [17482] = 4,
    ACTIONS(1421), 1,
      ts_builtin_sym_end,
    ACTIONS(1723), 1,
      sym__newline,
    STATE(615), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17496] = 4,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    ACTIONS(1721), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17510] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1719), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(110), 1,
      sym_sequence_text,
    STATE(126), 1,
      sym__sequence_rest_text,
  [17526] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17540] = 4,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    ACTIONS(1727), 1,
      sym__newline,
    STATE(592), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1719), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(81), 1,
      sym_sequence_text,
    STATE(126), 1,
      sym__sequence_rest_text,
  [17570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(852), 1,
      sym_sequence_actor,
  [17586] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1729), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(674), 1,
      sym_sequence_actor,
  [17612] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(664), 1,
      sym_sequence_actor,
  [17628] = 4,
    ACTIONS(1641), 1,
      sym__bquote_string,
    ACTIONS(1731), 1,
      sym__class_name,
    STATE(588), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17642] = 4,
    ACTIONS(1733), 1,
      ts_builtin_sym_end,
    ACTIONS(1735), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17656] = 4,
    ACTIONS(1215), 1,
      anon_sym_RBRACE,
    ACTIONS(1738), 1,
      sym__newline,
    STATE(510), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(665), 1,
      sym_sequence_actor,
  [17686] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1740), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(792), 1,
      sym_sequence_actor,
  [17712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(791), 1,
      sym_sequence_actor,
  [17728] = 3,
    STATE(778), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17740] = 4,
    ACTIONS(1421), 1,
      ts_builtin_sym_end,
    ACTIONS(1723), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17754] = 4,
    ACTIONS(1570), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(327), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(850), 1,
      sym_sequence_text,
  [17784] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1742), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(473), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17798] = 4,
    ACTIONS(1744), 1,
      sym__alpha_num_token,
    STATE(425), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(856), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17812] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1746), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(470), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(769), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [17842] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(768), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [17858] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17868] = 4,
    ACTIONS(1748), 1,
      sym__alpha_num_token,
    STATE(571), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(858), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(849), 1,
      sym_sequence_text,
  [17898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(840), 1,
      sym_sequence_actor,
  [17914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(839), 1,
      sym_sequence_actor,
  [17930] = 3,
    STATE(225), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1750), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(775), 1,
      sym_sequence_actor,
  [17958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(837), 1,
      sym_sequence_actor,
  [17974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(669), 1,
      sym_sequence_actor,
  [17990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(668), 1,
      sym_sequence_actor,
  [18006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(835), 1,
      sym_sequence_text,
  [18022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(834), 1,
      sym_sequence_text,
  [18038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(733), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(812), 1,
      sym_sequence_text,
  [18070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(811), 1,
      sym_sequence_text,
  [18086] = 4,
    ACTIONS(1752), 1,
      sym__alpha_num_token,
    STATE(419), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(442), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(763), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18116] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(801), 1,
      sym__sequence_rest_text,
    STATE(810), 1,
      sym_sequence_text,
  [18132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(808), 1,
      sym_sequence_actor,
  [18148] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(807), 1,
      sym_sequence_actor,
  [18164] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(694), 1,
      sym_sequence_actor,
  [18180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(806), 1,
      sym_sequence_actor,
  [18196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(685), 1,
      sym_sequence_actor,
  [18212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(828), 1,
      sym_sequence_actor,
  [18228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(805), 1,
      sym_sequence_actor,
  [18244] = 4,
    ACTIONS(1543), 1,
      anon_sym_PIPE,
    ACTIONS(1556), 1,
      sym__alpha_num_token,
    STATE(382), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18258] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(757), 1,
      sym_sequence_actor,
  [18274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(191), 1,
      sym__sequence_rest_text,
    STATE(207), 1,
      sym_sequence_text,
  [18290] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(790), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(189), 1,
      sym_sequence_text,
    STATE(191), 1,
      sym__sequence_rest_text,
  [18322] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1756), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18332] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1758), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18342] = 4,
    ACTIONS(1760), 1,
      anon_sym_COLON,
    ACTIONS(1762), 1,
      aux_sym_gantt_task_text_token1,
    STATE(578), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(789), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18372] = 4,
    ACTIONS(1765), 1,
      ts_builtin_sym_end,
    ACTIONS(1767), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18386] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1770), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(473), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18400] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(788), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(190), 1,
      sym_sequence_text,
    STATE(191), 1,
      sym__sequence_rest_text,
  [18432] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1725), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(786), 1,
      sym_sequence_actor,
  [18462] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(785), 1,
      sym_sequence_actor,
  [18478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(784), 1,
      sym_sequence_actor,
  [18494] = 4,
    ACTIONS(1772), 1,
      sym__class_name,
    ACTIONS(1775), 1,
      sym__bquote_string,
    STATE(588), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(783), 1,
      sym_sequence_actor,
  [18524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1754), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(191), 1,
      sym__sequence_rest_text,
    STATE(192), 1,
      sym_sequence_text,
  [18540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(756), 1,
      sym_sequence_actor,
  [18556] = 4,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
    ACTIONS(1777), 1,
      sym__newline,
    STATE(492), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18570] = 4,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(1779), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18584] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1781), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18594] = 4,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
    ACTIONS(1727), 1,
      sym__newline,
    STATE(492), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18608] = 3,
    ACTIONS(1785), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1783), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18620] = 3,
    ACTIONS(1787), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1601), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(885), 1,
      sym_sequence_actor,
  [18648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(766), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(765), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(764), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(762), 1,
      sym_sequence_actor,
  [18712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1789), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(157), 1,
      sym__sequence_rest_text,
    STATE(183), 1,
      sym_sequence_text,
  [18728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1789), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(145), 1,
      sym_sequence_text,
    STATE(157), 1,
      sym__sequence_rest_text,
  [18744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1789), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(157), 1,
      sym__sequence_rest_text,
    STATE(184), 1,
      sym_sequence_text,
  [18760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1789), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(157), 1,
      sym__sequence_rest_text,
    STATE(185), 1,
      sym_sequence_text,
  [18776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(761), 1,
      sym_sequence_actor,
  [18792] = 4,
    ACTIONS(1639), 1,
      sym__class_name,
    ACTIONS(1791), 1,
      sym__bquote_string,
    STATE(588), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1633), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(87), 1,
      sym__sequence_rest_text,
    STATE(114), 1,
      sym_sequence_text,
  [18822] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(796), 1,
      sym_sequence_actor,
  [18838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(760), 1,
      sym_sequence_actor,
  [18854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(739), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18870] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1364), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18880] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1793), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18890] = 4,
    ACTIONS(1419), 1,
      ts_builtin_sym_end,
    ACTIONS(1795), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(759), 1,
      sym_sequence_actor,
  [18920] = 4,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    ACTIONS(1797), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18934] = 4,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    ACTIONS(1797), 1,
      sym__newline,
    STATE(538), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18948] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1799), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18958] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(748), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(747), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [18990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(746), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19006] = 4,
    ACTIONS(1801), 1,
      anon_sym_COLON,
    ACTIONS(1803), 1,
      aux_sym_gantt_task_text_token1,
    STATE(578), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(743), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(735), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19052] = 4,
    ACTIONS(1641), 1,
      sym__bquote_string,
    ACTIONS(1805), 1,
      sym__class_name,
    STATE(588), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(734), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(730), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(721), 1,
      sym_sequence_actor,
  [19114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1648), 1,
      sym__sequence_actor_word,
    STATE(450), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(722), 1,
      sym_sequence_actor,
  [19130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(728), 1,
      sym_sequence_actor,
  [19146] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(729), 1,
      sym_sequence_actor,
  [19162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1809), 1,
      sym__sequence_actor_word,
    ACTIONS(1807), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19176] = 3,
    STATE(225), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1813), 1,
      sym__sequence_actor_word,
    ACTIONS(1811), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(795), 1,
      sym_sequence_actor,
  [19218] = 4,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(1815), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19232] = 4,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
    ACTIONS(1815), 1,
      sym__newline,
    STATE(584), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19246] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(240), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(794), 1,
      sym_sequence_actor,
  [19262] = 4,
    ACTIONS(1817), 1,
      ts_builtin_sym_end,
    ACTIONS(1819), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19276] = 3,
    STATE(843), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(800), 1,
      sym_sequence_text,
    STATE(801), 1,
      sym__sequence_rest_text,
  [19304] = 3,
    ACTIONS(1821), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1823), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(251), 1,
      sym_gantt_meta_format,
  [19328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(892), 1,
      aux_sym_class_label_token1,
    STATE(248), 1,
      sym_state_description,
  [19341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(737), 1,
      sym__sequence_rest_text,
  [19354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(736), 1,
      sym__sequence_rest_text,
  [19367] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1827), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(250), 1,
      sym_gantt_meta_format,
  [19389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(732), 1,
      sym__sequence_rest_text,
  [19402] = 3,
    ACTIONS(1829), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1831), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(252), 1,
      sym_gantt_meta_format,
  [19426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(253), 1,
      sym_gantt_meta_format,
  [19439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(254), 1,
      sym_gantt_meta_format,
  [19452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(255), 1,
      sym_gantt_meta_format,
  [19465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(256), 1,
      sym_gantt_meta_format,
  [19478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(830), 1,
      sym__sequence_rest_text,
  [19491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(258), 1,
      sym_gantt_meta_format,
  [19504] = 3,
    ACTIONS(1397), 1,
      sym__er_alphanum,
    STATE(882), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(883), 1,
      sym__sequence_rest_text,
  [19528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(815), 1,
      sym__sequence_rest_text,
  [19541] = 3,
    ACTIONS(1833), 1,
      anon_sym_COLON,
    ACTIONS(1835), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(742), 1,
      sym__sequence_rest_text,
  [19565] = 3,
    ACTIONS(1837), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1839), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19576] = 3,
    ACTIONS(1841), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1843), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(744), 1,
      sym__sequence_rest_text,
  [19600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(754), 1,
      sym__sequence_rest_text,
  [19613] = 3,
    ACTIONS(1845), 1,
      anon_sym_COLON,
    ACTIONS(1847), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19624] = 3,
    ACTIONS(1849), 1,
      anon_sym_COLON,
    ACTIONS(1851), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19635] = 3,
    ACTIONS(1853), 1,
      sym__er_alphanum,
    STATE(352), 1,
      sym_er_attribute_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19646] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1765), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19655] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1855), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19664] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1857), 2,
      anon_sym_SEMI,
      sym__newline,
  [19673] = 3,
    ACTIONS(1859), 1,
      anon_sym_COLON,
    ACTIONS(1861), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19684] = 3,
    ACTIONS(1863), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1865), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19695] = 3,
    ACTIONS(1867), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1869), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19706] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1871), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [19715] = 3,
    ACTIONS(1873), 1,
      anon_sym_PIPE,
    ACTIONS(1875), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19726] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1877), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19735] = 3,
    ACTIONS(1879), 1,
      anon_sym_COLON,
    ACTIONS(1881), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(257), 1,
      sym_gantt_meta_format,
  [19759] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1883), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19768] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1885), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19777] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1887), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19786] = 3,
    ACTIONS(1889), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1891), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(776), 1,
      sym__sequence_rest_text,
  [19810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(727), 1,
      sym__sequence_rest_text,
  [19823] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1893), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19832] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1895), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19841] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1897), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1637), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(781), 1,
      sym__sequence_rest_text,
  [19863] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1733), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19872] = 3,
    ACTIONS(1899), 1,
      anon_sym_COLON,
    ACTIONS(1901), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19883] = 3,
    ACTIONS(1903), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1905), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19894] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1907), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19903] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1909), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19912] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1911), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19921] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1913), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19930] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1915), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [19939] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1917), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19948] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1919), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19957] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1921), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19966] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1923), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [19975] = 3,
    ACTIONS(1925), 1,
      anon_sym_COLON,
    ACTIONS(1927), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19986] = 3,
    ACTIONS(1929), 1,
      anon_sym_COLON,
    ACTIONS(1931), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19997] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1605), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20006] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1712), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20015] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1933), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20024] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1935), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20033] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1691), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20042] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1937), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20051] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1939), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20060] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1941), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20069] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1943), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20078] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1945), 2,
      anon_sym_SEMI,
      sym__newline,
  [20087] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1593), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20096] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1947), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20105] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1949), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20114] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1951), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20123] = 3,
    ACTIONS(1953), 1,
      anon_sym_COLON,
    ACTIONS(1955), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20134] = 3,
    ACTIONS(1957), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1959), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20145] = 3,
    ACTIONS(1961), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1963), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20156] = 3,
    ACTIONS(846), 1,
      anon_sym_LBRACE,
    STATE(268), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(892), 1,
      aux_sym_class_label_token1,
    STATE(270), 1,
      sym_state_description,
  [20180] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1965), 2,
      anon_sym_SEMI,
      sym__newline,
  [20189] = 3,
    ACTIONS(1967), 1,
      anon_sym_COLON,
    ACTIONS(1969), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20200] = 2,
    ACTIONS(1971), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20208] = 2,
    ACTIONS(1973), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20216] = 2,
    ACTIONS(1975), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20224] = 2,
    ACTIONS(1977), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20232] = 2,
    ACTIONS(1979), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20240] = 2,
    ACTIONS(1981), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20248] = 2,
    ACTIONS(1983), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20256] = 2,
    ACTIONS(1985), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20264] = 2,
    ACTIONS(1987), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20272] = 2,
    ACTIONS(1989), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20280] = 2,
    ACTIONS(1991), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20288] = 2,
    ACTIONS(1993), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20296] = 2,
    ACTIONS(1995), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20304] = 2,
    ACTIONS(1997), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20312] = 2,
    ACTIONS(1999), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20320] = 2,
    ACTIONS(2001), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20328] = 2,
    ACTIONS(2003), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20336] = 2,
    ACTIONS(2005), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20344] = 2,
    ACTIONS(2007), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20352] = 2,
    ACTIONS(2009), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20360] = 2,
    ACTIONS(2011), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20368] = 2,
    ACTIONS(2013), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20376] = 2,
    ACTIONS(2015), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20384] = 2,
    ACTIONS(2017), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20392] = 2,
    ACTIONS(2019), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20400] = 2,
    ACTIONS(2021), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20408] = 2,
    ACTIONS(2023), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20416] = 2,
    ACTIONS(2025), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20424] = 2,
    ACTIONS(2027), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20432] = 2,
    ACTIONS(2029), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20440] = 2,
    ACTIONS(2031), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20448] = 2,
    ACTIONS(2033), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20456] = 2,
    ACTIONS(2035), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20464] = 2,
    ACTIONS(2037), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20472] = 2,
    ACTIONS(2039), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20480] = 2,
    ACTIONS(2041), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20488] = 2,
    ACTIONS(2043), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20496] = 2,
    ACTIONS(2045), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20504] = 2,
    ACTIONS(2047), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20512] = 2,
    ACTIONS(2049), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20520] = 2,
    ACTIONS(2051), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20528] = 2,
    ACTIONS(2053), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20536] = 2,
    ACTIONS(2055), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20544] = 2,
    ACTIONS(2057), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20552] = 2,
    ACTIONS(2059), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20560] = 2,
    ACTIONS(2061), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20568] = 2,
    ACTIONS(2063), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20576] = 2,
    ACTIONS(2065), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20584] = 2,
    ACTIONS(2067), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20592] = 2,
    ACTIONS(2069), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20600] = 2,
    ACTIONS(2071), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20608] = 2,
    ACTIONS(2073), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2075), 1,
      sym__sequence_actor_word,
  [20626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2077), 1,
      sym__sequence_actor_word,
  [20636] = 2,
    ACTIONS(2079), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20644] = 2,
    ACTIONS(2081), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20652] = 2,
    ACTIONS(2083), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20660] = 2,
    ACTIONS(2085), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20668] = 2,
    ACTIONS(2087), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20676] = 2,
    ACTIONS(2089), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20684] = 2,
    ACTIONS(2091), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20692] = 2,
    ACTIONS(2093), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20700] = 2,
    ACTIONS(2095), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20708] = 2,
    ACTIONS(2097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20716] = 2,
    ACTIONS(2099), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20724] = 2,
    ACTIONS(2101), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2103), 1,
      sym__sequence_actor_word,
  [20742] = 2,
    ACTIONS(2105), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20750] = 2,
    ACTIONS(2107), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20758] = 2,
    ACTIONS(2109), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20766] = 2,
    ACTIONS(2111), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20774] = 2,
    ACTIONS(704), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20782] = 2,
    ACTIONS(2113), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20790] = 2,
    ACTIONS(2115), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20798] = 2,
    ACTIONS(700), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20806] = 2,
    ACTIONS(2117), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20814] = 2,
    ACTIONS(2119), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20822] = 2,
    ACTIONS(2121), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20830] = 2,
    ACTIONS(2123), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20838] = 2,
    ACTIONS(2125), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20846] = 2,
    ACTIONS(2127), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20854] = 2,
    ACTIONS(2129), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20862] = 2,
    ACTIONS(2131), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20870] = 2,
    ACTIONS(2133), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20878] = 2,
    ACTIONS(2135), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20886] = 2,
    ACTIONS(2137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20894] = 2,
    ACTIONS(2139), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20902] = 2,
    ACTIONS(2141), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20910] = 2,
    ACTIONS(2143), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20918] = 2,
    ACTIONS(2145), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20926] = 2,
    ACTIONS(2147), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20934] = 2,
    ACTIONS(2149), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20942] = 2,
    ACTIONS(2151), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2153), 1,
      sym_pie_value,
  [20960] = 2,
    ACTIONS(2155), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20968] = 2,
    ACTIONS(2157), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20976] = 2,
    ACTIONS(2159), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20984] = 2,
    ACTIONS(2161), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20992] = 2,
    ACTIONS(2163), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21000] = 2,
    ACTIONS(2165), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21008] = 2,
    ACTIONS(2167), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21016] = 2,
    ACTIONS(1845), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21024] = 2,
    ACTIONS(2169), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21032] = 2,
    ACTIONS(2171), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2173), 1,
      sym__sequence_actor_word,
  [21050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2175), 1,
      sym__sequence_actor_word,
  [21060] = 2,
    ACTIONS(2177), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21068] = 2,
    ACTIONS(2179), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21076] = 2,
    ACTIONS(2181), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21084] = 2,
    ACTIONS(2183), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21092] = 2,
    ACTIONS(1849), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21100] = 2,
    ACTIONS(2185), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21108] = 2,
    ACTIONS(2187), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21116] = 2,
    ACTIONS(2189), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21124] = 2,
    ACTIONS(2191), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21132] = 2,
    ACTIONS(2193), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21140] = 2,
    ACTIONS(2195), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21148] = 2,
    ACTIONS(2197), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21156] = 2,
    ACTIONS(2199), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21164] = 2,
    ACTIONS(2201), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21172] = 2,
    ACTIONS(2203), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2205), 1,
      sym_gantt_task_data,
  [21190] = 2,
    ACTIONS(2207), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21198] = 2,
    ACTIONS(2209), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21206] = 2,
    ACTIONS(2211), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21214] = 2,
    ACTIONS(1859), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21222] = 2,
    ACTIONS(2213), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21230] = 2,
    ACTIONS(2215), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21238] = 2,
    ACTIONS(2217), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21246] = 2,
    ACTIONS(2219), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21254] = 2,
    ACTIONS(2221), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21262] = 2,
    ACTIONS(2223), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21270] = 2,
    ACTIONS(2225), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21278] = 2,
    ACTIONS(2227), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21286] = 2,
    ACTIONS(2229), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21294] = 2,
    ACTIONS(2231), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21302] = 2,
    ACTIONS(2233), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21310] = 2,
    ACTIONS(2235), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21318] = 2,
    ACTIONS(2237), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21326] = 2,
    ACTIONS(2239), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21334] = 2,
    ACTIONS(1879), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21342] = 2,
    ACTIONS(2241), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21350] = 2,
    ACTIONS(2243), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21358] = 2,
    ACTIONS(2245), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21366] = 2,
    ACTIONS(2247), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21374] = 2,
    ACTIONS(2249), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21382] = 2,
    ACTIONS(2251), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21390] = 2,
    ACTIONS(2253), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21398] = 2,
    ACTIONS(2255), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21406] = 2,
    ACTIONS(2257), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21414] = 2,
    ACTIONS(2259), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21422] = 2,
    ACTIONS(2261), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21430] = 2,
    ACTIONS(2263), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21438] = 2,
    ACTIONS(2265), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21446] = 2,
    ACTIONS(2267), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21454] = 2,
    ACTIONS(2269), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21462] = 2,
    ACTIONS(2271), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21470] = 2,
    ACTIONS(2273), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21478] = 2,
    ACTIONS(2275), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21486] = 2,
    ACTIONS(2277), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21494] = 2,
    ACTIONS(2279), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21502] = 2,
    ACTIONS(2281), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21510] = 2,
    ACTIONS(1607), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21518] = 2,
    ACTIONS(2283), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21526] = 2,
    ACTIONS(2285), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21534] = 2,
    ACTIONS(2287), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21542] = 2,
    ACTIONS(2289), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21550] = 2,
    ACTIONS(2291), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21558] = 2,
    ACTIONS(2293), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21566] = 2,
    ACTIONS(2295), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21574] = 2,
    ACTIONS(2297), 1,
      sym__newline,
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
  [SMALL_STATE(15)] = 1337,
  [SMALL_STATE(16)] = 1436,
  [SMALL_STATE(17)] = 1535,
  [SMALL_STATE(18)] = 1634,
  [SMALL_STATE(19)] = 1733,
  [SMALL_STATE(20)] = 1832,
  [SMALL_STATE(21)] = 1931,
  [SMALL_STATE(22)] = 2028,
  [SMALL_STATE(23)] = 2127,
  [SMALL_STATE(24)] = 2224,
  [SMALL_STATE(25)] = 2323,
  [SMALL_STATE(26)] = 2422,
  [SMALL_STATE(27)] = 2521,
  [SMALL_STATE(28)] = 2620,
  [SMALL_STATE(29)] = 2719,
  [SMALL_STATE(30)] = 2818,
  [SMALL_STATE(31)] = 2917,
  [SMALL_STATE(32)] = 3016,
  [SMALL_STATE(33)] = 3113,
  [SMALL_STATE(34)] = 3212,
  [SMALL_STATE(35)] = 3309,
  [SMALL_STATE(36)] = 3408,
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
  [SMALL_STATE(56)] = 5303,
  [SMALL_STATE(57)] = 5368,
  [SMALL_STATE(58)] = 5435,
  [SMALL_STATE(59)] = 5502,
  [SMALL_STATE(60)] = 5567,
  [SMALL_STATE(61)] = 5634,
  [SMALL_STATE(62)] = 5701,
  [SMALL_STATE(63)] = 5766,
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
  [SMALL_STATE(144)] = 8846,
  [SMALL_STATE(145)] = 8878,
  [SMALL_STATE(146)] = 8909,
  [SMALL_STATE(147)] = 8940,
  [SMALL_STATE(148)] = 8971,
  [SMALL_STATE(149)] = 9002,
  [SMALL_STATE(150)] = 9033,
  [SMALL_STATE(151)] = 9064,
  [SMALL_STATE(152)] = 9095,
  [SMALL_STATE(153)] = 9126,
  [SMALL_STATE(154)] = 9157,
  [SMALL_STATE(155)] = 9188,
  [SMALL_STATE(156)] = 9219,
  [SMALL_STATE(157)] = 9250,
  [SMALL_STATE(158)] = 9281,
  [SMALL_STATE(159)] = 9312,
  [SMALL_STATE(160)] = 9343,
  [SMALL_STATE(161)] = 9374,
  [SMALL_STATE(162)] = 9405,
  [SMALL_STATE(163)] = 9436,
  [SMALL_STATE(164)] = 9467,
  [SMALL_STATE(165)] = 9498,
  [SMALL_STATE(166)] = 9529,
  [SMALL_STATE(167)] = 9560,
  [SMALL_STATE(168)] = 9591,
  [SMALL_STATE(169)] = 9622,
  [SMALL_STATE(170)] = 9653,
  [SMALL_STATE(171)] = 9684,
  [SMALL_STATE(172)] = 9715,
  [SMALL_STATE(173)] = 9746,
  [SMALL_STATE(174)] = 9777,
  [SMALL_STATE(175)] = 9808,
  [SMALL_STATE(176)] = 9839,
  [SMALL_STATE(177)] = 9870,
  [SMALL_STATE(178)] = 9901,
  [SMALL_STATE(179)] = 9932,
  [SMALL_STATE(180)] = 9963,
  [SMALL_STATE(181)] = 9994,
  [SMALL_STATE(182)] = 10025,
  [SMALL_STATE(183)] = 10056,
  [SMALL_STATE(184)] = 10087,
  [SMALL_STATE(185)] = 10118,
  [SMALL_STATE(186)] = 10149,
  [SMALL_STATE(187)] = 10180,
  [SMALL_STATE(188)] = 10211,
  [SMALL_STATE(189)] = 10242,
  [SMALL_STATE(190)] = 10273,
  [SMALL_STATE(191)] = 10304,
  [SMALL_STATE(192)] = 10335,
  [SMALL_STATE(193)] = 10366,
  [SMALL_STATE(194)] = 10397,
  [SMALL_STATE(195)] = 10428,
  [SMALL_STATE(196)] = 10459,
  [SMALL_STATE(197)] = 10490,
  [SMALL_STATE(198)] = 10521,
  [SMALL_STATE(199)] = 10552,
  [SMALL_STATE(200)] = 10583,
  [SMALL_STATE(201)] = 10614,
  [SMALL_STATE(202)] = 10645,
  [SMALL_STATE(203)] = 10676,
  [SMALL_STATE(204)] = 10707,
  [SMALL_STATE(205)] = 10738,
  [SMALL_STATE(206)] = 10769,
  [SMALL_STATE(207)] = 10800,
  [SMALL_STATE(208)] = 10831,
  [SMALL_STATE(209)] = 10882,
  [SMALL_STATE(210)] = 10919,
  [SMALL_STATE(211)] = 10964,
  [SMALL_STATE(212)] = 11001,
  [SMALL_STATE(213)] = 11034,
  [SMALL_STATE(214)] = 11065,
  [SMALL_STATE(215)] = 11102,
  [SMALL_STATE(216)] = 11135,
  [SMALL_STATE(217)] = 11171,
  [SMALL_STATE(218)] = 11201,
  [SMALL_STATE(219)] = 11225,
  [SMALL_STATE(220)] = 11255,
  [SMALL_STATE(221)] = 11278,
  [SMALL_STATE(222)] = 11301,
  [SMALL_STATE(223)] = 11330,
  [SMALL_STATE(224)] = 11353,
  [SMALL_STATE(225)] = 11380,
  [SMALL_STATE(226)] = 11405,
  [SMALL_STATE(227)] = 11431,
  [SMALL_STATE(228)] = 11453,
  [SMALL_STATE(229)] = 11491,
  [SMALL_STATE(230)] = 11523,
  [SMALL_STATE(231)] = 11545,
  [SMALL_STATE(232)] = 11581,
  [SMALL_STATE(233)] = 11603,
  [SMALL_STATE(234)] = 11629,
  [SMALL_STATE(235)] = 11651,
  [SMALL_STATE(236)] = 11689,
  [SMALL_STATE(237)] = 11725,
  [SMALL_STATE(238)] = 11753,
  [SMALL_STATE(239)] = 11791,
  [SMALL_STATE(240)] = 11813,
  [SMALL_STATE(241)] = 11841,
  [SMALL_STATE(242)] = 11863,
  [SMALL_STATE(243)] = 11885,
  [SMALL_STATE(244)] = 11907,
  [SMALL_STATE(245)] = 11929,
  [SMALL_STATE(246)] = 11951,
  [SMALL_STATE(247)] = 11993,
  [SMALL_STATE(248)] = 12015,
  [SMALL_STATE(249)] = 12037,
  [SMALL_STATE(250)] = 12059,
  [SMALL_STATE(251)] = 12081,
  [SMALL_STATE(252)] = 12103,
  [SMALL_STATE(253)] = 12125,
  [SMALL_STATE(254)] = 12147,
  [SMALL_STATE(255)] = 12169,
  [SMALL_STATE(256)] = 12191,
  [SMALL_STATE(257)] = 12213,
  [SMALL_STATE(258)] = 12235,
  [SMALL_STATE(259)] = 12257,
  [SMALL_STATE(260)] = 12279,
  [SMALL_STATE(261)] = 12301,
  [SMALL_STATE(262)] = 12341,
  [SMALL_STATE(263)] = 12363,
  [SMALL_STATE(264)] = 12385,
  [SMALL_STATE(265)] = 12407,
  [SMALL_STATE(266)] = 12429,
  [SMALL_STATE(267)] = 12451,
  [SMALL_STATE(268)] = 12473,
  [SMALL_STATE(269)] = 12495,
  [SMALL_STATE(270)] = 12517,
  [SMALL_STATE(271)] = 12539,
  [SMALL_STATE(272)] = 12567,
  [SMALL_STATE(273)] = 12589,
  [SMALL_STATE(274)] = 12611,
  [SMALL_STATE(275)] = 12633,
  [SMALL_STATE(276)] = 12655,
  [SMALL_STATE(277)] = 12693,
  [SMALL_STATE(278)] = 12731,
  [SMALL_STATE(279)] = 12771,
  [SMALL_STATE(280)] = 12793,
  [SMALL_STATE(281)] = 12815,
  [SMALL_STATE(282)] = 12855,
  [SMALL_STATE(283)] = 12876,
  [SMALL_STATE(284)] = 12913,
  [SMALL_STATE(285)] = 12950,
  [SMALL_STATE(286)] = 12975,
  [SMALL_STATE(287)] = 13010,
  [SMALL_STATE(288)] = 13031,
  [SMALL_STATE(289)] = 13068,
  [SMALL_STATE(290)] = 13087,
  [SMALL_STATE(291)] = 13108,
  [SMALL_STATE(292)] = 13133,
  [SMALL_STATE(293)] = 13170,
  [SMALL_STATE(294)] = 13207,
  [SMALL_STATE(295)] = 13242,
  [SMALL_STATE(296)] = 13279,
  [SMALL_STATE(297)] = 13316,
  [SMALL_STATE(298)] = 13351,
  [SMALL_STATE(299)] = 13388,
  [SMALL_STATE(300)] = 13425,
  [SMALL_STATE(301)] = 13462,
  [SMALL_STATE(302)] = 13496,
  [SMALL_STATE(303)] = 13524,
  [SMALL_STATE(304)] = 13548,
  [SMALL_STATE(305)] = 13582,
  [SMALL_STATE(306)] = 13610,
  [SMALL_STATE(307)] = 13644,
  [SMALL_STATE(308)] = 13678,
  [SMALL_STATE(309)] = 13710,
  [SMALL_STATE(310)] = 13728,
  [SMALL_STATE(311)] = 13762,
  [SMALL_STATE(312)] = 13794,
  [SMALL_STATE(313)] = 13818,
  [SMALL_STATE(314)] = 13844,
  [SMALL_STATE(315)] = 13872,
  [SMALL_STATE(316)] = 13904,
  [SMALL_STATE(317)] = 13936,
  [SMALL_STATE(318)] = 13970,
  [SMALL_STATE(319)] = 14002,
  [SMALL_STATE(320)] = 14030,
  [SMALL_STATE(321)] = 14054,
  [SMALL_STATE(322)] = 14088,
  [SMALL_STATE(323)] = 14122,
  [SMALL_STATE(324)] = 14154,
  [SMALL_STATE(325)] = 14188,
  [SMALL_STATE(326)] = 14207,
  [SMALL_STATE(327)] = 14226,
  [SMALL_STATE(328)] = 14245,
  [SMALL_STATE(329)] = 14276,
  [SMALL_STATE(330)] = 14295,
  [SMALL_STATE(331)] = 14326,
  [SMALL_STATE(332)] = 14357,
  [SMALL_STATE(333)] = 14376,
  [SMALL_STATE(334)] = 14395,
  [SMALL_STATE(335)] = 14414,
  [SMALL_STATE(336)] = 14433,
  [SMALL_STATE(337)] = 14452,
  [SMALL_STATE(338)] = 14471,
  [SMALL_STATE(339)] = 14490,
  [SMALL_STATE(340)] = 14509,
  [SMALL_STATE(341)] = 14528,
  [SMALL_STATE(342)] = 14547,
  [SMALL_STATE(343)] = 14566,
  [SMALL_STATE(344)] = 14585,
  [SMALL_STATE(345)] = 14604,
  [SMALL_STATE(346)] = 14623,
  [SMALL_STATE(347)] = 14647,
  [SMALL_STATE(348)] = 14665,
  [SMALL_STATE(349)] = 14683,
  [SMALL_STATE(350)] = 14707,
  [SMALL_STATE(351)] = 14727,
  [SMALL_STATE(352)] = 14751,
  [SMALL_STATE(353)] = 14779,
  [SMALL_STATE(354)] = 14803,
  [SMALL_STATE(355)] = 14827,
  [SMALL_STATE(356)] = 14851,
  [SMALL_STATE(357)] = 14881,
  [SMALL_STATE(358)] = 14905,
  [SMALL_STATE(359)] = 14923,
  [SMALL_STATE(360)] = 14947,
  [SMALL_STATE(361)] = 14965,
  [SMALL_STATE(362)] = 14989,
  [SMALL_STATE(363)] = 15013,
  [SMALL_STATE(364)] = 15037,
  [SMALL_STATE(365)] = 15058,
  [SMALL_STATE(366)] = 15079,
  [SMALL_STATE(367)] = 15100,
  [SMALL_STATE(368)] = 15118,
  [SMALL_STATE(369)] = 15134,
  [SMALL_STATE(370)] = 15160,
  [SMALL_STATE(371)] = 15186,
  [SMALL_STATE(372)] = 15200,
  [SMALL_STATE(373)] = 15226,
  [SMALL_STATE(374)] = 15252,
  [SMALL_STATE(375)] = 15268,
  [SMALL_STATE(376)] = 15282,
  [SMALL_STATE(377)] = 15299,
  [SMALL_STATE(378)] = 15314,
  [SMALL_STATE(379)] = 15329,
  [SMALL_STATE(380)] = 15344,
  [SMALL_STATE(381)] = 15365,
  [SMALL_STATE(382)] = 15380,
  [SMALL_STATE(383)] = 15397,
  [SMALL_STATE(384)] = 15412,
  [SMALL_STATE(385)] = 15431,
  [SMALL_STATE(386)] = 15454,
  [SMALL_STATE(387)] = 15469,
  [SMALL_STATE(388)] = 15490,
  [SMALL_STATE(389)] = 15511,
  [SMALL_STATE(390)] = 15534,
  [SMALL_STATE(391)] = 15555,
  [SMALL_STATE(392)] = 15576,
  [SMALL_STATE(393)] = 15597,
  [SMALL_STATE(394)] = 15615,
  [SMALL_STATE(395)] = 15633,
  [SMALL_STATE(396)] = 15651,
  [SMALL_STATE(397)] = 15669,
  [SMALL_STATE(398)] = 15687,
  [SMALL_STATE(399)] = 15705,
  [SMALL_STATE(400)] = 15717,
  [SMALL_STATE(401)] = 15729,
  [SMALL_STATE(402)] = 15749,
  [SMALL_STATE(403)] = 15761,
  [SMALL_STATE(404)] = 15781,
  [SMALL_STATE(405)] = 15793,
  [SMALL_STATE(406)] = 15805,
  [SMALL_STATE(407)] = 15817,
  [SMALL_STATE(408)] = 15835,
  [SMALL_STATE(409)] = 15855,
  [SMALL_STATE(410)] = 15875,
  [SMALL_STATE(411)] = 15887,
  [SMALL_STATE(412)] = 15905,
  [SMALL_STATE(413)] = 15917,
  [SMALL_STATE(414)] = 15929,
  [SMALL_STATE(415)] = 15941,
  [SMALL_STATE(416)] = 15959,
  [SMALL_STATE(417)] = 15977,
  [SMALL_STATE(418)] = 15995,
  [SMALL_STATE(419)] = 16013,
  [SMALL_STATE(420)] = 16029,
  [SMALL_STATE(421)] = 16041,
  [SMALL_STATE(422)] = 16059,
  [SMALL_STATE(423)] = 16071,
  [SMALL_STATE(424)] = 16089,
  [SMALL_STATE(425)] = 16105,
  [SMALL_STATE(426)] = 16121,
  [SMALL_STATE(427)] = 16139,
  [SMALL_STATE(428)] = 16157,
  [SMALL_STATE(429)] = 16175,
  [SMALL_STATE(430)] = 16193,
  [SMALL_STATE(431)] = 16211,
  [SMALL_STATE(432)] = 16223,
  [SMALL_STATE(433)] = 16241,
  [SMALL_STATE(434)] = 16252,
  [SMALL_STATE(435)] = 16269,
  [SMALL_STATE(436)] = 16284,
  [SMALL_STATE(437)] = 16299,
  [SMALL_STATE(438)] = 16314,
  [SMALL_STATE(439)] = 16327,
  [SMALL_STATE(440)] = 16340,
  [SMALL_STATE(441)] = 16357,
  [SMALL_STATE(442)] = 16368,
  [SMALL_STATE(443)] = 16381,
  [SMALL_STATE(444)] = 16396,
  [SMALL_STATE(445)] = 16411,
  [SMALL_STATE(446)] = 16426,
  [SMALL_STATE(447)] = 16443,
  [SMALL_STATE(448)] = 16454,
  [SMALL_STATE(449)] = 16469,
  [SMALL_STATE(450)] = 16486,
  [SMALL_STATE(451)] = 16503,
  [SMALL_STATE(452)] = 16520,
  [SMALL_STATE(453)] = 16537,
  [SMALL_STATE(454)] = 16550,
  [SMALL_STATE(455)] = 16565,
  [SMALL_STATE(456)] = 16580,
  [SMALL_STATE(457)] = 16593,
  [SMALL_STATE(458)] = 16606,
  [SMALL_STATE(459)] = 16619,
  [SMALL_STATE(460)] = 16636,
  [SMALL_STATE(461)] = 16651,
  [SMALL_STATE(462)] = 16666,
  [SMALL_STATE(463)] = 16680,
  [SMALL_STATE(464)] = 16696,
  [SMALL_STATE(465)] = 16712,
  [SMALL_STATE(466)] = 16728,
  [SMALL_STATE(467)] = 16738,
  [SMALL_STATE(468)] = 16754,
  [SMALL_STATE(469)] = 16770,
  [SMALL_STATE(470)] = 16784,
  [SMALL_STATE(471)] = 16798,
  [SMALL_STATE(472)] = 16814,
  [SMALL_STATE(473)] = 16824,
  [SMALL_STATE(474)] = 16838,
  [SMALL_STATE(475)] = 16850,
  [SMALL_STATE(476)] = 16866,
  [SMALL_STATE(477)] = 16882,
  [SMALL_STATE(478)] = 16896,
  [SMALL_STATE(479)] = 16910,
  [SMALL_STATE(480)] = 16924,
  [SMALL_STATE(481)] = 16938,
  [SMALL_STATE(482)] = 16948,
  [SMALL_STATE(483)] = 16958,
  [SMALL_STATE(484)] = 16968,
  [SMALL_STATE(485)] = 16978,
  [SMALL_STATE(486)] = 16988,
  [SMALL_STATE(487)] = 16998,
  [SMALL_STATE(488)] = 17008,
  [SMALL_STATE(489)] = 17018,
  [SMALL_STATE(490)] = 17030,
  [SMALL_STATE(491)] = 17044,
  [SMALL_STATE(492)] = 17058,
  [SMALL_STATE(493)] = 17072,
  [SMALL_STATE(494)] = 17086,
  [SMALL_STATE(495)] = 17096,
  [SMALL_STATE(496)] = 17112,
  [SMALL_STATE(497)] = 17128,
  [SMALL_STATE(498)] = 17144,
  [SMALL_STATE(499)] = 17160,
  [SMALL_STATE(500)] = 17176,
  [SMALL_STATE(501)] = 17192,
  [SMALL_STATE(502)] = 17206,
  [SMALL_STATE(503)] = 17222,
  [SMALL_STATE(504)] = 17238,
  [SMALL_STATE(505)] = 17252,
  [SMALL_STATE(506)] = 17268,
  [SMALL_STATE(507)] = 17284,
  [SMALL_STATE(508)] = 17300,
  [SMALL_STATE(509)] = 17314,
  [SMALL_STATE(510)] = 17328,
  [SMALL_STATE(511)] = 17342,
  [SMALL_STATE(512)] = 17356,
  [SMALL_STATE(513)] = 17372,
  [SMALL_STATE(514)] = 17388,
  [SMALL_STATE(515)] = 17404,
  [SMALL_STATE(516)] = 17420,
  [SMALL_STATE(517)] = 17436,
  [SMALL_STATE(518)] = 17452,
  [SMALL_STATE(519)] = 17466,
  [SMALL_STATE(520)] = 17482,
  [SMALL_STATE(521)] = 17496,
  [SMALL_STATE(522)] = 17510,
  [SMALL_STATE(523)] = 17526,
  [SMALL_STATE(524)] = 17540,
  [SMALL_STATE(525)] = 17554,
  [SMALL_STATE(526)] = 17570,
  [SMALL_STATE(527)] = 17586,
  [SMALL_STATE(528)] = 17596,
  [SMALL_STATE(529)] = 17612,
  [SMALL_STATE(530)] = 17628,
  [SMALL_STATE(531)] = 17642,
  [SMALL_STATE(532)] = 17656,
  [SMALL_STATE(533)] = 17670,
  [SMALL_STATE(534)] = 17686,
  [SMALL_STATE(535)] = 17696,
  [SMALL_STATE(536)] = 17712,
  [SMALL_STATE(537)] = 17728,
  [SMALL_STATE(538)] = 17740,
  [SMALL_STATE(539)] = 17754,
  [SMALL_STATE(540)] = 17768,
  [SMALL_STATE(541)] = 17784,
  [SMALL_STATE(542)] = 17798,
  [SMALL_STATE(543)] = 17812,
  [SMALL_STATE(544)] = 17826,
  [SMALL_STATE(545)] = 17842,
  [SMALL_STATE(546)] = 17858,
  [SMALL_STATE(547)] = 17868,
  [SMALL_STATE(548)] = 17882,
  [SMALL_STATE(549)] = 17898,
  [SMALL_STATE(550)] = 17914,
  [SMALL_STATE(551)] = 17930,
  [SMALL_STATE(552)] = 17942,
  [SMALL_STATE(553)] = 17958,
  [SMALL_STATE(554)] = 17974,
  [SMALL_STATE(555)] = 17990,
  [SMALL_STATE(556)] = 18006,
  [SMALL_STATE(557)] = 18022,
  [SMALL_STATE(558)] = 18038,
  [SMALL_STATE(559)] = 18054,
  [SMALL_STATE(560)] = 18070,
  [SMALL_STATE(561)] = 18086,
  [SMALL_STATE(562)] = 18100,
  [SMALL_STATE(563)] = 18116,
  [SMALL_STATE(564)] = 18132,
  [SMALL_STATE(565)] = 18148,
  [SMALL_STATE(566)] = 18164,
  [SMALL_STATE(567)] = 18180,
  [SMALL_STATE(568)] = 18196,
  [SMALL_STATE(569)] = 18212,
  [SMALL_STATE(570)] = 18228,
  [SMALL_STATE(571)] = 18244,
  [SMALL_STATE(572)] = 18258,
  [SMALL_STATE(573)] = 18274,
  [SMALL_STATE(574)] = 18290,
  [SMALL_STATE(575)] = 18306,
  [SMALL_STATE(576)] = 18322,
  [SMALL_STATE(577)] = 18332,
  [SMALL_STATE(578)] = 18342,
  [SMALL_STATE(579)] = 18356,
  [SMALL_STATE(580)] = 18372,
  [SMALL_STATE(581)] = 18386,
  [SMALL_STATE(582)] = 18400,
  [SMALL_STATE(583)] = 18416,
  [SMALL_STATE(584)] = 18432,
  [SMALL_STATE(585)] = 18446,
  [SMALL_STATE(586)] = 18462,
  [SMALL_STATE(587)] = 18478,
  [SMALL_STATE(588)] = 18494,
  [SMALL_STATE(589)] = 18508,
  [SMALL_STATE(590)] = 18524,
  [SMALL_STATE(591)] = 18540,
  [SMALL_STATE(592)] = 18556,
  [SMALL_STATE(593)] = 18570,
  [SMALL_STATE(594)] = 18584,
  [SMALL_STATE(595)] = 18594,
  [SMALL_STATE(596)] = 18608,
  [SMALL_STATE(597)] = 18620,
  [SMALL_STATE(598)] = 18632,
  [SMALL_STATE(599)] = 18648,
  [SMALL_STATE(600)] = 18664,
  [SMALL_STATE(601)] = 18680,
  [SMALL_STATE(602)] = 18696,
  [SMALL_STATE(603)] = 18712,
  [SMALL_STATE(604)] = 18728,
  [SMALL_STATE(605)] = 18744,
  [SMALL_STATE(606)] = 18760,
  [SMALL_STATE(607)] = 18776,
  [SMALL_STATE(608)] = 18792,
  [SMALL_STATE(609)] = 18806,
  [SMALL_STATE(610)] = 18822,
  [SMALL_STATE(611)] = 18838,
  [SMALL_STATE(612)] = 18854,
  [SMALL_STATE(613)] = 18870,
  [SMALL_STATE(614)] = 18880,
  [SMALL_STATE(615)] = 18890,
  [SMALL_STATE(616)] = 18904,
  [SMALL_STATE(617)] = 18920,
  [SMALL_STATE(618)] = 18934,
  [SMALL_STATE(619)] = 18948,
  [SMALL_STATE(620)] = 18958,
  [SMALL_STATE(621)] = 18974,
  [SMALL_STATE(622)] = 18990,
  [SMALL_STATE(623)] = 19006,
  [SMALL_STATE(624)] = 19020,
  [SMALL_STATE(625)] = 19036,
  [SMALL_STATE(626)] = 19052,
  [SMALL_STATE(627)] = 19066,
  [SMALL_STATE(628)] = 19082,
  [SMALL_STATE(629)] = 19098,
  [SMALL_STATE(630)] = 19114,
  [SMALL_STATE(631)] = 19130,
  [SMALL_STATE(632)] = 19146,
  [SMALL_STATE(633)] = 19162,
  [SMALL_STATE(634)] = 19176,
  [SMALL_STATE(635)] = 19188,
  [SMALL_STATE(636)] = 19202,
  [SMALL_STATE(637)] = 19218,
  [SMALL_STATE(638)] = 19232,
  [SMALL_STATE(639)] = 19246,
  [SMALL_STATE(640)] = 19262,
  [SMALL_STATE(641)] = 19276,
  [SMALL_STATE(642)] = 19288,
  [SMALL_STATE(643)] = 19304,
  [SMALL_STATE(644)] = 19315,
  [SMALL_STATE(645)] = 19328,
  [SMALL_STATE(646)] = 19341,
  [SMALL_STATE(647)] = 19354,
  [SMALL_STATE(648)] = 19367,
  [SMALL_STATE(649)] = 19376,
  [SMALL_STATE(650)] = 19389,
  [SMALL_STATE(651)] = 19402,
  [SMALL_STATE(652)] = 19413,
  [SMALL_STATE(653)] = 19426,
  [SMALL_STATE(654)] = 19439,
  [SMALL_STATE(655)] = 19452,
  [SMALL_STATE(656)] = 19465,
  [SMALL_STATE(657)] = 19478,
  [SMALL_STATE(658)] = 19491,
  [SMALL_STATE(659)] = 19504,
  [SMALL_STATE(660)] = 19515,
  [SMALL_STATE(661)] = 19528,
  [SMALL_STATE(662)] = 19541,
  [SMALL_STATE(663)] = 19552,
  [SMALL_STATE(664)] = 19565,
  [SMALL_STATE(665)] = 19576,
  [SMALL_STATE(666)] = 19587,
  [SMALL_STATE(667)] = 19600,
  [SMALL_STATE(668)] = 19613,
  [SMALL_STATE(669)] = 19624,
  [SMALL_STATE(670)] = 19635,
  [SMALL_STATE(671)] = 19646,
  [SMALL_STATE(672)] = 19655,
  [SMALL_STATE(673)] = 19664,
  [SMALL_STATE(674)] = 19673,
  [SMALL_STATE(675)] = 19684,
  [SMALL_STATE(676)] = 19695,
  [SMALL_STATE(677)] = 19706,
  [SMALL_STATE(678)] = 19715,
  [SMALL_STATE(679)] = 19726,
  [SMALL_STATE(680)] = 19735,
  [SMALL_STATE(681)] = 19746,
  [SMALL_STATE(682)] = 19759,
  [SMALL_STATE(683)] = 19768,
  [SMALL_STATE(684)] = 19777,
  [SMALL_STATE(685)] = 19786,
  [SMALL_STATE(686)] = 19797,
  [SMALL_STATE(687)] = 19810,
  [SMALL_STATE(688)] = 19823,
  [SMALL_STATE(689)] = 19832,
  [SMALL_STATE(690)] = 19841,
  [SMALL_STATE(691)] = 19850,
  [SMALL_STATE(692)] = 19863,
  [SMALL_STATE(693)] = 19872,
  [SMALL_STATE(694)] = 19883,
  [SMALL_STATE(695)] = 19894,
  [SMALL_STATE(696)] = 19903,
  [SMALL_STATE(697)] = 19912,
  [SMALL_STATE(698)] = 19921,
  [SMALL_STATE(699)] = 19930,
  [SMALL_STATE(700)] = 19939,
  [SMALL_STATE(701)] = 19948,
  [SMALL_STATE(702)] = 19957,
  [SMALL_STATE(703)] = 19966,
  [SMALL_STATE(704)] = 19975,
  [SMALL_STATE(705)] = 19986,
  [SMALL_STATE(706)] = 19997,
  [SMALL_STATE(707)] = 20006,
  [SMALL_STATE(708)] = 20015,
  [SMALL_STATE(709)] = 20024,
  [SMALL_STATE(710)] = 20033,
  [SMALL_STATE(711)] = 20042,
  [SMALL_STATE(712)] = 20051,
  [SMALL_STATE(713)] = 20060,
  [SMALL_STATE(714)] = 20069,
  [SMALL_STATE(715)] = 20078,
  [SMALL_STATE(716)] = 20087,
  [SMALL_STATE(717)] = 20096,
  [SMALL_STATE(718)] = 20105,
  [SMALL_STATE(719)] = 20114,
  [SMALL_STATE(720)] = 20123,
  [SMALL_STATE(721)] = 20134,
  [SMALL_STATE(722)] = 20145,
  [SMALL_STATE(723)] = 20156,
  [SMALL_STATE(724)] = 20167,
  [SMALL_STATE(725)] = 20180,
  [SMALL_STATE(726)] = 20189,
  [SMALL_STATE(727)] = 20200,
  [SMALL_STATE(728)] = 20208,
  [SMALL_STATE(729)] = 20216,
  [SMALL_STATE(730)] = 20224,
  [SMALL_STATE(731)] = 20232,
  [SMALL_STATE(732)] = 20240,
  [SMALL_STATE(733)] = 20248,
  [SMALL_STATE(734)] = 20256,
  [SMALL_STATE(735)] = 20264,
  [SMALL_STATE(736)] = 20272,
  [SMALL_STATE(737)] = 20280,
  [SMALL_STATE(738)] = 20288,
  [SMALL_STATE(739)] = 20296,
  [SMALL_STATE(740)] = 20304,
  [SMALL_STATE(741)] = 20312,
  [SMALL_STATE(742)] = 20320,
  [SMALL_STATE(743)] = 20328,
  [SMALL_STATE(744)] = 20336,
  [SMALL_STATE(745)] = 20344,
  [SMALL_STATE(746)] = 20352,
  [SMALL_STATE(747)] = 20360,
  [SMALL_STATE(748)] = 20368,
  [SMALL_STATE(749)] = 20376,
  [SMALL_STATE(750)] = 20384,
  [SMALL_STATE(751)] = 20392,
  [SMALL_STATE(752)] = 20400,
  [SMALL_STATE(753)] = 20408,
  [SMALL_STATE(754)] = 20416,
  [SMALL_STATE(755)] = 20424,
  [SMALL_STATE(756)] = 20432,
  [SMALL_STATE(757)] = 20440,
  [SMALL_STATE(758)] = 20448,
  [SMALL_STATE(759)] = 20456,
  [SMALL_STATE(760)] = 20464,
  [SMALL_STATE(761)] = 20472,
  [SMALL_STATE(762)] = 20480,
  [SMALL_STATE(763)] = 20488,
  [SMALL_STATE(764)] = 20496,
  [SMALL_STATE(765)] = 20504,
  [SMALL_STATE(766)] = 20512,
  [SMALL_STATE(767)] = 20520,
  [SMALL_STATE(768)] = 20528,
  [SMALL_STATE(769)] = 20536,
  [SMALL_STATE(770)] = 20544,
  [SMALL_STATE(771)] = 20552,
  [SMALL_STATE(772)] = 20560,
  [SMALL_STATE(773)] = 20568,
  [SMALL_STATE(774)] = 20576,
  [SMALL_STATE(775)] = 20584,
  [SMALL_STATE(776)] = 20592,
  [SMALL_STATE(777)] = 20600,
  [SMALL_STATE(778)] = 20608,
  [SMALL_STATE(779)] = 20616,
  [SMALL_STATE(780)] = 20626,
  [SMALL_STATE(781)] = 20636,
  [SMALL_STATE(782)] = 20644,
  [SMALL_STATE(783)] = 20652,
  [SMALL_STATE(784)] = 20660,
  [SMALL_STATE(785)] = 20668,
  [SMALL_STATE(786)] = 20676,
  [SMALL_STATE(787)] = 20684,
  [SMALL_STATE(788)] = 20692,
  [SMALL_STATE(789)] = 20700,
  [SMALL_STATE(790)] = 20708,
  [SMALL_STATE(791)] = 20716,
  [SMALL_STATE(792)] = 20724,
  [SMALL_STATE(793)] = 20732,
  [SMALL_STATE(794)] = 20742,
  [SMALL_STATE(795)] = 20750,
  [SMALL_STATE(796)] = 20758,
  [SMALL_STATE(797)] = 20766,
  [SMALL_STATE(798)] = 20774,
  [SMALL_STATE(799)] = 20782,
  [SMALL_STATE(800)] = 20790,
  [SMALL_STATE(801)] = 20798,
  [SMALL_STATE(802)] = 20806,
  [SMALL_STATE(803)] = 20814,
  [SMALL_STATE(804)] = 20822,
  [SMALL_STATE(805)] = 20830,
  [SMALL_STATE(806)] = 20838,
  [SMALL_STATE(807)] = 20846,
  [SMALL_STATE(808)] = 20854,
  [SMALL_STATE(809)] = 20862,
  [SMALL_STATE(810)] = 20870,
  [SMALL_STATE(811)] = 20878,
  [SMALL_STATE(812)] = 20886,
  [SMALL_STATE(813)] = 20894,
  [SMALL_STATE(814)] = 20902,
  [SMALL_STATE(815)] = 20910,
  [SMALL_STATE(816)] = 20918,
  [SMALL_STATE(817)] = 20926,
  [SMALL_STATE(818)] = 20934,
  [SMALL_STATE(819)] = 20942,
  [SMALL_STATE(820)] = 20950,
  [SMALL_STATE(821)] = 20960,
  [SMALL_STATE(822)] = 20968,
  [SMALL_STATE(823)] = 20976,
  [SMALL_STATE(824)] = 20984,
  [SMALL_STATE(825)] = 20992,
  [SMALL_STATE(826)] = 21000,
  [SMALL_STATE(827)] = 21008,
  [SMALL_STATE(828)] = 21016,
  [SMALL_STATE(829)] = 21024,
  [SMALL_STATE(830)] = 21032,
  [SMALL_STATE(831)] = 21040,
  [SMALL_STATE(832)] = 21050,
  [SMALL_STATE(833)] = 21060,
  [SMALL_STATE(834)] = 21068,
  [SMALL_STATE(835)] = 21076,
  [SMALL_STATE(836)] = 21084,
  [SMALL_STATE(837)] = 21092,
  [SMALL_STATE(838)] = 21100,
  [SMALL_STATE(839)] = 21108,
  [SMALL_STATE(840)] = 21116,
  [SMALL_STATE(841)] = 21124,
  [SMALL_STATE(842)] = 21132,
  [SMALL_STATE(843)] = 21140,
  [SMALL_STATE(844)] = 21148,
  [SMALL_STATE(845)] = 21156,
  [SMALL_STATE(846)] = 21164,
  [SMALL_STATE(847)] = 21172,
  [SMALL_STATE(848)] = 21180,
  [SMALL_STATE(849)] = 21190,
  [SMALL_STATE(850)] = 21198,
  [SMALL_STATE(851)] = 21206,
  [SMALL_STATE(852)] = 21214,
  [SMALL_STATE(853)] = 21222,
  [SMALL_STATE(854)] = 21230,
  [SMALL_STATE(855)] = 21238,
  [SMALL_STATE(856)] = 21246,
  [SMALL_STATE(857)] = 21254,
  [SMALL_STATE(858)] = 21262,
  [SMALL_STATE(859)] = 21270,
  [SMALL_STATE(860)] = 21278,
  [SMALL_STATE(861)] = 21286,
  [SMALL_STATE(862)] = 21294,
  [SMALL_STATE(863)] = 21302,
  [SMALL_STATE(864)] = 21310,
  [SMALL_STATE(865)] = 21318,
  [SMALL_STATE(866)] = 21326,
  [SMALL_STATE(867)] = 21334,
  [SMALL_STATE(868)] = 21342,
  [SMALL_STATE(869)] = 21350,
  [SMALL_STATE(870)] = 21358,
  [SMALL_STATE(871)] = 21366,
  [SMALL_STATE(872)] = 21374,
  [SMALL_STATE(873)] = 21382,
  [SMALL_STATE(874)] = 21390,
  [SMALL_STATE(875)] = 21398,
  [SMALL_STATE(876)] = 21406,
  [SMALL_STATE(877)] = 21414,
  [SMALL_STATE(878)] = 21422,
  [SMALL_STATE(879)] = 21430,
  [SMALL_STATE(880)] = 21438,
  [SMALL_STATE(881)] = 21446,
  [SMALL_STATE(882)] = 21454,
  [SMALL_STATE(883)] = 21462,
  [SMALL_STATE(884)] = 21470,
  [SMALL_STATE(885)] = 21478,
  [SMALL_STATE(886)] = 21486,
  [SMALL_STATE(887)] = 21494,
  [SMALL_STATE(888)] = 21502,
  [SMALL_STATE(889)] = 21510,
  [SMALL_STATE(890)] = 21518,
  [SMALL_STATE(891)] = 21526,
  [SMALL_STATE(892)] = 21534,
  [SMALL_STATE(893)] = 21542,
  [SMALL_STATE(894)] = 21550,
  [SMALL_STATE(895)] = 21558,
  [SMALL_STATE(896)] = 21566,
  [SMALL_STATE(897)] = 21574,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(821),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(566),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(568),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(141),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(572),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(591),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(390),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(589),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(587),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(586),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(585),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(845),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(582),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(579),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(574),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(548),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(540),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(101),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(240),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(823),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(629),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(630),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(130),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(631),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(632),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(391),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(570),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(567),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(565),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(564),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(860),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(563),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(560),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(559),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(503),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(502),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(105),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(753),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(471),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(495),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(159),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(517),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(552),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(392),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(639),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(636),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(610),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(463),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(771),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(642),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(506),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(505),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(498),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(496),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(14),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(240),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(799),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(799),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(529),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(533),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(188),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(535),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(536),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(387),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(616),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(611),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(607),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(602),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(829),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(601),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(600),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(599),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(557),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(556),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(178),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(395),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(397),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(78),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(262),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(265),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(272),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(227),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(280),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(220),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(220),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(264),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(777),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(649),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(644),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(652),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(653),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(654),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(655),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(656),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(681),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(658),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(61),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(623),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(677),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(859),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [964] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(237),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(770),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(271),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(291),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(219),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(388),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(80),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(539),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(770),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(384),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(315),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(740),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3),
  [1300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3),
  [1304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(350),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 6),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1),
  [1411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(382),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2),
  [1492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2), SHIFT_REPEAT(880),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [1541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(871),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [1551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(424),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [1568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(877),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1580] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(440),
  [1583] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(443),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(328),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(47),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(46),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(294),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(306),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2),
  [1735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2), SHIFT_REPEAT(366),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(578),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(76),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(588),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1),
  [1813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4),
  [1887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1),
  [1939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1),
  [1941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [2033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [2061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [2071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [2075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [2121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [2157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [2159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [2161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [2173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1),
  [2175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [2191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3),
  [2193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [2225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [2231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
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
