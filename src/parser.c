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
#define STATE_COUNT 893
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 343
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
  aux_sym__rest_text_token1 = 95,
  sym__actor_word = 96,
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
  sym_actor = 168,
  sym_sequence_stmt_signal = 169,
  sym_signal_type = 170,
  sym_sequence_stmt_autonumber = 171,
  sym_sequence_stmt_activate = 172,
  sym_sequence_stmt_deactivate = 173,
  sym_sequence_stmt_note = 174,
  sym_sequence_stmt_links = 175,
  sym_sequence_stmt_link = 176,
  sym_sequence_stmt_properties = 177,
  sym_sequence_stmt_details = 178,
  sym_note_placement = 179,
  sym_sequence_stmt_title = 180,
  sym_sequence_stmt_loop = 181,
  sym_sequence_stmt_rect = 182,
  sym_sequence_stmt_opt = 183,
  aux_sym__sequence_subdocument = 184,
  sym_sequence_stmt_alt = 185,
  sym_sequence_stmt_par = 186,
  sym_diagram_class = 187,
  sym__class_stmt = 188,
  sym_class_stmt_relation = 189,
  sym_class_name = 190,
  sym_class_name_body = 191,
  sym_class_generics = 192,
  sym_class_relation = 193,
  sym__class_reltype = 194,
  sym__class_linetype = 195,
  sym_class_stmt_class = 196,
  sym_class_method_line = 197,
  sym_class_annotation_line = 198,
  sym_class_stmt_method = 199,
  sym_class_stmt_annotation = 200,
  sym_diagram_state = 201,
  sym__state_stmt = 202,
  sym_state_stmt_simple = 203,
  sym_state_stmt_arrow = 204,
  sym_state_stmt_composite = 205,
  sym_state_composite_body = 206,
  sym_state_stmt_annotation = 207,
  sym_state_alias = 208,
  sym_state_stmt_hide_empty_description = 209,
  sym__state_annotation = 210,
  sym_state_note = 211,
  sym_diagram_gantt = 212,
  sym__gantt_stmt = 213,
  sym_gantt_stmt_dateformat = 214,
  sym_gantt_stmt_inclusiveenddates = 215,
  sym_gantt_stmt_topaxis = 216,
  sym_gantt_stmt_axisformat = 217,
  sym_gantt_stmt_includes = 218,
  sym_gantt_stmt_excludes = 219,
  sym_gantt_stmt_todaymarker = 220,
  sym_gantt_stmt_title = 221,
  sym_gantt_stmt_section = 222,
  sym_gantt_stmt_task = 223,
  sym_diagram_pie = 224,
  sym__pie_stmt = 225,
  sym_pie_stmt_title = 226,
  sym_pie_stmt_element = 227,
  sym_diagram_flow = 228,
  sym__flowchart_direction = 229,
  sym__flow_stmt = 230,
  sym_flow_stmt_direction = 231,
  sym_flow_stmt_vertice = 232,
  sym_flow_node = 233,
  sym__flow_link = 234,
  sym_flow_link_simplelink = 235,
  sym_flow_link_arrowtext = 236,
  sym_flow_link_middletext = 237,
  sym_flow_arrow_text = 238,
  sym_flow_vertex_id = 239,
  sym_flow_vertex = 240,
  sym__flow_vertex_kind = 241,
  sym_flow_vertex_square = 242,
  sym_flow_vertex_circle = 243,
  sym_flow_vertex_ellipse = 244,
  sym_flow_vertex_stadium = 245,
  sym_flow_vertex_subroutine = 246,
  sym_flow_vertex_rect = 247,
  sym_flow_vertex_cylinder = 248,
  sym_flow_vertex_round = 249,
  sym_flow_vertex_diamond = 250,
  sym_flow_vertex_hexagon = 251,
  sym_flow_vertex_odd = 252,
  sym_flow_vertex_trapezoid = 253,
  sym_flow_vertex_inv_trapezoid = 254,
  sym_flow_vertex_leanright = 255,
  sym_flow_vertex_leanleft = 256,
  sym__flow_text = 257,
  sym_flow_stmt_subgraph = 258,
  sym_flow_stmt_subgraph_inner = 259,
  sym_flow_vertex_text = 260,
  sym_diagram_er = 261,
  sym__er_stmt = 262,
  sym_er_stmt_entity = 263,
  sym_er_stmt_entity_relation = 264,
  sym_er_entity_name = 265,
  sym_er_relation = 266,
  sym__er_cardinarity = 267,
  sym__er_reltype = 268,
  sym_er_role = 269,
  sym_er_stmt_entity_block = 270,
  sym_er_stmt_entity_block_inner = 271,
  sym_er_attribute = 272,
  sym_er_attribute_type = 273,
  sym_er_attribute_name = 274,
  sym__er_attribute_key_type = 275,
  sym_er_attribute_comment = 276,
  sym_direction_tb = 277,
  sym_direction_bt = 278,
  sym_direction_rl = 279,
  sym_direction_lr = 280,
  sym__rest_text = 281,
  sym_dotted_open_arrow = 282,
  sym_solid_point = 283,
  sym_signal_plus_sign = 284,
  sym_signal_minus_sign = 285,
  sym_note_placement_left = 286,
  sym_note_placement_right = 287,
  sym_class_reltype_extension = 288,
  sym_class_reltype_composition = 289,
  sym_class_reltype_dependency = 290,
  sym_class_linetype_solid = 291,
  sym_class_linetype_dotted = 292,
  sym_class_label = 293,
  sym_state_name = 294,
  sym_state_arrow = 295,
  sym_state_description = 296,
  sym_state_hide_empty_description = 297,
  sym_state_division = 298,
  sym_state_annotation_fork = 299,
  sym_state_annotation_join = 300,
  sym_state_annotation_choice = 301,
  sym_gantt_meta_format = 302,
  sym_gantt_task_text = 303,
  sym_pie_showdata = 304,
  sym_pie_label = 305,
  sym_flowchart_direction_lr = 306,
  sym_flowchart_direction_rl = 307,
  sym_flowchart_direction_tb = 308,
  sym_flowchart_direction_bt = 309,
  sym_flow_text_literal = 310,
  sym_flow_link_arrow = 311,
  sym_flow_link_arrow_start = 312,
  sym__er_word = 313,
  sym_er_cardinarity_zero_or_one = 314,
  sym_er_cardinarity_zero_or_more = 315,
  sym_er_cardinarity_one_or_more = 316,
  sym_er_reltype_non_identifying = 317,
  sym_er_reltype_identifying = 318,
  sym_er_attribute_key_type_pk = 319,
  sym_er_attribute_key_type_fk = 320,
  aux_sym_diagram_sequence_repeat1 = 321,
  aux_sym_diagram_sequence_repeat2 = 322,
  aux_sym_actor_repeat1 = 323,
  aux_sym_sequence_stmt_alt_repeat1 = 324,
  aux_sym_sequence_stmt_par_repeat1 = 325,
  aux_sym_diagram_class_repeat1 = 326,
  aux_sym_class_name_body_repeat1 = 327,
  aux_sym_class_stmt_class_repeat1 = 328,
  aux_sym_class_method_line_repeat1 = 329,
  aux_sym_diagram_state_repeat1 = 330,
  aux_sym_state_composite_body_repeat1 = 331,
  aux_sym_diagram_gantt_repeat1 = 332,
  aux_sym_diagram_pie_repeat1 = 333,
  aux_sym_diagram_flow_repeat1 = 334,
  aux_sym_flow_stmt_vertice_repeat1 = 335,
  aux_sym_flow_node_repeat1 = 336,
  aux_sym_flow_arrow_text_repeat1 = 337,
  aux_sym_flow_stmt_subgraph_inner_repeat1 = 338,
  aux_sym_diagram_er_repeat1 = 339,
  aux_sym_er_stmt_entity_block_inner_repeat1 = 340,
  aux_sym_gantt_task_text_repeat1 = 341,
  aux_sym_flow_text_literal_repeat1 = 342,
  alias_sym_alias = 343,
  alias_sym_annotation = 344,
  alias_sym_class_classifier_abstract = 345,
  alias_sym_class_style_name = 346,
  alias_sym_class_visibility_internal = 347,
  alias_sym_class_visibility_private = 348,
  alias_sym_class_visibility_public = 349,
  alias_sym_gantt_axis_format = 350,
  alias_sym_gantt_end_dates = 351,
  alias_sym_gantt_excludes = 352,
  alias_sym_gantt_includes = 353,
  alias_sym_gantt_section = 354,
  alias_sym_gantt_title = 355,
  alias_sym_gantt_today_marker = 356,
  alias_sym_gantt_top_axis = 357,
  alias_sym_note_content = 358,
  alias_sym_sequence_stmt_alt_branch = 359,
  alias_sym_sequence_stmt_loop_inner = 360,
  alias_sym_sequence_stmt_opt_inner = 361,
  alias_sym_sequence_stmt_rect_inner = 362,
  alias_sym_title = 363,
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
  [aux_sym_diagram_er_repeat1] = "diagram_er_repeat1",
  [aux_sym_er_stmt_entity_block_inner_repeat1] = "er_stmt_entity_block_inner_repeat1",
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
  [aux_sym_diagram_er_repeat1] = aux_sym_diagram_er_repeat1,
  [aux_sym_er_stmt_entity_block_inner_repeat1] = aux_sym_er_stmt_entity_block_inner_repeat1,
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
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 3,
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 14,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 14,
  [26] = 26,
  [27] = 23,
  [28] = 22,
  [29] = 21,
  [30] = 14,
  [31] = 23,
  [32] = 32,
  [33] = 22,
  [34] = 23,
  [35] = 20,
  [36] = 17,
  [37] = 20,
  [38] = 22,
  [39] = 21,
  [40] = 21,
  [41] = 41,
  [42] = 17,
  [43] = 20,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 47,
  [50] = 47,
  [51] = 46,
  [52] = 46,
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
  [88] = 86,
  [89] = 89,
  [90] = 87,
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
  [104] = 82,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 112,
  [116] = 110,
  [117] = 109,
  [118] = 106,
  [119] = 105,
  [120] = 120,
  [121] = 102,
  [122] = 101,
  [123] = 85,
  [124] = 84,
  [125] = 89,
  [126] = 111,
  [127] = 83,
  [128] = 81,
  [129] = 91,
  [130] = 108,
  [131] = 92,
  [132] = 107,
  [133] = 93,
  [134] = 94,
  [135] = 120,
  [136] = 95,
  [137] = 103,
  [138] = 100,
  [139] = 99,
  [140] = 98,
  [141] = 97,
  [142] = 96,
  [143] = 81,
  [144] = 106,
  [145] = 81,
  [146] = 93,
  [147] = 96,
  [148] = 83,
  [149] = 111,
  [150] = 108,
  [151] = 107,
  [152] = 82,
  [153] = 92,
  [154] = 108,
  [155] = 111,
  [156] = 99,
  [157] = 112,
  [158] = 113,
  [159] = 110,
  [160] = 107,
  [161] = 87,
  [162] = 84,
  [163] = 86,
  [164] = 85,
  [165] = 101,
  [166] = 102,
  [167] = 82,
  [168] = 103,
  [169] = 100,
  [170] = 99,
  [171] = 98,
  [172] = 97,
  [173] = 95,
  [174] = 103,
  [175] = 100,
  [176] = 109,
  [177] = 106,
  [178] = 105,
  [179] = 96,
  [180] = 91,
  [181] = 112,
  [182] = 94,
  [183] = 120,
  [184] = 98,
  [185] = 95,
  [186] = 94,
  [187] = 87,
  [188] = 89,
  [189] = 89,
  [190] = 84,
  [191] = 85,
  [192] = 93,
  [193] = 113,
  [194] = 97,
  [195] = 101,
  [196] = 102,
  [197] = 110,
  [198] = 86,
  [199] = 91,
  [200] = 105,
  [201] = 83,
  [202] = 92,
  [203] = 109,
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
  [217] = 87,
  [218] = 86,
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
  [257] = 87,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 216,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 86,
  [273] = 273,
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
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 216,
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
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 306,
  [318] = 318,
  [319] = 319,
  [320] = 306,
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
  [364] = 248,
  [365] = 363,
  [366] = 363,
  [367] = 367,
  [368] = 368,
  [369] = 250,
  [370] = 370,
  [371] = 363,
  [372] = 372,
  [373] = 373,
  [374] = 248,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 250,
  [379] = 379,
  [380] = 380,
  [381] = 219,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 382,
  [387] = 382,
  [388] = 382,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 376,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 247,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 252,
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
  [422] = 212,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 424,
  [429] = 429,
  [430] = 430,
  [431] = 296,
  [432] = 295,
  [433] = 433,
  [434] = 292,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 280,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 246,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 260,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 221,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 459,
  [470] = 460,
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
  [483] = 463,
  [484] = 468,
  [485] = 485,
  [486] = 459,
  [487] = 458,
  [488] = 460,
  [489] = 489,
  [490] = 458,
  [491] = 491,
  [492] = 461,
  [493] = 462,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 458,
  [498] = 491,
  [499] = 499,
  [500] = 500,
  [501] = 463,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 496,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 491,
  [511] = 495,
  [512] = 512,
  [513] = 499,
  [514] = 496,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 491,
  [527] = 496,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 503,
  [536] = 495,
  [537] = 499,
  [538] = 468,
  [539] = 468,
  [540] = 463,
  [541] = 533,
  [542] = 542,
  [543] = 543,
  [544] = 508,
  [545] = 507,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 503,
  [557] = 495,
  [558] = 558,
  [559] = 507,
  [560] = 533,
  [561] = 508,
  [562] = 549,
  [563] = 499,
  [564] = 461,
  [565] = 462,
  [566] = 566,
  [567] = 567,
  [568] = 459,
  [569] = 426,
  [570] = 507,
  [571] = 533,
  [572] = 508,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 503,
  [577] = 577,
  [578] = 460,
  [579] = 461,
  [580] = 462,
  [581] = 581,
  [582] = 472,
  [583] = 583,
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
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 600,
  [606] = 602,
  [607] = 607,
  [608] = 608,
  [609] = 600,
  [610] = 602,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 615,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 615,
  [637] = 622,
  [638] = 638,
  [639] = 639,
  [640] = 619,
  [641] = 621,
  [642] = 642,
  [643] = 643,
  [644] = 622,
  [645] = 645,
  [646] = 615,
  [647] = 619,
  [648] = 621,
  [649] = 622,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 595,
  [654] = 654,
  [655] = 596,
  [656] = 656,
  [657] = 593,
  [658] = 617,
  [659] = 659,
  [660] = 660,
  [661] = 618,
  [662] = 652,
  [663] = 663,
  [664] = 664,
  [665] = 614,
  [666] = 613,
  [667] = 612,
  [668] = 611,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 651,
  [673] = 595,
  [674] = 654,
  [675] = 596,
  [676] = 676,
  [677] = 651,
  [678] = 617,
  [679] = 660,
  [680] = 659,
  [681] = 618,
  [682] = 652,
  [683] = 683,
  [684] = 684,
  [685] = 651,
  [686] = 595,
  [687] = 654,
  [688] = 593,
  [689] = 659,
  [690] = 660,
  [691] = 596,
  [692] = 617,
  [693] = 693,
  [694] = 618,
  [695] = 614,
  [696] = 613,
  [697] = 612,
  [698] = 611,
  [699] = 652,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 593,
  [704] = 593,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 621,
  [711] = 654,
  [712] = 619,
  [713] = 602,
  [714] = 600,
  [715] = 715,
  [716] = 593,
  [717] = 659,
  [718] = 660,
  [719] = 611,
  [720] = 612,
  [721] = 613,
  [722] = 614,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 737,
  [739] = 739,
  [740] = 740,
  [741] = 735,
  [742] = 734,
  [743] = 733,
  [744] = 732,
  [745] = 745,
  [746] = 731,
  [747] = 745,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 726,
  [752] = 752,
  [753] = 752,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 727,
  [759] = 759,
  [760] = 760,
  [761] = 723,
  [762] = 735,
  [763] = 745,
  [764] = 725,
  [765] = 748,
  [766] = 766,
  [767] = 767,
  [768] = 726,
  [769] = 733,
  [770] = 734,
  [771] = 735,
  [772] = 748,
  [773] = 732,
  [774] = 774,
  [775] = 734,
  [776] = 731,
  [777] = 752,
  [778] = 754,
  [779] = 745,
  [780] = 756,
  [781] = 757,
  [782] = 737,
  [783] = 592,
  [784] = 760,
  [785] = 723,
  [786] = 786,
  [787] = 726,
  [788] = 786,
  [789] = 725,
  [790] = 732,
  [791] = 731,
  [792] = 792,
  [793] = 590,
  [794] = 748,
  [795] = 591,
  [796] = 796,
  [797] = 727,
  [798] = 745,
  [799] = 752,
  [800] = 754,
  [801] = 755,
  [802] = 756,
  [803] = 757,
  [804] = 725,
  [805] = 759,
  [806] = 760,
  [807] = 755,
  [808] = 733,
  [809] = 759,
  [810] = 754,
  [811] = 811,
  [812] = 755,
  [813] = 756,
  [814] = 757,
  [815] = 89,
  [816] = 748,
  [817] = 752,
  [818] = 748,
  [819] = 752,
  [820] = 759,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 766,
  [825] = 760,
  [826] = 723,
  [827] = 827,
  [828] = 828,
  [829] = 827,
  [830] = 830,
  [831] = 830,
  [832] = 832,
  [833] = 833,
  [834] = 736,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 766,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 827,
  [845] = 830,
  [846] = 846,
  [847] = 832,
  [848] = 833,
  [849] = 736,
  [850] = 835,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 766,
  [856] = 856,
  [857] = 857,
  [858] = 745,
  [859] = 827,
  [860] = 830,
  [861] = 832,
  [862] = 832,
  [863] = 833,
  [864] = 736,
  [865] = 835,
  [866] = 727,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 833,
  [873] = 873,
  [874] = 767,
  [875] = 792,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 737,
  [883] = 835,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
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
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '$') ADVANCE(461);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(480);
      if (lookahead == '(') ADVANCE(457);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '+') ADVANCE(452);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '-') ADVANCE(454);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(663);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead == 'E') ADVANCE(251);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == '[') ADVANCE(484);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == '^') ADVANCE(855);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 'v') ADVANCE(853);
      if (lookahead == 'x') ADVANCE(68);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '|') ADVANCE(482);
      if (lookahead == '}') ADVANCE(450);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(121);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(245);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(227);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(119);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(548);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(548);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(548);
      if (lookahead == '+') ADVANCE(452);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '#') ADVANCE(455);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '+') ADVANCE(452);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '~') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(677);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == '[') ADVANCE(678);
      if (lookahead == '}') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(694);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(845);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '"') ADVANCE(657);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(405);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == 'D') ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(845);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(657);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '<') ADVANCE(664);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(858);
      if (lookahead == '%') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (!aux_sym_flow_text_literal_token1_character_set_1(lookahead)) ADVANCE(860);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(410);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(859);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(486);
      if (lookahead == '|') ADVANCE(88);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(860);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(859);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '}') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != ';' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(860);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(542);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(530);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(752);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(833);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(834);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '|') ADVANCE(875);
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'o' ||
          lookahead == 'x') ADVANCE(637);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(643);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(763);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(492);
      if (lookahead == ']') ADVANCE(494);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '>') ADVANCE(626);
      if (lookahead == 'x') ADVANCE(628);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(490);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '.') ADVANCE(869);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '>') ADVANCE(624);
      if (lookahead == 'x') ADVANCE(627);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(488);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == ']') ADVANCE(498);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '[') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(878);
      if (lookahead == '.') ADVANCE(669);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '.') ADVANCE(869);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(863);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(862);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '.') ADVANCE(879);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '{') ADVANCE(874);
      if (lookahead == '|') ADVANCE(872);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(669);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(465);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(435);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(446);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '<') ADVANCE(462);
      END_STATE();
    case 67:
      if (lookahead == '<') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '=') ADVANCE(868);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(865);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '>') ADVANCE(662);
      END_STATE();
    case 73:
      if (lookahead == '>') ADVANCE(463);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(753);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(755);
      END_STATE();
    case 76:
      if (lookahead == '>') ADVANCE(757);
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
      if (lookahead == 'D') ADVANCE(427);
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(241);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(242);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(243);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead == '[') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(505);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(503);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(496);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead == '{') ADVANCE(876);
      if (lookahead == '|') ADVANCE(877);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(722);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(754);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(756);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(758);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(93);
      END_STATE();
    case 97:
      if (lookahead == '`') ADVANCE(656);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(508);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(506);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead == '{') ADVANCE(876);
      if (lookahead == '|') ADVANCE(877);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(873);
      if (lookahead == '|') ADVANCE(875);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(874);
      if (lookahead == '|') ADVANCE(872);
      END_STATE();
    case 114:
      if (lookahead == '}') ADVANCE(500);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(880);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 143:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(851);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(851);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(535);
      END_STATE();
    case 146:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(313);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(353);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 150:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(217);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(294);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(293);
      END_STATE();
    case 152:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(352);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(369);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 154:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 156:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(355);
      END_STATE();
    case 157:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 159:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 160:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 161:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 162:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(296);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(295);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      END_STATE();
    case 165:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 166:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 168:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 171:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      END_STATE();
    case 207:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(631);
      END_STATE();
    case 208:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(291);
      END_STATE();
    case 209:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(349);
      END_STATE();
    case 210:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(880);
      END_STATE();
    case 221:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(303);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 245:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(881);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 246:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(422);
      END_STATE();
    case 247:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 248:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(94);
      END_STATE();
    case 249:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(510);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(436);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 271:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 274:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 275:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 276:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 278:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 279:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 280:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 281:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 282:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 283:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 285:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 286:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 287:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 289:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 290:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 291:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 293:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 294:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 295:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 297:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 298:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 300:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(426);
      END_STATE();
    case 301:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 302:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      END_STATE();
    case 303:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(365);
      END_STATE();
    case 304:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 305:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(369);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(849);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(854);
      END_STATE();
    case 307:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 308:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      END_STATE();
    case 309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 312:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 314:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 317:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 318:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 319:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 320:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 322:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 323:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 324:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 325:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 327:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      END_STATE();
    case 328:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      END_STATE();
    case 329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      END_STATE();
    case 330:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      END_STATE();
    case 331:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      END_STATE();
    case 332:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      END_STATE();
    case 333:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      END_STATE();
    case 334:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 335:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 336:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      END_STATE();
    case 337:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 339:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      END_STATE();
    case 341:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      END_STATE();
    case 342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      END_STATE();
    case 346:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      END_STATE();
    case 347:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      END_STATE();
    case 348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      END_STATE();
    case 351:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 353:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 355:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(342);
      END_STATE();
    case 360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 364:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 365:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 366:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      END_STATE();
    case 367:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 368:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 371:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 372:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 373:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 374:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(198);
      END_STATE();
    case 375:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(136);
      END_STATE();
    case 376:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 377:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 378:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 379:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(226);
      END_STATE();
    case 380:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 381:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 382:
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(866);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 384:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(847);
      END_STATE();
    case 385:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(534);
      if (lookahead == '%') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 386:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 387:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(97);
      END_STATE();
    case 388:
      if (eof) ADVANCE(404);
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 389:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '<') ADVANCE(664);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead == '^') ADVANCE(855);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == 'v') ADVANCE(853);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      END_STATE();
    case 390:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 391:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(838);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 392:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(480);
      if (lookahead == '(') ADVANCE(457);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(501);
      if (lookahead == 'O') ADVANCE(374);
      if (lookahead == '[') ADVANCE(484);
      if (lookahead == ']') ADVANCE(485);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '{') ADVANCE(448);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == '<' ||
          lookahead == 'x') ADVANCE(58);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(245);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 393:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 394:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '$') ADVANCE(461);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead == ']') ADVANCE(485);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 395:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(826);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 396:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(677);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 397:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead == '|') ADVANCE(481);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(736);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 398:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(736);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 399:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 400:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '}') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(736);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 401:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '~') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 402:
      if (eof) ADVANCE(404);
      if (lookahead == '\n') ADVANCE(520);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == 's') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 403:
      if (eof) ADVANCE(404);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == 'c') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_RBRACE_PERCENT_PERCENT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_diagram_sequence_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_participant_token2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_actor_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_autonumber_token1);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_activate_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_deactivate_token1);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token1);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_note_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_links_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_link_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_properties_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_details_token1);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_title_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token1);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_loop_token2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_rect_token1);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_opt_token1);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_alt_token2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_sequence_stmt_par_token2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_diagram_class_token1);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_diagram_class_token2);
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '{') ADVANCE(443);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '%') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_class_generics_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(499);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '|') ADVANCE(875);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '(') ADVANCE(487);
      if (lookahead == '-') ADVANCE(489);
      if (lookahead == '[') ADVANCE(491);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ']') ADVANCE(498);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_diagram_state_token1);
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_diagram_state_token2);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_state_stmt_simple_token1);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_diagram_gantt_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_dateformat_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_inclusiveenddates_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_topaxis_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_axisformat_token1);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_includes_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_excludes_token1);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_todaymarker_token1);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_gantt_stmt_section_token1);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_diagram_pie_token1);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_diagram_flow_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_flow_stmt_direction_token1);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(662);
      if (lookahead == ']') ADVANCE(496);
      if (lookahead == '{') ADVANCE(876);
      if (lookahead == '|') ADVANCE(877);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '/') ADVANCE(502);
      if (lookahead == '[') ADVANCE(493);
      if (lookahead == '\\') ADVANCE(504);
      if (lookahead == '|') ADVANCE(495);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ')') ADVANCE(492);
      if (lookahead == ']') ADVANCE(494);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LPAREN_LPAREN);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_RPAREN_RPAREN);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LPAREN_DASH);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DASH_RPAREN);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LPAREN_LBRACK);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_RBRACK_RPAREN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK_LPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN_RBRACK);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACK_SLASH);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACK);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACK_BSLASH);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_SLASH_RBRACK);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_subgraph);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_subgraph);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_diagram_er_token1);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(511);
      if (lookahead == ' ') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(530);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(834);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(542);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(532);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(530);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(534);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(523);
      if (lookahead == '{') ADVANCE(530);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '\n') ADVANCE(525);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead == '%') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(530);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_type_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(524);
      if (lookahead == '{') ADVANCE(534);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead == '\n') ADVANCE(526);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(534);
      if (lookahead == '%') ADVANCE(531);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_arg_directive);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != ':') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_direction_tb_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_direction_bt_token1);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_direction_rl_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_direction_lr_token1);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(542);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(540);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead == '%') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(542);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__rest_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(542);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(621);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(406);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == ' ' ||
          ('+' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == ' ') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(587);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(605);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__actor_word);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '+' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>') ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_solid_arrow);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_dotted_arrow);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_solid_open_arrow);
      if (lookahead == '>') ADVANCE(622);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      if (lookahead == '>') ADVANCE(623);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_solid_cross);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_dotted_cross);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_dotted_point);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_note_placement_left_token1);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_note_placement_right_token1);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'a') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 'l') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__class_name);
      if (lookahead == 's') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__class_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'b') ADVANCE(641);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'g') ADVANCE(645);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'h') ADVANCE(507);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'n') ADVANCE(640);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'p') ADVANCE(642);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'r') ADVANCE(638);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'u') ADVANCE(639);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(654);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(653);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(650);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__alpha_num_token);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__bquote_string);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__dquote_string);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '{') ADVANCE(874);
      if (lookahead == '|') ADVANCE(872);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_class_reltype_aggregation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_LT_PIPE);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '|') ADVANCE(661);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '|') ADVANCE(661);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == '>') ADVANCE(625);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(625);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(721);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ' ') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '%') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '*') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == ']') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(712);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(699);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_class_label_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_LBRACK_STAR_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(721);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == ' ') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_state_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_state_hide_empty_description_token1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '{') ADVANCE(13);
      if (lookahead != 0) ADVANCE(750);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead == '%') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_state_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '-' &&
          lookahead != ':' &&
          lookahead != '{') ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_state_annotation_fork_token2);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token1);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_state_annotation_join_token2);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token1);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_state_annotation_choice_token2);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(761);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(761);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(761);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == '%') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 767:
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
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 768:
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
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(765);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 781:
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
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(821);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 819:
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
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 828:
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
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_gantt_task_text_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(832);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead == '%') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(834);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_gantt_task_data);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(834);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_pie_showdata_token1);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(408);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '\n') ADVANCE(521);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(13);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '"') ADVANCE(844);
      if (lookahead == '\n' ||
          lookahead == '#' ||
          lookahead == ';') ADVANCE(20);
      if (lookahead != 0) ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == '%') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_pie_title);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_pie_label_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_pie_value);
      if (lookahead == '.') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_pie_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(847);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_lr_token2);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_rl_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_tb_token2);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_flowchart_direction_bt_token1);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '{') ADVANCE(860);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '\n') ADVANCE(521);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '"') ADVANCE(860);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (lookahead == '%') ADVANCE(856);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_flow_text_literal_token1);
      if (!aux_sym_flow_text_literal_token1_character_set_2(lookahead)) ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_flow_text_quoted);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token1);
      if (lookahead == '-') ADVANCE(863);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(862);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token2);
      if (lookahead == '=') ADVANCE(865);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_token3);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token1);
      if (lookahead == '-') ADVANCE(863);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(862);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token2);
      if (lookahead == '=') ADVANCE(865);
      if (lookahead == '>' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_flow_link_arrow_start_token3);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '.') ADVANCE(869);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__er_alphanum);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_PIPEo);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_o_PIPE);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_RBRACEo);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_o_LBRACE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_RBRACE_PIPE);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_PIPE_LBRACE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_er_cardinarity_only_one);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_DASH_DOT);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_pk_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_er_attribute_key_type_fk_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 392},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 388},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 388},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 388},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 388},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 388},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 388},
  [45] = {.lex_state = 388},
  [46] = {.lex_state = 388},
  [47] = {.lex_state = 388},
  [48] = {.lex_state = 388},
  [49] = {.lex_state = 388},
  [50] = {.lex_state = 388},
  [51] = {.lex_state = 388},
  [52] = {.lex_state = 388},
  [53] = {.lex_state = 388},
  [54] = {.lex_state = 392},
  [55] = {.lex_state = 395},
  [56] = {.lex_state = 397},
  [57] = {.lex_state = 395},
  [58] = {.lex_state = 395},
  [59] = {.lex_state = 397},
  [60] = {.lex_state = 397},
  [61] = {.lex_state = 397},
  [62] = {.lex_state = 395},
  [63] = {.lex_state = 395},
  [64] = {.lex_state = 397},
  [65] = {.lex_state = 397},
  [66] = {.lex_state = 397},
  [67] = {.lex_state = 397},
  [68] = {.lex_state = 397},
  [69] = {.lex_state = 397},
  [70] = {.lex_state = 397},
  [71] = {.lex_state = 397},
  [72] = {.lex_state = 397},
  [73] = {.lex_state = 397},
  [74] = {.lex_state = 397},
  [75] = {.lex_state = 397},
  [76] = {.lex_state = 397},
  [77] = {.lex_state = 397},
  [78] = {.lex_state = 397},
  [79] = {.lex_state = 397},
  [80] = {.lex_state = 392},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 388},
  [146] = {.lex_state = 388},
  [147] = {.lex_state = 388},
  [148] = {.lex_state = 388},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 388},
  [154] = {.lex_state = 388},
  [155] = {.lex_state = 388},
  [156] = {.lex_state = 388},
  [157] = {.lex_state = 388},
  [158] = {.lex_state = 388},
  [159] = {.lex_state = 388},
  [160] = {.lex_state = 388},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 388},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 388},
  [165] = {.lex_state = 388},
  [166] = {.lex_state = 388},
  [167] = {.lex_state = 388},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 388},
  [174] = {.lex_state = 388},
  [175] = {.lex_state = 388},
  [176] = {.lex_state = 388},
  [177] = {.lex_state = 388},
  [178] = {.lex_state = 388},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 388},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 388},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 388},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 388},
  [188] = {.lex_state = 388},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 388},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 388},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 389},
  [205] = {.lex_state = 392},
  [206] = {.lex_state = 389},
  [207] = {.lex_state = 398},
  [208] = {.lex_state = 389},
  [209] = {.lex_state = 392},
  [210] = {.lex_state = 392},
  [211] = {.lex_state = 389},
  [212] = {.lex_state = 400},
  [213] = {.lex_state = 398},
  [214] = {.lex_state = 399},
  [215] = {.lex_state = 389},
  [216] = {.lex_state = 400},
  [217] = {.lex_state = 392},
  [218] = {.lex_state = 392},
  [219] = {.lex_state = 389},
  [220] = {.lex_state = 397},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 403},
  [223] = {.lex_state = 397},
  [224] = {.lex_state = 395},
  [225] = {.lex_state = 395},
  [226] = {.lex_state = 395},
  [227] = {.lex_state = 395},
  [228] = {.lex_state = 395},
  [229] = {.lex_state = 395},
  [230] = {.lex_state = 395},
  [231] = {.lex_state = 395},
  [232] = {.lex_state = 395},
  [233] = {.lex_state = 397},
  [234] = {.lex_state = 397},
  [235] = {.lex_state = 397},
  [236] = {.lex_state = 397},
  [237] = {.lex_state = 397},
  [238] = {.lex_state = 38},
  [239] = {.lex_state = 397},
  [240] = {.lex_state = 397},
  [241] = {.lex_state = 397},
  [242] = {.lex_state = 397},
  [243] = {.lex_state = 397},
  [244] = {.lex_state = 392},
  [245] = {.lex_state = 403},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 389},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 392},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 22},
  [252] = {.lex_state = 389},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 398},
  [255] = {.lex_state = 395},
  [256] = {.lex_state = 397},
  [257] = {.lex_state = 395},
  [258] = {.lex_state = 38},
  [259] = {.lex_state = 395},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 392},
  [262] = {.lex_state = 397},
  [263] = {.lex_state = 397},
  [264] = {.lex_state = 397},
  [265] = {.lex_state = 397},
  [266] = {.lex_state = 397},
  [267] = {.lex_state = 392},
  [268] = {.lex_state = 395},
  [269] = {.lex_state = 397},
  [270] = {.lex_state = 397},
  [271] = {.lex_state = 403},
  [272] = {.lex_state = 395},
  [273] = {.lex_state = 397},
  [274] = {.lex_state = 397},
  [275] = {.lex_state = 397},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 397},
  [278] = {.lex_state = 7},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 389},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 38},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 38},
  [286] = {.lex_state = 403},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 397},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 403},
  [292] = {.lex_state = 29},
  [293] = {.lex_state = 399},
  [294] = {.lex_state = 403},
  [295] = {.lex_state = 389},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 392},
  [298] = {.lex_state = 402},
  [299] = {.lex_state = 392},
  [300] = {.lex_state = 392},
  [301] = {.lex_state = 392},
  [302] = {.lex_state = 402},
  [303] = {.lex_state = 392},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 402},
  [306] = {.lex_state = 399},
  [307] = {.lex_state = 402},
  [308] = {.lex_state = 399},
  [309] = {.lex_state = 399},
  [310] = {.lex_state = 7},
  [311] = {.lex_state = 392},
  [312] = {.lex_state = 392},
  [313] = {.lex_state = 402},
  [314] = {.lex_state = 392},
  [315] = {.lex_state = 7},
  [316] = {.lex_state = 392},
  [317] = {.lex_state = 399},
  [318] = {.lex_state = 392},
  [319] = {.lex_state = 402},
  [320] = {.lex_state = 399},
  [321] = {.lex_state = 392},
  [322] = {.lex_state = 392},
  [323] = {.lex_state = 402},
  [324] = {.lex_state = 392},
  [325] = {.lex_state = 392},
  [326] = {.lex_state = 402},
  [327] = {.lex_state = 402},
  [328] = {.lex_state = 392},
  [329] = {.lex_state = 392},
  [330] = {.lex_state = 392},
  [331] = {.lex_state = 392},
  [332] = {.lex_state = 392},
  [333] = {.lex_state = 392},
  [334] = {.lex_state = 392},
  [335] = {.lex_state = 392},
  [336] = {.lex_state = 392},
  [337] = {.lex_state = 392},
  [338] = {.lex_state = 392},
  [339] = {.lex_state = 392},
  [340] = {.lex_state = 392},
  [341] = {.lex_state = 392},
  [342] = {.lex_state = 394},
  [343] = {.lex_state = 394},
  [344] = {.lex_state = 392},
  [345] = {.lex_state = 22},
  [346] = {.lex_state = 22},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 394},
  [349] = {.lex_state = 392},
  [350] = {.lex_state = 393},
  [351] = {.lex_state = 394},
  [352] = {.lex_state = 394},
  [353] = {.lex_state = 394},
  [354] = {.lex_state = 393},
  [355] = {.lex_state = 393},
  [356] = {.lex_state = 393},
  [357] = {.lex_state = 393},
  [358] = {.lex_state = 22},
  [359] = {.lex_state = 393},
  [360] = {.lex_state = 393},
  [361] = {.lex_state = 393},
  [362] = {.lex_state = 393},
  [363] = {.lex_state = 6},
  [364] = {.lex_state = 390},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 392},
  [368] = {.lex_state = 392},
  [369] = {.lex_state = 390},
  [370] = {.lex_state = 397},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 394},
  [373] = {.lex_state = 390},
  [374] = {.lex_state = 401},
  [375] = {.lex_state = 402},
  [376] = {.lex_state = 394},
  [377] = {.lex_state = 402},
  [378] = {.lex_state = 401},
  [379] = {.lex_state = 391},
  [380] = {.lex_state = 402},
  [381] = {.lex_state = 398},
  [382] = {.lex_state = 392},
  [383] = {.lex_state = 393},
  [384] = {.lex_state = 402},
  [385] = {.lex_state = 390},
  [386] = {.lex_state = 392},
  [387] = {.lex_state = 392},
  [388] = {.lex_state = 392},
  [389] = {.lex_state = 393},
  [390] = {.lex_state = 390},
  [391] = {.lex_state = 393},
  [392] = {.lex_state = 393},
  [393] = {.lex_state = 392},
  [394] = {.lex_state = 393},
  [395] = {.lex_state = 37},
  [396] = {.lex_state = 394},
  [397] = {.lex_state = 392},
  [398] = {.lex_state = 24},
  [399] = {.lex_state = 398},
  [400] = {.lex_state = 24},
  [401] = {.lex_state = 24},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 24},
  [404] = {.lex_state = 24},
  [405] = {.lex_state = 398},
  [406] = {.lex_state = 24},
  [407] = {.lex_state = 390},
  [408] = {.lex_state = 24},
  [409] = {.lex_state = 390},
  [410] = {.lex_state = 390},
  [411] = {.lex_state = 24},
  [412] = {.lex_state = 24},
  [413] = {.lex_state = 393},
  [414] = {.lex_state = 24},
  [415] = {.lex_state = 24},
  [416] = {.lex_state = 390},
  [417] = {.lex_state = 390},
  [418] = {.lex_state = 390},
  [419] = {.lex_state = 24},
  [420] = {.lex_state = 392},
  [421] = {.lex_state = 392},
  [422] = {.lex_state = 400},
  [423] = {.lex_state = 23},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 390},
  [426] = {.lex_state = 37},
  [427] = {.lex_state = 397},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 394},
  [431] = {.lex_state = 30},
  [432] = {.lex_state = 398},
  [433] = {.lex_state = 394},
  [434] = {.lex_state = 30},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 394},
  [438] = {.lex_state = 398},
  [439] = {.lex_state = 398},
  [440] = {.lex_state = 392},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 5},
  [445] = {.lex_state = 396},
  [446] = {.lex_state = 392},
  [447] = {.lex_state = 393},
  [448] = {.lex_state = 5},
  [449] = {.lex_state = 38},
  [450] = {.lex_state = 396},
  [451] = {.lex_state = 394},
  [452] = {.lex_state = 396},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 394},
  [455] = {.lex_state = 396},
  [456] = {.lex_state = 394},
  [457] = {.lex_state = 392},
  [458] = {.lex_state = 392},
  [459] = {.lex_state = 4},
  [460] = {.lex_state = 4},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 4},
  [463] = {.lex_state = 4},
  [464] = {.lex_state = 390},
  [465] = {.lex_state = 392},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 392},
  [468] = {.lex_state = 4},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 4},
  [471] = {.lex_state = 397},
  [472] = {.lex_state = 23},
  [473] = {.lex_state = 397},
  [474] = {.lex_state = 397},
  [475] = {.lex_state = 397},
  [476] = {.lex_state = 397},
  [477] = {.lex_state = 397},
  [478] = {.lex_state = 397},
  [479] = {.lex_state = 397},
  [480] = {.lex_state = 397},
  [481] = {.lex_state = 397},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 4},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 4},
  [487] = {.lex_state = 392},
  [488] = {.lex_state = 4},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 392},
  [491] = {.lex_state = 392},
  [492] = {.lex_state = 4},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 4},
  [496] = {.lex_state = 390},
  [497] = {.lex_state = 392},
  [498] = {.lex_state = 392},
  [499] = {.lex_state = 4},
  [500] = {.lex_state = 397},
  [501] = {.lex_state = 4},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 4},
  [504] = {.lex_state = 397},
  [505] = {.lex_state = 390},
  [506] = {.lex_state = 397},
  [507] = {.lex_state = 4},
  [508] = {.lex_state = 4},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 392},
  [511] = {.lex_state = 4},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 4},
  [514] = {.lex_state = 390},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 397},
  [517] = {.lex_state = 6},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 397},
  [520] = {.lex_state = 6},
  [521] = {.lex_state = 6},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 392},
  [527] = {.lex_state = 390},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 397},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 4},
  [534] = {.lex_state = 394},
  [535] = {.lex_state = 4},
  [536] = {.lex_state = 4},
  [537] = {.lex_state = 4},
  [538] = {.lex_state = 4},
  [539] = {.lex_state = 4},
  [540] = {.lex_state = 4},
  [541] = {.lex_state = 4},
  [542] = {.lex_state = 390},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 4},
  [545] = {.lex_state = 4},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 397},
  [549] = {.lex_state = 23},
  [550] = {.lex_state = 394},
  [551] = {.lex_state = 397},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 394},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 4},
  [557] = {.lex_state = 4},
  [558] = {.lex_state = 394},
  [559] = {.lex_state = 4},
  [560] = {.lex_state = 4},
  [561] = {.lex_state = 4},
  [562] = {.lex_state = 23},
  [563] = {.lex_state = 4},
  [564] = {.lex_state = 4},
  [565] = {.lex_state = 4},
  [566] = {.lex_state = 397},
  [567] = {.lex_state = 40},
  [568] = {.lex_state = 4},
  [569] = {.lex_state = 394},
  [570] = {.lex_state = 4},
  [571] = {.lex_state = 4},
  [572] = {.lex_state = 4},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 397},
  [575] = {.lex_state = 40},
  [576] = {.lex_state = 4},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 4},
  [579] = {.lex_state = 4},
  [580] = {.lex_state = 4},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 23},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 390},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 393},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 23},
  [591] = {.lex_state = 23},
  [592] = {.lex_state = 23},
  [593] = {.lex_state = 392},
  [594] = {.lex_state = 394},
  [595] = {.lex_state = 31},
  [596] = {.lex_state = 31},
  [597] = {.lex_state = 394},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 31},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 31},
  [603] = {.lex_state = 393},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 31},
  [606] = {.lex_state = 31},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 31},
  [610] = {.lex_state = 31},
  [611] = {.lex_state = 31},
  [612] = {.lex_state = 31},
  [613] = {.lex_state = 31},
  [614] = {.lex_state = 31},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 31},
  [618] = {.lex_state = 31},
  [619] = {.lex_state = 31},
  [620] = {.lex_state = 393},
  [621] = {.lex_state = 31},
  [622] = {.lex_state = 31},
  [623] = {.lex_state = 31},
  [624] = {.lex_state = 31},
  [625] = {.lex_state = 31},
  [626] = {.lex_state = 31},
  [627] = {.lex_state = 31},
  [628] = {.lex_state = 31},
  [629] = {.lex_state = 31},
  [630] = {.lex_state = 31},
  [631] = {.lex_state = 31},
  [632] = {.lex_state = 23},
  [633] = {.lex_state = 396},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 31},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 393},
  [640] = {.lex_state = 31},
  [641] = {.lex_state = 31},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 31},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 31},
  [648] = {.lex_state = 31},
  [649] = {.lex_state = 31},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 31},
  [652] = {.lex_state = 31},
  [653] = {.lex_state = 31},
  [654] = {.lex_state = 31},
  [655] = {.lex_state = 31},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 392},
  [658] = {.lex_state = 31},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 31},
  [662] = {.lex_state = 31},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 31},
  [666] = {.lex_state = 31},
  [667] = {.lex_state = 31},
  [668] = {.lex_state = 31},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 396},
  [671] = {.lex_state = 397},
  [672] = {.lex_state = 31},
  [673] = {.lex_state = 31},
  [674] = {.lex_state = 31},
  [675] = {.lex_state = 31},
  [676] = {.lex_state = 393},
  [677] = {.lex_state = 31},
  [678] = {.lex_state = 31},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 31},
  [682] = {.lex_state = 31},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 31},
  [686] = {.lex_state = 31},
  [687] = {.lex_state = 31},
  [688] = {.lex_state = 392},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 31},
  [692] = {.lex_state = 31},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 31},
  [695] = {.lex_state = 31},
  [696] = {.lex_state = 31},
  [697] = {.lex_state = 31},
  [698] = {.lex_state = 31},
  [699] = {.lex_state = 31},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 392},
  [704] = {.lex_state = 392},
  [705] = {.lex_state = 397},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 392},
  [709] = {.lex_state = 397},
  [710] = {.lex_state = 31},
  [711] = {.lex_state = 31},
  [712] = {.lex_state = 31},
  [713] = {.lex_state = 31},
  [714] = {.lex_state = 31},
  [715] = {.lex_state = 392},
  [716] = {.lex_state = 392},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 31},
  [720] = {.lex_state = 31},
  [721] = {.lex_state = 31},
  [722] = {.lex_state = 31},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 394},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 392},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 392},
  [748] = {.lex_state = 32},
  [749] = {.lex_state = 394},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 385},
  [753] = {.lex_state = 385},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 392},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 32},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 33},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 32},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 397},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 385},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 392},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 4},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 4},
  [794] = {.lex_state = 32},
  [795] = {.lex_state = 4},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 392},
  [799] = {.lex_state = 385},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 389},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 32},
  [817] = {.lex_state = 385},
  [818] = {.lex_state = 32},
  [819] = {.lex_state = 385},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 397},
  [822] = {.lex_state = 392},
  [823] = {.lex_state = 392},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 397},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 392},
  [837] = {.lex_state = 397},
  [838] = {.lex_state = 397},
  [839] = {.lex_state = 392},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 394},
  [843] = {.lex_state = 389},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 397},
  [852] = {.lex_state = 394},
  [853] = {.lex_state = 397},
  [854] = {.lex_state = 392},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 39},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 392},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 4},
  [868] = {.lex_state = 392},
  [869] = {.lex_state = 389},
  [870] = {.lex_state = 392},
  [871] = {.lex_state = 4},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 397},
  [874] = {.lex_state = 33},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 393},
  [877] = {.lex_state = 397},
  [878] = {.lex_state = 34},
  [879] = {.lex_state = 393},
  [880] = {.lex_state = 34},
  [881] = {.lex_state = 35},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 389},
  [885] = {.lex_state = 394},
  [886] = {.lex_state = 394},
  [887] = {.lex_state = 394},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
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
    [sym_source_file] = STATE(890),
    [sym_directive] = STATE(244),
    [sym_diagram_sequence] = STATE(889),
    [sym_diagram_class] = STATE(889),
    [sym_diagram_state] = STATE(889),
    [sym_diagram_gantt] = STATE(889),
    [sym_diagram_pie] = STATE(889),
    [sym_diagram_flow] = STATE(889),
    [sym_diagram_er] = STATE(889),
    [aux_sym_diagram_sequence_repeat1] = STATE(244),
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(498), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(83), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
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
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(497), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(127), 18,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(526), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(83), 18,
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
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(487), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(127), 18,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(491), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(83), 18,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(510), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(83), 18,
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
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(490), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(127), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
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
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(458), 1,
      aux_sym_sequence_stmt_par_repeat1,
    STATE(127), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
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
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    ACTIONS(123), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(127), 18,
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
      sym__actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(83), 18,
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
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
    STATE(127), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    ACTIONS(238), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(83), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(266), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(164), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(181), 1,
      sym__actor_word,
    ACTIONS(278), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(281), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(284), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(287), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(293), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(299), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(305), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(311), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(317), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(320), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(323), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(329), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(332), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(21), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(334), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(336), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(38), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [1735] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(374), 1,
      sym__newline,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(41), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(148), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(376), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(34), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [1931] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(378), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [2030] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(380), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [2129] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(382), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [2228] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(340), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(386), 1,
      sym__newline,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(32), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(148), 18,
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
  [2325] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(388), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(39), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [2424] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(398), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(404), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(410), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(413), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(416), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(419), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(422), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(425), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(428), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(431), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(434), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(437), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(440), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(443), 1,
      sym__newline,
    ACTIONS(446), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(26), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(148), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(449), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(451), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(455), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(29), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(457), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      sym__newline,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(26), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(148), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(461), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(463), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(27), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3410] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(467), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(28), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3509] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(469), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(23), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3608] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3707] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(473), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3806] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(475), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(15), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
  [3905] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(340), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(352), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(366), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(368), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(370), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(372), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(459), 1,
      sym__newline,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(306), 1,
      sym_actor,
    STATE(26), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(148), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(479), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(33), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
      sym__actor_word,
    ACTIONS(240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(242), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(244), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(246), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(248), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(250), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(252), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(254), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(256), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(258), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(260), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(262), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(264), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(268), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(270), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(272), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(274), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(276), 1,
      sym__newline,
    ACTIONS(481), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(183), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(320), 1,
      sym_actor,
    STATE(201), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(13), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(83), 18,
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
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(127), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(83), 18,
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
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(127), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(83), 18,
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
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(127), 18,
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
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(127), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(83), 18,
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
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(135), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(317), 1,
      sym_actor,
    STATE(83), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
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
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(120), 1,
      sym__sequence_stmt,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(308), 1,
      sym_actor,
    STATE(127), 18,
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
    STATE(322), 1,
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
    STATE(324), 15,
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
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(517), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(519), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(521), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(523), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(525), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(527), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(529), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(531), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(533), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(535), 1,
      sym__newline,
    ACTIONS(537), 1,
      aux_sym_gantt_task_text_token1,
    STATE(567), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(888), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
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
  [5305] = 17,
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(545), 1,
      sym__newline,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(234), 12,
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
  [5370] = 18,
    ACTIONS(515), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(517), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(519), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(521), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(523), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(525), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(527), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(529), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(531), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(533), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(537), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    ACTIONS(565), 1,
      sym__newline,
    STATE(567), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(888), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
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
  [5437] = 18,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(569), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(572), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(575), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(578), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(581), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(584), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(590), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(596), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(599), 1,
      sym__newline,
    ACTIONS(602), 1,
      aux_sym_gantt_task_text_token1,
    STATE(567), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(888), 1,
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
  [5504] = 17,
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      sym__newline,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(234), 12,
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
  [5569] = 17,
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      sym__newline,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(234), 12,
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
  [5634] = 17,
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      sym__newline,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(234), 12,
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
  [5699] = 18,
    ACTIONS(515), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(517), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(519), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(521), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(523), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(525), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(527), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(529), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(531), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(533), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(537), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    ACTIONS(615), 1,
      sym__newline,
    STATE(567), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(888), 1,
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
  [5766] = 18,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(517), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(519), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(521), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(523), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(525), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(527), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(529), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(531), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(533), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(537), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(615), 1,
      sym__newline,
    STATE(567), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(888), 1,
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
  [5833] = 17,
    ACTIONS(617), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(625), 1,
      sym__newline,
    ACTIONS(628), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(631), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(634), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(637), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(640), 1,
      anon_sym_DASH_DASH,
    ACTIONS(643), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(646), 1,
      aux_sym_state_name_token1,
    ACTIONS(649), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(234), 12,
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
  [5898] = 16,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(654), 1,
      sym__newline,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(528), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(289), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(662), 1,
      sym__newline,
    STATE(61), 1,
      sym__state_stmt,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(289), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(601), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(666), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(601), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(601), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(601), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(289), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    ACTIONS(672), 1,
      sym__newline,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(494), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(528), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(59), 1,
      sym__state_stmt,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(539), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(559), 1,
      aux_sym_state_name_token1,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(212), 1,
      sym_state_name,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(289), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(601), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
    ACTIONS(543), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(547), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(549), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(551), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(553), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(555), 1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 1,
      aux_sym_state_hide_empty_description_token1,
    ACTIONS(652), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(656), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(658), 1,
      aux_sym_state_name_token1,
    STATE(236), 1,
      sym_state_hide_empty_description,
    STATE(422), 1,
      sym_state_name,
    STATE(515), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(234), 12,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
  [6958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [6990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
  [7470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
      sym__actor_word,
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
      sym__actor_word,
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
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [7982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(678), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [8969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(774), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(786), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(770), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
    ACTIONS(752), 16,
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
  [9527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(682), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(742), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(758), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(746), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(766), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(730), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [9992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(790), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(798), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(738), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(726), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(722), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(702), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(706), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10271] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(690), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(694), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(718), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(794), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(734), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(750), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(754), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(782), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(698), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(710), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(762), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(686), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(714), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(778), 4,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_link_token1,
      aux_sym_sequence_stmt_par_token1,
      sym__actor_word,
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
  [10705] = 15,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(808), 1,
      sym__dquote_string,
    ACTIONS(810), 1,
      sym_class_reltype_aggregation,
    ACTIONS(814), 1,
      anon_sym_LT,
    ACTIONS(816), 1,
      anon_sym_DASH_DASH,
    ACTIONS(818), 1,
      anon_sym_DOT_DOT,
    STATE(251), 1,
      sym__class_linetype,
    STATE(385), 1,
      sym_class_relation,
    STATE(427), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(345), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(416), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10756] = 9,
    STATE(209), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(558), 1,
      sym_flow_link_arrow_start,
    STATE(594), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(820), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(822), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(824), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(887), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10793] = 13,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      sym_class_reltype_aggregation,
    ACTIONS(814), 1,
      anon_sym_LT,
    ACTIONS(816), 1,
      anon_sym_DASH_DASH,
    ACTIONS(818), 1,
      anon_sym_DOT_DOT,
    STATE(251), 1,
      sym__class_linetype,
    STATE(373), 1,
      sym_class_relation,
    STATE(427), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(345), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(416), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10838] = 6,
    ACTIONS(828), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      aux_sym_state_name_token1,
    STATE(237), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 12,
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
  [10869] = 7,
    ACTIONS(836), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(842), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(834), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(840), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(298), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [10902] = 9,
    STATE(209), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(558), 1,
      sym_flow_link_arrow_start,
    STATE(594), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(844), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(846), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(849), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(887), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10939] = 9,
    STATE(205), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(437), 1,
      sym__flow_link,
    STATE(558), 1,
      sym_flow_link_arrow_start,
    STATE(594), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(822), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(824), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(852), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(887), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10976] = 7,
    ACTIONS(854), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(842), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(834), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(840), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(302), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11009] = 6,
    ACTIONS(856), 1,
      anon_sym_COLON,
    ACTIONS(860), 1,
      anon_sym_DASH_DASH_GT,
    STATE(549), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(858), 10,
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
  [11039] = 3,
    ACTIONS(866), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(864), 14,
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
  [11063] = 9,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    ACTIONS(878), 1,
      sym_er_cardinarity_only_one,
    STATE(620), 1,
      sym_er_relation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(868), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(872), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(874), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(876), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(370), 4,
      sym__er_cardinarity,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11099] = 6,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(842), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(834), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(840), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(573), 5,
      sym__flowchart_direction,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11129] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(880), 12,
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
  [11152] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(702), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(704), 12,
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
  [11175] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(698), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(700), 12,
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
  [11198] = 5,
    ACTIONS(886), 1,
      anon_sym_TILDE,
    ACTIONS(888), 1,
      anon_sym_LT,
    STATE(280), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 11,
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
  [11225] = 4,
    ACTIONS(892), 1,
      anon_sym_COLON,
    ACTIONS(894), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(890), 12,
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
  [11250] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(264), 1,
      sym_state_description,
    ACTIONS(898), 4,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
    ACTIONS(896), 8,
      aux_sym_sequence_stmt_note_token1,
      aux_sym_state_stmt_simple_token1,
      sym__newline,
      aux_sym_direction_tb_token1,
      aux_sym_direction_bt_token1,
      aux_sym_direction_rl_token1,
      aux_sym_direction_lr_token1,
      aux_sym_state_hide_empty_description_token1,
  [11279] = 11,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    STATE(701), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11317] = 3,
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
  [11339] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(916), 11,
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
  [11361] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(922), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(920), 11,
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
  [11383] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(924), 11,
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
  [11405] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(928), 11,
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
  [11427] = 3,
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
  [11449] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(938), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(936), 11,
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
  [11471] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(940), 11,
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
  [11493] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(946), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(944), 11,
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
  [11515] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(950), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(948), 11,
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
  [11537] = 3,
    ACTIONS(954), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(952), 12,
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
  [11559] = 3,
    ACTIONS(958), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(956), 12,
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
  [11581] = 3,
    ACTIONS(962), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(960), 12,
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
  [11603] = 3,
    ACTIONS(966), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(964), 12,
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
  [11625] = 3,
    ACTIONS(970), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(968), 12,
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
  [11647] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(976), 1,
      anon_sym_end,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(285), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(656), 1,
      sym__flow_stmt,
    STATE(811), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11687] = 3,
    ACTIONS(982), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(980), 12,
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
  [11709] = 3,
    ACTIONS(986), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(984), 12,
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
  [11731] = 3,
    ACTIONS(990), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(988), 12,
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
  [11753] = 3,
    ACTIONS(994), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(992), 12,
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
  [11775] = 3,
    ACTIONS(998), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(996), 12,
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
  [11797] = 13,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1000), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(1002), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1004), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1006), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1008), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1010), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1012), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(1014), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(1016), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(1018), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(261), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [11839] = 11,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    STATE(701), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [11877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1024), 1,
      sym__actor_word,
    STATE(246), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1027), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1022), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [11905] = 3,
    ACTIONS(1031), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1029), 12,
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
  [11927] = 5,
    ACTIONS(1033), 1,
      sym__class_name,
    ACTIONS(1035), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1031), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1029), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [11953] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1043), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    STATE(301), 1,
      sym_pie_showdata,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(311), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [11991] = 5,
    ACTIONS(1033), 1,
      sym__class_name,
    ACTIONS(1035), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1049), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1047), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12017] = 10,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(814), 1,
      anon_sym_LT,
    ACTIONS(1051), 1,
      sym__class_name,
    ACTIONS(1055), 1,
      sym_class_reltype_aggregation,
    STATE(464), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1053), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(416), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12053] = 3,
    ACTIONS(1049), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1047), 12,
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
  [12075] = 10,
    ACTIONS(804), 1,
      anon_sym_STAR,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(814), 1,
      anon_sym_LT,
    ACTIONS(1055), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1057), 1,
      sym__class_name,
    STATE(542), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(812), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1059), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(416), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12111] = 8,
    ACTIONS(828), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1061), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1063), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1065), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(233), 4,
      sym__state_annotation,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12143] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1069), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1067), 11,
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
  [12165] = 3,
    ACTIONS(1073), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1071), 12,
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
  [12187] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(702), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(704), 11,
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
  [12209] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1075), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(285), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(656), 1,
      sym__flow_stmt,
    STATE(869), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12249] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1079), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1077), 11,
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
  [12271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1083), 1,
      sym__actor_word,
    STATE(246), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1085), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1081), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12299] = 6,
    ACTIONS(1087), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1094), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1092), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(261), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1090), 7,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
  [12327] = 3,
    ACTIONS(882), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(880), 12,
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
  [12349] = 3,
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
  [12371] = 3,
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
  [12393] = 3,
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
  [12415] = 3,
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
  [12437] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1043), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1113), 1,
      ts_builtin_sym_end,
    ACTIONS(1115), 1,
      sym__newline,
    STATE(312), 1,
      sym_pie_showdata,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(297), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12475] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1119), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(1117), 11,
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
  [12497] = 3,
    ACTIONS(1123), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1121), 12,
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
  [12519] = 3,
    ACTIONS(1127), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1125), 12,
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
  [12541] = 11,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1129), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    STATE(701), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12579] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(700), 11,
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
  [12601] = 3,
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
  [12623] = 3,
    ACTIONS(1137), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1135), 12,
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
  [12645] = 3,
    ACTIONS(1141), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1139), 12,
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
  [12667] = 12,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1143), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(285), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(656), 1,
      sym__flow_stmt,
    STATE(843), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12707] = 3,
    ACTIONS(1147), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1145), 12,
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
  [12729] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12766] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12803] = 3,
    ACTIONS(1169), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1167), 11,
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
  [12824] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1171), 1,
      sym__newline,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(500), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12861] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12898] = 11,
    ACTIONS(1175), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1178), 1,
      anon_sym_subgraph,
    ACTIONS(1181), 1,
      anon_sym_end,
    ACTIONS(1183), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(283), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(656), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12935] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [12972] = 11,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1188), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(283), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(656), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13009] = 10,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    STATE(701), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13044] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13081] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13118] = 3,
    ACTIONS(1194), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(620), 11,
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
  [13139] = 11,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    ACTIONS(1196), 1,
      sym__newline,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(566), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13176] = 10,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(518), 1,
      sym__class_stmt,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13211] = 5,
    ACTIONS(1202), 1,
      aux_sym_flow_text_literal_token1,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1200), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1198), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13236] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(880), 12,
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
  [13255] = 10,
    ACTIONS(904), 1,
      anon_sym_class,
    ACTIONS(906), 1,
      anon_sym_LT_LT,
    ACTIONS(908), 1,
      sym__class_name,
    ACTIONS(910), 1,
      sym__bquote_string,
    STATE(204), 1,
      sym_class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(524), 1,
      sym__class_stmt,
    STATE(527), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(587), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13290] = 3,
    ACTIONS(1206), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1204), 11,
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
  [13311] = 5,
    ACTIONS(1212), 1,
      aux_sym_flow_text_literal_token1,
    STATE(296), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1210), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1208), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13336] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1215), 1,
      sym__newline,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(303), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13368] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1217), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(442), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13402] = 5,
    ACTIONS(1221), 1,
      anon_sym_AMP,
    STATE(299), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1224), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1219), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13426] = 5,
    ACTIONS(1228), 1,
      anon_sym_AMP,
    STATE(299), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1230), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1226), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13450] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    ACTIONS(1234), 1,
      sym__newline,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(314), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13482] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1236), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(435), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13516] = 9,
    ACTIONS(1238), 1,
      ts_builtin_sym_end,
    ACTIONS(1240), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1243), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1246), 1,
      sym__newline,
    ACTIONS(1249), 1,
      aux_sym_pie_label_token1,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(303), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13548] = 10,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(705), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13582] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1252), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(553), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13616] = 7,
    ACTIONS(1254), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1258), 1,
      sym_solid_open_arrow,
    ACTIONS(1260), 1,
      anon_sym_DASH_DASH_GT,
    STATE(363), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1256), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13644] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1262), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(553), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13678] = 7,
    ACTIONS(1254), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1258), 1,
      sym_solid_open_arrow,
    ACTIONS(1260), 1,
      anon_sym_DASH_DASH_GT,
    STATE(365), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1256), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13706] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1264), 11,
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
  [13724] = 10,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(516), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13758] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1215), 1,
      sym__newline,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(303), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13790] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1041), 1,
      sym__newline,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(311), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13822] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(553), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13856] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1039), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1045), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1215), 1,
      sym__newline,
    ACTIONS(1268), 1,
      ts_builtin_sym_end,
    STATE(740), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(303), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(420), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13888] = 10,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_LT_LT,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(471), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13922] = 5,
    ACTIONS(1228), 1,
      anon_sym_AMP,
    STATE(300), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1272), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1270), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13946] = 7,
    ACTIONS(1254), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1258), 1,
      sym_solid_open_arrow,
    ACTIONS(1260), 1,
      anon_sym_DASH_DASH_GT,
    STATE(371), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1256), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13974] = 6,
    ACTIONS(1274), 1,
      sym_er_cardinarity_only_one,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(872), 2,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
    ACTIONS(874), 2,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
    ACTIONS(876), 2,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
    STATE(879), 4,
      sym__er_cardinarity,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [14000] = 10,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(553), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14034] = 7,
    ACTIONS(1254), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1258), 1,
      sym_solid_open_arrow,
    ACTIONS(1260), 1,
      anon_sym_DASH_DASH_GT,
    STATE(366), 1,
      sym_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(520), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1256), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14062] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1280), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1278), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14081] = 3,
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
  [14100] = 9,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(435), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14131] = 3,
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
  [14150] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1224), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1219), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14169] = 9,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(441), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14200] = 9,
    ACTIONS(972), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(974), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(210), 1,
      sym_flow_node,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(553), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(586), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14231] = 3,
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
  [14250] = 3,
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
  [14269] = 3,
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
  [14288] = 3,
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
  [14307] = 3,
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
  [14326] = 3,
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
  [14345] = 3,
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
  [14364] = 3,
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
  [14383] = 3,
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
  [14402] = 3,
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
  [14421] = 3,
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
  [14440] = 3,
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
  [14459] = 3,
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
  [14478] = 3,
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
  [14497] = 6,
    ACTIONS(1350), 1,
      anon_sym_STAR,
    ACTIONS(1352), 1,
      anon_sym_DOLLAR,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1346), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1348), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14521] = 6,
    ACTIONS(1356), 1,
      anon_sym_STAR,
    ACTIONS(1358), 1,
      anon_sym_DOLLAR,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1354), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14545] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1360), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(844), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14563] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1364), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1362), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14581] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1368), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1366), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14599] = 9,
    ACTIONS(1149), 1,
      anon_sym_TILDE,
    ACTIONS(1153), 1,
      anon_sym_PLUS,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    ACTIONS(1157), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym__alpha_num_token,
    STATE(353), 1,
      aux_sym_class_method_line_repeat1,
    STATE(683), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14629] = 6,
    ACTIONS(1372), 1,
      anon_sym_STAR,
    ACTIONS(1374), 1,
      anon_sym_DOLLAR,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1370), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14653] = 8,
    ACTIONS(1376), 1,
      sym__newline,
    ACTIONS(1378), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1380), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1382), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(729), 1,
      sym__er_word,
    STATE(730), 1,
      sym_er_attribute_comment,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(457), 3,
      sym__er_attribute_key_type,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [14681] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1384), 1,
      sym__newline,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14705] = 6,
    ACTIONS(1390), 1,
      anon_sym_STAR,
    ACTIONS(1392), 1,
      anon_sym_DOLLAR,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1388), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14729] = 4,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1396), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1394), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [14749] = 6,
    ACTIONS(1401), 1,
      anon_sym_STAR,
    ACTIONS(1403), 1,
      anon_sym_DOLLAR,
    STATE(352), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1348), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1399), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [14773] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    ACTIONS(1405), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(642), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14797] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(642), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14821] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    ACTIONS(1409), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(642), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14845] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    ACTIONS(1411), 1,
      ts_builtin_sym_end,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(642), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14869] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1415), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1413), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14887] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    ACTIONS(1417), 1,
      sym__newline,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(502), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14911] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(642), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14932] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(512), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14953] = 5,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    STATE(214), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(584), 5,
      sym_directive,
      sym__er_stmt,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14974] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(1419), 1,
      anon_sym_PLUS,
    ACTIONS(1421), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(872), 1,
      sym_actor,
    STATE(560), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [15000] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1029), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15016] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(1419), 1,
      anon_sym_PLUS,
    ACTIONS(1421), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(863), 1,
      sym_actor,
    STATE(571), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [15042] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(1419), 1,
      anon_sym_PLUS,
    ACTIONS(1421), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(833), 1,
      sym_actor,
    STATE(533), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [15068] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1423), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15082] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1425), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15096] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1047), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15112] = 4,
    ACTIONS(1427), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1429), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
    STATE(318), 3,
      sym__er_reltype,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
  [15130] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    ACTIONS(1419), 1,
      anon_sym_PLUS,
    ACTIONS(1421), 1,
      anon_sym_DASH,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(848), 1,
      sym_actor,
    STATE(541), 2,
      sym_signal_plus_sign,
      sym_signal_minus_sign,
  [15156] = 6,
    ACTIONS(1433), 1,
      sym__alpha_num_token,
    STATE(396), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(598), 1,
      sym_flow_vertex_text,
    STATE(884), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1431), 2,
      anon_sym_SEMI,
      sym__newline,
  [15177] = 7,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1435), 1,
      sym__class_name,
    ACTIONS(1437), 1,
      sym__dquote_string,
    STATE(219), 1,
      sym_class_name_body,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    STATE(546), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15200] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1029), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15215] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1441), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1439), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15230] = 4,
    ACTIONS(1445), 1,
      sym__alpha_num_token,
    STATE(376), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15247] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1450), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1448), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15262] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1035), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1047), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15277] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1456), 1,
      sym_pie_title,
    ACTIONS(1454), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_pie_label_token1,
    ACTIONS(1452), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [15296] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1460), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1458), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15311] = 4,
    ACTIONS(1462), 1,
      anon_sym_TILDE,
    STATE(439), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15328] = 6,
    ACTIONS(1464), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    STATE(499), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15349] = 6,
    ACTIONS(1470), 1,
      anon_sym_RBRACE,
    ACTIONS(1472), 1,
      sym__er_alphanum,
    STATE(603), 1,
      sym_er_attribute_type,
    STATE(877), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(413), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15370] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1476), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1474), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15385] = 7,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1435), 1,
      sym__class_name,
    ACTIONS(1478), 1,
      sym__dquote_string,
    STATE(219), 1,
      sym_class_name_body,
    STATE(466), 1,
      sym_class_name,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15408] = 6,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1480), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(513), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15429] = 6,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1482), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(563), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15450] = 6,
    ACTIONS(1466), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1468), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1484), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(537), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15471] = 5,
    ACTIONS(1486), 1,
      anon_sym_RBRACE,
    ACTIONS(1488), 1,
      sym__er_alphanum,
    STATE(603), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(389), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15489] = 6,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1435), 1,
      sym__class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    STATE(546), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15509] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1491), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15521] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1493), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15533] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1495), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15545] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1497), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15557] = 4,
    ACTIONS(1499), 1,
      sym__alpha_num_token,
    STATE(395), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1443), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [15573] = 4,
    ACTIONS(1504), 1,
      sym__alpha_num_token,
    STATE(376), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1502), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [15589] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1506), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15601] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1510), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(821), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15619] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1029), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15631] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1512), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(822), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15649] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1514), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(823), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15667] = 5,
    ACTIONS(1516), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1518), 1,
      sym_flow_text_quoted,
    STATE(434), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(828), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15685] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1520), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(836), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15703] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1522), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(838), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15721] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1047), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15733] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1524), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(839), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15751] = 6,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1435), 1,
      sym__class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(482), 1,
      sym_class_name,
    STATE(505), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15771] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1526), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(851), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15789] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1528), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15801] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1530), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15813] = 5,
    ACTIONS(1516), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1532), 1,
      sym_flow_text_quoted,
    STATE(434), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(854), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15831] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1534), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(868), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15849] = 5,
    ACTIONS(1472), 1,
      sym__er_alphanum,
    ACTIONS(1536), 1,
      anon_sym_RBRACE,
    STATE(603), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(389), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15867] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1538), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(608), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15885] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1540), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(607), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15903] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1542), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15915] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1544), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [15927] = 6,
    ACTIONS(1546), 1,
      sym__class_name,
    ACTIONS(1548), 1,
      sym__bquote_string,
    STATE(381), 1,
      sym_class_name_body,
    STATE(438), 1,
      sym_class_name,
    STATE(514), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15947] = 5,
    ACTIONS(1508), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1550), 1,
      sym_flow_text_quoted,
    STATE(292), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(837), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [15965] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1552), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15977] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1554), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15989] = 5,
    ACTIONS(856), 1,
      anon_sym_COLON,
    ACTIONS(860), 1,
      anon_sym_DASH_DASH_GT,
    STATE(562), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(858), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16007] = 5,
    ACTIONS(1556), 1,
      sym__dquote_string,
    STATE(207), 1,
      sym_state_alias,
    STATE(254), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16025] = 5,
    ACTIONS(1558), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1560), 1,
      aux_sym_note_placement_right_token1,
    STATE(582), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(592), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16043] = 6,
    ACTIONS(910), 1,
      sym__bquote_string,
    ACTIONS(1546), 1,
      sym__class_name,
    STATE(219), 1,
      sym_class_name_body,
    STATE(496), 1,
      aux_sym_class_name_body_repeat1,
    STATE(599), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16063] = 4,
    ACTIONS(1562), 1,
      sym__alpha_num_token,
    STATE(395), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1564), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16079] = 5,
    ACTIONS(816), 1,
      anon_sym_DASH_DASH,
    ACTIONS(818), 1,
      anon_sym_DOT_DOT,
    STATE(253), 1,
      sym__class_linetype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(345), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16097] = 5,
    ACTIONS(1558), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1560), 1,
      aux_sym_note_placement_right_token1,
    STATE(472), 1,
      sym_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(592), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16115] = 4,
    ACTIONS(1566), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1568), 2,
      anon_sym_SEMI,
      sym__newline,
  [16130] = 3,
    STATE(351), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1571), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16143] = 4,
    ACTIONS(1573), 1,
      aux_sym_flow_text_literal_token1,
    STATE(431), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1208), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16158] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1204), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16169] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1576), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [16182] = 4,
    ACTIONS(1578), 1,
      aux_sym_flow_text_literal_token1,
    STATE(431), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1198), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16197] = 4,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    STATE(443), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 2,
      anon_sym_SEMI,
      sym__newline,
  [16212] = 4,
    ACTIONS(1276), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 2,
      anon_sym_SEMI,
      sym__newline,
  [16227] = 5,
    ACTIONS(1582), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(316), 1,
      sym_flow_vertex,
    STATE(344), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16244] = 4,
    ACTIONS(1586), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1588), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1584), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16259] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1167), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16270] = 3,
    STATE(852), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(822), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16283] = 4,
    ACTIONS(1262), 1,
      ts_builtin_sym_end,
    STATE(453), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1590), 2,
      anon_sym_SEMI,
      sym__newline,
  [16298] = 4,
    ACTIONS(1592), 1,
      ts_builtin_sym_end,
    STATE(436), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1594), 2,
      anon_sym_SEMI,
      sym__newline,
  [16313] = 4,
    ACTIONS(1262), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1590), 2,
      anon_sym_SEMI,
      sym__newline,
  [16328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1596), 1,
      sym__actor_word,
    STATE(444), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1022), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16345] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1601), 1,
      aux_sym_class_label_token1,
    STATE(700), 1,
      sym_class_label,
    ACTIONS(1599), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16362] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1603), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [16373] = 4,
    STATE(664), 1,
      sym__er_word,
    STATE(669), 1,
      sym_er_role,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1605), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [16388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1607), 1,
      sym__actor_word,
    STATE(444), 1,
      aux_sym_actor_repeat1,
    ACTIONS(1081), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16405] = 3,
    ACTIONS(1609), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [16418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1601), 1,
      aux_sym_class_label_token1,
    STATE(643), 1,
      sym_class_label,
    ACTIONS(1611), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16435] = 3,
    STATE(343), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1613), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1601), 1,
      aux_sym_class_label_token1,
    STATE(693), 1,
      sym_class_label,
    ACTIONS(1615), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16465] = 4,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
    STATE(429), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1617), 2,
      anon_sym_SEMI,
      sym__newline,
  [16480] = 3,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1619), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16493] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(264), 1,
      sym_state_description,
    ACTIONS(896), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16510] = 3,
    STATE(342), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1621), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16523] = 5,
    ACTIONS(1378), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1623), 1,
      sym__newline,
    STATE(729), 1,
      sym__er_word,
    STATE(796), 1,
      sym_er_attribute_comment,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16540] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1625), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(467), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(718), 1,
      sym_actor,
  [16570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(717), 1,
      sym_actor,
  [16586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(813), 1,
      sym_actor,
  [16602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(814), 1,
      sym_actor,
  [16618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(764), 1,
      sym_actor,
  [16634] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1059), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [16644] = 4,
    ACTIONS(1629), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1631), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(465), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16658] = 3,
    ACTIONS(1636), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1634), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16670] = 4,
    ACTIONS(1638), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1640), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(467), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(768), 1,
      sym_actor,
  [16700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(690), 1,
      sym_actor,
  [16716] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(689), 1,
      sym_actor,
  [16732] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1643), 1,
      sym__newline,
    STATE(504), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16746] = 3,
    STATE(792), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [16758] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1643), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16772] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1645), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16782] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1647), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16792] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1649), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16802] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1651), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16812] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1653), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16822] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1655), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16832] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1657), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16842] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1659), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16852] = 3,
    ACTIONS(1661), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1615), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(804), 1,
      sym_actor,
  [16880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(751), 1,
      sym_actor,
  [16896] = 4,
    ACTIONS(1663), 1,
      ts_builtin_sym_end,
    ACTIONS(1665), 1,
      sym__newline,
    STATE(485), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(660), 1,
      sym_actor,
  [16926] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1668), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(467), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(659), 1,
      sym_actor,
  [16956] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1670), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16966] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1672), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(467), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16980] = 4,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1674), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(465), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(802), 1,
      sym_actor,
  [17010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(803), 1,
      sym_actor,
  [17026] = 4,
    ACTIONS(1676), 1,
      ts_builtin_sym_end,
    ACTIONS(1678), 1,
      sym__newline,
    STATE(531), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(646), 1,
      sym_actor,
  [17056] = 4,
    ACTIONS(1680), 1,
      sym__class_name,
    ACTIONS(1682), 1,
      sym__bquote_string,
    STATE(585), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17070] = 4,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1684), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(467), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17084] = 4,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1686), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(465), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(832), 1,
      sym_actor,
  [17114] = 4,
    ACTIONS(1688), 1,
      anon_sym_RBRACE,
    ACTIONS(1690), 1,
      sym__newline,
    STATE(519), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17128] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(789), 1,
      sym_actor,
  [17144] = 4,
    ACTIONS(1692), 1,
      ts_builtin_sym_end,
    ACTIONS(1694), 1,
      sym__newline,
    STATE(583), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(883), 1,
      sym_actor,
  [17174] = 4,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    ACTIONS(1696), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17188] = 4,
    ACTIONS(1682), 1,
      sym__bquote_string,
    ACTIONS(1698), 1,
      sym__class_name,
    STATE(585), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17202] = 4,
    ACTIONS(1700), 1,
      anon_sym_RBRACE,
    ACTIONS(1702), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(800), 1,
      sym_actor,
  [17232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(801), 1,
      sym_actor,
  [17248] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1705), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17258] = 4,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1707), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(465), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(616), 1,
      sym_actor,
  [17288] = 4,
    ACTIONS(1411), 1,
      ts_builtin_sym_end,
    ACTIONS(1709), 1,
      sym__newline,
    STATE(555), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(861), 1,
      sym_actor,
  [17318] = 4,
    ACTIONS(1680), 1,
      sym__class_name,
    ACTIONS(1711), 1,
      sym__bquote_string,
    STATE(585), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17332] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1713), 1,
      sym__newline,
    STATE(552), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17346] = 4,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    ACTIONS(1715), 1,
      sym__newline,
    STATE(530), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1719), 1,
      sym__actor_word,
    ACTIONS(1717), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17374] = 4,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    ACTIONS(1721), 1,
      sym__newline,
    STATE(547), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17388] = 4,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    ACTIONS(1715), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1725), 1,
      sym__actor_word,
    ACTIONS(1723), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1729), 1,
      sym__actor_word,
    ACTIONS(1727), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [17430] = 4,
    ACTIONS(1731), 1,
      ts_builtin_sym_end,
    ACTIONS(1733), 1,
      sym__newline,
    STATE(522), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17444] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1736), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17454] = 4,
    ACTIONS(1738), 1,
      ts_builtin_sym_end,
    ACTIONS(1740), 1,
      sym__newline,
    STATE(543), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17468] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1742), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17478] = 4,
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1744), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(465), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17492] = 4,
    ACTIONS(1682), 1,
      sym__bquote_string,
    ACTIONS(1746), 1,
      sym__class_name,
    STATE(585), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17506] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1748), 1,
      sym__newline,
    STATE(581), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17520] = 4,
    ACTIONS(1411), 1,
      ts_builtin_sym_end,
    ACTIONS(1709), 1,
      sym__newline,
    STATE(522), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17534] = 4,
    ACTIONS(1151), 1,
      anon_sym_RBRACE,
    ACTIONS(1750), 1,
      sym__newline,
    STATE(506), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17548] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1748), 1,
      sym__newline,
    STATE(577), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17562] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1752), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17572] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(834), 1,
      sym_actor,
  [17588] = 4,
    ACTIONS(1582), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(325), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(835), 1,
      sym_actor,
  [17618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(636), 1,
      sym_actor,
  [17634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(847), 1,
      sym_actor,
  [17650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(726), 1,
      sym_actor,
  [17666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(787), 1,
      sym_actor,
  [17682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(725), 1,
      sym_actor,
  [17698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(849), 1,
      sym_actor,
  [17714] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1754), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [17724] = 4,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    ACTIONS(1721), 1,
      sym__newline,
    STATE(485), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(812), 1,
      sym_actor,
  [17754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(810), 1,
      sym_actor,
  [17770] = 3,
    ACTIONS(1756), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1599), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17782] = 4,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
    ACTIONS(1758), 1,
      sym__newline,
    STATE(485), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17796] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1388), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17806] = 3,
    STATE(220), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1760), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17818] = 4,
    ACTIONS(1762), 1,
      sym__alpha_num_token,
    STATE(396), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(870), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17832] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1764), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17842] = 4,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
    ACTIONS(1766), 1,
      sym__newline,
    STATE(577), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17856] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1566), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17866] = 4,
    ACTIONS(1768), 1,
      sym__alpha_num_token,
    STATE(569), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(853), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17880] = 4,
    ACTIONS(1407), 1,
      ts_builtin_sym_end,
    ACTIONS(1770), 1,
      sym__newline,
    STATE(522), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(850), 1,
      sym_actor,
  [17910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(615), 1,
      sym_actor,
  [17926] = 4,
    ACTIONS(1772), 1,
      sym__alpha_num_token,
    STATE(426), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(440), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(754), 1,
      sym_actor,
  [17956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(736), 1,
      sym_actor,
  [17972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(755), 1,
      sym_actor,
  [17988] = 3,
    STATE(220), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(862), 1,
      sym_actor,
  [18016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(756), 1,
      sym_actor,
  [18032] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(757), 1,
      sym_actor,
  [18048] = 4,
    ACTIONS(1774), 1,
      anon_sym_RBRACE,
    ACTIONS(1776), 1,
      sym__newline,
    STATE(473), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18062] = 4,
    ACTIONS(1778), 1,
      anon_sym_COLON,
    ACTIONS(1780), 1,
      aux_sym_gantt_task_text_token1,
    STATE(575), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(679), 1,
      sym_actor,
  [18092] = 4,
    ACTIONS(1504), 1,
      sym__alpha_num_token,
    ACTIONS(1564), 1,
      anon_sym_PIPE,
    STATE(376), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(778), 1,
      sym_actor,
  [18122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(864), 1,
      sym_actor,
  [18138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(807), 1,
      sym_actor,
  [18154] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1782), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18164] = 3,
    ACTIONS(1786), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1784), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18176] = 4,
    ACTIONS(1788), 1,
      anon_sym_COLON,
    ACTIONS(1790), 1,
      aux_sym_gantt_task_text_token1,
    STATE(575), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(865), 1,
      sym_actor,
  [18206] = 4,
    ACTIONS(1793), 1,
      ts_builtin_sym_end,
    ACTIONS(1795), 1,
      sym__newline,
    STATE(577), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1627), 1,
      sym__actor_word,
    STATE(448), 1,
      aux_sym_actor_repeat1,
    STATE(680), 1,
      sym_actor,
  [18236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(780), 1,
      sym_actor,
  [18252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__actor_word,
    STATE(260), 1,
      aux_sym_actor_repeat1,
    STATE(781), 1,
      sym_actor,
  [18268] = 4,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(1713), 1,
      sym__newline,
    STATE(577), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18282] = 3,
    STATE(875), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18294] = 4,
    ACTIONS(1405), 1,
      ts_builtin_sym_end,
    ACTIONS(1798), 1,
      sym__newline,
    STATE(522), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18308] = 4,
    ACTIONS(1405), 1,
      ts_builtin_sym_end,
    ACTIONS(1798), 1,
      sym__newline,
    STATE(529), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18322] = 4,
    ACTIONS(1800), 1,
      sym__class_name,
    ACTIONS(1803), 1,
      sym__bquote_string,
    STATE(585), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18336] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1805), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18346] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1807), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18355] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1809), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [18364] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1811), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18373] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1813), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18382] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1815), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18391] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1817), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18400] = 3,
    ACTIONS(1819), 1,
      anon_sym_COLON,
    ACTIONS(1821), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18411] = 3,
    ACTIONS(1823), 1,
      anon_sym_PIPE,
    ACTIONS(1825), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(775), 1,
      sym__rest_text,
  [18435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(882), 1,
      sym__rest_text,
  [18448] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1829), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [18457] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1831), 2,
      anon_sym_SEMI,
      sym__newline,
  [18466] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1833), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(860), 1,
      sym__rest_text,
  [18488] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1793), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(859), 1,
      sym__rest_text,
  [18510] = 3,
    ACTIONS(1835), 1,
      sym__er_alphanum,
    STATE(349), 1,
      sym_er_attribute_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18521] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1837), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(845), 1,
      sym__rest_text,
  [18543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(844), 1,
      sym__rest_text,
  [18556] = 3,
    ACTIONS(1839), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1841), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18567] = 3,
    ACTIONS(1843), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1845), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(830), 1,
      sym__rest_text,
  [18591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(829), 1,
      sym__rest_text,
  [18604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(159), 1,
      sym__rest_text,
  [18617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(176), 1,
      sym__rest_text,
  [18630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(177), 1,
      sym__rest_text,
  [18643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1847), 1,
      aux_sym__rest_text_token1,
    STATE(178), 1,
      sym__rest_text,
  [18656] = 3,
    ACTIONS(1849), 1,
      anon_sym_COLON,
    ACTIONS(1851), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18667] = 3,
    ACTIONS(1853), 1,
      anon_sym_COLON,
    ACTIONS(1855), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(773), 1,
      sym__rest_text,
  [18691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(776), 1,
      sym__rest_text,
  [18704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(723), 1,
      sym__rest_text,
  [18717] = 3,
    ACTIONS(1386), 1,
      sym__er_alphanum,
    STATE(841), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(806), 1,
      sym__rest_text,
  [18741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(805), 1,
      sym__rest_text,
  [18754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(232), 1,
      sym_gantt_meta_format,
  [18767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(231), 1,
      sym_gantt_meta_format,
  [18780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(230), 1,
      sym_gantt_meta_format,
  [18793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(229), 1,
      sym_gantt_meta_format,
  [18806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(228), 1,
      sym_gantt_meta_format,
  [18819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(227), 1,
      sym_gantt_meta_format,
  [18832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(226), 1,
      sym_gantt_meta_format,
  [18845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(225), 1,
      sym_gantt_meta_format,
  [18858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1857), 1,
      aux_sym__rest_text_token1,
    STATE(224), 1,
      sym_gantt_meta_format,
  [18871] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1859), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(242), 1,
      sym_state_description,
  [18893] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1861), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18902] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1863), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18911] = 3,
    ACTIONS(1865), 1,
      anon_sym_COLON,
    ACTIONS(1867), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(820), 1,
      sym__rest_text,
  [18935] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1869), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18944] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1871), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [18953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(785), 1,
      sym__rest_text,
  [18966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(784), 1,
      sym__rest_text,
  [18979] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1731), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18988] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1873), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(809), 1,
      sym__rest_text,
  [19010] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1875), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19019] = 3,
    ACTIONS(1877), 1,
      anon_sym_COLON,
    ACTIONS(1879), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(761), 1,
      sym__rest_text,
  [19043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(760), 1,
      sym__rest_text,
  [19056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(759), 1,
      sym__rest_text,
  [19069] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1881), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(743), 1,
      sym__rest_text,
  [19091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(866), 1,
      sym__rest_text,
  [19104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(742), 1,
      sym__rest_text,
  [19117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(741), 1,
      sym__rest_text,
  [19130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(738), 1,
      sym__rest_text,
  [19143] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1883), 2,
      anon_sym_SEMI,
      sym__newline,
  [19152] = 3,
    ACTIONS(1885), 1,
      anon_sym_COLON,
    ACTIONS(1887), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(732), 1,
      sym__rest_text,
  [19176] = 3,
    ACTIONS(1889), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1891), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19187] = 3,
    ACTIONS(1893), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1895), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(731), 1,
      sym__rest_text,
  [19211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(727), 1,
      sym__rest_text,
  [19224] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1897), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19233] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1899), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1901), 1,
      aux_sym__rest_text_token1,
    STATE(200), 1,
      sym__rest_text,
  [19255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1901), 1,
      aux_sym__rest_text_token1,
    STATE(144), 1,
      sym__rest_text,
  [19268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1901), 1,
      aux_sym__rest_text_token1,
    STATE(203), 1,
      sym__rest_text,
  [19281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1901), 1,
      aux_sym__rest_text_token1,
    STATE(197), 1,
      sym__rest_text,
  [19294] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1903), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(277), 1,
      sym_state_description,
  [19316] = 3,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(733), 1,
      sym__rest_text,
  [19340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(734), 1,
      sym__rest_text,
  [19353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(735), 1,
      sym__rest_text,
  [19366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(737), 1,
      sym__rest_text,
  [19379] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1905), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [19388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(808), 1,
      sym__rest_text,
  [19401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(744), 1,
      sym__rest_text,
  [19414] = 3,
    ACTIONS(1907), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1909), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19425] = 3,
    ACTIONS(1911), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1913), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(746), 1,
      sym__rest_text,
  [19449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(758), 1,
      sym__rest_text,
  [19462] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1915), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19471] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1917), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(769), 1,
      sym__rest_text,
  [19493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(770), 1,
      sym__rest_text,
  [19506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(771), 1,
      sym__rest_text,
  [19519] = 3,
    ACTIONS(1919), 1,
      anon_sym_COLON,
    ACTIONS(1921), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19530] = 3,
    ACTIONS(1923), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1925), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19541] = 3,
    ACTIONS(1927), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1929), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(782), 1,
      sym__rest_text,
  [19565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(790), 1,
      sym__rest_text,
  [19578] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1611), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(791), 1,
      sym__rest_text,
  [19600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1931), 1,
      aux_sym__rest_text_token1,
    STATE(105), 1,
      sym__rest_text,
  [19613] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1931), 1,
      aux_sym__rest_text_token1,
    STATE(106), 1,
      sym__rest_text,
  [19626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1931), 1,
      aux_sym__rest_text_token1,
    STATE(109), 1,
      sym__rest_text,
  [19639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1931), 1,
      aux_sym__rest_text_token1,
    STATE(110), 1,
      sym__rest_text,
  [19652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(797), 1,
      sym__rest_text,
  [19665] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1615), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19674] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1663), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19683] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1933), 2,
      anon_sym_SEMI,
      sym__newline,
  [19692] = 3,
    ACTIONS(1935), 1,
      anon_sym_COLON,
    ACTIONS(1937), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19703] = 3,
    ACTIONS(1939), 1,
      anon_sym_COLON,
    ACTIONS(1941), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19714] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1700), 2,
      anon_sym_RBRACE,
      sym__newline,
  [19723] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1943), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19732] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1945), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19741] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1947), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [19750] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1949), 2,
      anon_sym_RBRACE,
      sym__newline,
  [19759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(825), 1,
      sym__rest_text,
  [19772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(762), 1,
      sym__rest_text,
  [19785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(826), 1,
      sym__rest_text,
  [19798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(827), 1,
      sym__rest_text,
  [19811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1827), 1,
      aux_sym__rest_text_token1,
    STATE(831), 1,
      sym__rest_text,
  [19824] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1951), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [19833] = 3,
    ACTIONS(1953), 1,
      anon_sym_COLON,
    ACTIONS(1955), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19844] = 3,
    ACTIONS(1957), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1959), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19855] = 3,
    ACTIONS(1961), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1963), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1965), 1,
      aux_sym__rest_text_token1,
    STATE(116), 1,
      sym__rest_text,
  [19879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1965), 1,
      aux_sym__rest_text_token1,
    STATE(117), 1,
      sym__rest_text,
  [19892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1965), 1,
      aux_sym__rest_text_token1,
    STATE(118), 1,
      sym__rest_text,
  [19905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1965), 1,
      aux_sym__rest_text_token1,
    STATE(119), 1,
      sym__rest_text,
  [19918] = 2,
    ACTIONS(1967), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19926] = 2,
    ACTIONS(1969), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19934] = 2,
    ACTIONS(1971), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19942] = 2,
    ACTIONS(1973), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19950] = 2,
    ACTIONS(1975), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19958] = 2,
    ACTIONS(1977), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19966] = 2,
    ACTIONS(1979), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19974] = 2,
    ACTIONS(1623), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19982] = 2,
    ACTIONS(1981), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19990] = 2,
    ACTIONS(1983), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19998] = 2,
    ACTIONS(1985), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20006] = 2,
    ACTIONS(1987), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20014] = 2,
    ACTIONS(1989), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20022] = 2,
    ACTIONS(1991), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20030] = 2,
    ACTIONS(1993), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20038] = 2,
    ACTIONS(1995), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20046] = 2,
    ACTIONS(1997), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20054] = 2,
    ACTIONS(1999), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20062] = 2,
    ACTIONS(2001), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20070] = 2,
    ACTIONS(2003), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20078] = 2,
    ACTIONS(2005), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20086] = 2,
    ACTIONS(2007), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20094] = 2,
    ACTIONS(2009), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20102] = 2,
    ACTIONS(2011), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20110] = 2,
    ACTIONS(2013), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20118] = 2,
    ACTIONS(2015), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20126] = 2,
    ACTIONS(2017), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20134] = 2,
    ACTIONS(2019), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20142] = 2,
    ACTIONS(2021), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20150] = 2,
    ACTIONS(2023), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20158] = 2,
    ACTIONS(2025), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20166] = 2,
    ACTIONS(2027), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20174] = 2,
    ACTIONS(2029), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20182] = 2,
    ACTIONS(2031), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20190] = 2,
    ACTIONS(2033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20198] = 2,
    ACTIONS(2035), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20206] = 2,
    ACTIONS(2037), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20214] = 2,
    ACTIONS(2039), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20222] = 2,
    ACTIONS(2041), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20230] = 2,
    ACTIONS(2043), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20238] = 2,
    ACTIONS(2045), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20246] = 2,
    ACTIONS(2047), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20254] = 2,
    ACTIONS(2049), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20262] = 2,
    ACTIONS(2051), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20270] = 2,
    ACTIONS(2053), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20278] = 2,
    ACTIONS(2055), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20286] = 2,
    ACTIONS(2057), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20294] = 2,
    ACTIONS(2059), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20302] = 2,
    ACTIONS(2061), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20310] = 2,
    ACTIONS(2063), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20318] = 2,
    ACTIONS(2065), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20326] = 2,
    ACTIONS(2067), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20334] = 2,
    ACTIONS(2069), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20342] = 2,
    ACTIONS(2071), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20350] = 2,
    ACTIONS(2073), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20358] = 2,
    ACTIONS(2075), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20366] = 2,
    ACTIONS(2077), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20374] = 2,
    ACTIONS(2079), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20382] = 2,
    ACTIONS(2081), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20390] = 2,
    ACTIONS(2083), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2085), 1,
      sym__actor_word,
  [20408] = 2,
    ACTIONS(2087), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20416] = 2,
    ACTIONS(2089), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20424] = 2,
    ACTIONS(2091), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20432] = 2,
    ACTIONS(2093), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20440] = 2,
    ACTIONS(2095), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20448] = 2,
    ACTIONS(2097), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20456] = 2,
    ACTIONS(2099), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20464] = 2,
    ACTIONS(2101), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20472] = 2,
    ACTIONS(2103), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2105), 1,
      sym__actor_word,
  [20490] = 2,
    ACTIONS(2107), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2109), 1,
      sym__actor_word,
  [20508] = 2,
    ACTIONS(2111), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20516] = 2,
    ACTIONS(2113), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20524] = 2,
    ACTIONS(2115), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20532] = 2,
    ACTIONS(2117), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20540] = 2,
    ACTIONS(2119), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20548] = 2,
    ACTIONS(2121), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20556] = 2,
    ACTIONS(2123), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20564] = 2,
    ACTIONS(2125), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20572] = 2,
    ACTIONS(2127), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20580] = 2,
    ACTIONS(2129), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20588] = 2,
    ACTIONS(2131), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20596] = 2,
    ACTIONS(2133), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20604] = 2,
    ACTIONS(2135), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20612] = 2,
    ACTIONS(2137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20620] = 2,
    ACTIONS(2139), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20628] = 2,
    ACTIONS(2141), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20636] = 2,
    ACTIONS(2143), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20644] = 2,
    ACTIONS(2145), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20652] = 2,
    ACTIONS(2147), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20660] = 2,
    ACTIONS(708), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20668] = 2,
    ACTIONS(2149), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20676] = 2,
    ACTIONS(2151), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20684] = 2,
    ACTIONS(2153), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20692] = 2,
    ACTIONS(2155), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20700] = 2,
    ACTIONS(2157), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20708] = 2,
    ACTIONS(2159), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20716] = 2,
    ACTIONS(2161), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20724] = 2,
    ACTIONS(2163), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20732] = 2,
    ACTIONS(2165), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20740] = 2,
    ACTIONS(2167), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20748] = 2,
    ACTIONS(2169), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20756] = 2,
    ACTIONS(2171), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20764] = 2,
    ACTIONS(2173), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20772] = 2,
    ACTIONS(2175), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20780] = 2,
    ACTIONS(2177), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20788] = 2,
    ACTIONS(2179), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20796] = 2,
    ACTIONS(1877), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20804] = 2,
    ACTIONS(2181), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20812] = 2,
    ACTIONS(2183), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20820] = 2,
    ACTIONS(2185), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20828] = 2,
    ACTIONS(2187), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20836] = 2,
    ACTIONS(2189), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20844] = 2,
    ACTIONS(2191), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20852] = 2,
    ACTIONS(2193), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20860] = 2,
    ACTIONS(2195), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20868] = 2,
    ACTIONS(2197), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20876] = 2,
    ACTIONS(2199), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20884] = 2,
    ACTIONS(2201), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20892] = 2,
    ACTIONS(2203), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20900] = 2,
    ACTIONS(2205), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20908] = 2,
    ACTIONS(2207), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20916] = 2,
    ACTIONS(1865), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20924] = 2,
    ACTIONS(2209), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20932] = 2,
    ACTIONS(2211), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20940] = 2,
    ACTIONS(2213), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20948] = 2,
    ACTIONS(2215), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20956] = 2,
    ACTIONS(2217), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20964] = 2,
    ACTIONS(2219), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20972] = 2,
    ACTIONS(2221), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20980] = 2,
    ACTIONS(2223), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2225), 1,
      sym_pie_value,
  [20998] = 2,
    ACTIONS(2227), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21006] = 2,
    ACTIONS(2229), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21014] = 2,
    ACTIONS(2231), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21022] = 2,
    ACTIONS(2233), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21030] = 2,
    ACTIONS(1853), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21038] = 2,
    ACTIONS(1849), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21046] = 2,
    ACTIONS(2235), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21054] = 2,
    ACTIONS(2237), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21062] = 2,
    ACTIONS(2239), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21070] = 2,
    ACTIONS(2241), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2243), 1,
      sym__actor_word,
  [21088] = 2,
    ACTIONS(2245), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21096] = 2,
    ACTIONS(2247), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21104] = 2,
    ACTIONS(2249), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2251), 1,
      sym__actor_word,
  [21122] = 2,
    ACTIONS(2253), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21130] = 2,
    ACTIONS(2255), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21138] = 2,
    ACTIONS(2257), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21146] = 2,
    ACTIONS(2259), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21154] = 2,
    ACTIONS(2261), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21162] = 2,
    ACTIONS(2263), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21170] = 2,
    ACTIONS(2265), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21178] = 2,
    ACTIONS(2267), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21186] = 2,
    ACTIONS(2269), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2271), 1,
      sym_gantt_task_data,
  [21204] = 2,
    ACTIONS(2273), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21212] = 2,
    ACTIONS(2275), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21220] = 2,
    ACTIONS(2277), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21228] = 2,
    ACTIONS(2279), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21236] = 2,
    ACTIONS(2281), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21244] = 2,
    ACTIONS(2283), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21252] = 2,
    ACTIONS(2285), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21260] = 2,
    ACTIONS(2287), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21268] = 2,
    ACTIONS(2289), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21276] = 2,
    ACTIONS(2291), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21284] = 2,
    ACTIONS(2293), 1,
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
  [SMALL_STATE(15)] = 1339,
  [SMALL_STATE(16)] = 1438,
  [SMALL_STATE(17)] = 1537,
  [SMALL_STATE(18)] = 1636,
  [SMALL_STATE(19)] = 1735,
  [SMALL_STATE(20)] = 1832,
  [SMALL_STATE(21)] = 1931,
  [SMALL_STATE(22)] = 2030,
  [SMALL_STATE(23)] = 2129,
  [SMALL_STATE(24)] = 2228,
  [SMALL_STATE(25)] = 2325,
  [SMALL_STATE(26)] = 2424,
  [SMALL_STATE(27)] = 2521,
  [SMALL_STATE(28)] = 2620,
  [SMALL_STATE(29)] = 2719,
  [SMALL_STATE(30)] = 2818,
  [SMALL_STATE(31)] = 2917,
  [SMALL_STATE(32)] = 3016,
  [SMALL_STATE(33)] = 3113,
  [SMALL_STATE(34)] = 3212,
  [SMALL_STATE(35)] = 3311,
  [SMALL_STATE(36)] = 3410,
  [SMALL_STATE(37)] = 3509,
  [SMALL_STATE(38)] = 3608,
  [SMALL_STATE(39)] = 3707,
  [SMALL_STATE(40)] = 3806,
  [SMALL_STATE(41)] = 3905,
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
  [SMALL_STATE(58)] = 5437,
  [SMALL_STATE(59)] = 5504,
  [SMALL_STATE(60)] = 5569,
  [SMALL_STATE(61)] = 5634,
  [SMALL_STATE(62)] = 5699,
  [SMALL_STATE(63)] = 5766,
  [SMALL_STATE(64)] = 5833,
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
  [SMALL_STATE(205)] = 10756,
  [SMALL_STATE(206)] = 10793,
  [SMALL_STATE(207)] = 10838,
  [SMALL_STATE(208)] = 10869,
  [SMALL_STATE(209)] = 10902,
  [SMALL_STATE(210)] = 10939,
  [SMALL_STATE(211)] = 10976,
  [SMALL_STATE(212)] = 11009,
  [SMALL_STATE(213)] = 11039,
  [SMALL_STATE(214)] = 11063,
  [SMALL_STATE(215)] = 11099,
  [SMALL_STATE(216)] = 11129,
  [SMALL_STATE(217)] = 11152,
  [SMALL_STATE(218)] = 11175,
  [SMALL_STATE(219)] = 11198,
  [SMALL_STATE(220)] = 11225,
  [SMALL_STATE(221)] = 11250,
  [SMALL_STATE(222)] = 11279,
  [SMALL_STATE(223)] = 11317,
  [SMALL_STATE(224)] = 11339,
  [SMALL_STATE(225)] = 11361,
  [SMALL_STATE(226)] = 11383,
  [SMALL_STATE(227)] = 11405,
  [SMALL_STATE(228)] = 11427,
  [SMALL_STATE(229)] = 11449,
  [SMALL_STATE(230)] = 11471,
  [SMALL_STATE(231)] = 11493,
  [SMALL_STATE(232)] = 11515,
  [SMALL_STATE(233)] = 11537,
  [SMALL_STATE(234)] = 11559,
  [SMALL_STATE(235)] = 11581,
  [SMALL_STATE(236)] = 11603,
  [SMALL_STATE(237)] = 11625,
  [SMALL_STATE(238)] = 11647,
  [SMALL_STATE(239)] = 11687,
  [SMALL_STATE(240)] = 11709,
  [SMALL_STATE(241)] = 11731,
  [SMALL_STATE(242)] = 11753,
  [SMALL_STATE(243)] = 11775,
  [SMALL_STATE(244)] = 11797,
  [SMALL_STATE(245)] = 11839,
  [SMALL_STATE(246)] = 11877,
  [SMALL_STATE(247)] = 11905,
  [SMALL_STATE(248)] = 11927,
  [SMALL_STATE(249)] = 11953,
  [SMALL_STATE(250)] = 11991,
  [SMALL_STATE(251)] = 12017,
  [SMALL_STATE(252)] = 12053,
  [SMALL_STATE(253)] = 12075,
  [SMALL_STATE(254)] = 12111,
  [SMALL_STATE(255)] = 12143,
  [SMALL_STATE(256)] = 12165,
  [SMALL_STATE(257)] = 12187,
  [SMALL_STATE(258)] = 12209,
  [SMALL_STATE(259)] = 12249,
  [SMALL_STATE(260)] = 12271,
  [SMALL_STATE(261)] = 12299,
  [SMALL_STATE(262)] = 12327,
  [SMALL_STATE(263)] = 12349,
  [SMALL_STATE(264)] = 12371,
  [SMALL_STATE(265)] = 12393,
  [SMALL_STATE(266)] = 12415,
  [SMALL_STATE(267)] = 12437,
  [SMALL_STATE(268)] = 12475,
  [SMALL_STATE(269)] = 12497,
  [SMALL_STATE(270)] = 12519,
  [SMALL_STATE(271)] = 12541,
  [SMALL_STATE(272)] = 12579,
  [SMALL_STATE(273)] = 12601,
  [SMALL_STATE(274)] = 12623,
  [SMALL_STATE(275)] = 12645,
  [SMALL_STATE(276)] = 12667,
  [SMALL_STATE(277)] = 12707,
  [SMALL_STATE(278)] = 12729,
  [SMALL_STATE(279)] = 12766,
  [SMALL_STATE(280)] = 12803,
  [SMALL_STATE(281)] = 12824,
  [SMALL_STATE(282)] = 12861,
  [SMALL_STATE(283)] = 12898,
  [SMALL_STATE(284)] = 12935,
  [SMALL_STATE(285)] = 12972,
  [SMALL_STATE(286)] = 13009,
  [SMALL_STATE(287)] = 13044,
  [SMALL_STATE(288)] = 13081,
  [SMALL_STATE(289)] = 13118,
  [SMALL_STATE(290)] = 13139,
  [SMALL_STATE(291)] = 13176,
  [SMALL_STATE(292)] = 13211,
  [SMALL_STATE(293)] = 13236,
  [SMALL_STATE(294)] = 13255,
  [SMALL_STATE(295)] = 13290,
  [SMALL_STATE(296)] = 13311,
  [SMALL_STATE(297)] = 13336,
  [SMALL_STATE(298)] = 13368,
  [SMALL_STATE(299)] = 13402,
  [SMALL_STATE(300)] = 13426,
  [SMALL_STATE(301)] = 13450,
  [SMALL_STATE(302)] = 13482,
  [SMALL_STATE(303)] = 13516,
  [SMALL_STATE(304)] = 13548,
  [SMALL_STATE(305)] = 13582,
  [SMALL_STATE(306)] = 13616,
  [SMALL_STATE(307)] = 13644,
  [SMALL_STATE(308)] = 13678,
  [SMALL_STATE(309)] = 13706,
  [SMALL_STATE(310)] = 13724,
  [SMALL_STATE(311)] = 13758,
  [SMALL_STATE(312)] = 13790,
  [SMALL_STATE(313)] = 13822,
  [SMALL_STATE(314)] = 13856,
  [SMALL_STATE(315)] = 13888,
  [SMALL_STATE(316)] = 13922,
  [SMALL_STATE(317)] = 13946,
  [SMALL_STATE(318)] = 13974,
  [SMALL_STATE(319)] = 14000,
  [SMALL_STATE(320)] = 14034,
  [SMALL_STATE(321)] = 14062,
  [SMALL_STATE(322)] = 14081,
  [SMALL_STATE(323)] = 14100,
  [SMALL_STATE(324)] = 14131,
  [SMALL_STATE(325)] = 14150,
  [SMALL_STATE(326)] = 14169,
  [SMALL_STATE(327)] = 14200,
  [SMALL_STATE(328)] = 14231,
  [SMALL_STATE(329)] = 14250,
  [SMALL_STATE(330)] = 14269,
  [SMALL_STATE(331)] = 14288,
  [SMALL_STATE(332)] = 14307,
  [SMALL_STATE(333)] = 14326,
  [SMALL_STATE(334)] = 14345,
  [SMALL_STATE(335)] = 14364,
  [SMALL_STATE(336)] = 14383,
  [SMALL_STATE(337)] = 14402,
  [SMALL_STATE(338)] = 14421,
  [SMALL_STATE(339)] = 14440,
  [SMALL_STATE(340)] = 14459,
  [SMALL_STATE(341)] = 14478,
  [SMALL_STATE(342)] = 14497,
  [SMALL_STATE(343)] = 14521,
  [SMALL_STATE(344)] = 14545,
  [SMALL_STATE(345)] = 14563,
  [SMALL_STATE(346)] = 14581,
  [SMALL_STATE(347)] = 14599,
  [SMALL_STATE(348)] = 14629,
  [SMALL_STATE(349)] = 14653,
  [SMALL_STATE(350)] = 14681,
  [SMALL_STATE(351)] = 14705,
  [SMALL_STATE(352)] = 14729,
  [SMALL_STATE(353)] = 14749,
  [SMALL_STATE(354)] = 14773,
  [SMALL_STATE(355)] = 14797,
  [SMALL_STATE(356)] = 14821,
  [SMALL_STATE(357)] = 14845,
  [SMALL_STATE(358)] = 14869,
  [SMALL_STATE(359)] = 14887,
  [SMALL_STATE(360)] = 14911,
  [SMALL_STATE(361)] = 14932,
  [SMALL_STATE(362)] = 14953,
  [SMALL_STATE(363)] = 14974,
  [SMALL_STATE(364)] = 15000,
  [SMALL_STATE(365)] = 15016,
  [SMALL_STATE(366)] = 15042,
  [SMALL_STATE(367)] = 15068,
  [SMALL_STATE(368)] = 15082,
  [SMALL_STATE(369)] = 15096,
  [SMALL_STATE(370)] = 15112,
  [SMALL_STATE(371)] = 15130,
  [SMALL_STATE(372)] = 15156,
  [SMALL_STATE(373)] = 15177,
  [SMALL_STATE(374)] = 15200,
  [SMALL_STATE(375)] = 15215,
  [SMALL_STATE(376)] = 15230,
  [SMALL_STATE(377)] = 15247,
  [SMALL_STATE(378)] = 15262,
  [SMALL_STATE(379)] = 15277,
  [SMALL_STATE(380)] = 15296,
  [SMALL_STATE(381)] = 15311,
  [SMALL_STATE(382)] = 15328,
  [SMALL_STATE(383)] = 15349,
  [SMALL_STATE(384)] = 15370,
  [SMALL_STATE(385)] = 15385,
  [SMALL_STATE(386)] = 15408,
  [SMALL_STATE(387)] = 15429,
  [SMALL_STATE(388)] = 15450,
  [SMALL_STATE(389)] = 15471,
  [SMALL_STATE(390)] = 15489,
  [SMALL_STATE(391)] = 15509,
  [SMALL_STATE(392)] = 15521,
  [SMALL_STATE(393)] = 15533,
  [SMALL_STATE(394)] = 15545,
  [SMALL_STATE(395)] = 15557,
  [SMALL_STATE(396)] = 15573,
  [SMALL_STATE(397)] = 15589,
  [SMALL_STATE(398)] = 15601,
  [SMALL_STATE(399)] = 15619,
  [SMALL_STATE(400)] = 15631,
  [SMALL_STATE(401)] = 15649,
  [SMALL_STATE(402)] = 15667,
  [SMALL_STATE(403)] = 15685,
  [SMALL_STATE(404)] = 15703,
  [SMALL_STATE(405)] = 15721,
  [SMALL_STATE(406)] = 15733,
  [SMALL_STATE(407)] = 15751,
  [SMALL_STATE(408)] = 15771,
  [SMALL_STATE(409)] = 15789,
  [SMALL_STATE(410)] = 15801,
  [SMALL_STATE(411)] = 15813,
  [SMALL_STATE(412)] = 15831,
  [SMALL_STATE(413)] = 15849,
  [SMALL_STATE(414)] = 15867,
  [SMALL_STATE(415)] = 15885,
  [SMALL_STATE(416)] = 15903,
  [SMALL_STATE(417)] = 15915,
  [SMALL_STATE(418)] = 15927,
  [SMALL_STATE(419)] = 15947,
  [SMALL_STATE(420)] = 15965,
  [SMALL_STATE(421)] = 15977,
  [SMALL_STATE(422)] = 15989,
  [SMALL_STATE(423)] = 16007,
  [SMALL_STATE(424)] = 16025,
  [SMALL_STATE(425)] = 16043,
  [SMALL_STATE(426)] = 16063,
  [SMALL_STATE(427)] = 16079,
  [SMALL_STATE(428)] = 16097,
  [SMALL_STATE(429)] = 16115,
  [SMALL_STATE(430)] = 16130,
  [SMALL_STATE(431)] = 16143,
  [SMALL_STATE(432)] = 16158,
  [SMALL_STATE(433)] = 16169,
  [SMALL_STATE(434)] = 16182,
  [SMALL_STATE(435)] = 16197,
  [SMALL_STATE(436)] = 16212,
  [SMALL_STATE(437)] = 16227,
  [SMALL_STATE(438)] = 16244,
  [SMALL_STATE(439)] = 16259,
  [SMALL_STATE(440)] = 16270,
  [SMALL_STATE(441)] = 16283,
  [SMALL_STATE(442)] = 16298,
  [SMALL_STATE(443)] = 16313,
  [SMALL_STATE(444)] = 16328,
  [SMALL_STATE(445)] = 16345,
  [SMALL_STATE(446)] = 16362,
  [SMALL_STATE(447)] = 16373,
  [SMALL_STATE(448)] = 16388,
  [SMALL_STATE(449)] = 16405,
  [SMALL_STATE(450)] = 16418,
  [SMALL_STATE(451)] = 16435,
  [SMALL_STATE(452)] = 16448,
  [SMALL_STATE(453)] = 16465,
  [SMALL_STATE(454)] = 16480,
  [SMALL_STATE(455)] = 16493,
  [SMALL_STATE(456)] = 16510,
  [SMALL_STATE(457)] = 16523,
  [SMALL_STATE(458)] = 16540,
  [SMALL_STATE(459)] = 16554,
  [SMALL_STATE(460)] = 16570,
  [SMALL_STATE(461)] = 16586,
  [SMALL_STATE(462)] = 16602,
  [SMALL_STATE(463)] = 16618,
  [SMALL_STATE(464)] = 16634,
  [SMALL_STATE(465)] = 16644,
  [SMALL_STATE(466)] = 16658,
  [SMALL_STATE(467)] = 16670,
  [SMALL_STATE(468)] = 16684,
  [SMALL_STATE(469)] = 16700,
  [SMALL_STATE(470)] = 16716,
  [SMALL_STATE(471)] = 16732,
  [SMALL_STATE(472)] = 16746,
  [SMALL_STATE(473)] = 16758,
  [SMALL_STATE(474)] = 16772,
  [SMALL_STATE(475)] = 16782,
  [SMALL_STATE(476)] = 16792,
  [SMALL_STATE(477)] = 16802,
  [SMALL_STATE(478)] = 16812,
  [SMALL_STATE(479)] = 16822,
  [SMALL_STATE(480)] = 16832,
  [SMALL_STATE(481)] = 16842,
  [SMALL_STATE(482)] = 16852,
  [SMALL_STATE(483)] = 16864,
  [SMALL_STATE(484)] = 16880,
  [SMALL_STATE(485)] = 16896,
  [SMALL_STATE(486)] = 16910,
  [SMALL_STATE(487)] = 16926,
  [SMALL_STATE(488)] = 16940,
  [SMALL_STATE(489)] = 16956,
  [SMALL_STATE(490)] = 16966,
  [SMALL_STATE(491)] = 16980,
  [SMALL_STATE(492)] = 16994,
  [SMALL_STATE(493)] = 17010,
  [SMALL_STATE(494)] = 17026,
  [SMALL_STATE(495)] = 17040,
  [SMALL_STATE(496)] = 17056,
  [SMALL_STATE(497)] = 17070,
  [SMALL_STATE(498)] = 17084,
  [SMALL_STATE(499)] = 17098,
  [SMALL_STATE(500)] = 17114,
  [SMALL_STATE(501)] = 17128,
  [SMALL_STATE(502)] = 17144,
  [SMALL_STATE(503)] = 17158,
  [SMALL_STATE(504)] = 17174,
  [SMALL_STATE(505)] = 17188,
  [SMALL_STATE(506)] = 17202,
  [SMALL_STATE(507)] = 17216,
  [SMALL_STATE(508)] = 17232,
  [SMALL_STATE(509)] = 17248,
  [SMALL_STATE(510)] = 17258,
  [SMALL_STATE(511)] = 17272,
  [SMALL_STATE(512)] = 17288,
  [SMALL_STATE(513)] = 17302,
  [SMALL_STATE(514)] = 17318,
  [SMALL_STATE(515)] = 17332,
  [SMALL_STATE(516)] = 17346,
  [SMALL_STATE(517)] = 17360,
  [SMALL_STATE(518)] = 17374,
  [SMALL_STATE(519)] = 17388,
  [SMALL_STATE(520)] = 17402,
  [SMALL_STATE(521)] = 17416,
  [SMALL_STATE(522)] = 17430,
  [SMALL_STATE(523)] = 17444,
  [SMALL_STATE(524)] = 17454,
  [SMALL_STATE(525)] = 17468,
  [SMALL_STATE(526)] = 17478,
  [SMALL_STATE(527)] = 17492,
  [SMALL_STATE(528)] = 17506,
  [SMALL_STATE(529)] = 17520,
  [SMALL_STATE(530)] = 17534,
  [SMALL_STATE(531)] = 17548,
  [SMALL_STATE(532)] = 17562,
  [SMALL_STATE(533)] = 17572,
  [SMALL_STATE(534)] = 17588,
  [SMALL_STATE(535)] = 17602,
  [SMALL_STATE(536)] = 17618,
  [SMALL_STATE(537)] = 17634,
  [SMALL_STATE(538)] = 17650,
  [SMALL_STATE(539)] = 17666,
  [SMALL_STATE(540)] = 17682,
  [SMALL_STATE(541)] = 17698,
  [SMALL_STATE(542)] = 17714,
  [SMALL_STATE(543)] = 17724,
  [SMALL_STATE(544)] = 17738,
  [SMALL_STATE(545)] = 17754,
  [SMALL_STATE(546)] = 17770,
  [SMALL_STATE(547)] = 17782,
  [SMALL_STATE(548)] = 17796,
  [SMALL_STATE(549)] = 17806,
  [SMALL_STATE(550)] = 17818,
  [SMALL_STATE(551)] = 17832,
  [SMALL_STATE(552)] = 17842,
  [SMALL_STATE(553)] = 17856,
  [SMALL_STATE(554)] = 17866,
  [SMALL_STATE(555)] = 17880,
  [SMALL_STATE(556)] = 17894,
  [SMALL_STATE(557)] = 17910,
  [SMALL_STATE(558)] = 17926,
  [SMALL_STATE(559)] = 17940,
  [SMALL_STATE(560)] = 17956,
  [SMALL_STATE(561)] = 17972,
  [SMALL_STATE(562)] = 17988,
  [SMALL_STATE(563)] = 18000,
  [SMALL_STATE(564)] = 18016,
  [SMALL_STATE(565)] = 18032,
  [SMALL_STATE(566)] = 18048,
  [SMALL_STATE(567)] = 18062,
  [SMALL_STATE(568)] = 18076,
  [SMALL_STATE(569)] = 18092,
  [SMALL_STATE(570)] = 18106,
  [SMALL_STATE(571)] = 18122,
  [SMALL_STATE(572)] = 18138,
  [SMALL_STATE(573)] = 18154,
  [SMALL_STATE(574)] = 18164,
  [SMALL_STATE(575)] = 18176,
  [SMALL_STATE(576)] = 18190,
  [SMALL_STATE(577)] = 18206,
  [SMALL_STATE(578)] = 18220,
  [SMALL_STATE(579)] = 18236,
  [SMALL_STATE(580)] = 18252,
  [SMALL_STATE(581)] = 18268,
  [SMALL_STATE(582)] = 18282,
  [SMALL_STATE(583)] = 18294,
  [SMALL_STATE(584)] = 18308,
  [SMALL_STATE(585)] = 18322,
  [SMALL_STATE(586)] = 18336,
  [SMALL_STATE(587)] = 18346,
  [SMALL_STATE(588)] = 18355,
  [SMALL_STATE(589)] = 18364,
  [SMALL_STATE(590)] = 18373,
  [SMALL_STATE(591)] = 18382,
  [SMALL_STATE(592)] = 18391,
  [SMALL_STATE(593)] = 18400,
  [SMALL_STATE(594)] = 18411,
  [SMALL_STATE(595)] = 18422,
  [SMALL_STATE(596)] = 18435,
  [SMALL_STATE(597)] = 18448,
  [SMALL_STATE(598)] = 18457,
  [SMALL_STATE(599)] = 18466,
  [SMALL_STATE(600)] = 18475,
  [SMALL_STATE(601)] = 18488,
  [SMALL_STATE(602)] = 18497,
  [SMALL_STATE(603)] = 18510,
  [SMALL_STATE(604)] = 18521,
  [SMALL_STATE(605)] = 18530,
  [SMALL_STATE(606)] = 18543,
  [SMALL_STATE(607)] = 18556,
  [SMALL_STATE(608)] = 18567,
  [SMALL_STATE(609)] = 18578,
  [SMALL_STATE(610)] = 18591,
  [SMALL_STATE(611)] = 18604,
  [SMALL_STATE(612)] = 18617,
  [SMALL_STATE(613)] = 18630,
  [SMALL_STATE(614)] = 18643,
  [SMALL_STATE(615)] = 18656,
  [SMALL_STATE(616)] = 18667,
  [SMALL_STATE(617)] = 18678,
  [SMALL_STATE(618)] = 18691,
  [SMALL_STATE(619)] = 18704,
  [SMALL_STATE(620)] = 18717,
  [SMALL_STATE(621)] = 18728,
  [SMALL_STATE(622)] = 18741,
  [SMALL_STATE(623)] = 18754,
  [SMALL_STATE(624)] = 18767,
  [SMALL_STATE(625)] = 18780,
  [SMALL_STATE(626)] = 18793,
  [SMALL_STATE(627)] = 18806,
  [SMALL_STATE(628)] = 18819,
  [SMALL_STATE(629)] = 18832,
  [SMALL_STATE(630)] = 18845,
  [SMALL_STATE(631)] = 18858,
  [SMALL_STATE(632)] = 18871,
  [SMALL_STATE(633)] = 18880,
  [SMALL_STATE(634)] = 18893,
  [SMALL_STATE(635)] = 18902,
  [SMALL_STATE(636)] = 18911,
  [SMALL_STATE(637)] = 18922,
  [SMALL_STATE(638)] = 18935,
  [SMALL_STATE(639)] = 18944,
  [SMALL_STATE(640)] = 18953,
  [SMALL_STATE(641)] = 18966,
  [SMALL_STATE(642)] = 18979,
  [SMALL_STATE(643)] = 18988,
  [SMALL_STATE(644)] = 18997,
  [SMALL_STATE(645)] = 19010,
  [SMALL_STATE(646)] = 19019,
  [SMALL_STATE(647)] = 19030,
  [SMALL_STATE(648)] = 19043,
  [SMALL_STATE(649)] = 19056,
  [SMALL_STATE(650)] = 19069,
  [SMALL_STATE(651)] = 19078,
  [SMALL_STATE(652)] = 19091,
  [SMALL_STATE(653)] = 19104,
  [SMALL_STATE(654)] = 19117,
  [SMALL_STATE(655)] = 19130,
  [SMALL_STATE(656)] = 19143,
  [SMALL_STATE(657)] = 19152,
  [SMALL_STATE(658)] = 19163,
  [SMALL_STATE(659)] = 19176,
  [SMALL_STATE(660)] = 19187,
  [SMALL_STATE(661)] = 19198,
  [SMALL_STATE(662)] = 19211,
  [SMALL_STATE(663)] = 19224,
  [SMALL_STATE(664)] = 19233,
  [SMALL_STATE(665)] = 19242,
  [SMALL_STATE(666)] = 19255,
  [SMALL_STATE(667)] = 19268,
  [SMALL_STATE(668)] = 19281,
  [SMALL_STATE(669)] = 19294,
  [SMALL_STATE(670)] = 19303,
  [SMALL_STATE(671)] = 19316,
  [SMALL_STATE(672)] = 19327,
  [SMALL_STATE(673)] = 19340,
  [SMALL_STATE(674)] = 19353,
  [SMALL_STATE(675)] = 19366,
  [SMALL_STATE(676)] = 19379,
  [SMALL_STATE(677)] = 19388,
  [SMALL_STATE(678)] = 19401,
  [SMALL_STATE(679)] = 19414,
  [SMALL_STATE(680)] = 19425,
  [SMALL_STATE(681)] = 19436,
  [SMALL_STATE(682)] = 19449,
  [SMALL_STATE(683)] = 19462,
  [SMALL_STATE(684)] = 19471,
  [SMALL_STATE(685)] = 19480,
  [SMALL_STATE(686)] = 19493,
  [SMALL_STATE(687)] = 19506,
  [SMALL_STATE(688)] = 19519,
  [SMALL_STATE(689)] = 19530,
  [SMALL_STATE(690)] = 19541,
  [SMALL_STATE(691)] = 19552,
  [SMALL_STATE(692)] = 19565,
  [SMALL_STATE(693)] = 19578,
  [SMALL_STATE(694)] = 19587,
  [SMALL_STATE(695)] = 19600,
  [SMALL_STATE(696)] = 19613,
  [SMALL_STATE(697)] = 19626,
  [SMALL_STATE(698)] = 19639,
  [SMALL_STATE(699)] = 19652,
  [SMALL_STATE(700)] = 19665,
  [SMALL_STATE(701)] = 19674,
  [SMALL_STATE(702)] = 19683,
  [SMALL_STATE(703)] = 19692,
  [SMALL_STATE(704)] = 19703,
  [SMALL_STATE(705)] = 19714,
  [SMALL_STATE(706)] = 19723,
  [SMALL_STATE(707)] = 19732,
  [SMALL_STATE(708)] = 19741,
  [SMALL_STATE(709)] = 19750,
  [SMALL_STATE(710)] = 19759,
  [SMALL_STATE(711)] = 19772,
  [SMALL_STATE(712)] = 19785,
  [SMALL_STATE(713)] = 19798,
  [SMALL_STATE(714)] = 19811,
  [SMALL_STATE(715)] = 19824,
  [SMALL_STATE(716)] = 19833,
  [SMALL_STATE(717)] = 19844,
  [SMALL_STATE(718)] = 19855,
  [SMALL_STATE(719)] = 19866,
  [SMALL_STATE(720)] = 19879,
  [SMALL_STATE(721)] = 19892,
  [SMALL_STATE(722)] = 19905,
  [SMALL_STATE(723)] = 19918,
  [SMALL_STATE(724)] = 19926,
  [SMALL_STATE(725)] = 19934,
  [SMALL_STATE(726)] = 19942,
  [SMALL_STATE(727)] = 19950,
  [SMALL_STATE(728)] = 19958,
  [SMALL_STATE(729)] = 19966,
  [SMALL_STATE(730)] = 19974,
  [SMALL_STATE(731)] = 19982,
  [SMALL_STATE(732)] = 19990,
  [SMALL_STATE(733)] = 19998,
  [SMALL_STATE(734)] = 20006,
  [SMALL_STATE(735)] = 20014,
  [SMALL_STATE(736)] = 20022,
  [SMALL_STATE(737)] = 20030,
  [SMALL_STATE(738)] = 20038,
  [SMALL_STATE(739)] = 20046,
  [SMALL_STATE(740)] = 20054,
  [SMALL_STATE(741)] = 20062,
  [SMALL_STATE(742)] = 20070,
  [SMALL_STATE(743)] = 20078,
  [SMALL_STATE(744)] = 20086,
  [SMALL_STATE(745)] = 20094,
  [SMALL_STATE(746)] = 20102,
  [SMALL_STATE(747)] = 20110,
  [SMALL_STATE(748)] = 20118,
  [SMALL_STATE(749)] = 20126,
  [SMALL_STATE(750)] = 20134,
  [SMALL_STATE(751)] = 20142,
  [SMALL_STATE(752)] = 20150,
  [SMALL_STATE(753)] = 20158,
  [SMALL_STATE(754)] = 20166,
  [SMALL_STATE(755)] = 20174,
  [SMALL_STATE(756)] = 20182,
  [SMALL_STATE(757)] = 20190,
  [SMALL_STATE(758)] = 20198,
  [SMALL_STATE(759)] = 20206,
  [SMALL_STATE(760)] = 20214,
  [SMALL_STATE(761)] = 20222,
  [SMALL_STATE(762)] = 20230,
  [SMALL_STATE(763)] = 20238,
  [SMALL_STATE(764)] = 20246,
  [SMALL_STATE(765)] = 20254,
  [SMALL_STATE(766)] = 20262,
  [SMALL_STATE(767)] = 20270,
  [SMALL_STATE(768)] = 20278,
  [SMALL_STATE(769)] = 20286,
  [SMALL_STATE(770)] = 20294,
  [SMALL_STATE(771)] = 20302,
  [SMALL_STATE(772)] = 20310,
  [SMALL_STATE(773)] = 20318,
  [SMALL_STATE(774)] = 20326,
  [SMALL_STATE(775)] = 20334,
  [SMALL_STATE(776)] = 20342,
  [SMALL_STATE(777)] = 20350,
  [SMALL_STATE(778)] = 20358,
  [SMALL_STATE(779)] = 20366,
  [SMALL_STATE(780)] = 20374,
  [SMALL_STATE(781)] = 20382,
  [SMALL_STATE(782)] = 20390,
  [SMALL_STATE(783)] = 20398,
  [SMALL_STATE(784)] = 20408,
  [SMALL_STATE(785)] = 20416,
  [SMALL_STATE(786)] = 20424,
  [SMALL_STATE(787)] = 20432,
  [SMALL_STATE(788)] = 20440,
  [SMALL_STATE(789)] = 20448,
  [SMALL_STATE(790)] = 20456,
  [SMALL_STATE(791)] = 20464,
  [SMALL_STATE(792)] = 20472,
  [SMALL_STATE(793)] = 20480,
  [SMALL_STATE(794)] = 20490,
  [SMALL_STATE(795)] = 20498,
  [SMALL_STATE(796)] = 20508,
  [SMALL_STATE(797)] = 20516,
  [SMALL_STATE(798)] = 20524,
  [SMALL_STATE(799)] = 20532,
  [SMALL_STATE(800)] = 20540,
  [SMALL_STATE(801)] = 20548,
  [SMALL_STATE(802)] = 20556,
  [SMALL_STATE(803)] = 20564,
  [SMALL_STATE(804)] = 20572,
  [SMALL_STATE(805)] = 20580,
  [SMALL_STATE(806)] = 20588,
  [SMALL_STATE(807)] = 20596,
  [SMALL_STATE(808)] = 20604,
  [SMALL_STATE(809)] = 20612,
  [SMALL_STATE(810)] = 20620,
  [SMALL_STATE(811)] = 20628,
  [SMALL_STATE(812)] = 20636,
  [SMALL_STATE(813)] = 20644,
  [SMALL_STATE(814)] = 20652,
  [SMALL_STATE(815)] = 20660,
  [SMALL_STATE(816)] = 20668,
  [SMALL_STATE(817)] = 20676,
  [SMALL_STATE(818)] = 20684,
  [SMALL_STATE(819)] = 20692,
  [SMALL_STATE(820)] = 20700,
  [SMALL_STATE(821)] = 20708,
  [SMALL_STATE(822)] = 20716,
  [SMALL_STATE(823)] = 20724,
  [SMALL_STATE(824)] = 20732,
  [SMALL_STATE(825)] = 20740,
  [SMALL_STATE(826)] = 20748,
  [SMALL_STATE(827)] = 20756,
  [SMALL_STATE(828)] = 20764,
  [SMALL_STATE(829)] = 20772,
  [SMALL_STATE(830)] = 20780,
  [SMALL_STATE(831)] = 20788,
  [SMALL_STATE(832)] = 20796,
  [SMALL_STATE(833)] = 20804,
  [SMALL_STATE(834)] = 20812,
  [SMALL_STATE(835)] = 20820,
  [SMALL_STATE(836)] = 20828,
  [SMALL_STATE(837)] = 20836,
  [SMALL_STATE(838)] = 20844,
  [SMALL_STATE(839)] = 20852,
  [SMALL_STATE(840)] = 20860,
  [SMALL_STATE(841)] = 20868,
  [SMALL_STATE(842)] = 20876,
  [SMALL_STATE(843)] = 20884,
  [SMALL_STATE(844)] = 20892,
  [SMALL_STATE(845)] = 20900,
  [SMALL_STATE(846)] = 20908,
  [SMALL_STATE(847)] = 20916,
  [SMALL_STATE(848)] = 20924,
  [SMALL_STATE(849)] = 20932,
  [SMALL_STATE(850)] = 20940,
  [SMALL_STATE(851)] = 20948,
  [SMALL_STATE(852)] = 20956,
  [SMALL_STATE(853)] = 20964,
  [SMALL_STATE(854)] = 20972,
  [SMALL_STATE(855)] = 20980,
  [SMALL_STATE(856)] = 20988,
  [SMALL_STATE(857)] = 20998,
  [SMALL_STATE(858)] = 21006,
  [SMALL_STATE(859)] = 21014,
  [SMALL_STATE(860)] = 21022,
  [SMALL_STATE(861)] = 21030,
  [SMALL_STATE(862)] = 21038,
  [SMALL_STATE(863)] = 21046,
  [SMALL_STATE(864)] = 21054,
  [SMALL_STATE(865)] = 21062,
  [SMALL_STATE(866)] = 21070,
  [SMALL_STATE(867)] = 21078,
  [SMALL_STATE(868)] = 21088,
  [SMALL_STATE(869)] = 21096,
  [SMALL_STATE(870)] = 21104,
  [SMALL_STATE(871)] = 21112,
  [SMALL_STATE(872)] = 21122,
  [SMALL_STATE(873)] = 21130,
  [SMALL_STATE(874)] = 21138,
  [SMALL_STATE(875)] = 21146,
  [SMALL_STATE(876)] = 21154,
  [SMALL_STATE(877)] = 21162,
  [SMALL_STATE(878)] = 21170,
  [SMALL_STATE(879)] = 21178,
  [SMALL_STATE(880)] = 21186,
  [SMALL_STATE(881)] = 21194,
  [SMALL_STATE(882)] = 21204,
  [SMALL_STATE(883)] = 21212,
  [SMALL_STATE(884)] = 21220,
  [SMALL_STATE(885)] = 21228,
  [SMALL_STATE(886)] = 21236,
  [SMALL_STATE(887)] = 21244,
  [SMALL_STATE(888)] = 21252,
  [SMALL_STATE(889)] = 21260,
  [SMALL_STATE(890)] = 21268,
  [SMALL_STATE(891)] = 21276,
  [SMALL_STATE(892)] = 21284,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(816),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(470),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(469),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(81),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(468),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(463),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(388),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(570),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(572),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(579),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(580),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(840),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(644),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(641),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(640),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(606),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(605),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(135),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(260),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(818),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(460),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(459),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(128),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(538),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(540),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(387),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(507),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(508),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(492),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(493),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(855),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(622),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(621),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(619),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(602),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(600),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(120),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(794),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(488),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(486),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(143),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(484),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(483),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(382),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(559),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(561),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(564),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(565),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(824),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(649),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(648),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(647),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(610),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(609),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(183),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(748),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(578),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(568),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(145),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(539),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(501),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(386),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(545),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(544),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(461),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(462),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(766),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(637),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(710),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(712),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(713),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(714),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(26),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(260),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(567),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(772),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(631),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(630),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(629),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(628),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(627),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(626),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(625),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(624),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(623),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(58),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(567),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(428),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(423),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(77),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(263),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(265),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(269),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(274),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(275),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(216),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(216),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(235),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__rest_text, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rest_text, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(597),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(885),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actor_repeat1, 2),
  [1024] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(246),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 1),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_actor, 1),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(765),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(261),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(215),
  [1178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(372),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(80),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(296),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(534),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(765),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(379),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(303),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(739),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
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
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(352),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 6),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1),
  [1415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(376),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2),
  [1488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2), SHIFT_REPEAT(876),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1),
  [1499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(395),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(854),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(327),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(431),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_actor_repeat1, 2), SHIFT_REPEAT(444),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(44),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(45),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(286),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(304),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_type, 1),
  [1725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_type, 1),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2),
  [1733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2), SHIFT_REPEAT(360),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(575),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(78),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(585),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement, 1),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1),
  [1901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [2025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement, 1),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [2109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [2151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [2153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [2155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [2243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_plus_sign, 1),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_minus_sign, 1),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [2267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3),
  [2269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [2271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [2279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [2283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
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
