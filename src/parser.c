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
#define STATE_COUNT 905
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
    .supertype = true,
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
    .supertype = true,
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
    .supertype = true,
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
    .supertype = true,
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
    .supertype = true,
  },
  [sym__er_reltype] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
    .supertype = true,
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
  [3] = 3,
  [4] = 2,
  [5] = 2,
  [6] = 3,
  [7] = 3,
  [8] = 2,
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 15,
  [21] = 14,
  [22] = 16,
  [23] = 23,
  [24] = 15,
  [25] = 25,
  [26] = 16,
  [27] = 15,
  [28] = 23,
  [29] = 23,
  [30] = 16,
  [31] = 25,
  [32] = 25,
  [33] = 33,
  [34] = 14,
  [35] = 25,
  [36] = 19,
  [37] = 19,
  [38] = 14,
  [39] = 23,
  [40] = 40,
  [41] = 11,
  [42] = 19,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 44,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 45,
  [52] = 44,
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
  [84] = 81,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 85,
  [108] = 94,
  [109] = 109,
  [110] = 106,
  [111] = 111,
  [112] = 105,
  [113] = 113,
  [114] = 113,
  [115] = 88,
  [116] = 89,
  [117] = 90,
  [118] = 91,
  [119] = 111,
  [120] = 92,
  [121] = 93,
  [122] = 82,
  [123] = 109,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 83,
  [132] = 99,
  [133] = 125,
  [134] = 100,
  [135] = 126,
  [136] = 104,
  [137] = 127,
  [138] = 95,
  [139] = 128,
  [140] = 124,
  [141] = 129,
  [142] = 102,
  [143] = 103,
  [144] = 130,
  [145] = 126,
  [146] = 129,
  [147] = 90,
  [148] = 92,
  [149] = 89,
  [150] = 97,
  [151] = 93,
  [152] = 94,
  [153] = 100,
  [154] = 99,
  [155] = 81,
  [156] = 103,
  [157] = 104,
  [158] = 82,
  [159] = 91,
  [160] = 109,
  [161] = 106,
  [162] = 124,
  [163] = 92,
  [164] = 93,
  [165] = 125,
  [166] = 111,
  [167] = 127,
  [168] = 105,
  [169] = 95,
  [170] = 102,
  [171] = 83,
  [172] = 85,
  [173] = 130,
  [174] = 129,
  [175] = 128,
  [176] = 86,
  [177] = 82,
  [178] = 109,
  [179] = 124,
  [180] = 125,
  [181] = 126,
  [182] = 127,
  [183] = 96,
  [184] = 113,
  [185] = 128,
  [186] = 96,
  [187] = 130,
  [188] = 83,
  [189] = 99,
  [190] = 100,
  [191] = 97,
  [192] = 88,
  [193] = 95,
  [194] = 113,
  [195] = 111,
  [196] = 86,
  [197] = 85,
  [198] = 88,
  [199] = 89,
  [200] = 91,
  [201] = 81,
  [202] = 106,
  [203] = 105,
  [204] = 104,
  [205] = 103,
  [206] = 102,
  [207] = 90,
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
  [220] = 96,
  [221] = 97,
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
  [254] = 97,
  [255] = 255,
  [256] = 96,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 225,
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
  [290] = 225,
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
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 305,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 305,
  [318] = 305,
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
  [368] = 368,
  [369] = 369,
  [370] = 255,
  [371] = 369,
  [372] = 369,
  [373] = 373,
  [374] = 369,
  [375] = 375,
  [376] = 248,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 255,
  [383] = 383,
  [384] = 381,
  [385] = 248,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 381,
  [392] = 392,
  [393] = 381,
  [394] = 222,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 257,
  [399] = 217,
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
  [413] = 404,
  [414] = 260,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 388,
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
  [448] = 224,
  [449] = 284,
  [450] = 292,
  [451] = 451,
  [452] = 285,
  [453] = 453,
  [454] = 454,
  [455] = 253,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 297,
  [465] = 275,
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
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 498,
  [506] = 500,
  [507] = 503,
  [508] = 487,
  [509] = 482,
  [510] = 510,
  [511] = 502,
  [512] = 481,
  [513] = 513,
  [514] = 477,
  [515] = 515,
  [516] = 516,
  [517] = 476,
  [518] = 518,
  [519] = 483,
  [520] = 520,
  [521] = 521,
  [522] = 475,
  [523] = 485,
  [524] = 502,
  [525] = 525,
  [526] = 526,
  [527] = 487,
  [528] = 528,
  [529] = 484,
  [530] = 498,
  [531] = 500,
  [532] = 474,
  [533] = 533,
  [534] = 534,
  [535] = 503,
  [536] = 521,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 487,
  [543] = 543,
  [544] = 498,
  [545] = 545,
  [546] = 482,
  [547] = 547,
  [548] = 483,
  [549] = 537,
  [550] = 550,
  [551] = 551,
  [552] = 485,
  [553] = 516,
  [554] = 473,
  [555] = 485,
  [556] = 502,
  [557] = 500,
  [558] = 558,
  [559] = 503,
  [560] = 481,
  [561] = 504,
  [562] = 562,
  [563] = 547,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 468,
  [571] = 571,
  [572] = 572,
  [573] = 484,
  [574] = 521,
  [575] = 537,
  [576] = 576,
  [577] = 577,
  [578] = 435,
  [579] = 477,
  [580] = 580,
  [581] = 476,
  [582] = 504,
  [583] = 562,
  [584] = 551,
  [585] = 482,
  [586] = 550,
  [587] = 547,
  [588] = 564,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 565,
  [593] = 593,
  [594] = 475,
  [595] = 595,
  [596] = 596,
  [597] = 526,
  [598] = 474,
  [599] = 566,
  [600] = 526,
  [601] = 564,
  [602] = 550,
  [603] = 551,
  [604] = 604,
  [605] = 605,
  [606] = 468,
  [607] = 516,
  [608] = 608,
  [609] = 504,
  [610] = 562,
  [611] = 547,
  [612] = 612,
  [613] = 564,
  [614] = 614,
  [615] = 565,
  [616] = 483,
  [617] = 566,
  [618] = 468,
  [619] = 473,
  [620] = 516,
  [621] = 477,
  [622] = 476,
  [623] = 475,
  [624] = 526,
  [625] = 551,
  [626] = 473,
  [627] = 481,
  [628] = 484,
  [629] = 550,
  [630] = 521,
  [631] = 566,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 565,
  [636] = 636,
  [637] = 537,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 474,
  [643] = 540,
  [644] = 644,
  [645] = 645,
  [646] = 562,
  [647] = 558,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 652,
  [665] = 662,
  [666] = 666,
  [667] = 667,
  [668] = 666,
  [669] = 669,
  [670] = 658,
  [671] = 649,
  [672] = 672,
  [673] = 673,
  [674] = 674,
  [675] = 675,
  [676] = 662,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 652,
  [682] = 658,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 666,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 666,
  [693] = 693,
  [694] = 662,
  [695] = 695,
  [696] = 696,
  [697] = 652,
  [698] = 698,
  [699] = 658,
  [700] = 669,
  [701] = 649,
  [702] = 672,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 669,
  [714] = 669,
  [715] = 715,
  [716] = 716,
  [717] = 672,
  [718] = 649,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 669,
  [727] = 727,
  [728] = 669,
  [729] = 729,
  [730] = 672,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 736,
  [741] = 741,
  [742] = 742,
  [743] = 734,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 747,
  [751] = 751,
  [752] = 744,
  [753] = 746,
  [754] = 741,
  [755] = 736,
  [756] = 734,
  [757] = 735,
  [758] = 738,
  [759] = 735,
  [760] = 760,
  [761] = 737,
  [762] = 739,
  [763] = 735,
  [764] = 737,
  [765] = 751,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 738,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 741,
  [776] = 746,
  [777] = 760,
  [778] = 747,
  [779] = 779,
  [780] = 780,
  [781] = 683,
  [782] = 729,
  [783] = 783,
  [784] = 760,
  [785] = 766,
  [786] = 744,
  [787] = 787,
  [788] = 767,
  [789] = 751,
  [790] = 766,
  [791] = 767,
  [792] = 768,
  [793] = 769,
  [794] = 768,
  [795] = 771,
  [796] = 772,
  [797] = 773,
  [798] = 769,
  [799] = 739,
  [800] = 800,
  [801] = 735,
  [802] = 737,
  [803] = 738,
  [804] = 100,
  [805] = 771,
  [806] = 760,
  [807] = 99,
  [808] = 772,
  [809] = 773,
  [810] = 810,
  [811] = 751,
  [812] = 766,
  [813] = 767,
  [814] = 768,
  [815] = 769,
  [816] = 816,
  [817] = 771,
  [818] = 772,
  [819] = 773,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 735,
  [826] = 826,
  [827] = 739,
  [828] = 760,
  [829] = 751,
  [830] = 760,
  [831] = 751,
  [832] = 832,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 800,
  [837] = 779,
  [838] = 787,
  [839] = 839,
  [840] = 840,
  [841] = 810,
  [842] = 816,
  [843] = 843,
  [844] = 826,
  [845] = 834,
  [846] = 846,
  [847] = 847,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 800,
  [853] = 734,
  [854] = 744,
  [855] = 846,
  [856] = 810,
  [857] = 816,
  [858] = 858,
  [859] = 826,
  [860] = 834,
  [861] = 846,
  [862] = 847,
  [863] = 780,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 800,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 810,
  [872] = 816,
  [873] = 873,
  [874] = 826,
  [875] = 834,
  [876] = 846,
  [877] = 847,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 847,
  [888] = 746,
  [889] = 889,
  [890] = 747,
  [891] = 891,
  [892] = 736,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 741,
  [898] = 898,
  [899] = 899,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 903,
  [904] = 904,
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
      if (lookahead == '-') ADVANCE(46);
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
      if (lookahead == '-') ADVANCE(44);
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
      if (lookahead == ')') ADVANCE(47);
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
    case 35:
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(453);
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
      if (lookahead == ')') ADVANCE(500);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(500);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead == '.') ADVANCE(891);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(500);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(646);
      if (lookahead == 'x') ADVANCE(649);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(498);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ']') ADVANCE(508);
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
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '-') ADVANCE(45);
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
      if (lookahead == ')') ADVANCE(48);
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
      if (lookahead == '-') ADVANCE(46);
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
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 399},
  [18] = {.lex_state = 399},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 399},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 399},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 399},
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
  [56] = {.lex_state = 406},
  [57] = {.lex_state = 408},
  [58] = {.lex_state = 406},
  [59] = {.lex_state = 406},
  [60] = {.lex_state = 408},
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
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 399},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 399},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 399},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 399},
  [156] = {.lex_state = 399},
  [157] = {.lex_state = 399},
  [158] = {.lex_state = 399},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 399},
  [161] = {.lex_state = 399},
  [162] = {.lex_state = 399},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 399},
  [166] = {.lex_state = 399},
  [167] = {.lex_state = 399},
  [168] = {.lex_state = 399},
  [169] = {.lex_state = 399},
  [170] = {.lex_state = 399},
  [171] = {.lex_state = 399},
  [172] = {.lex_state = 399},
  [173] = {.lex_state = 399},
  [174] = {.lex_state = 399},
  [175] = {.lex_state = 399},
  [176] = {.lex_state = 399},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 399},
  [184] = {.lex_state = 399},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 399},
  [190] = {.lex_state = 399},
  [191] = {.lex_state = 399},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 399},
  [199] = {.lex_state = 399},
  [200] = {.lex_state = 399},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 399},
  [208] = {.lex_state = 400},
  [209] = {.lex_state = 403},
  [210] = {.lex_state = 400},
  [211] = {.lex_state = 403},
  [212] = {.lex_state = 400},
  [213] = {.lex_state = 400},
  [214] = {.lex_state = 403},
  [215] = {.lex_state = 409},
  [216] = {.lex_state = 410},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 409},
  [219] = {.lex_state = 400},
  [220] = {.lex_state = 403},
  [221] = {.lex_state = 403},
  [222] = {.lex_state = 400},
  [223] = {.lex_state = 408},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 406},
  [227] = {.lex_state = 408},
  [228] = {.lex_state = 408},
  [229] = {.lex_state = 408},
  [230] = {.lex_state = 406},
  [231] = {.lex_state = 406},
  [232] = {.lex_state = 408},
  [233] = {.lex_state = 406},
  [234] = {.lex_state = 406},
  [235] = {.lex_state = 406},
  [236] = {.lex_state = 406},
  [237] = {.lex_state = 406},
  [238] = {.lex_state = 406},
  [239] = {.lex_state = 406},
  [240] = {.lex_state = 408},
  [241] = {.lex_state = 408},
  [242] = {.lex_state = 408},
  [243] = {.lex_state = 39},
  [244] = {.lex_state = 408},
  [245] = {.lex_state = 39},
  [246] = {.lex_state = 406},
  [247] = {.lex_state = 403},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 413},
  [250] = {.lex_state = 403},
  [251] = {.lex_state = 403},
  [252] = {.lex_state = 408},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 406},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 406},
  [257] = {.lex_state = 400},
  [258] = {.lex_state = 406},
  [259] = {.lex_state = 408},
  [260] = {.lex_state = 400},
  [261] = {.lex_state = 409},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 408},
  [264] = {.lex_state = 408},
  [265] = {.lex_state = 408},
  [266] = {.lex_state = 408},
  [267] = {.lex_state = 408},
  [268] = {.lex_state = 413},
  [269] = {.lex_state = 408},
  [270] = {.lex_state = 408},
  [271] = {.lex_state = 408},
  [272] = {.lex_state = 408},
  [273] = {.lex_state = 408},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 408},
  [277] = {.lex_state = 413},
  [278] = {.lex_state = 23},
  [279] = {.lex_state = 403},
  [280] = {.lex_state = 408},
  [281] = {.lex_state = 408},
  [282] = {.lex_state = 408},
  [283] = {.lex_state = 408},
  [284] = {.lex_state = 30},
  [285] = {.lex_state = 400},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 7},
  [288] = {.lex_state = 7},
  [289] = {.lex_state = 7},
  [290] = {.lex_state = 410},
  [291] = {.lex_state = 408},
  [292] = {.lex_state = 400},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 39},
  [295] = {.lex_state = 7},
  [296] = {.lex_state = 413},
  [297] = {.lex_state = 30},
  [298] = {.lex_state = 7},
  [299] = {.lex_state = 7},
  [300] = {.lex_state = 413},
  [301] = {.lex_state = 39},
  [302] = {.lex_state = 413},
  [303] = {.lex_state = 412},
  [304] = {.lex_state = 403},
  [305] = {.lex_state = 410},
  [306] = {.lex_state = 403},
  [307] = {.lex_state = 412},
  [308] = {.lex_state = 403},
  [309] = {.lex_state = 403},
  [310] = {.lex_state = 403},
  [311] = {.lex_state = 410},
  [312] = {.lex_state = 410},
  [313] = {.lex_state = 403},
  [314] = {.lex_state = 403},
  [315] = {.lex_state = 403},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 410},
  [318] = {.lex_state = 410},
  [319] = {.lex_state = 403},
  [320] = {.lex_state = 7},
  [321] = {.lex_state = 412},
  [322] = {.lex_state = 412},
  [323] = {.lex_state = 412},
  [324] = {.lex_state = 403},
  [325] = {.lex_state = 7},
  [326] = {.lex_state = 412},
  [327] = {.lex_state = 403},
  [328] = {.lex_state = 403},
  [329] = {.lex_state = 403},
  [330] = {.lex_state = 403},
  [331] = {.lex_state = 403},
  [332] = {.lex_state = 403},
  [333] = {.lex_state = 403},
  [334] = {.lex_state = 403},
  [335] = {.lex_state = 403},
  [336] = {.lex_state = 403},
  [337] = {.lex_state = 403},
  [338] = {.lex_state = 403},
  [339] = {.lex_state = 412},
  [340] = {.lex_state = 403},
  [341] = {.lex_state = 403},
  [342] = {.lex_state = 412},
  [343] = {.lex_state = 403},
  [344] = {.lex_state = 403},
  [345] = {.lex_state = 403},
  [346] = {.lex_state = 403},
  [347] = {.lex_state = 412},
  [348] = {.lex_state = 405},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 404},
  [351] = {.lex_state = 404},
  [352] = {.lex_state = 403},
  [353] = {.lex_state = 403},
  [354] = {.lex_state = 23},
  [355] = {.lex_state = 404},
  [356] = {.lex_state = 23},
  [357] = {.lex_state = 404},
  [358] = {.lex_state = 404},
  [359] = {.lex_state = 405},
  [360] = {.lex_state = 404},
  [361] = {.lex_state = 23},
  [362] = {.lex_state = 405},
  [363] = {.lex_state = 405},
  [364] = {.lex_state = 405},
  [365] = {.lex_state = 405},
  [366] = {.lex_state = 404},
  [367] = {.lex_state = 404},
  [368] = {.lex_state = 404},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 401},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 408},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 403},
  [376] = {.lex_state = 401},
  [377] = {.lex_state = 403},
  [378] = {.lex_state = 403},
  [379] = {.lex_state = 401},
  [380] = {.lex_state = 405},
  [381] = {.lex_state = 403},
  [382] = {.lex_state = 411},
  [383] = {.lex_state = 412},
  [384] = {.lex_state = 403},
  [385] = {.lex_state = 411},
  [386] = {.lex_state = 404},
  [387] = {.lex_state = 401},
  [388] = {.lex_state = 405},
  [389] = {.lex_state = 412},
  [390] = {.lex_state = 412},
  [391] = {.lex_state = 403},
  [392] = {.lex_state = 412},
  [393] = {.lex_state = 403},
  [394] = {.lex_state = 409},
  [395] = {.lex_state = 412},
  [396] = {.lex_state = 402},
  [397] = {.lex_state = 403},
  [398] = {.lex_state = 409},
  [399] = {.lex_state = 410},
  [400] = {.lex_state = 403},
  [401] = {.lex_state = 401},
  [402] = {.lex_state = 405},
  [403] = {.lex_state = 24},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 404},
  [406] = {.lex_state = 404},
  [407] = {.lex_state = 404},
  [408] = {.lex_state = 404},
  [409] = {.lex_state = 404},
  [410] = {.lex_state = 401},
  [411] = {.lex_state = 403},
  [412] = {.lex_state = 404},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 409},
  [415] = {.lex_state = 401},
  [416] = {.lex_state = 401},
  [417] = {.lex_state = 25},
  [418] = {.lex_state = 401},
  [419] = {.lex_state = 401},
  [420] = {.lex_state = 25},
  [421] = {.lex_state = 401},
  [422] = {.lex_state = 401},
  [423] = {.lex_state = 25},
  [424] = {.lex_state = 25},
  [425] = {.lex_state = 25},
  [426] = {.lex_state = 25},
  [427] = {.lex_state = 25},
  [428] = {.lex_state = 25},
  [429] = {.lex_state = 25},
  [430] = {.lex_state = 25},
  [431] = {.lex_state = 25},
  [432] = {.lex_state = 38},
  [433] = {.lex_state = 25},
  [434] = {.lex_state = 25},
  [435] = {.lex_state = 38},
  [436] = {.lex_state = 408},
  [437] = {.lex_state = 403},
  [438] = {.lex_state = 405},
  [439] = {.lex_state = 407},
  [440] = {.lex_state = 405},
  [441] = {.lex_state = 407},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 405},
  [444] = {.lex_state = 403},
  [445] = {.lex_state = 39},
  [446] = {.lex_state = 405},
  [447] = {.lex_state = 405},
  [448] = {.lex_state = 407},
  [449] = {.lex_state = 31},
  [450] = {.lex_state = 409},
  [451] = {.lex_state = 403},
  [452] = {.lex_state = 409},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 403},
  [455] = {.lex_state = 5},
  [456] = {.lex_state = 409},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 404},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 407},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 31},
  [465] = {.lex_state = 5},
  [466] = {.lex_state = 405},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 4},
  [469] = {.lex_state = 408},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 401},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 32},
  [474] = {.lex_state = 401},
  [475] = {.lex_state = 32},
  [476] = {.lex_state = 32},
  [477] = {.lex_state = 32},
  [478] = {.lex_state = 403},
  [479] = {.lex_state = 403},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 4},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 4},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 4},
  [486] = {.lex_state = 408},
  [487] = {.lex_state = 403},
  [488] = {.lex_state = 408},
  [489] = {.lex_state = 408},
  [490] = {.lex_state = 408},
  [491] = {.lex_state = 408},
  [492] = {.lex_state = 408},
  [493] = {.lex_state = 408},
  [494] = {.lex_state = 408},
  [495] = {.lex_state = 408},
  [496] = {.lex_state = 408},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 403},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 32},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 4},
  [503] = {.lex_state = 32},
  [504] = {.lex_state = 32},
  [505] = {.lex_state = 403},
  [506] = {.lex_state = 32},
  [507] = {.lex_state = 32},
  [508] = {.lex_state = 403},
  [509] = {.lex_state = 4},
  [510] = {.lex_state = 408},
  [511] = {.lex_state = 4},
  [512] = {.lex_state = 4},
  [513] = {.lex_state = 408},
  [514] = {.lex_state = 32},
  [515] = {.lex_state = 408},
  [516] = {.lex_state = 32},
  [517] = {.lex_state = 32},
  [518] = {.lex_state = 408},
  [519] = {.lex_state = 4},
  [520] = {.lex_state = 408},
  [521] = {.lex_state = 4},
  [522] = {.lex_state = 32},
  [523] = {.lex_state = 4},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 408},
  [526] = {.lex_state = 32},
  [527] = {.lex_state = 403},
  [528] = {.lex_state = 408},
  [529] = {.lex_state = 4},
  [530] = {.lex_state = 403},
  [531] = {.lex_state = 32},
  [532] = {.lex_state = 401},
  [533] = {.lex_state = 405},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 32},
  [536] = {.lex_state = 4},
  [537] = {.lex_state = 4},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 408},
  [540] = {.lex_state = 24},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 403},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 403},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 4},
  [547] = {.lex_state = 32},
  [548] = {.lex_state = 4},
  [549] = {.lex_state = 4},
  [550] = {.lex_state = 32},
  [551] = {.lex_state = 32},
  [552] = {.lex_state = 4},
  [553] = {.lex_state = 32},
  [554] = {.lex_state = 32},
  [555] = {.lex_state = 4},
  [556] = {.lex_state = 4},
  [557] = {.lex_state = 32},
  [558] = {.lex_state = 24},
  [559] = {.lex_state = 32},
  [560] = {.lex_state = 4},
  [561] = {.lex_state = 32},
  [562] = {.lex_state = 32},
  [563] = {.lex_state = 32},
  [564] = {.lex_state = 4},
  [565] = {.lex_state = 4},
  [566] = {.lex_state = 4},
  [567] = {.lex_state = 405},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 405},
  [570] = {.lex_state = 4},
  [571] = {.lex_state = 408},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 4},
  [574] = {.lex_state = 4},
  [575] = {.lex_state = 4},
  [576] = {.lex_state = 401},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 405},
  [579] = {.lex_state = 32},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 32},
  [582] = {.lex_state = 32},
  [583] = {.lex_state = 32},
  [584] = {.lex_state = 32},
  [585] = {.lex_state = 4},
  [586] = {.lex_state = 32},
  [587] = {.lex_state = 32},
  [588] = {.lex_state = 4},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 4},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 32},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 405},
  [597] = {.lex_state = 32},
  [598] = {.lex_state = 401},
  [599] = {.lex_state = 4},
  [600] = {.lex_state = 32},
  [601] = {.lex_state = 4},
  [602] = {.lex_state = 32},
  [603] = {.lex_state = 32},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 41},
  [606] = {.lex_state = 4},
  [607] = {.lex_state = 32},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 32},
  [610] = {.lex_state = 32},
  [611] = {.lex_state = 32},
  [612] = {.lex_state = 401},
  [613] = {.lex_state = 4},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 4},
  [616] = {.lex_state = 4},
  [617] = {.lex_state = 4},
  [618] = {.lex_state = 4},
  [619] = {.lex_state = 32},
  [620] = {.lex_state = 32},
  [621] = {.lex_state = 32},
  [622] = {.lex_state = 32},
  [623] = {.lex_state = 32},
  [624] = {.lex_state = 32},
  [625] = {.lex_state = 32},
  [626] = {.lex_state = 32},
  [627] = {.lex_state = 4},
  [628] = {.lex_state = 4},
  [629] = {.lex_state = 32},
  [630] = {.lex_state = 4},
  [631] = {.lex_state = 4},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 4},
  [636] = {.lex_state = 41},
  [637] = {.lex_state = 4},
  [638] = {.lex_state = 6},
  [639] = {.lex_state = 6},
  [640] = {.lex_state = 6},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 401},
  [643] = {.lex_state = 24},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 32},
  [647] = {.lex_state = 24},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 32},
  [651] = {.lex_state = 32},
  [652] = {.lex_state = 32},
  [653] = {.lex_state = 24},
  [654] = {.lex_state = 32},
  [655] = {.lex_state = 407},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 32},
  [658] = {.lex_state = 32},
  [659] = {.lex_state = 32},
  [660] = {.lex_state = 32},
  [661] = {.lex_state = 32},
  [662] = {.lex_state = 32},
  [663] = {.lex_state = 404},
  [664] = {.lex_state = 32},
  [665] = {.lex_state = 32},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 403},
  [670] = {.lex_state = 32},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 405},
  [675] = {.lex_state = 24},
  [676] = {.lex_state = 32},
  [677] = {.lex_state = 32},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 32},
  [682] = {.lex_state = 32},
  [683] = {.lex_state = 24},
  [684] = {.lex_state = 408},
  [685] = {.lex_state = 407},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 405},
  [691] = {.lex_state = 32},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 404},
  [694] = {.lex_state = 32},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 32},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 32},
  [700] = {.lex_state = 403},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 404},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 404},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 408},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 408},
  [713] = {.lex_state = 403},
  [714] = {.lex_state = 403},
  [715] = {.lex_state = 403},
  [716] = {.lex_state = 403},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 403},
  [720] = {.lex_state = 404},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 403},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 403},
  [729] = {.lex_state = 24},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 403},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
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
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 396},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 403},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 403},
  [760] = {.lex_state = 33},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 403},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 396},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 34},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 33},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 35},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 4},
  [782] = {.lex_state = 4},
  [783] = {.lex_state = 4},
  [784] = {.lex_state = 33},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 396},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 403},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 33},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 396},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 405},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 40},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 403},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 33},
  [829] = {.lex_state = 396},
  [830] = {.lex_state = 33},
  [831] = {.lex_state = 396},
  [832] = {.lex_state = 4},
  [833] = {.lex_state = 4},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 408},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 35},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 34},
  [840] = {.lex_state = 403},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 36},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 400},
  [849] = {.lex_state = 405},
  [850] = {.lex_state = 405},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 405},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 400},
  [865] = {.lex_state = 408},
  [866] = {.lex_state = 403},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 403},
  [869] = {.lex_state = 408},
  [870] = {.lex_state = 403},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 408},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 408},
  [879] = {.lex_state = 403},
  [880] = {.lex_state = 408},
  [881] = {.lex_state = 403},
  [882] = {.lex_state = 403},
  [883] = {.lex_state = 404},
  [884] = {.lex_state = 408},
  [885] = {.lex_state = 404},
  [886] = {.lex_state = 400},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 405},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 405},
  [896] = {.lex_state = 408},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 405},
  [899] = {.lex_state = 408},
  [900] = {.lex_state = 400},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 0},
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
    [sym_source_file] = STATE(902),
    [sym_directive] = STATE(279),
    [sym_diagram_sequence] = STATE(901),
    [sym_diagram_class] = STATE(901),
    [sym_diagram_state] = STATE(901),
    [sym_diagram_gantt] = STATE(901),
    [sym_diagram_pie] = STATE(901),
    [sym_diagram_flow] = STATE(901),
    [sym_diagram_er] = STATE(901),
    [aux_sym_diagram_sequence_repeat1] = STATE(279),
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
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    STATE(527), 1,
      aux_sym_sequence_stmt_par_repeat1,
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
  [105] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(498), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(95), 18,
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
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(111), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    STATE(487), 1,
      aux_sym_sequence_stmt_par_repeat1,
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
    ACTIONS(113), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    STATE(542), 1,
      aux_sym_sequence_stmt_par_repeat1,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(115), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(544), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(95), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(530), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(95), 18,
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
    ACTIONS(119), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    STATE(508), 1,
      aux_sym_sequence_stmt_par_repeat1,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(121), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(505), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    STATE(95), 18,
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
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    ACTIONS(123), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(95), 18,
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
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
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
    ACTIONS(181), 1,
      sym__sequence_actor_word,
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
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    ACTIONS(164), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_alt_token2,
    STATE(95), 18,
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
    ACTIONS(61), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(67), 1,
      sym__newline,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(11), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
      sym_sequence_actor,
    ACTIONS(238), 2,
      aux_sym_sequence_stmt_loop_token2,
      aux_sym_sequence_stmt_par_token2,
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
  [1240] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    STATE(22), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(278), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(36), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
      sym__sequence_actor_word,
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
    ACTIONS(280), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [1537] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(318), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(33), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(169), 18,
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
  [1634] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(284), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(40), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(169), 18,
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
  [1731] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(324), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [1830] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(326), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(42), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [1929] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(328), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(16), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
    ACTIONS(330), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2127] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    STATE(32), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2226] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    STATE(19), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
      sym__sequence_actor_word,
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
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2424] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(338), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2523] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(340), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(37), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2622] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(342), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(25), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(344), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(31), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2820] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(346), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [2919] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(348), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3018] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(350), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3117] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(284), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(43), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(169), 18,
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
  [3214] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(354), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(30), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3313] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(356), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3412] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(358), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3511] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(360), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3610] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(362), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(26), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3709] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(364), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(35), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [3808] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(284), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(286), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(288), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(290), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(292), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(294), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(296), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(298), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(300), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(302), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(304), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(306), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(308), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(310), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(312), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(314), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(316), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(352), 1,
      sym__newline,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(43), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(169), 18,
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
  [3905] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(164), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(181), 1,
      sym__sequence_actor_word,
    ACTIONS(368), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(371), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(374), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(377), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(380), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(383), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(386), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(389), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(392), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(395), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(398), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(401), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(404), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(407), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(410), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(413), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(416), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(419), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [4004] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(422), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(41), 1,
      aux_sym__sequence_subdocument,
    STATE(152), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(317), 1,
      sym_sequence_actor,
    STATE(193), 18,
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
  [4103] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(429), 1,
      aux_sym_sequence_stmt_participant_token1,
    ACTIONS(432), 1,
      aux_sym_sequence_stmt_actor_token1,
    ACTIONS(435), 1,
      aux_sym_sequence_stmt_autonumber_token1,
    ACTIONS(438), 1,
      aux_sym_sequence_stmt_activate_token1,
    ACTIONS(441), 1,
      aux_sym_sequence_stmt_deactivate_token1,
    ACTIONS(444), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(447), 1,
      aux_sym_sequence_stmt_links_token1,
    ACTIONS(450), 1,
      aux_sym_sequence_stmt_link_token1,
    ACTIONS(453), 1,
      aux_sym_sequence_stmt_properties_token1,
    ACTIONS(456), 1,
      aux_sym_sequence_stmt_details_token1,
    ACTIONS(459), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(462), 1,
      aux_sym_sequence_stmt_loop_token1,
    ACTIONS(465), 1,
      aux_sym_sequence_stmt_rect_token1,
    ACTIONS(468), 1,
      aux_sym_sequence_stmt_opt_token1,
    ACTIONS(471), 1,
      aux_sym_sequence_stmt_alt_token1,
    ACTIONS(474), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(480), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(305), 1,
      sym_sequence_actor,
    STATE(43), 2,
      sym__sequence_stmt,
      aux_sym_diagram_sequence_repeat2,
    STATE(169), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(95), 18,
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
    STATE(4), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
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
    STATE(8), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
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
  [4488] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(9), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(95), 18,
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
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(95), 18,
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
    STATE(5), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
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
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
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
    STATE(2), 1,
      aux_sym__sequence_subdocument,
    STATE(94), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(318), 1,
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
  [4968] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(95), 18,
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
      sym__sequence_actor_word,
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
    ACTIONS(107), 1,
      aux_sym_sequence_stmt_par_token1,
    ACTIONS(109), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym__sequence_subdocument,
    STATE(108), 1,
      sym__sequence_stmt,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(312), 1,
      sym_sequence_actor,
    STATE(95), 18,
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
    STATE(344), 1,
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
    STATE(345), 15,
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
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(60), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5305] = 18,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(542), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(545), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(548), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(551), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(554), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(557), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(560), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(563), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(566), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(569), 1,
      sym__newline,
    ACTIONS(572), 1,
      aux_sym_gantt_task_text_token1,
    STATE(636), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(258), 11,
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
  [5372] = 18,
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
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(63), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5439] = 18,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(583), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(601), 1,
      sym__newline,
    ACTIONS(603), 1,
      aux_sym_gantt_task_text_token1,
    STATE(636), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(64), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(258), 11,
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
  [5506] = 18,
    ACTIONS(581), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(583), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
    ACTIONS(607), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(61), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(258), 11,
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
  [5573] = 18,
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
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    ACTIONS(611), 1,
      sym__newline,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5640] = 18,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    ACTIONS(581), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(583), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(613), 1,
      sym__newline,
    STATE(636), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(258), 11,
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
  [5707] = 18,
    ACTIONS(615), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    ACTIONS(620), 1,
      aux_sym_state_stmt_simple_token1,
    ACTIONS(623), 1,
      sym__newline,
    ACTIONS(626), 1,
      aux_sym_direction_tb_token1,
    ACTIONS(629), 1,
      aux_sym_direction_bt_token1,
    ACTIONS(632), 1,
      aux_sym_direction_rl_token1,
    ACTIONS(635), 1,
      aux_sym_direction_lr_token1,
    ACTIONS(638), 1,
      anon_sym_DASH_DASH,
    ACTIONS(641), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(644), 1,
      aux_sym_state_name_token1,
    ACTIONS(647), 1,
      aux_sym_state_hide_empty_description_token1,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5774] = 18,
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
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(62), 2,
      sym__state_stmt,
      aux_sym_state_composite_body_repeat1,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5841] = 18,
    ACTIONS(581), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(583), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(585), 1,
      aux_sym_gantt_stmt_dateformat_token1,
    ACTIONS(587), 1,
      aux_sym_gantt_stmt_inclusiveenddates_token1,
    ACTIONS(589), 1,
      aux_sym_gantt_stmt_topaxis_token1,
    ACTIONS(591), 1,
      aux_sym_gantt_stmt_axisformat_token1,
    ACTIONS(593), 1,
      aux_sym_gantt_stmt_includes_token1,
    ACTIONS(595), 1,
      aux_sym_gantt_stmt_excludes_token1,
    ACTIONS(597), 1,
      aux_sym_gantt_stmt_todaymarker_token1,
    ACTIONS(599), 1,
      aux_sym_gantt_stmt_section_token1,
    ACTIONS(603), 1,
      aux_sym_gantt_task_text_token1,
    ACTIONS(613), 1,
      sym__newline,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    STATE(636), 1,
      aux_sym_gantt_task_text_repeat1,
    STATE(822), 1,
      sym_gantt_task_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(56), 2,
      sym__gantt_stmt,
      aux_sym_diagram_gantt_repeat1,
    STATE(258), 11,
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
  [5908] = 17,
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
    ACTIONS(652), 1,
      sym__newline,
    STATE(57), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [5971] = 17,
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
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(667), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6034] = 17,
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
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(291), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6097] = 17,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(667), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6160] = 17,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(666), 1,
      sym__newline,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(499), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6223] = 17,
    ACTIONS(513), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
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
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(291), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6286] = 17,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(667), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6349] = 17,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(670), 1,
      sym__newline,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(644), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6412] = 17,
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
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(291), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6475] = 17,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(667), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6538] = 16,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(644), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6598] = 16,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(667), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6658] = 16,
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
    STATE(55), 1,
      sym__state_stmt,
    STATE(217), 1,
      sym_state_name,
    STATE(259), 1,
      sym_state_hide_empty_description,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6718] = 16,
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
    ACTIONS(656), 1,
      aux_sym_sequence_stmt_note_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK_STAR_RBRACK,
    ACTIONS(660), 1,
      aux_sym_state_name_token1,
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(399), 1,
      sym_state_name,
    STATE(590), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6778] = 16,
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
    STATE(259), 1,
      sym_state_hide_empty_description,
    STATE(291), 1,
      sym__state_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(264), 4,
      sym_direction_tb,
      sym_direction_bt,
      sym_direction_rl,
      sym_direction_lr,
    STATE(266), 8,
      sym__direction,
      sym_state_stmt_simple,
      sym_state_stmt_arrow,
      sym_state_stmt_composite,
      sym_state_stmt_annotation,
      sym_state_stmt_hide_empty_description,
      sym_state_note,
      sym_state_division,
  [6838] = 3,
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
  [6870] = 4,
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
  [6902] = 4,
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
  [6934] = 4,
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
  [6966] = 4,
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
  [6998] = 4,
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
  [7030] = 4,
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
  [7062] = 4,
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
  [7094] = 4,
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
  [7126] = 4,
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
  [7158] = 4,
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
  [7190] = 4,
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
  [7222] = 4,
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
  [7254] = 4,
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
  [7286] = 4,
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
  [7318] = 4,
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
  [7350] = 4,
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
  [7382] = 4,
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
  [7414] = 4,
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
  [7446] = 4,
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
  [7478] = 4,
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
  [7510] = 4,
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
  [7542] = 4,
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
  [7574] = 4,
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
  [7606] = 4,
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
  [7638] = 4,
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
  [7670] = 4,
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
  [7702] = 4,
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
  [7734] = 4,
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
  [7766] = 4,
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
  [7798] = 4,
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
  [7830] = 4,
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
  [7862] = 4,
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
  [7894] = 4,
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
  [7926] = 4,
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
  [7958] = 4,
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
  [7990] = 4,
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
  [8022] = 4,
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
  [8054] = 4,
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
  [8086] = 4,
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
  [8118] = 4,
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
  [8150] = 4,
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
  [8182] = 4,
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
  [8214] = 4,
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
  [8246] = 4,
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
  [8278] = 4,
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
  [8310] = 4,
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
  [8342] = 4,
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
  [8374] = 4,
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
  [8406] = 4,
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
  [8438] = 4,
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
  [8470] = 4,
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
  [8502] = 4,
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
  [8534] = 4,
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
  [8566] = 4,
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
  [8598] = 4,
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
  [8630] = 4,
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
  [8662] = 4,
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
  [8694] = 4,
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
  [8726] = 4,
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
  [8758] = 4,
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
  [8790] = 4,
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
  [8822] = 4,
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
  [8854] = 4,
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
  [8886] = 4,
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
  [8918] = 4,
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
  [8949] = 4,
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
  [8980] = 4,
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
  [9011] = 4,
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
  [9042] = 4,
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
  [9073] = 4,
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
  [9104] = 4,
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
  [9135] = 4,
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
  [9166] = 4,
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
  [9197] = 4,
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
  [9228] = 4,
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
  [9259] = 4,
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
  [9290] = 4,
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
  [9321] = 4,
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
  [9352] = 4,
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
  [9383] = 4,
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
  [9414] = 4,
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
  [9445] = 4,
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
  [9476] = 4,
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
  [9507] = 4,
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
  [9538] = 4,
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
  [9569] = 4,
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
  [9600] = 4,
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
  [9631] = 4,
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
  [9662] = 4,
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
  [9693] = 4,
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
  [9724] = 4,
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
  [9755] = 4,
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
  [9786] = 4,
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
  [9817] = 4,
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
  [9848] = 4,
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
  [9879] = 4,
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
  [9910] = 4,
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
  [9941] = 4,
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
  [9972] = 4,
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
  [10003] = 4,
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
  [10034] = 4,
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
  [10065] = 4,
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
  [10096] = 4,
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
  [10127] = 4,
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
  [10158] = 4,
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
  [10189] = 4,
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
  [10220] = 4,
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
  [10251] = 4,
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
  [10282] = 4,
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
  [10313] = 4,
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
  [10344] = 4,
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
  [10375] = 4,
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
  [10406] = 4,
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
  [10437] = 4,
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
  [10468] = 4,
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
  [10499] = 4,
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
  [10530] = 4,
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
  [10561] = 4,
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
  [10592] = 4,
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
  [10623] = 4,
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
  [10654] = 4,
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
  [10685] = 4,
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
  [10716] = 4,
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
  [10747] = 4,
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
  [10778] = 4,
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
  [10809] = 4,
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
  [10840] = 4,
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
  [10871] = 15,
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
    STATE(278), 1,
      sym__class_linetype,
    STATE(379), 1,
      sym_class_relation,
    STATE(436), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(354), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(419), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [10922] = 9,
    STATE(211), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(438), 1,
      sym__flow_link,
    STATE(533), 1,
      sym_flow_link_arrow_start,
    STATE(690), 1,
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
    STATE(850), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [10959] = 13,
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
    STATE(278), 1,
      sym__class_linetype,
    STATE(387), 1,
      sym_class_relation,
    STATE(436), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    STATE(354), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
    STATE(419), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [11004] = 9,
    STATE(211), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(438), 1,
      sym__flow_link,
    STATE(533), 1,
      sym_flow_link_arrow_start,
    STATE(690), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(830), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    ACTIONS(832), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
    ACTIONS(835), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    STATE(850), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11041] = 8,
    ACTIONS(840), 1,
      sym__newline,
    STATE(307), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(846), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(838), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(844), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(392), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11076] = 8,
    ACTIONS(848), 1,
      sym__newline,
    STATE(321), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(846), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(838), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(844), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(392), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11111] = 9,
    STATE(209), 1,
      aux_sym_flow_stmt_vertice_repeat1,
    STATE(438), 1,
      sym__flow_link,
    STATE(533), 1,
      sym_flow_link_arrow_start,
    STATE(690), 1,
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
    ACTIONS(850), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
    STATE(850), 3,
      sym_flow_link_simplelink,
      sym_flow_link_arrowtext,
      sym_flow_link_middletext,
  [11148] = 6,
    ACTIONS(854), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    ACTIONS(858), 1,
      aux_sym_state_name_token1,
    STATE(229), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(852), 12,
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
  [11179] = 10,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    ACTIONS(870), 1,
      sym_er_cardinarity_only_one,
    STATE(373), 1,
      sym__er_cardinarity,
    STATE(663), 1,
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
    STATE(408), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [11217] = 6,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH_GT,
    STATE(558), 1,
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
  [11247] = 3,
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
  [11271] = 7,
    STATE(604), 1,
      sym__flowchart_direction,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_LT,
      aux_sym_flowchart_direction_rl_token1,
    ACTIONS(846), 2,
      aux_sym_flowchart_direction_bt_token1,
      anon_sym_CARET,
    ACTIONS(838), 3,
      anon_sym_GT,
      aux_sym_flowchart_direction_lr_token1,
      aux_sym_flowchart_direction_lr_token2,
    ACTIONS(844), 3,
      aux_sym_flowchart_direction_tb_token1,
      aux_sym_flowchart_direction_tb_token2,
      anon_sym_v,
    STATE(392), 4,
      sym_flowchart_direction_lr,
      sym_flowchart_direction_rl,
      sym_flowchart_direction_tb,
      sym_flowchart_direction_bt,
  [11303] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(730), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(732), 12,
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
  [11326] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(734), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    ACTIONS(736), 12,
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
  [11349] = 5,
    ACTIONS(886), 1,
      anon_sym_TILDE,
    ACTIONS(888), 1,
      anon_sym_LT,
    STATE(285), 1,
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
  [11376] = 4,
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
  [11401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(281), 1,
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
  [11430] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(904), 2,
      anon_sym_DASH_DASH,
      aux_sym_state_name_token1,
    ACTIONS(902), 12,
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
  [11453] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(906), 11,
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
  [11475] = 3,
    ACTIONS(912), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(910), 12,
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
  [11497] = 3,
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
  [11519] = 3,
    ACTIONS(920), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(918), 12,
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
  [11541] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(924), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(922), 11,
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
  [11563] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(928), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(926), 11,
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
  [11585] = 3,
    ACTIONS(932), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(930), 12,
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
  [11607] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(936), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(934), 11,
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
  [11629] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(938), 11,
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
  [11651] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(944), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(942), 11,
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
  [11673] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(948), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(946), 11,
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
  [11695] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(952), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(950), 11,
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
  [11717] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(954), 11,
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
  [11739] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(958), 11,
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
  [11761] = 3,
    ACTIONS(964), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(962), 12,
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
  [11783] = 3,
    ACTIONS(968), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(966), 12,
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
  [11805] = 3,
    ACTIONS(972), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(970), 12,
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
  [11827] = 12,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(978), 1,
      anon_sym_end,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(301), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(686), 1,
      sym__flow_stmt,
    STATE(900), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11867] = 3,
    ACTIONS(984), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(982), 12,
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
  [11889] = 12,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(986), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(301), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(686), 1,
      sym__flow_stmt,
    STATE(864), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [11929] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(990), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(988), 11,
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
  [11951] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(992), 1,
      ts_builtin_sym_end,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(996), 1,
      sym__newline,
    ACTIONS(998), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    STATE(310), 1,
      sym_pie_showdata,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(308), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [11989] = 5,
    ACTIONS(1004), 1,
      sym__class_name,
    ACTIONS(1006), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1008), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1002), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12015] = 11,
    ACTIONS(1010), 1,
      ts_builtin_sym_end,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    STATE(679), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12053] = 11,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(998), 1,
      aux_sym_pie_showdata_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    ACTIONS(1022), 1,
      sym__newline,
    STATE(306), 1,
      sym_pie_showdata,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(304), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [12091] = 6,
    ACTIONS(1024), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1031), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1029), 2,
      aux_sym_diagram_class_token2,
      aux_sym_diagram_state_token1,
    STATE(251), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
    ACTIONS(1027), 7,
      aux_sym_diagram_sequence_token1,
      aux_sym_diagram_class_token1,
      aux_sym_diagram_state_token2,
      aux_sym_diagram_gantt_token1,
      aux_sym_diagram_pie_token1,
      aux_sym_diagram_flow_token1,
      aux_sym_diagram_er_token1,
  [12119] = 3,
    ACTIONS(1036), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1034), 12,
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
  [12141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1040), 1,
      sym__sequence_actor_word,
    STATE(253), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1043), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1038), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12169] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(736), 11,
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
  [12191] = 5,
    ACTIONS(1004), 1,
      sym__class_name,
    ACTIONS(1006), 1,
      sym__bquote_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1047), 2,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1045), 9,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_GT,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [12217] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_gantt_task_text_token1,
    ACTIONS(732), 11,
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
  [12239] = 3,
    ACTIONS(1008), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1002), 12,
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
  [12261] = 3,
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
  [12283] = 3,
    ACTIONS(1055), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1053), 12,
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
  [12305] = 3,
    ACTIONS(1047), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1045), 12,
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
  [12327] = 9,
    ACTIONS(854), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_state_composite_body,
    STATE(242), 1,
      sym__state_annotation,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1057), 2,
      aux_sym_state_annotation_fork_token1,
      aux_sym_state_annotation_fork_token2,
    ACTIONS(1059), 2,
      aux_sym_state_annotation_join_token1,
      aux_sym_state_annotation_join_token2,
    ACTIONS(1061), 2,
      aux_sym_state_annotation_choice_token1,
      aux_sym_state_annotation_choice_token2,
    STATE(244), 3,
      sym_state_annotation_fork,
      sym_state_annotation_join,
      sym_state_annotation_choice,
  [12361] = 10,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(1063), 1,
      sym__class_name,
    ACTIONS(1067), 1,
      sym_class_reltype_aggregation,
    STATE(471), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1065), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(419), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12397] = 3,
    ACTIONS(904), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(902), 12,
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
  [12419] = 3,
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
  [12441] = 3,
    ACTIONS(1075), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1073), 12,
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
  [12463] = 3,
    ACTIONS(1079), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1077), 12,
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
  [12485] = 3,
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
  [12507] = 11,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    STATE(679), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12545] = 3,
    ACTIONS(1089), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1087), 12,
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
  [12567] = 3,
    ACTIONS(1093), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1091), 12,
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
    ACTIONS(1097), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1095), 12,
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
  [12611] = 3,
    ACTIONS(1101), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1099), 12,
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
  [12633] = 3,
    ACTIONS(1105), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1103), 12,
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
  [12655] = 12,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1107), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(301), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(686), 1,
      sym__flow_stmt,
    STATE(886), 1,
      sym_flow_stmt_subgraph_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [12695] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1111), 1,
      sym__sequence_actor_word,
    STATE(253), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1113), 2,
      sym_solid_open_arrow,
      anon_sym_DASH_DASH_GT,
    ACTIONS(1109), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DASH_RPAREN,
      sym__newline,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [12723] = 3,
    ACTIONS(1117), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1115), 12,
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
  [12745] = 11,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    STATE(679), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [12783] = 10,
    ACTIONS(808), 1,
      anon_sym_STAR,
    ACTIONS(810), 1,
      anon_sym_GT,
    ACTIONS(818), 1,
      anon_sym_LT,
    ACTIONS(1067), 1,
      sym_class_reltype_aggregation,
    ACTIONS(1121), 1,
      sym__class_name,
    STATE(576), 1,
      sym__class_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(816), 2,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
    ACTIONS(1123), 2,
      sym__bquote_string,
      sym__dquote_string,
    STATE(419), 3,
      sym_class_reltype_extension,
      sym_class_reltype_composition,
      sym_class_reltype_dependency,
  [12819] = 13,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1125), 1,
      aux_sym_diagram_sequence_token1,
    ACTIONS(1127), 1,
      aux_sym_diagram_class_token1,
    ACTIONS(1129), 1,
      aux_sym_diagram_class_token2,
    ACTIONS(1131), 1,
      aux_sym_diagram_state_token1,
    ACTIONS(1133), 1,
      aux_sym_diagram_state_token2,
    ACTIONS(1135), 1,
      aux_sym_diagram_gantt_token1,
    ACTIONS(1137), 1,
      aux_sym_diagram_pie_token1,
    ACTIONS(1139), 1,
      aux_sym_diagram_flow_token1,
    ACTIONS(1141), 1,
      aux_sym_diagram_er_token1,
    ACTIONS(1143), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(251), 2,
      sym_directive,
      aux_sym_diagram_sequence_repeat1,
  [12861] = 3,
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
  [12883] = 3,
    ACTIONS(1151), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1149), 12,
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
  [12905] = 3,
    ACTIONS(1155), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1153), 12,
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
  [12927] = 3,
    ACTIONS(1159), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1157), 12,
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
  [12949] = 5,
    ACTIONS(1165), 1,
      aux_sym_flow_text_literal_token1,
    STATE(284), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1163), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1161), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [12974] = 3,
    ACTIONS(1170), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1168), 11,
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
  [12995] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13032] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13069] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13106] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13143] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(902), 12,
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
  [13162] = 3,
    ACTIONS(1194), 1,
      aux_sym_state_name_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(618), 11,
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
  [13183] = 3,
    ACTIONS(1198), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1196), 11,
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
  [13204] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1200), 1,
      sym__newline,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(510), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13241] = 11,
    ACTIONS(1202), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(1205), 1,
      anon_sym_subgraph,
    ACTIONS(1208), 1,
      anon_sym_end,
    ACTIONS(1210), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(294), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(686), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13278] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13315] = 10,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    STATE(679), 1,
      sym__class_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13350] = 5,
    ACTIONS(1219), 1,
      aux_sym_flow_text_literal_token1,
    STATE(284), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1217), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(1215), 8,
      anon_sym_RBRACE,
      anon_sym_DASH_RPAREN,
      anon_sym_RBRACK_RPAREN,
      anon_sym_RBRACK_RBRACK,
      anon_sym_PIPE_RBRACK,
      anon_sym_RPAREN_RBRACK,
      anon_sym_BSLASH_RBRACK,
      anon_sym_SLASH_RBRACK,
  [13375] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1221), 1,
      sym__newline,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(518), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13412] = 11,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13449] = 10,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(641), 1,
      sym__class_stmt,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13484] = 11,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1225), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(294), 1,
      aux_sym_flow_stmt_subgraph_inner_repeat1,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(686), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13521] = 10,
    ACTIONS(1012), 1,
      anon_sym_class,
    ACTIONS(1014), 1,
      anon_sym_LT_LT,
    ACTIONS(1016), 1,
      sym__class_name,
    ACTIONS(1018), 1,
      sym__bquote_string,
    STATE(208), 1,
      sym_class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(591), 1,
      sym__class_stmt,
    STATE(642), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(656), 4,
      sym_class_stmt_relation,
      sym_class_stmt_class,
      sym_class_stmt_method,
      sym_class_stmt_annotation,
  [13556] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1227), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(568), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13590] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1229), 1,
      ts_builtin_sym_end,
    ACTIONS(1231), 1,
      sym__newline,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(313), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13622] = 7,
    ACTIONS(1233), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1237), 1,
      sym_solid_open_arrow,
    ACTIONS(1239), 1,
      anon_sym_DASH_DASH_GT,
    STATE(374), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(639), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1235), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13650] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1229), 1,
      ts_builtin_sym_end,
    ACTIONS(1241), 1,
      sym__newline,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(319), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13682] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1243), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(458), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [13716] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    ACTIONS(1231), 1,
      sym__newline,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(313), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13748] = 5,
    ACTIONS(1247), 1,
      anon_sym_AMP,
    STATE(315), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1249), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1245), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13772] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1020), 1,
      ts_builtin_sym_end,
    ACTIONS(1022), 1,
      sym__newline,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(304), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13804] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1251), 11,
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
  [13822] = 7,
    ACTIONS(1233), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1237), 1,
      sym_solid_open_arrow,
    ACTIONS(1239), 1,
      anon_sym_DASH_DASH_GT,
    STATE(371), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(639), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1235), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13850] = 9,
    ACTIONS(1253), 1,
      ts_builtin_sym_end,
    ACTIONS(1255), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1258), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1261), 1,
      sym__newline,
    ACTIONS(1264), 1,
      aux_sym_pie_label_token1,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(313), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [13882] = 7,
    ACTIONS(870), 1,
      sym_er_cardinarity_only_one,
    STATE(885), 1,
      sym__er_cardinarity,
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
    STATE(408), 3,
      sym_er_cardinarity_zero_or_one,
      sym_er_cardinarity_zero_or_more,
      sym_er_cardinarity_one_or_more,
  [13910] = 5,
    ACTIONS(1247), 1,
      anon_sym_AMP,
    STATE(324), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1269), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1267), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [13934] = 10,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(486), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [13968] = 7,
    ACTIONS(1233), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1237), 1,
      sym_solid_open_arrow,
    ACTIONS(1239), 1,
      anon_sym_DASH_DASH_GT,
    STATE(369), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(639), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1235), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [13996] = 7,
    ACTIONS(1233), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(1237), 1,
      sym_solid_open_arrow,
    ACTIONS(1239), 1,
      anon_sym_DASH_DASH_GT,
    STATE(372), 1,
      sym_sequence_signal_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(639), 2,
      sym_dotted_open_arrow,
      sym_solid_point,
    ACTIONS(1235), 5,
      sym_solid_arrow,
      sym_dotted_arrow,
      sym_solid_cross,
      sym_dotted_cross,
      sym_dotted_point,
  [14024] = 9,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(994), 1,
      aux_sym_sequence_stmt_title_token1,
    ACTIONS(1000), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1231), 1,
      sym__newline,
    ACTIONS(1271), 1,
      ts_builtin_sym_end,
    STATE(742), 1,
      sym_pie_label,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(313), 2,
      sym__pie_stmt,
      aux_sym_diagram_pie_repeat1,
    STATE(397), 3,
      sym_directive,
      sym_pie_stmt_title,
      sym_pie_stmt_element,
  [14056] = 10,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(710), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14090] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1273), 1,
      sym__newline,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(463), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14124] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(568), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14158] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1277), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(568), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14192] = 5,
    ACTIONS(1281), 1,
      anon_sym_AMP,
    STATE(324), 1,
      aux_sym_flow_node_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1284), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1279), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14216] = 10,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_LT_LT,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(525), 2,
      sym_class_method_line,
      sym_class_annotation_line,
  [14250] = 10,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(568), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14284] = 3,
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
  [14303] = 3,
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
  [14322] = 3,
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
  [14341] = 3,
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
  [14360] = 3,
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
  [14379] = 3,
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
  [14398] = 3,
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
  [14417] = 3,
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
  [14436] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1322), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1320), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14455] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1284), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1279), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14474] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1326), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1324), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14493] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1330), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1328), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14512] = 9,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(568), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14543] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1334), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1332), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14562] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1338), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1336), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14581] = 9,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(458), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14612] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1342), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1340), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14631] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1346), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1344), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14650] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1350), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1348), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14669] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1354), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(1352), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_AMP,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14688] = 9,
    ACTIONS(974), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(976), 1,
      anon_sym_subgraph,
    ACTIONS(980), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(214), 1,
      sym_flow_node,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(453), 1,
      sym__flow_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(634), 3,
      sym_flow_stmt_direction,
      sym_flow_stmt_vertice,
      sym_flow_stmt_subgraph,
  [14719] = 6,
    ACTIONS(1360), 1,
      anon_sym_STAR,
    ACTIONS(1362), 1,
      anon_sym_DOLLAR,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1356), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [14743] = 9,
    ACTIONS(1172), 1,
      anon_sym_TILDE,
    ACTIONS(1176), 1,
      anon_sym_PLUS,
    ACTIONS(1178), 1,
      anon_sym_DASH,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1186), 1,
      sym__alpha_num_token,
    STATE(359), 1,
      aux_sym_class_method_line_repeat1,
    STATE(680), 1,
      sym_class_method_line,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1182), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [14773] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1364), 1,
      sym__newline,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(480), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14799] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    ACTIONS(1368), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(678), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14825] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1370), 3,
      aux_sym_flow_link_arrow_start_token1,
      aux_sym_flow_link_arrow_start_token2,
      aux_sym_flow_link_arrow_start_token3,
    ACTIONS(830), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [14843] = 9,
    ACTIONS(1372), 1,
      sym__newline,
    ACTIONS(1374), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1376), 1,
      aux_sym_er_attribute_key_type_pk_token1,
    ACTIONS(1378), 1,
      aux_sym_er_attribute_key_type_fk_token1,
    STATE(444), 1,
      sym__er_attribute_key_type,
    STATE(893), 1,
      sym__er_word,
    STATE(894), 1,
      sym_er_attribute_comment,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(715), 2,
      sym_er_attribute_key_type_pk,
      sym_er_attribute_key_type_fk,
  [14873] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1382), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1380), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14891] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    ACTIONS(1384), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(678), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14917] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1388), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1386), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [14935] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(678), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14961] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    ACTIONS(1392), 1,
      sym__newline,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(633), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [14987] = 6,
    ACTIONS(1396), 1,
      anon_sym_STAR,
    ACTIONS(1398), 1,
      anon_sym_DOLLAR,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1394), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15011] = 7,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    ACTIONS(1400), 1,
      ts_builtin_sym_end,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(678), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15037] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1404), 3,
      sym__class_name,
      sym_class_reltype_aggregation,
      anon_sym_LT,
    ACTIONS(1402), 6,
      anon_sym_STAR,
      anon_sym_GT,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_LT_PIPE,
      anon_sym_PIPE_GT,
  [15055] = 6,
    ACTIONS(1408), 1,
      anon_sym_STAR,
    ACTIONS(1410), 1,
      anon_sym_DOLLAR,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1406), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15079] = 6,
    ACTIONS(1414), 1,
      anon_sym_STAR,
    ACTIONS(1416), 1,
      anon_sym_DOLLAR,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1412), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15103] = 4,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1420), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1418), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_DOLLAR,
      sym__newline,
  [15123] = 6,
    ACTIONS(1425), 1,
      anon_sym_STAR,
    ACTIONS(1427), 1,
      anon_sym_DOLLAR,
    STATE(364), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1358), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
    ACTIONS(1423), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [15147] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(633), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15170] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(678), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15193] = 6,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT_LBRACE,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    STATE(216), 1,
      sym_er_entity_name,
    STATE(589), 1,
      sym__er_stmt,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(725), 4,
      sym_directive,
      sym_er_stmt_entity,
      sym_er_stmt_entity_relation,
      sym_er_stmt_entity_block,
  [15216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1429), 1,
      anon_sym_PLUS,
    ACTIONS(1431), 1,
      anon_sym_DASH,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(845), 1,
      sym_sequence_actor,
    STATE(548), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15242] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1045), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1429), 1,
      anon_sym_PLUS,
    ACTIONS(1431), 1,
      anon_sym_DASH,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(860), 1,
      sym_sequence_actor,
    STATE(519), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1429), 1,
      anon_sym_PLUS,
    ACTIONS(1431), 1,
      anon_sym_DASH,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(875), 1,
      sym_sequence_actor,
    STATE(483), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15310] = 5,
    ACTIONS(1433), 1,
      anon_sym_DASH_DASH,
    STATE(314), 1,
      sym__er_reltype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(375), 2,
      sym_er_reltype_non_identifying,
      sym_er_reltype_identifying,
    ACTIONS(1435), 3,
      anon_sym_DOT_DOT,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    ACTIONS(1429), 1,
      anon_sym_PLUS,
    ACTIONS(1431), 1,
      anon_sym_DASH,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(834), 1,
      sym_sequence_actor,
    STATE(616), 2,
      sym_sequence_signal_plus_sign,
      sym_sequence_signal_minus_sign,
  [15356] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1437), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15370] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1002), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15386] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1439), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15400] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1441), 7,
      anon_sym_PIPEo,
      anon_sym_o_PIPE,
      anon_sym_RBRACEo,
      anon_sym_o_LBRACE,
      anon_sym_RBRACE_PIPE,
      anon_sym_PIPE_LBRACE,
      sym_er_cardinarity_only_one,
  [15414] = 7,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1443), 1,
      sym__class_name,
    ACTIONS(1445), 1,
      sym__dquote_string,
    STATE(222), 1,
      sym_class_name_body,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    STATE(577), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15437] = 6,
    ACTIONS(1449), 1,
      sym__alpha_num_token,
    STATE(402), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(673), 1,
      sym_flow_vertex_text,
    STATE(848), 1,
      sym_flow_vertex_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1447), 2,
      anon_sym_SEMI,
      sym__newline,
  [15458] = 6,
    ACTIONS(1451), 1,
      aux_sym_sequence_stmt_note_token2,
    ACTIONS(1453), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1455), 1,
      aux_sym_note_placement_right_token1,
    STATE(485), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15479] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1045), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15494] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1459), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1457), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15509] = 6,
    ACTIONS(1453), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1455), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1461), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(523), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15530] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1006), 2,
      sym__class_name,
      sym__bquote_string,
    ACTIONS(1002), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_TILDE,
      sym__newline,
  [15545] = 6,
    ACTIONS(1463), 1,
      anon_sym_RBRACE,
    ACTIONS(1465), 1,
      sym__er_alphanum,
    STATE(693), 1,
      sym_er_attribute_type,
    STATE(884), 1,
      sym_er_stmt_entity_block_inner,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(409), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15566] = 7,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1443), 1,
      sym__class_name,
    ACTIONS(1467), 1,
      sym__dquote_string,
    STATE(222), 1,
      sym_class_name_body,
    STATE(470), 1,
      sym_class_name,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15589] = 4,
    ACTIONS(1471), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1469), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym__newline,
  [15606] = 3,
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
  [15621] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1480), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1478), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15636] = 6,
    ACTIONS(1453), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1455), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1482), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(555), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15657] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1486), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1484), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15672] = 6,
    ACTIONS(1453), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1455), 1,
      aux_sym_note_placement_right_token1,
    ACTIONS(1488), 1,
      aux_sym_sequence_stmt_note_token2,
    STATE(552), 1,
      sym_sequence_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(783), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15693] = 4,
    ACTIONS(1490), 1,
      anon_sym_TILDE,
    STATE(452), 1,
      sym_class_generics,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(884), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15710] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1494), 2,
      anon_sym_subgraph,
      sym__alpha_num_token,
    ACTIONS(1492), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_flow_stmt_direction_token1,
      sym__newline,
  [15725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1500), 1,
      sym_pie_title,
    ACTIONS(1498), 2,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_pie_label_token1,
    ACTIONS(1496), 3,
      ts_builtin_sym_end,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
  [15744] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1502), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15756] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1002), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [15768] = 5,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH_GT,
    STATE(647), 1,
      sym_state_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      sym__newline,
  [15786] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1504), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15798] = 6,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1506), 1,
      sym__class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(474), 1,
      aux_sym_class_name_body_repeat1,
    STATE(733), 1,
      sym_class_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15818] = 4,
    ACTIONS(1510), 1,
      sym__alpha_num_token,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1508), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym__newline,
  [15834] = 5,
    ACTIONS(1512), 1,
      sym__dquote_string,
    STATE(215), 1,
      sym_state_alias,
    STATE(261), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [15852] = 5,
    ACTIONS(1514), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1516), 1,
      aux_sym_note_placement_right_token1,
    STATE(643), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [15870] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1518), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15882] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1520), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15894] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1522), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15906] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1524), 5,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym__er_alphanum,
      anon_sym_DOT_DASH,
      anon_sym_DASH_DOT,
  [15918] = 5,
    ACTIONS(1465), 1,
      sym__er_alphanum,
    ACTIONS(1526), 1,
      anon_sym_RBRACE,
    STATE(693), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(412), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15936] = 6,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1443), 1,
      sym__class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(470), 1,
      sym_class_name,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [15956] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1528), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [15968] = 5,
    ACTIONS(1530), 1,
      anon_sym_RBRACE,
    ACTIONS(1532), 1,
      sym__er_alphanum,
    STATE(693), 1,
      sym_er_attribute_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(412), 2,
      sym_er_attribute,
      aux_sym_er_stmt_entity_block_inner_repeat1,
  [15986] = 5,
    ACTIONS(1514), 1,
      aux_sym_note_placement_left_token1,
    ACTIONS(1516), 1,
      aux_sym_note_placement_right_token1,
    STATE(540), 1,
      sym_state_note_placement,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(653), 2,
      sym_note_placement_left,
      sym_note_placement_right,
  [16004] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1045), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16016] = 6,
    ACTIONS(1018), 1,
      sym__bquote_string,
    ACTIONS(1443), 1,
      sym__class_name,
    STATE(222), 1,
      sym_class_name_body,
    STATE(497), 1,
      sym_class_name,
    STATE(532), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16036] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1535), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16048] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1539), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(865), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16066] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1541), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16078] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1543), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16090] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1545), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(866), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16108] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1547), 5,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
  [16120] = 6,
    ACTIONS(1506), 1,
      sym__class_name,
    ACTIONS(1549), 1,
      sym__bquote_string,
    STATE(394), 1,
      sym_class_name_body,
    STATE(456), 1,
      sym_class_name,
    STATE(598), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16140] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1551), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(868), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16158] = 5,
    ACTIONS(1553), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1555), 1,
      sym_flow_text_quoted,
    STATE(464), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(869), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16176] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1557), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(870), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16194] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1559), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(873), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16212] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1561), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(878), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16230] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1563), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(879), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16248] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1565), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(880), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16266] = 5,
    ACTIONS(1553), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1567), 1,
      sym_flow_text_quoted,
    STATE(464), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(881), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16284] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1569), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(882), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16302] = 4,
    ACTIONS(1571), 1,
      sym__alpha_num_token,
    STATE(432), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1469), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16318] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1574), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(688), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16336] = 5,
    ACTIONS(1537), 1,
      aux_sym_flow_text_literal_token1,
    ACTIONS(1576), 1,
      sym_flow_text_quoted,
    STATE(297), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(689), 2,
      sym__flow_text,
      sym_flow_text_literal,
  [16354] = 4,
    ACTIONS(1578), 1,
      sym__alpha_num_token,
    STATE(432), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1580), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16370] = 5,
    ACTIONS(820), 1,
      anon_sym_DASH_DASH,
    ACTIONS(822), 1,
      anon_sym_DOT_DOT,
    STATE(262), 1,
      sym__class_linetype,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    STATE(354), 2,
      sym_class_linetype_solid,
      sym_class_linetype_dotted,
  [16388] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1582), 5,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT_LBRACE,
      aux_sym_sequence_stmt_title_token1,
      sym__newline,
      aux_sym_pie_label_token1,
  [16400] = 5,
    ACTIONS(1584), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(309), 1,
      sym_flow_vertex,
    STATE(352), 1,
      sym_flow_node,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1588), 1,
      aux_sym_class_label_token1,
    STATE(722), 1,
      sym_class_label,
    ACTIONS(1586), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16434] = 3,
    STATE(348), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1590), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1588), 1,
      aux_sym_class_label_token1,
    STATE(709), 1,
      sym_class_label,
    ACTIONS(1592), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16464] = 4,
    ACTIONS(1277), 1,
      ts_builtin_sym_end,
    STATE(462), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1594), 2,
      anon_sym_SEMI,
      sym__newline,
  [16479] = 3,
    STATE(365), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1596), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16492] = 5,
    ACTIONS(1374), 1,
      aux_sym_pie_label_token1,
    ACTIONS(1598), 1,
      sym__newline,
    STATE(889), 1,
      sym_er_attribute_comment,
    STATE(893), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16509] = 3,
    ACTIONS(1600), 1,
      aux_sym_flow_stmt_direction_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1208), 3,
      anon_sym_subgraph,
      anon_sym_end,
      sym__alpha_num_token,
  [16522] = 3,
    STATE(363), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1602), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16535] = 3,
    STATE(362), 1,
      aux_sym_class_method_line_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1604), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__alpha_num_token,
  [16548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(281), 1,
      sym_state_description,
    ACTIONS(896), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16565] = 4,
    ACTIONS(1606), 1,
      aux_sym_flow_text_literal_token1,
    STATE(449), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1161), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16580] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1196), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16591] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1609), 4,
      sym__newline,
      aux_sym_pie_label_token1,
      aux_sym_er_attribute_key_type_pk_token1,
      aux_sym_er_attribute_key_type_fk_token1,
  [16602] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1168), 4,
      ts_builtin_sym_end,
      anon_sym_COLON_COLON_COLON,
      anon_sym_LBRACE,
      sym__newline,
  [16613] = 4,
    ACTIONS(1277), 1,
      ts_builtin_sym_end,
    STATE(460), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1594), 2,
      anon_sym_SEMI,
      sym__newline,
  [16628] = 3,
    STATE(898), 1,
      sym_flow_link_arrow,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(826), 3,
      aux_sym_flow_link_arrow_token1,
      aux_sym_flow_link_arrow_token2,
      aux_sym_flow_link_arrow_token3,
  [16641] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1611), 1,
      sym__sequence_actor_word,
    STATE(455), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1038), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16658] = 4,
    ACTIONS(1616), 1,
      anon_sym_COLON_COLON_COLON,
    ACTIONS(1618), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1614), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16673] = 4,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(462), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1620), 2,
      anon_sym_SEMI,
      sym__newline,
  [16688] = 4,
    ACTIONS(1286), 1,
      ts_builtin_sym_end,
    STATE(442), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1620), 2,
      anon_sym_SEMI,
      sym__newline,
  [16703] = 4,
    STATE(727), 1,
      sym_er_role,
    STATE(731), 1,
      sym__er_word,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1622), 2,
      aux_sym_pie_label_token1,
      sym__er_alphanum,
  [16718] = 4,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    STATE(462), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1624), 2,
      anon_sym_SEMI,
      sym__newline,
  [16733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1588), 1,
      aux_sym_class_label_token1,
    STATE(705), 1,
      sym_class_label,
    ACTIONS(1626), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16750] = 4,
    ACTIONS(1628), 1,
      ts_builtin_sym_end,
    STATE(462), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1630), 2,
      anon_sym_SEMI,
      sym__newline,
  [16765] = 4,
    ACTIONS(1633), 1,
      ts_builtin_sym_end,
    STATE(457), 1,
      aux_sym_diagram_flow_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1635), 2,
      anon_sym_SEMI,
      sym__newline,
  [16780] = 4,
    ACTIONS(1637), 1,
      aux_sym_flow_text_literal_token1,
    STATE(449), 1,
      aux_sym_flow_text_literal_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1215), 2,
      anon_sym_RPAREN_RPAREN,
      anon_sym_RBRACE_RBRACE,
  [16795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1639), 1,
      sym__sequence_actor_word,
    STATE(455), 1,
      aux_sym_sequence_actor_repeat1,
    ACTIONS(1109), 2,
      aux_sym_sequence_stmt_participant_token2,
      sym__newline,
  [16812] = 3,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1641), 3,
      anon_sym_SEMI,
      sym__newline,
      sym__alpha_num_token,
  [16825] = 4,
    ACTIONS(1643), 1,
      ts_builtin_sym_end,
    ACTIONS(1645), 1,
      sym__newline,
    STATE(467), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(790), 1,
      sym_sequence_actor,
  [16855] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1423), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [16865] = 3,
    ACTIONS(1648), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1586), 2,
      ts_builtin_sym_end,
      sym__newline,
  [16877] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1650), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [16887] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1652), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [16897] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(892), 1,
      sym_sequence_text,
  [16913] = 4,
    ACTIONS(1656), 1,
      sym__class_name,
    ACTIONS(1658), 1,
      sym__bquote_string,
    STATE(612), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1660), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(126), 1,
      sym_sequence_text,
  [16943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1660), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(125), 1,
      sym_sequence_text,
  [16959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1660), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(124), 1,
      sym_sequence_text,
  [16975] = 4,
    ACTIONS(1662), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1664), 1,
      aux_sym_sequence_stmt_alt_token2,
    STATE(478), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [16989] = 4,
    ACTIONS(1667), 1,
      aux_sym_sequence_stmt_loop_token2,
    ACTIONS(1669), 1,
      aux_sym_sequence_stmt_par_token2,
    STATE(479), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17003] = 4,
    ACTIONS(1672), 1,
      ts_builtin_sym_end,
    ACTIONS(1674), 1,
      sym__newline,
    STATE(632), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(718), 1,
      sym_sequence_actor,
  [17033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(877), 1,
      sym_sequence_actor,
  [17049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(876), 1,
      sym_sequence_actor,
  [17065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(717), 1,
      sym_sequence_actor,
  [17081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(874), 1,
      sym_sequence_actor,
  [17097] = 4,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    ACTIONS(1678), 1,
      sym__newline,
    STATE(513), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17111] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1680), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(479), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17125] = 4,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    ACTIONS(1678), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17139] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1682), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17149] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1684), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17159] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1686), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17169] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1688), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17179] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1690), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17189] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1692), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17199] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1694), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17209] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1696), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [17219] = 3,
    ACTIONS(1698), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1592), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17231] = 4,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1700), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(478), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17245] = 4,
    ACTIONS(1702), 1,
      ts_builtin_sym_end,
    ACTIONS(1704), 1,
      sym__newline,
    STATE(645), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(816), 1,
      sym_sequence_text,
  [17275] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1706), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(687), 1,
      sym_sequence_actor,
  [17301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(810), 1,
      sym_sequence_text,
  [17317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(809), 1,
      sym_sequence_text,
  [17333] = 4,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1708), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(478), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17347] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(872), 1,
      sym_sequence_text,
  [17363] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(871), 1,
      sym_sequence_text,
  [17379] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1710), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(479), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(862), 1,
      sym_sequence_actor,
  [17409] = 4,
    ACTIONS(1712), 1,
      anon_sym_RBRACE,
    ACTIONS(1714), 1,
      sym__newline,
    STATE(528), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(666), 1,
      sym_sequence_actor,
  [17439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(671), 1,
      sym_sequence_actor,
  [17455] = 4,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
    ACTIONS(1716), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1718), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(132), 1,
      sym__sequence_rest_text,
    STATE(140), 1,
      sym_sequence_text,
  [17485] = 4,
    ACTIONS(1720), 1,
      anon_sym_RBRACE,
    ACTIONS(1722), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17499] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(897), 1,
      sym_sequence_text,
  [17515] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1718), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(132), 1,
      sym__sequence_rest_text,
    STATE(133), 1,
      sym_sequence_text,
  [17531] = 4,
    ACTIONS(1725), 1,
      anon_sym_RBRACE,
    ACTIONS(1727), 1,
      sym__newline,
    STATE(488), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(861), 1,
      sym_sequence_actor,
  [17561] = 3,
    ACTIONS(1731), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1729), 2,
      ts_builtin_sym_end,
      sym__newline,
  [17573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(758), 1,
      sym_sequence_actor,
  [17589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1718), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(132), 1,
      sym__sequence_rest_text,
    STATE(135), 1,
      sym_sequence_text,
  [17605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(859), 1,
      sym_sequence_actor,
  [17621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(692), 1,
      sym_sequence_actor,
  [17637] = 4,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    ACTIONS(1733), 1,
      sym__newline,
    STATE(539), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1718), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(132), 1,
      sym__sequence_rest_text,
    STATE(137), 1,
      sym_sequence_text,
  [17667] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1735), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(479), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17681] = 4,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    ACTIONS(1733), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(672), 1,
      sym_sequence_actor,
  [17711] = 4,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1737), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(478), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(857), 1,
      sym_sequence_text,
  [17741] = 4,
    ACTIONS(1658), 1,
      sym__bquote_string,
    ACTIONS(1739), 1,
      sym__class_name,
    STATE(612), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17755] = 4,
    ACTIONS(1741), 1,
      sym__alpha_num_token,
    STATE(435), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(454), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17769] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1743), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(856), 1,
      sym_sequence_text,
  [17795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(803), 1,
      sym_sequence_actor,
  [17811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(802), 1,
      sym_sequence_actor,
  [17827] = 4,
    ACTIONS(1400), 1,
      ts_builtin_sym_end,
    ACTIONS(1745), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17841] = 4,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    ACTIONS(1747), 1,
      sym__newline,
    STATE(515), 1,
      aux_sym_class_stmt_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17855] = 3,
    STATE(787), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [17867] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1749), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [17877] = 4,
    ACTIONS(63), 1,
      aux_sym_sequence_stmt_par_token2,
    ACTIONS(1751), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(479), 1,
      aux_sym_sequence_stmt_par_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17891] = 4,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(1753), 1,
      sym__newline,
    STATE(467), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17905] = 4,
    ACTIONS(105), 1,
      aux_sym_sequence_stmt_alt_token2,
    ACTIONS(1755), 1,
      aux_sym_sequence_stmt_loop_token2,
    STATE(478), 1,
      aux_sym_sequence_stmt_alt_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17919] = 4,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
    ACTIONS(1757), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [17933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(847), 1,
      sym_sequence_actor,
  [17949] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(805), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [17965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(846), 1,
      sym_sequence_actor,
  [17981] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(761), 1,
      sym_sequence_actor,
  [17997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(778), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(776), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(826), 1,
      sym_sequence_actor,
  [18045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(775), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(736), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(844), 1,
      sym_sequence_actor,
  [18093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(668), 1,
      sym_sequence_actor,
  [18109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(842), 1,
      sym_sequence_text,
  [18125] = 3,
    STATE(223), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1759), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [18137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(841), 1,
      sym_sequence_text,
  [18153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(701), 1,
      sym_sequence_actor,
  [18169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(819), 1,
      sym_sequence_text,
  [18185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(818), 1,
      sym_sequence_text,
  [18201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(817), 1,
      sym_sequence_text,
  [18217] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(815), 1,
      sym_sequence_actor,
  [18233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(814), 1,
      sym_sequence_actor,
  [18249] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(813), 1,
      sym_sequence_actor,
  [18265] = 4,
    ACTIONS(1761), 1,
      sym__alpha_num_token,
    STATE(578), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(899), 1,
      sym_flow_arrow_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18279] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1628), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18289] = 4,
    ACTIONS(1763), 1,
      sym__alpha_num_token,
    STATE(402), 1,
      aux_sym_flow_arrow_text_repeat1,
    STATE(840), 1,
      sym_flow_vertex_text,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(812), 1,
      sym_sequence_actor,
  [18319] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1765), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym__newline,
  [18329] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1767), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18339] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(702), 1,
      sym_sequence_actor,
  [18355] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(770), 1,
      sym_sequence_actor,
  [18371] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(764), 1,
      sym_sequence_actor,
  [18387] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1065), 3,
      sym__class_name,
      sym__bquote_string,
      sym__dquote_string,
  [18397] = 3,
    ACTIONS(1771), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1769), 2,
      ts_builtin_sym_end,
      sym__newline,
  [18409] = 4,
    ACTIONS(1510), 1,
      sym__alpha_num_token,
    ACTIONS(1580), 1,
      anon_sym_PIPE,
    STATE(388), 1,
      aux_sym_flow_arrow_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(154), 1,
      sym__sequence_rest_text,
    STATE(179), 1,
      sym_sequence_text,
  [18439] = 4,
    ACTIONS(1775), 1,
      ts_builtin_sym_end,
    ACTIONS(1777), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(154), 1,
      sym__sequence_rest_text,
    STATE(180), 1,
      sym_sequence_text,
  [18469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(797), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(796), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(888), 1,
      sym_sequence_text,
  [18517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(887), 1,
      sym_sequence_actor,
  [18533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(890), 1,
      sym_sequence_text,
  [18549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(795), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(793), 1,
      sym_sequence_actor,
  [18581] = 4,
    ACTIONS(1384), 1,
      ts_builtin_sym_end,
    ACTIONS(1780), 1,
      sym__newline,
    STATE(538), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18595] = 4,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(1782), 1,
      sym__newline,
    STATE(543), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18609] = 4,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    ACTIONS(1784), 1,
      sym__newline,
    STATE(545), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(792), 1,
      sym_sequence_actor,
  [18639] = 4,
    ACTIONS(1786), 1,
      ts_builtin_sym_end,
    ACTIONS(1788), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18653] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(154), 1,
      sym__sequence_rest_text,
    STATE(181), 1,
      sym_sequence_text,
  [18669] = 4,
    ACTIONS(1384), 1,
      ts_builtin_sym_end,
    ACTIONS(1780), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18683] = 4,
    ACTIONS(1584), 1,
      sym__alpha_num_token,
    STATE(54), 1,
      sym_flow_vertex_id,
    STATE(336), 1,
      sym_flow_vertex,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1773), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(154), 1,
      sym__sequence_rest_text,
    STATE(182), 1,
      sym_sequence_text,
  [18713] = 4,
    ACTIONS(1656), 1,
      sym__class_name,
    ACTIONS(1791), 1,
      sym__bquote_string,
    STATE(612), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(791), 1,
      sym_sequence_actor,
  [18743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1660), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(99), 1,
      sym__sequence_rest_text,
    STATE(127), 1,
      sym_sequence_text,
  [18759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(798), 1,
      sym_sequence_actor,
  [18775] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(747), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(746), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18807] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1793), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [18817] = 4,
    ACTIONS(1795), 1,
      anon_sym_COLON,
    ACTIONS(1797), 1,
      aux_sym_gantt_task_text_token1,
    STATE(605), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(785), 1,
      sym_sequence_actor,
  [18847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(741), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18863] = 4,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(1782), 1,
      sym__newline,
    STATE(467), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(773), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(772), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(771), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [18925] = 4,
    ACTIONS(1800), 1,
      sym__class_name,
    ACTIONS(1803), 1,
      sym__bquote_string,
    STATE(612), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(769), 1,
      sym_sequence_actor,
  [18955] = 4,
    ACTIONS(1119), 1,
      ts_builtin_sym_end,
    ACTIONS(1784), 1,
      sym__newline,
    STATE(580), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [18969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(768), 1,
      sym_sequence_actor,
  [18985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(855), 1,
      sym_sequence_actor,
  [19001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(767), 1,
      sym_sequence_actor,
  [19017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(766), 1,
      sym_sequence_actor,
  [19033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(755), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [19049] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(754), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [19065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1805), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(162), 1,
      sym_sequence_text,
    STATE(189), 1,
      sym__sequence_rest_text,
  [19081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1805), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(165), 1,
      sym_sequence_text,
    STATE(189), 1,
      sym__sequence_rest_text,
  [19097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1805), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(145), 1,
      sym_sequence_text,
    STATE(189), 1,
      sym__sequence_rest_text,
  [19113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1805), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(167), 1,
      sym_sequence_text,
    STATE(189), 1,
      sym__sequence_rest_text,
  [19129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(753), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [19145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(740), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [19161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(649), 1,
      sym_sequence_actor,
  [19177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1676), 1,
      sym__sequence_actor_word,
    STATE(465), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(730), 1,
      sym_sequence_actor,
  [19193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(750), 1,
      sym_sequence_text,
    STATE(807), 1,
      sym__sequence_rest_text,
  [19209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(738), 1,
      sym_sequence_actor,
  [19225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(788), 1,
      sym_sequence_actor,
  [19241] = 4,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
    ACTIONS(1807), 1,
      sym__newline,
    STATE(593), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19255] = 4,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
    ACTIONS(1807), 1,
      sym__newline,
    STATE(595), 1,
      aux_sym_diagram_er_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19269] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1809), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym__newline,
  [19279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(794), 1,
      sym_sequence_actor,
  [19295] = 4,
    ACTIONS(1811), 1,
      anon_sym_COLON,
    ACTIONS(1813), 1,
      aux_sym_gantt_task_text_token1,
    STATE(605), 1,
      aux_sym_gantt_task_text_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19309] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(69), 1,
      sym__sequence_actor_word,
    STATE(275), 1,
      aux_sym_sequence_actor_repeat1,
    STATE(737), 1,
      sym_sequence_actor,
  [19325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1817), 1,
      sym__sequence_actor_word,
    ACTIONS(1815), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1821), 1,
      sym__sequence_actor_word,
    ACTIONS(1819), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1825), 1,
      sym__sequence_actor_word,
    ACTIONS(1823), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [19367] = 4,
    ACTIONS(1827), 1,
      ts_builtin_sym_end,
    ACTIONS(1829), 1,
      sym__newline,
    STATE(614), 1,
      aux_sym_diagram_class_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19381] = 4,
    ACTIONS(1658), 1,
      sym__bquote_string,
    ACTIONS(1831), 1,
      sym__class_name,
    STATE(612), 1,
      aux_sym_class_name_body_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19395] = 3,
    STATE(838), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19407] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1833), 1,
      sym__newline,
    STATE(608), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19421] = 4,
    ACTIONS(668), 1,
      ts_builtin_sym_end,
    ACTIONS(1833), 1,
      sym__newline,
    STATE(467), 1,
      aux_sym_diagram_state_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(807), 1,
      sym__sequence_rest_text,
    STATE(808), 1,
      sym_sequence_text,
  [19451] = 3,
    STATE(223), 1,
      sym_state_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19463] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1835), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19472] = 3,
    ACTIONS(1837), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1839), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(226), 1,
      sym_gantt_meta_format,
  [19496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(233), 1,
      sym_gantt_meta_format,
  [19509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(743), 1,
      sym__sequence_rest_text,
  [19522] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1843), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(234), 1,
      sym_gantt_meta_format,
  [19544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(228), 1,
      sym_state_description,
  [19557] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1845), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(236), 1,
      sym_gantt_meta_format,
  [19579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(739), 1,
      sym__sequence_rest_text,
  [19592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(237), 1,
      sym_gantt_meta_format,
  [19605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(238), 1,
      sym_gantt_meta_format,
  [19618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(239), 1,
      sym_gantt_meta_format,
  [19631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(744), 1,
      sym__sequence_rest_text,
  [19644] = 3,
    ACTIONS(1366), 1,
      sym__er_alphanum,
    STATE(851), 1,
      sym_er_entity_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(853), 1,
      sym__sequence_rest_text,
  [19668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(854), 1,
      sym__sequence_rest_text,
  [19681] = 3,
    ACTIONS(1847), 1,
      anon_sym_COLON,
    ACTIONS(1849), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19692] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1643), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19701] = 3,
    ACTIONS(1851), 1,
      anon_sym_COLON,
    ACTIONS(1853), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19712] = 3,
    ACTIONS(1855), 1,
      anon_sym_COLON,
    ACTIONS(1857), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(827), 1,
      sym__sequence_rest_text,
  [19736] = 3,
    ACTIONS(1859), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1861), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19747] = 3,
    ACTIONS(1863), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1865), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19758] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1867), 2,
      anon_sym_SEMI,
      sym__newline,
  [19767] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1869), 2,
      anon_sym_PIPE,
      sym__alpha_num_token,
  [19776] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1871), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(752), 1,
      sym__sequence_rest_text,
  [19798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(235), 1,
      sym_gantt_meta_format,
  [19811] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1786), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19820] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1775), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19829] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1873), 2,
      ts_builtin_sym_end,
      sym__newline,
  [19838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(756), 1,
      sym__sequence_rest_text,
  [19851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(762), 1,
      sym__sequence_rest_text,
  [19864] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1875), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [19873] = 3,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(282), 1,
      sym_state_composite_body,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(900), 1,
      aux_sym_class_label_token1,
    STATE(283), 1,
      sym_state_description,
  [19897] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1877), 2,
      anon_sym_SEMI,
      sym__newline,
  [19906] = 3,
    ACTIONS(1879), 1,
      anon_sym_COLON,
    ACTIONS(1881), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19917] = 3,
    ACTIONS(1883), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1885), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19928] = 3,
    ACTIONS(1887), 1,
      anon_sym_BSLASH_RBRACK,
    ACTIONS(1889), 1,
      anon_sym_SLASH_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19939] = 3,
    ACTIONS(1891), 1,
      anon_sym_PIPE,
    ACTIONS(1893), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1841), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(231), 1,
      sym_gantt_meta_format,
  [19963] = 3,
    ACTIONS(1895), 1,
      anon_sym_COLON,
    ACTIONS(1897), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19974] = 3,
    ACTIONS(1899), 1,
      sym__er_alphanum,
    STATE(353), 1,
      sym_er_attribute_name,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [19985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(786), 1,
      sym__sequence_rest_text,
  [19998] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1901), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20007] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1903), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(734), 1,
      sym__sequence_rest_text,
  [20029] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1905), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(1654), 1,
      aux_sym__sequence_rest_text_token1,
    STATE(799), 1,
      sym__sequence_rest_text,
  [20051] = 3,
    ACTIONS(1907), 1,
      anon_sym_COLON,
    ACTIONS(1909), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20062] = 3,
    ACTIONS(1911), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1913), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20073] = 3,
    ACTIONS(1915), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1917), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20084] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1919), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20093] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1921), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20102] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1923), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20111] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1925), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20120] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1927), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20129] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1929), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20138] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1626), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20147] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1720), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20156] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1931), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20165] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1933), 2,
      anon_sym_RBRACE,
      sym__newline,
  [20174] = 3,
    ACTIONS(1935), 1,
      anon_sym_COLON,
    ACTIONS(1937), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20185] = 3,
    ACTIONS(1939), 1,
      anon_sym_COLON,
    ACTIONS(1941), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20196] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1943), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20205] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1945), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20214] = 3,
    ACTIONS(1947), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1949), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20225] = 3,
    ACTIONS(1951), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1953), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20236] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1955), 2,
      sym__newline,
      aux_sym_pie_label_token1,
  [20245] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1957), 2,
      anon_sym_RBRACE,
      sym__er_alphanum,
  [20254] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1959), 2,
      anon_sym_SEMI,
      sym__newline,
  [20263] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1592), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20272] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1961), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20281] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1963), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20290] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1965), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20299] = 3,
    ACTIONS(1967), 1,
      anon_sym_COLON,
    ACTIONS(1969), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20310] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1971), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20319] = 3,
    ACTIONS(1973), 1,
      anon_sym_COLON,
    ACTIONS(1975), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20330] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1977), 2,
      anon_sym_LBRACK_STAR_RBRACK,
      aux_sym_state_name_token1,
  [20339] = 3,
    ACTIONS(1979), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(1981), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20350] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1983), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20359] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1985), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20368] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(1987), 2,
      ts_builtin_sym_end,
      sym__newline,
  [20377] = 2,
    ACTIONS(1989), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20385] = 2,
    ACTIONS(1991), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20393] = 2,
    ACTIONS(1993), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20401] = 2,
    ACTIONS(1995), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20409] = 2,
    ACTIONS(1997), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20417] = 2,
    ACTIONS(1999), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20425] = 2,
    ACTIONS(2001), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20433] = 2,
    ACTIONS(2003), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20441] = 2,
    ACTIONS(2005), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20449] = 2,
    ACTIONS(2007), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20457] = 2,
    ACTIONS(2009), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20465] = 2,
    ACTIONS(2011), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20473] = 2,
    ACTIONS(2013), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20481] = 2,
    ACTIONS(2015), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20489] = 2,
    ACTIONS(2017), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20497] = 2,
    ACTIONS(2019), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20505] = 2,
    ACTIONS(2021), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20513] = 2,
    ACTIONS(2023), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20521] = 2,
    ACTIONS(2025), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20529] = 2,
    ACTIONS(2027), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20537] = 2,
    ACTIONS(2029), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20545] = 2,
    ACTIONS(2031), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20553] = 2,
    ACTIONS(2033), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20561] = 2,
    ACTIONS(2035), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20569] = 2,
    ACTIONS(2037), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20577] = 2,
    ACTIONS(2039), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20585] = 2,
    ACTIONS(2041), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20593] = 2,
    ACTIONS(2043), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20601] = 2,
    ACTIONS(2045), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20609] = 2,
    ACTIONS(2047), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20617] = 2,
    ACTIONS(2049), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20625] = 2,
    ACTIONS(2051), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20633] = 2,
    ACTIONS(2053), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20641] = 2,
    ACTIONS(2055), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20649] = 2,
    ACTIONS(2057), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20657] = 2,
    ACTIONS(2059), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20665] = 2,
    ACTIONS(2061), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20673] = 2,
    ACTIONS(2063), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20681] = 2,
    ACTIONS(2065), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20689] = 2,
    ACTIONS(2067), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20697] = 2,
    ACTIONS(2069), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20705] = 2,
    ACTIONS(2071), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20713] = 2,
    ACTIONS(2073), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20721] = 2,
    ACTIONS(2075), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20729] = 2,
    ACTIONS(2077), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20737] = 2,
    ACTIONS(2079), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20745] = 2,
    ACTIONS(2081), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2083), 1,
      sym__sequence_actor_word,
  [20763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2085), 1,
      sym__sequence_actor_word,
  [20773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2087), 1,
      sym__sequence_actor_word,
  [20783] = 2,
    ACTIONS(2089), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20791] = 2,
    ACTIONS(2091), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20799] = 2,
    ACTIONS(2093), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20807] = 2,
    ACTIONS(2095), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20815] = 2,
    ACTIONS(2097), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20823] = 2,
    ACTIONS(2099), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20831] = 2,
    ACTIONS(2101), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20839] = 2,
    ACTIONS(2103), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20847] = 2,
    ACTIONS(2105), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20855] = 2,
    ACTIONS(2107), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20863] = 2,
    ACTIONS(2109), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20871] = 2,
    ACTIONS(2111), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20879] = 2,
    ACTIONS(2113), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20887] = 2,
    ACTIONS(2115), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20895] = 2,
    ACTIONS(2117), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20903] = 2,
    ACTIONS(2119), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20911] = 2,
    ACTIONS(2121), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20919] = 2,
    ACTIONS(2123), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20927] = 2,
    ACTIONS(2125), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20935] = 2,
    ACTIONS(2127), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20943] = 2,
    ACTIONS(744), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20951] = 2,
    ACTIONS(2129), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20959] = 2,
    ACTIONS(2131), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [20967] = 2,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20975] = 2,
    ACTIONS(2133), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20983] = 2,
    ACTIONS(2135), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20991] = 2,
    ACTIONS(2137), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [20999] = 2,
    ACTIONS(2139), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21007] = 2,
    ACTIONS(2141), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21015] = 2,
    ACTIONS(2143), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21023] = 2,
    ACTIONS(2145), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21031] = 2,
    ACTIONS(2147), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21039] = 2,
    ACTIONS(2149), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21047] = 2,
    ACTIONS(2151), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21055] = 2,
    ACTIONS(2153), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21063] = 2,
    ACTIONS(2155), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21071] = 2,
    ACTIONS(2157), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21079] = 2,
    ACTIONS(2159), 1,
      aux_sym_sequence_stmt_participant_token2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21087] = 2,
    ACTIONS(2161), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2163), 1,
      sym_pie_value,
  [21105] = 2,
    ACTIONS(2165), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21113] = 2,
    ACTIONS(2167), 1,
      anon_sym_RBRACE_PERCENT_PERCENT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21121] = 2,
    ACTIONS(1847), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21129] = 2,
    ACTIONS(2169), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21137] = 2,
    ACTIONS(2171), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21145] = 2,
    ACTIONS(2173), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21153] = 2,
    ACTIONS(2175), 1,
      sym_type_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21161] = 2,
    ACTIONS(2177), 1,
      sym_arg_directive,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2179), 1,
      sym__sequence_actor_word,
  [21179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2181), 1,
      sym__sequence_actor_word,
  [21189] = 2,
    ACTIONS(2183), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21197] = 2,
    ACTIONS(2185), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21205] = 2,
    ACTIONS(2187), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21213] = 2,
    ACTIONS(2189), 1,
      aux_sym_class_generics_token1,
    ACTIONS(65), 2,
      sym__whitespace,
      sym_comment,
  [21221] = 2,
    ACTIONS(2191), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21229] = 2,
    ACTIONS(2193), 1,
      sym_state_id,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21237] = 2,
    ACTIONS(2195), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21245] = 2,
    ACTIONS(2197), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21253] = 2,
    ACTIONS(2199), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(2201), 1,
      sym_gantt_task_data,
  [21271] = 2,
    ACTIONS(1851), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21279] = 2,
    ACTIONS(2203), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21287] = 2,
    ACTIONS(2205), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21295] = 2,
    ACTIONS(2207), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21303] = 2,
    ACTIONS(2209), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21311] = 2,
    ACTIONS(2211), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21319] = 2,
    ACTIONS(2213), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21327] = 2,
    ACTIONS(2215), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21335] = 2,
    ACTIONS(2217), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21343] = 2,
    ACTIONS(2219), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21351] = 2,
    ACTIONS(2221), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21359] = 2,
    ACTIONS(2223), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21367] = 2,
    ACTIONS(2225), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21375] = 2,
    ACTIONS(2227), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21383] = 2,
    ACTIONS(2229), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21391] = 2,
    ACTIONS(1895), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21399] = 2,
    ACTIONS(2231), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21407] = 2,
    ACTIONS(2233), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21415] = 2,
    ACTIONS(2235), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21423] = 2,
    ACTIONS(2237), 1,
      anon_sym_TILDE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21431] = 2,
    ACTIONS(2239), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21439] = 2,
    ACTIONS(2241), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21447] = 2,
    ACTIONS(2243), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21455] = 2,
    ACTIONS(2245), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21463] = 2,
    ACTIONS(2247), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21471] = 2,
    ACTIONS(2249), 1,
      anon_sym_RPAREN_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21479] = 2,
    ACTIONS(2251), 1,
      anon_sym_DASH_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21487] = 2,
    ACTIONS(2253), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21495] = 2,
    ACTIONS(2255), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21503] = 2,
    ACTIONS(2257), 1,
      anon_sym_RBRACK_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21511] = 2,
    ACTIONS(1879), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21519] = 2,
    ACTIONS(2259), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21527] = 2,
    ACTIONS(2261), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21535] = 2,
    ACTIONS(2263), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21543] = 2,
    ACTIONS(2265), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21551] = 2,
    ACTIONS(2267), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21559] = 2,
    ACTIONS(2269), 1,
      anon_sym_RPAREN_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21567] = 2,
    ACTIONS(2271), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21575] = 2,
    ACTIONS(2273), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21583] = 2,
    ACTIONS(2275), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21591] = 2,
    ACTIONS(2277), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21599] = 2,
    ACTIONS(2279), 1,
      sym__er_alphanum,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21607] = 2,
    ACTIONS(2281), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21615] = 2,
    ACTIONS(2283), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21623] = 2,
    ACTIONS(2285), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21631] = 2,
    ACTIONS(2287), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21639] = 2,
    ACTIONS(2289), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21647] = 2,
    ACTIONS(2291), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21655] = 2,
    ACTIONS(2293), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21663] = 2,
    ACTIONS(2295), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21671] = 2,
    ACTIONS(1598), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21679] = 2,
    ACTIONS(2297), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21687] = 2,
    ACTIONS(2299), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21695] = 2,
    ACTIONS(2301), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21703] = 2,
    ACTIONS(2303), 1,
      sym__alpha_num_token,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21711] = 2,
    ACTIONS(2305), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21719] = 2,
    ACTIONS(2307), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21727] = 2,
    ACTIONS(2309), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21735] = 2,
    ACTIONS(2311), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21743] = 2,
    ACTIONS(2313), 1,
      sym__newline,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [21751] = 2,
    ACTIONS(2315), 1,
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
  [SMALL_STATE(18)] = 1634,
  [SMALL_STATE(19)] = 1731,
  [SMALL_STATE(20)] = 1830,
  [SMALL_STATE(21)] = 1929,
  [SMALL_STATE(22)] = 2028,
  [SMALL_STATE(23)] = 2127,
  [SMALL_STATE(24)] = 2226,
  [SMALL_STATE(25)] = 2325,
  [SMALL_STATE(26)] = 2424,
  [SMALL_STATE(27)] = 2523,
  [SMALL_STATE(28)] = 2622,
  [SMALL_STATE(29)] = 2721,
  [SMALL_STATE(30)] = 2820,
  [SMALL_STATE(31)] = 2919,
  [SMALL_STATE(32)] = 3018,
  [SMALL_STATE(33)] = 3117,
  [SMALL_STATE(34)] = 3214,
  [SMALL_STATE(35)] = 3313,
  [SMALL_STATE(36)] = 3412,
  [SMALL_STATE(37)] = 3511,
  [SMALL_STATE(38)] = 3610,
  [SMALL_STATE(39)] = 3709,
  [SMALL_STATE(40)] = 3808,
  [SMALL_STATE(41)] = 3905,
  [SMALL_STATE(42)] = 4004,
  [SMALL_STATE(43)] = 4103,
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
  [SMALL_STATE(57)] = 5372,
  [SMALL_STATE(58)] = 5439,
  [SMALL_STATE(59)] = 5506,
  [SMALL_STATE(60)] = 5573,
  [SMALL_STATE(61)] = 5640,
  [SMALL_STATE(62)] = 5707,
  [SMALL_STATE(63)] = 5774,
  [SMALL_STATE(64)] = 5841,
  [SMALL_STATE(65)] = 5908,
  [SMALL_STATE(66)] = 5971,
  [SMALL_STATE(67)] = 6034,
  [SMALL_STATE(68)] = 6097,
  [SMALL_STATE(69)] = 6160,
  [SMALL_STATE(70)] = 6223,
  [SMALL_STATE(71)] = 6286,
  [SMALL_STATE(72)] = 6349,
  [SMALL_STATE(73)] = 6412,
  [SMALL_STATE(74)] = 6475,
  [SMALL_STATE(75)] = 6538,
  [SMALL_STATE(76)] = 6598,
  [SMALL_STATE(77)] = 6658,
  [SMALL_STATE(78)] = 6718,
  [SMALL_STATE(79)] = 6778,
  [SMALL_STATE(80)] = 6838,
  [SMALL_STATE(81)] = 6870,
  [SMALL_STATE(82)] = 6902,
  [SMALL_STATE(83)] = 6934,
  [SMALL_STATE(84)] = 6966,
  [SMALL_STATE(85)] = 6998,
  [SMALL_STATE(86)] = 7030,
  [SMALL_STATE(87)] = 7062,
  [SMALL_STATE(88)] = 7094,
  [SMALL_STATE(89)] = 7126,
  [SMALL_STATE(90)] = 7158,
  [SMALL_STATE(91)] = 7190,
  [SMALL_STATE(92)] = 7222,
  [SMALL_STATE(93)] = 7254,
  [SMALL_STATE(94)] = 7286,
  [SMALL_STATE(95)] = 7318,
  [SMALL_STATE(96)] = 7350,
  [SMALL_STATE(97)] = 7382,
  [SMALL_STATE(98)] = 7414,
  [SMALL_STATE(99)] = 7446,
  [SMALL_STATE(100)] = 7478,
  [SMALL_STATE(101)] = 7510,
  [SMALL_STATE(102)] = 7542,
  [SMALL_STATE(103)] = 7574,
  [SMALL_STATE(104)] = 7606,
  [SMALL_STATE(105)] = 7638,
  [SMALL_STATE(106)] = 7670,
  [SMALL_STATE(107)] = 7702,
  [SMALL_STATE(108)] = 7734,
  [SMALL_STATE(109)] = 7766,
  [SMALL_STATE(110)] = 7798,
  [SMALL_STATE(111)] = 7830,
  [SMALL_STATE(112)] = 7862,
  [SMALL_STATE(113)] = 7894,
  [SMALL_STATE(114)] = 7926,
  [SMALL_STATE(115)] = 7958,
  [SMALL_STATE(116)] = 7990,
  [SMALL_STATE(117)] = 8022,
  [SMALL_STATE(118)] = 8054,
  [SMALL_STATE(119)] = 8086,
  [SMALL_STATE(120)] = 8118,
  [SMALL_STATE(121)] = 8150,
  [SMALL_STATE(122)] = 8182,
  [SMALL_STATE(123)] = 8214,
  [SMALL_STATE(124)] = 8246,
  [SMALL_STATE(125)] = 8278,
  [SMALL_STATE(126)] = 8310,
  [SMALL_STATE(127)] = 8342,
  [SMALL_STATE(128)] = 8374,
  [SMALL_STATE(129)] = 8406,
  [SMALL_STATE(130)] = 8438,
  [SMALL_STATE(131)] = 8470,
  [SMALL_STATE(132)] = 8502,
  [SMALL_STATE(133)] = 8534,
  [SMALL_STATE(134)] = 8566,
  [SMALL_STATE(135)] = 8598,
  [SMALL_STATE(136)] = 8630,
  [SMALL_STATE(137)] = 8662,
  [SMALL_STATE(138)] = 8694,
  [SMALL_STATE(139)] = 8726,
  [SMALL_STATE(140)] = 8758,
  [SMALL_STATE(141)] = 8790,
  [SMALL_STATE(142)] = 8822,
  [SMALL_STATE(143)] = 8854,
  [SMALL_STATE(144)] = 8886,
  [SMALL_STATE(145)] = 8918,
  [SMALL_STATE(146)] = 8949,
  [SMALL_STATE(147)] = 8980,
  [SMALL_STATE(148)] = 9011,
  [SMALL_STATE(149)] = 9042,
  [SMALL_STATE(150)] = 9073,
  [SMALL_STATE(151)] = 9104,
  [SMALL_STATE(152)] = 9135,
  [SMALL_STATE(153)] = 9166,
  [SMALL_STATE(154)] = 9197,
  [SMALL_STATE(155)] = 9228,
  [SMALL_STATE(156)] = 9259,
  [SMALL_STATE(157)] = 9290,
  [SMALL_STATE(158)] = 9321,
  [SMALL_STATE(159)] = 9352,
  [SMALL_STATE(160)] = 9383,
  [SMALL_STATE(161)] = 9414,
  [SMALL_STATE(162)] = 9445,
  [SMALL_STATE(163)] = 9476,
  [SMALL_STATE(164)] = 9507,
  [SMALL_STATE(165)] = 9538,
  [SMALL_STATE(166)] = 9569,
  [SMALL_STATE(167)] = 9600,
  [SMALL_STATE(168)] = 9631,
  [SMALL_STATE(169)] = 9662,
  [SMALL_STATE(170)] = 9693,
  [SMALL_STATE(171)] = 9724,
  [SMALL_STATE(172)] = 9755,
  [SMALL_STATE(173)] = 9786,
  [SMALL_STATE(174)] = 9817,
  [SMALL_STATE(175)] = 9848,
  [SMALL_STATE(176)] = 9879,
  [SMALL_STATE(177)] = 9910,
  [SMALL_STATE(178)] = 9941,
  [SMALL_STATE(179)] = 9972,
  [SMALL_STATE(180)] = 10003,
  [SMALL_STATE(181)] = 10034,
  [SMALL_STATE(182)] = 10065,
  [SMALL_STATE(183)] = 10096,
  [SMALL_STATE(184)] = 10127,
  [SMALL_STATE(185)] = 10158,
  [SMALL_STATE(186)] = 10189,
  [SMALL_STATE(187)] = 10220,
  [SMALL_STATE(188)] = 10251,
  [SMALL_STATE(189)] = 10282,
  [SMALL_STATE(190)] = 10313,
  [SMALL_STATE(191)] = 10344,
  [SMALL_STATE(192)] = 10375,
  [SMALL_STATE(193)] = 10406,
  [SMALL_STATE(194)] = 10437,
  [SMALL_STATE(195)] = 10468,
  [SMALL_STATE(196)] = 10499,
  [SMALL_STATE(197)] = 10530,
  [SMALL_STATE(198)] = 10561,
  [SMALL_STATE(199)] = 10592,
  [SMALL_STATE(200)] = 10623,
  [SMALL_STATE(201)] = 10654,
  [SMALL_STATE(202)] = 10685,
  [SMALL_STATE(203)] = 10716,
  [SMALL_STATE(204)] = 10747,
  [SMALL_STATE(205)] = 10778,
  [SMALL_STATE(206)] = 10809,
  [SMALL_STATE(207)] = 10840,
  [SMALL_STATE(208)] = 10871,
  [SMALL_STATE(209)] = 10922,
  [SMALL_STATE(210)] = 10959,
  [SMALL_STATE(211)] = 11004,
  [SMALL_STATE(212)] = 11041,
  [SMALL_STATE(213)] = 11076,
  [SMALL_STATE(214)] = 11111,
  [SMALL_STATE(215)] = 11148,
  [SMALL_STATE(216)] = 11179,
  [SMALL_STATE(217)] = 11217,
  [SMALL_STATE(218)] = 11247,
  [SMALL_STATE(219)] = 11271,
  [SMALL_STATE(220)] = 11303,
  [SMALL_STATE(221)] = 11326,
  [SMALL_STATE(222)] = 11349,
  [SMALL_STATE(223)] = 11376,
  [SMALL_STATE(224)] = 11401,
  [SMALL_STATE(225)] = 11430,
  [SMALL_STATE(226)] = 11453,
  [SMALL_STATE(227)] = 11475,
  [SMALL_STATE(228)] = 11497,
  [SMALL_STATE(229)] = 11519,
  [SMALL_STATE(230)] = 11541,
  [SMALL_STATE(231)] = 11563,
  [SMALL_STATE(232)] = 11585,
  [SMALL_STATE(233)] = 11607,
  [SMALL_STATE(234)] = 11629,
  [SMALL_STATE(235)] = 11651,
  [SMALL_STATE(236)] = 11673,
  [SMALL_STATE(237)] = 11695,
  [SMALL_STATE(238)] = 11717,
  [SMALL_STATE(239)] = 11739,
  [SMALL_STATE(240)] = 11761,
  [SMALL_STATE(241)] = 11783,
  [SMALL_STATE(242)] = 11805,
  [SMALL_STATE(243)] = 11827,
  [SMALL_STATE(244)] = 11867,
  [SMALL_STATE(245)] = 11889,
  [SMALL_STATE(246)] = 11929,
  [SMALL_STATE(247)] = 11951,
  [SMALL_STATE(248)] = 11989,
  [SMALL_STATE(249)] = 12015,
  [SMALL_STATE(250)] = 12053,
  [SMALL_STATE(251)] = 12091,
  [SMALL_STATE(252)] = 12119,
  [SMALL_STATE(253)] = 12141,
  [SMALL_STATE(254)] = 12169,
  [SMALL_STATE(255)] = 12191,
  [SMALL_STATE(256)] = 12217,
  [SMALL_STATE(257)] = 12239,
  [SMALL_STATE(258)] = 12261,
  [SMALL_STATE(259)] = 12283,
  [SMALL_STATE(260)] = 12305,
  [SMALL_STATE(261)] = 12327,
  [SMALL_STATE(262)] = 12361,
  [SMALL_STATE(263)] = 12397,
  [SMALL_STATE(264)] = 12419,
  [SMALL_STATE(265)] = 12441,
  [SMALL_STATE(266)] = 12463,
  [SMALL_STATE(267)] = 12485,
  [SMALL_STATE(268)] = 12507,
  [SMALL_STATE(269)] = 12545,
  [SMALL_STATE(270)] = 12567,
  [SMALL_STATE(271)] = 12589,
  [SMALL_STATE(272)] = 12611,
  [SMALL_STATE(273)] = 12633,
  [SMALL_STATE(274)] = 12655,
  [SMALL_STATE(275)] = 12695,
  [SMALL_STATE(276)] = 12723,
  [SMALL_STATE(277)] = 12745,
  [SMALL_STATE(278)] = 12783,
  [SMALL_STATE(279)] = 12819,
  [SMALL_STATE(280)] = 12861,
  [SMALL_STATE(281)] = 12883,
  [SMALL_STATE(282)] = 12905,
  [SMALL_STATE(283)] = 12927,
  [SMALL_STATE(284)] = 12949,
  [SMALL_STATE(285)] = 12974,
  [SMALL_STATE(286)] = 12995,
  [SMALL_STATE(287)] = 13032,
  [SMALL_STATE(288)] = 13069,
  [SMALL_STATE(289)] = 13106,
  [SMALL_STATE(290)] = 13143,
  [SMALL_STATE(291)] = 13162,
  [SMALL_STATE(292)] = 13183,
  [SMALL_STATE(293)] = 13204,
  [SMALL_STATE(294)] = 13241,
  [SMALL_STATE(295)] = 13278,
  [SMALL_STATE(296)] = 13315,
  [SMALL_STATE(297)] = 13350,
  [SMALL_STATE(298)] = 13375,
  [SMALL_STATE(299)] = 13412,
  [SMALL_STATE(300)] = 13449,
  [SMALL_STATE(301)] = 13484,
  [SMALL_STATE(302)] = 13521,
  [SMALL_STATE(303)] = 13556,
  [SMALL_STATE(304)] = 13590,
  [SMALL_STATE(305)] = 13622,
  [SMALL_STATE(306)] = 13650,
  [SMALL_STATE(307)] = 13682,
  [SMALL_STATE(308)] = 13716,
  [SMALL_STATE(309)] = 13748,
  [SMALL_STATE(310)] = 13772,
  [SMALL_STATE(311)] = 13804,
  [SMALL_STATE(312)] = 13822,
  [SMALL_STATE(313)] = 13850,
  [SMALL_STATE(314)] = 13882,
  [SMALL_STATE(315)] = 13910,
  [SMALL_STATE(316)] = 13934,
  [SMALL_STATE(317)] = 13968,
  [SMALL_STATE(318)] = 13996,
  [SMALL_STATE(319)] = 14024,
  [SMALL_STATE(320)] = 14056,
  [SMALL_STATE(321)] = 14090,
  [SMALL_STATE(322)] = 14124,
  [SMALL_STATE(323)] = 14158,
  [SMALL_STATE(324)] = 14192,
  [SMALL_STATE(325)] = 14216,
  [SMALL_STATE(326)] = 14250,
  [SMALL_STATE(327)] = 14284,
  [SMALL_STATE(328)] = 14303,
  [SMALL_STATE(329)] = 14322,
  [SMALL_STATE(330)] = 14341,
  [SMALL_STATE(331)] = 14360,
  [SMALL_STATE(332)] = 14379,
  [SMALL_STATE(333)] = 14398,
  [SMALL_STATE(334)] = 14417,
  [SMALL_STATE(335)] = 14436,
  [SMALL_STATE(336)] = 14455,
  [SMALL_STATE(337)] = 14474,
  [SMALL_STATE(338)] = 14493,
  [SMALL_STATE(339)] = 14512,
  [SMALL_STATE(340)] = 14543,
  [SMALL_STATE(341)] = 14562,
  [SMALL_STATE(342)] = 14581,
  [SMALL_STATE(343)] = 14612,
  [SMALL_STATE(344)] = 14631,
  [SMALL_STATE(345)] = 14650,
  [SMALL_STATE(346)] = 14669,
  [SMALL_STATE(347)] = 14688,
  [SMALL_STATE(348)] = 14719,
  [SMALL_STATE(349)] = 14743,
  [SMALL_STATE(350)] = 14773,
  [SMALL_STATE(351)] = 14799,
  [SMALL_STATE(352)] = 14825,
  [SMALL_STATE(353)] = 14843,
  [SMALL_STATE(354)] = 14873,
  [SMALL_STATE(355)] = 14891,
  [SMALL_STATE(356)] = 14917,
  [SMALL_STATE(357)] = 14935,
  [SMALL_STATE(358)] = 14961,
  [SMALL_STATE(359)] = 14987,
  [SMALL_STATE(360)] = 15011,
  [SMALL_STATE(361)] = 15037,
  [SMALL_STATE(362)] = 15055,
  [SMALL_STATE(363)] = 15079,
  [SMALL_STATE(364)] = 15103,
  [SMALL_STATE(365)] = 15123,
  [SMALL_STATE(366)] = 15147,
  [SMALL_STATE(367)] = 15170,
  [SMALL_STATE(368)] = 15193,
  [SMALL_STATE(369)] = 15216,
  [SMALL_STATE(370)] = 15242,
  [SMALL_STATE(371)] = 15258,
  [SMALL_STATE(372)] = 15284,
  [SMALL_STATE(373)] = 15310,
  [SMALL_STATE(374)] = 15330,
  [SMALL_STATE(375)] = 15356,
  [SMALL_STATE(376)] = 15370,
  [SMALL_STATE(377)] = 15386,
  [SMALL_STATE(378)] = 15400,
  [SMALL_STATE(379)] = 15414,
  [SMALL_STATE(380)] = 15437,
  [SMALL_STATE(381)] = 15458,
  [SMALL_STATE(382)] = 15479,
  [SMALL_STATE(383)] = 15494,
  [SMALL_STATE(384)] = 15509,
  [SMALL_STATE(385)] = 15530,
  [SMALL_STATE(386)] = 15545,
  [SMALL_STATE(387)] = 15566,
  [SMALL_STATE(388)] = 15589,
  [SMALL_STATE(389)] = 15606,
  [SMALL_STATE(390)] = 15621,
  [SMALL_STATE(391)] = 15636,
  [SMALL_STATE(392)] = 15657,
  [SMALL_STATE(393)] = 15672,
  [SMALL_STATE(394)] = 15693,
  [SMALL_STATE(395)] = 15710,
  [SMALL_STATE(396)] = 15725,
  [SMALL_STATE(397)] = 15744,
  [SMALL_STATE(398)] = 15756,
  [SMALL_STATE(399)] = 15768,
  [SMALL_STATE(400)] = 15786,
  [SMALL_STATE(401)] = 15798,
  [SMALL_STATE(402)] = 15818,
  [SMALL_STATE(403)] = 15834,
  [SMALL_STATE(404)] = 15852,
  [SMALL_STATE(405)] = 15870,
  [SMALL_STATE(406)] = 15882,
  [SMALL_STATE(407)] = 15894,
  [SMALL_STATE(408)] = 15906,
  [SMALL_STATE(409)] = 15918,
  [SMALL_STATE(410)] = 15936,
  [SMALL_STATE(411)] = 15956,
  [SMALL_STATE(412)] = 15968,
  [SMALL_STATE(413)] = 15986,
  [SMALL_STATE(414)] = 16004,
  [SMALL_STATE(415)] = 16016,
  [SMALL_STATE(416)] = 16036,
  [SMALL_STATE(417)] = 16048,
  [SMALL_STATE(418)] = 16066,
  [SMALL_STATE(419)] = 16078,
  [SMALL_STATE(420)] = 16090,
  [SMALL_STATE(421)] = 16108,
  [SMALL_STATE(422)] = 16120,
  [SMALL_STATE(423)] = 16140,
  [SMALL_STATE(424)] = 16158,
  [SMALL_STATE(425)] = 16176,
  [SMALL_STATE(426)] = 16194,
  [SMALL_STATE(427)] = 16212,
  [SMALL_STATE(428)] = 16230,
  [SMALL_STATE(429)] = 16248,
  [SMALL_STATE(430)] = 16266,
  [SMALL_STATE(431)] = 16284,
  [SMALL_STATE(432)] = 16302,
  [SMALL_STATE(433)] = 16318,
  [SMALL_STATE(434)] = 16336,
  [SMALL_STATE(435)] = 16354,
  [SMALL_STATE(436)] = 16370,
  [SMALL_STATE(437)] = 16388,
  [SMALL_STATE(438)] = 16400,
  [SMALL_STATE(439)] = 16417,
  [SMALL_STATE(440)] = 16434,
  [SMALL_STATE(441)] = 16447,
  [SMALL_STATE(442)] = 16464,
  [SMALL_STATE(443)] = 16479,
  [SMALL_STATE(444)] = 16492,
  [SMALL_STATE(445)] = 16509,
  [SMALL_STATE(446)] = 16522,
  [SMALL_STATE(447)] = 16535,
  [SMALL_STATE(448)] = 16548,
  [SMALL_STATE(449)] = 16565,
  [SMALL_STATE(450)] = 16580,
  [SMALL_STATE(451)] = 16591,
  [SMALL_STATE(452)] = 16602,
  [SMALL_STATE(453)] = 16613,
  [SMALL_STATE(454)] = 16628,
  [SMALL_STATE(455)] = 16641,
  [SMALL_STATE(456)] = 16658,
  [SMALL_STATE(457)] = 16673,
  [SMALL_STATE(458)] = 16688,
  [SMALL_STATE(459)] = 16703,
  [SMALL_STATE(460)] = 16718,
  [SMALL_STATE(461)] = 16733,
  [SMALL_STATE(462)] = 16750,
  [SMALL_STATE(463)] = 16765,
  [SMALL_STATE(464)] = 16780,
  [SMALL_STATE(465)] = 16795,
  [SMALL_STATE(466)] = 16812,
  [SMALL_STATE(467)] = 16825,
  [SMALL_STATE(468)] = 16839,
  [SMALL_STATE(469)] = 16855,
  [SMALL_STATE(470)] = 16865,
  [SMALL_STATE(471)] = 16877,
  [SMALL_STATE(472)] = 16887,
  [SMALL_STATE(473)] = 16897,
  [SMALL_STATE(474)] = 16913,
  [SMALL_STATE(475)] = 16927,
  [SMALL_STATE(476)] = 16943,
  [SMALL_STATE(477)] = 16959,
  [SMALL_STATE(478)] = 16975,
  [SMALL_STATE(479)] = 16989,
  [SMALL_STATE(480)] = 17003,
  [SMALL_STATE(481)] = 17017,
  [SMALL_STATE(482)] = 17033,
  [SMALL_STATE(483)] = 17049,
  [SMALL_STATE(484)] = 17065,
  [SMALL_STATE(485)] = 17081,
  [SMALL_STATE(486)] = 17097,
  [SMALL_STATE(487)] = 17111,
  [SMALL_STATE(488)] = 17125,
  [SMALL_STATE(489)] = 17139,
  [SMALL_STATE(490)] = 17149,
  [SMALL_STATE(491)] = 17159,
  [SMALL_STATE(492)] = 17169,
  [SMALL_STATE(493)] = 17179,
  [SMALL_STATE(494)] = 17189,
  [SMALL_STATE(495)] = 17199,
  [SMALL_STATE(496)] = 17209,
  [SMALL_STATE(497)] = 17219,
  [SMALL_STATE(498)] = 17231,
  [SMALL_STATE(499)] = 17245,
  [SMALL_STATE(500)] = 17259,
  [SMALL_STATE(501)] = 17275,
  [SMALL_STATE(502)] = 17285,
  [SMALL_STATE(503)] = 17301,
  [SMALL_STATE(504)] = 17317,
  [SMALL_STATE(505)] = 17333,
  [SMALL_STATE(506)] = 17347,
  [SMALL_STATE(507)] = 17363,
  [SMALL_STATE(508)] = 17379,
  [SMALL_STATE(509)] = 17393,
  [SMALL_STATE(510)] = 17409,
  [SMALL_STATE(511)] = 17423,
  [SMALL_STATE(512)] = 17439,
  [SMALL_STATE(513)] = 17455,
  [SMALL_STATE(514)] = 17469,
  [SMALL_STATE(515)] = 17485,
  [SMALL_STATE(516)] = 17499,
  [SMALL_STATE(517)] = 17515,
  [SMALL_STATE(518)] = 17531,
  [SMALL_STATE(519)] = 17545,
  [SMALL_STATE(520)] = 17561,
  [SMALL_STATE(521)] = 17573,
  [SMALL_STATE(522)] = 17589,
  [SMALL_STATE(523)] = 17605,
  [SMALL_STATE(524)] = 17621,
  [SMALL_STATE(525)] = 17637,
  [SMALL_STATE(526)] = 17651,
  [SMALL_STATE(527)] = 17667,
  [SMALL_STATE(528)] = 17681,
  [SMALL_STATE(529)] = 17695,
  [SMALL_STATE(530)] = 17711,
  [SMALL_STATE(531)] = 17725,
  [SMALL_STATE(532)] = 17741,
  [SMALL_STATE(533)] = 17755,
  [SMALL_STATE(534)] = 17769,
  [SMALL_STATE(535)] = 17779,
  [SMALL_STATE(536)] = 17795,
  [SMALL_STATE(537)] = 17811,
  [SMALL_STATE(538)] = 17827,
  [SMALL_STATE(539)] = 17841,
  [SMALL_STATE(540)] = 17855,
  [SMALL_STATE(541)] = 17867,
  [SMALL_STATE(542)] = 17877,
  [SMALL_STATE(543)] = 17891,
  [SMALL_STATE(544)] = 17905,
  [SMALL_STATE(545)] = 17919,
  [SMALL_STATE(546)] = 17933,
  [SMALL_STATE(547)] = 17949,
  [SMALL_STATE(548)] = 17965,
  [SMALL_STATE(549)] = 17981,
  [SMALL_STATE(550)] = 17997,
  [SMALL_STATE(551)] = 18013,
  [SMALL_STATE(552)] = 18029,
  [SMALL_STATE(553)] = 18045,
  [SMALL_STATE(554)] = 18061,
  [SMALL_STATE(555)] = 18077,
  [SMALL_STATE(556)] = 18093,
  [SMALL_STATE(557)] = 18109,
  [SMALL_STATE(558)] = 18125,
  [SMALL_STATE(559)] = 18137,
  [SMALL_STATE(560)] = 18153,
  [SMALL_STATE(561)] = 18169,
  [SMALL_STATE(562)] = 18185,
  [SMALL_STATE(563)] = 18201,
  [SMALL_STATE(564)] = 18217,
  [SMALL_STATE(565)] = 18233,
  [SMALL_STATE(566)] = 18249,
  [SMALL_STATE(567)] = 18265,
  [SMALL_STATE(568)] = 18279,
  [SMALL_STATE(569)] = 18289,
  [SMALL_STATE(570)] = 18303,
  [SMALL_STATE(571)] = 18319,
  [SMALL_STATE(572)] = 18329,
  [SMALL_STATE(573)] = 18339,
  [SMALL_STATE(574)] = 18355,
  [SMALL_STATE(575)] = 18371,
  [SMALL_STATE(576)] = 18387,
  [SMALL_STATE(577)] = 18397,
  [SMALL_STATE(578)] = 18409,
  [SMALL_STATE(579)] = 18423,
  [SMALL_STATE(580)] = 18439,
  [SMALL_STATE(581)] = 18453,
  [SMALL_STATE(582)] = 18469,
  [SMALL_STATE(583)] = 18485,
  [SMALL_STATE(584)] = 18501,
  [SMALL_STATE(585)] = 18517,
  [SMALL_STATE(586)] = 18533,
  [SMALL_STATE(587)] = 18549,
  [SMALL_STATE(588)] = 18565,
  [SMALL_STATE(589)] = 18581,
  [SMALL_STATE(590)] = 18595,
  [SMALL_STATE(591)] = 18609,
  [SMALL_STATE(592)] = 18623,
  [SMALL_STATE(593)] = 18639,
  [SMALL_STATE(594)] = 18653,
  [SMALL_STATE(595)] = 18669,
  [SMALL_STATE(596)] = 18683,
  [SMALL_STATE(597)] = 18697,
  [SMALL_STATE(598)] = 18713,
  [SMALL_STATE(599)] = 18727,
  [SMALL_STATE(600)] = 18743,
  [SMALL_STATE(601)] = 18759,
  [SMALL_STATE(602)] = 18775,
  [SMALL_STATE(603)] = 18791,
  [SMALL_STATE(604)] = 18807,
  [SMALL_STATE(605)] = 18817,
  [SMALL_STATE(606)] = 18831,
  [SMALL_STATE(607)] = 18847,
  [SMALL_STATE(608)] = 18863,
  [SMALL_STATE(609)] = 18877,
  [SMALL_STATE(610)] = 18893,
  [SMALL_STATE(611)] = 18909,
  [SMALL_STATE(612)] = 18925,
  [SMALL_STATE(613)] = 18939,
  [SMALL_STATE(614)] = 18955,
  [SMALL_STATE(615)] = 18969,
  [SMALL_STATE(616)] = 18985,
  [SMALL_STATE(617)] = 19001,
  [SMALL_STATE(618)] = 19017,
  [SMALL_STATE(619)] = 19033,
  [SMALL_STATE(620)] = 19049,
  [SMALL_STATE(621)] = 19065,
  [SMALL_STATE(622)] = 19081,
  [SMALL_STATE(623)] = 19097,
  [SMALL_STATE(624)] = 19113,
  [SMALL_STATE(625)] = 19129,
  [SMALL_STATE(626)] = 19145,
  [SMALL_STATE(627)] = 19161,
  [SMALL_STATE(628)] = 19177,
  [SMALL_STATE(629)] = 19193,
  [SMALL_STATE(630)] = 19209,
  [SMALL_STATE(631)] = 19225,
  [SMALL_STATE(632)] = 19241,
  [SMALL_STATE(633)] = 19255,
  [SMALL_STATE(634)] = 19269,
  [SMALL_STATE(635)] = 19279,
  [SMALL_STATE(636)] = 19295,
  [SMALL_STATE(637)] = 19309,
  [SMALL_STATE(638)] = 19325,
  [SMALL_STATE(639)] = 19339,
  [SMALL_STATE(640)] = 19353,
  [SMALL_STATE(641)] = 19367,
  [SMALL_STATE(642)] = 19381,
  [SMALL_STATE(643)] = 19395,
  [SMALL_STATE(644)] = 19407,
  [SMALL_STATE(645)] = 19421,
  [SMALL_STATE(646)] = 19435,
  [SMALL_STATE(647)] = 19451,
  [SMALL_STATE(648)] = 19463,
  [SMALL_STATE(649)] = 19472,
  [SMALL_STATE(650)] = 19483,
  [SMALL_STATE(651)] = 19496,
  [SMALL_STATE(652)] = 19509,
  [SMALL_STATE(653)] = 19522,
  [SMALL_STATE(654)] = 19531,
  [SMALL_STATE(655)] = 19544,
  [SMALL_STATE(656)] = 19557,
  [SMALL_STATE(657)] = 19566,
  [SMALL_STATE(658)] = 19579,
  [SMALL_STATE(659)] = 19592,
  [SMALL_STATE(660)] = 19605,
  [SMALL_STATE(661)] = 19618,
  [SMALL_STATE(662)] = 19631,
  [SMALL_STATE(663)] = 19644,
  [SMALL_STATE(664)] = 19655,
  [SMALL_STATE(665)] = 19668,
  [SMALL_STATE(666)] = 19681,
  [SMALL_STATE(667)] = 19692,
  [SMALL_STATE(668)] = 19701,
  [SMALL_STATE(669)] = 19712,
  [SMALL_STATE(670)] = 19723,
  [SMALL_STATE(671)] = 19736,
  [SMALL_STATE(672)] = 19747,
  [SMALL_STATE(673)] = 19758,
  [SMALL_STATE(674)] = 19767,
  [SMALL_STATE(675)] = 19776,
  [SMALL_STATE(676)] = 19785,
  [SMALL_STATE(677)] = 19798,
  [SMALL_STATE(678)] = 19811,
  [SMALL_STATE(679)] = 19820,
  [SMALL_STATE(680)] = 19829,
  [SMALL_STATE(681)] = 19838,
  [SMALL_STATE(682)] = 19851,
  [SMALL_STATE(683)] = 19864,
  [SMALL_STATE(684)] = 19873,
  [SMALL_STATE(685)] = 19884,
  [SMALL_STATE(686)] = 19897,
  [SMALL_STATE(687)] = 19906,
  [SMALL_STATE(688)] = 19917,
  [SMALL_STATE(689)] = 19928,
  [SMALL_STATE(690)] = 19939,
  [SMALL_STATE(691)] = 19950,
  [SMALL_STATE(692)] = 19963,
  [SMALL_STATE(693)] = 19974,
  [SMALL_STATE(694)] = 19985,
  [SMALL_STATE(695)] = 19998,
  [SMALL_STATE(696)] = 20007,
  [SMALL_STATE(697)] = 20016,
  [SMALL_STATE(698)] = 20029,
  [SMALL_STATE(699)] = 20038,
  [SMALL_STATE(700)] = 20051,
  [SMALL_STATE(701)] = 20062,
  [SMALL_STATE(702)] = 20073,
  [SMALL_STATE(703)] = 20084,
  [SMALL_STATE(704)] = 20093,
  [SMALL_STATE(705)] = 20102,
  [SMALL_STATE(706)] = 20111,
  [SMALL_STATE(707)] = 20120,
  [SMALL_STATE(708)] = 20129,
  [SMALL_STATE(709)] = 20138,
  [SMALL_STATE(710)] = 20147,
  [SMALL_STATE(711)] = 20156,
  [SMALL_STATE(712)] = 20165,
  [SMALL_STATE(713)] = 20174,
  [SMALL_STATE(714)] = 20185,
  [SMALL_STATE(715)] = 20196,
  [SMALL_STATE(716)] = 20205,
  [SMALL_STATE(717)] = 20214,
  [SMALL_STATE(718)] = 20225,
  [SMALL_STATE(719)] = 20236,
  [SMALL_STATE(720)] = 20245,
  [SMALL_STATE(721)] = 20254,
  [SMALL_STATE(722)] = 20263,
  [SMALL_STATE(723)] = 20272,
  [SMALL_STATE(724)] = 20281,
  [SMALL_STATE(725)] = 20290,
  [SMALL_STATE(726)] = 20299,
  [SMALL_STATE(727)] = 20310,
  [SMALL_STATE(728)] = 20319,
  [SMALL_STATE(729)] = 20330,
  [SMALL_STATE(730)] = 20339,
  [SMALL_STATE(731)] = 20350,
  [SMALL_STATE(732)] = 20359,
  [SMALL_STATE(733)] = 20368,
  [SMALL_STATE(734)] = 20377,
  [SMALL_STATE(735)] = 20385,
  [SMALL_STATE(736)] = 20393,
  [SMALL_STATE(737)] = 20401,
  [SMALL_STATE(738)] = 20409,
  [SMALL_STATE(739)] = 20417,
  [SMALL_STATE(740)] = 20425,
  [SMALL_STATE(741)] = 20433,
  [SMALL_STATE(742)] = 20441,
  [SMALL_STATE(743)] = 20449,
  [SMALL_STATE(744)] = 20457,
  [SMALL_STATE(745)] = 20465,
  [SMALL_STATE(746)] = 20473,
  [SMALL_STATE(747)] = 20481,
  [SMALL_STATE(748)] = 20489,
  [SMALL_STATE(749)] = 20497,
  [SMALL_STATE(750)] = 20505,
  [SMALL_STATE(751)] = 20513,
  [SMALL_STATE(752)] = 20521,
  [SMALL_STATE(753)] = 20529,
  [SMALL_STATE(754)] = 20537,
  [SMALL_STATE(755)] = 20545,
  [SMALL_STATE(756)] = 20553,
  [SMALL_STATE(757)] = 20561,
  [SMALL_STATE(758)] = 20569,
  [SMALL_STATE(759)] = 20577,
  [SMALL_STATE(760)] = 20585,
  [SMALL_STATE(761)] = 20593,
  [SMALL_STATE(762)] = 20601,
  [SMALL_STATE(763)] = 20609,
  [SMALL_STATE(764)] = 20617,
  [SMALL_STATE(765)] = 20625,
  [SMALL_STATE(766)] = 20633,
  [SMALL_STATE(767)] = 20641,
  [SMALL_STATE(768)] = 20649,
  [SMALL_STATE(769)] = 20657,
  [SMALL_STATE(770)] = 20665,
  [SMALL_STATE(771)] = 20673,
  [SMALL_STATE(772)] = 20681,
  [SMALL_STATE(773)] = 20689,
  [SMALL_STATE(774)] = 20697,
  [SMALL_STATE(775)] = 20705,
  [SMALL_STATE(776)] = 20713,
  [SMALL_STATE(777)] = 20721,
  [SMALL_STATE(778)] = 20729,
  [SMALL_STATE(779)] = 20737,
  [SMALL_STATE(780)] = 20745,
  [SMALL_STATE(781)] = 20753,
  [SMALL_STATE(782)] = 20763,
  [SMALL_STATE(783)] = 20773,
  [SMALL_STATE(784)] = 20783,
  [SMALL_STATE(785)] = 20791,
  [SMALL_STATE(786)] = 20799,
  [SMALL_STATE(787)] = 20807,
  [SMALL_STATE(788)] = 20815,
  [SMALL_STATE(789)] = 20823,
  [SMALL_STATE(790)] = 20831,
  [SMALL_STATE(791)] = 20839,
  [SMALL_STATE(792)] = 20847,
  [SMALL_STATE(793)] = 20855,
  [SMALL_STATE(794)] = 20863,
  [SMALL_STATE(795)] = 20871,
  [SMALL_STATE(796)] = 20879,
  [SMALL_STATE(797)] = 20887,
  [SMALL_STATE(798)] = 20895,
  [SMALL_STATE(799)] = 20903,
  [SMALL_STATE(800)] = 20911,
  [SMALL_STATE(801)] = 20919,
  [SMALL_STATE(802)] = 20927,
  [SMALL_STATE(803)] = 20935,
  [SMALL_STATE(804)] = 20943,
  [SMALL_STATE(805)] = 20951,
  [SMALL_STATE(806)] = 20959,
  [SMALL_STATE(807)] = 20967,
  [SMALL_STATE(808)] = 20975,
  [SMALL_STATE(809)] = 20983,
  [SMALL_STATE(810)] = 20991,
  [SMALL_STATE(811)] = 20999,
  [SMALL_STATE(812)] = 21007,
  [SMALL_STATE(813)] = 21015,
  [SMALL_STATE(814)] = 21023,
  [SMALL_STATE(815)] = 21031,
  [SMALL_STATE(816)] = 21039,
  [SMALL_STATE(817)] = 21047,
  [SMALL_STATE(818)] = 21055,
  [SMALL_STATE(819)] = 21063,
  [SMALL_STATE(820)] = 21071,
  [SMALL_STATE(821)] = 21079,
  [SMALL_STATE(822)] = 21087,
  [SMALL_STATE(823)] = 21095,
  [SMALL_STATE(824)] = 21105,
  [SMALL_STATE(825)] = 21113,
  [SMALL_STATE(826)] = 21121,
  [SMALL_STATE(827)] = 21129,
  [SMALL_STATE(828)] = 21137,
  [SMALL_STATE(829)] = 21145,
  [SMALL_STATE(830)] = 21153,
  [SMALL_STATE(831)] = 21161,
  [SMALL_STATE(832)] = 21169,
  [SMALL_STATE(833)] = 21179,
  [SMALL_STATE(834)] = 21189,
  [SMALL_STATE(835)] = 21197,
  [SMALL_STATE(836)] = 21205,
  [SMALL_STATE(837)] = 21213,
  [SMALL_STATE(838)] = 21221,
  [SMALL_STATE(839)] = 21229,
  [SMALL_STATE(840)] = 21237,
  [SMALL_STATE(841)] = 21245,
  [SMALL_STATE(842)] = 21253,
  [SMALL_STATE(843)] = 21261,
  [SMALL_STATE(844)] = 21271,
  [SMALL_STATE(845)] = 21279,
  [SMALL_STATE(846)] = 21287,
  [SMALL_STATE(847)] = 21295,
  [SMALL_STATE(848)] = 21303,
  [SMALL_STATE(849)] = 21311,
  [SMALL_STATE(850)] = 21319,
  [SMALL_STATE(851)] = 21327,
  [SMALL_STATE(852)] = 21335,
  [SMALL_STATE(853)] = 21343,
  [SMALL_STATE(854)] = 21351,
  [SMALL_STATE(855)] = 21359,
  [SMALL_STATE(856)] = 21367,
  [SMALL_STATE(857)] = 21375,
  [SMALL_STATE(858)] = 21383,
  [SMALL_STATE(859)] = 21391,
  [SMALL_STATE(860)] = 21399,
  [SMALL_STATE(861)] = 21407,
  [SMALL_STATE(862)] = 21415,
  [SMALL_STATE(863)] = 21423,
  [SMALL_STATE(864)] = 21431,
  [SMALL_STATE(865)] = 21439,
  [SMALL_STATE(866)] = 21447,
  [SMALL_STATE(867)] = 21455,
  [SMALL_STATE(868)] = 21463,
  [SMALL_STATE(869)] = 21471,
  [SMALL_STATE(870)] = 21479,
  [SMALL_STATE(871)] = 21487,
  [SMALL_STATE(872)] = 21495,
  [SMALL_STATE(873)] = 21503,
  [SMALL_STATE(874)] = 21511,
  [SMALL_STATE(875)] = 21519,
  [SMALL_STATE(876)] = 21527,
  [SMALL_STATE(877)] = 21535,
  [SMALL_STATE(878)] = 21543,
  [SMALL_STATE(879)] = 21551,
  [SMALL_STATE(880)] = 21559,
  [SMALL_STATE(881)] = 21567,
  [SMALL_STATE(882)] = 21575,
  [SMALL_STATE(883)] = 21583,
  [SMALL_STATE(884)] = 21591,
  [SMALL_STATE(885)] = 21599,
  [SMALL_STATE(886)] = 21607,
  [SMALL_STATE(887)] = 21615,
  [SMALL_STATE(888)] = 21623,
  [SMALL_STATE(889)] = 21631,
  [SMALL_STATE(890)] = 21639,
  [SMALL_STATE(891)] = 21647,
  [SMALL_STATE(892)] = 21655,
  [SMALL_STATE(893)] = 21663,
  [SMALL_STATE(894)] = 21671,
  [SMALL_STATE(895)] = 21679,
  [SMALL_STATE(896)] = 21687,
  [SMALL_STATE(897)] = 21695,
  [SMALL_STATE(898)] = 21703,
  [SMALL_STATE(899)] = 21711,
  [SMALL_STATE(900)] = 21719,
  [SMALL_STATE(901)] = 21727,
  [SMALL_STATE(902)] = 21735,
  [SMALL_STATE(903)] = 21743,
  [SMALL_STATE(904)] = 21751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2, .production_id = 23),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(830),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(627),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(628),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(111),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(630),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(637),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(381),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(570),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(566),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(565),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(564),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(867),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(563),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(562),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(561),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(507),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(506),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(94),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(275),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(828),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(560),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(573),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(119),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(574),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(575),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(384),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(468),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(599),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(592),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(588),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(852),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(587),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(583),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(582),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(535),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(531),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(108),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2, .production_id = 23),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(631),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_sequence, 3),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(806),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(512),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(529),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(195),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(536),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(537),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(391),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(618),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(617),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(615),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(613),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(836),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(611),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(610),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(609),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(559),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(557),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 2), SHIFT_REPEAT(152),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(760),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(481),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(484),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(166),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(521),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(549),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(393),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(606),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(631),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(635),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(601),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(800),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(547),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(646),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(504),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(503),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(500),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(43),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat2, 2), SHIFT_REPEAT(275),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(784),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(691),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(650),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(651),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(654),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(677),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(657),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(659),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(660),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(661),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(56),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diagram_gantt_repeat1, 2), SHIFT_REPEAT(636),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(413),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(403),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(79),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(273),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(272),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(271),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(270),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(269),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(225),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(225),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_composite_body_repeat1, 2), SHIFT_REPEAT(267),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_gantt, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 6),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 5),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_id, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_id, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 6),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 6),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 5, .production_id = 15),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 5, .production_id = 15),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 5, .production_id = 13),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_loop, 5, .production_id = 12),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 5, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_participant, 5, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_rect, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_rect, 4),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sequence_subdocument, 1),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_stmt, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_stmt, 1),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_text, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_text, 1),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequence_rest_text, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequence_rest_text, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_note, 8),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_note, 8),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 7),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 7),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_signal, 6),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_signal, 6),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_par, 6, .production_id = 15),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_alt, 6, .production_id = 15),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_title, 4, .production_id = 9),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_autonumber, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_opt, 5, .production_id = 14),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_details, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_details, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_properties, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_properties, 4),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_link, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_link, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_links, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_links, 4),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_deactivate, 3),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_activate, 3),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_activate, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_stmt_actor, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_stmt_actor, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(674),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2), SHIFT_REPEAT(849),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_vertice, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_alias, 3, .production_id = 10),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 4),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_name, 1),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_name, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_dateformat, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 3),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_simple, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_simple, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 3),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 3),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_meta_format, 1),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_meta_format, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_title, 2, .production_id = 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_fork, 1),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_fork, 1),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_inclusiveenddates, 2, .production_id = 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_topaxis, 2, .production_id = 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_axisformat, 2, .production_id = 4),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_includes, 2, .production_id = 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_excludes, 2, .production_id = 6),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_todaymarker, 2, .production_id = 7),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_section, 2, .production_id = 8),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_join, 1),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_join, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_annotation_choice, 1),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_annotation_choice, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_annotation, 3),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_annotation, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_annotation, 1),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_annotation, 1),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_stmt_task, 3),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gantt_stmt_task, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 2),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 1),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 6),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(777),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_sequence_repeat1, 2), SHIFT_REPEAT(251),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 4),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 4),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1040] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(253),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name_body, 1),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name_body, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gantt_stmt, 1),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gantt_stmt, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_hide_empty_description, 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 2),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__direction, 1),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__direction, 1),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 6),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 6),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__state_stmt, 1),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__state_stmt, 1),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_hide_empty_description, 1),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_hide_empty_description, 1),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 5),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_division, 1),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_division, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_lr, 1),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_lr, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_rl, 1),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_rl, 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_bt, 1),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_bt, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction_tb, 1),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction_tb, 1),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_actor, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_actor, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_composite_body, 5),
  [1117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_composite_body, 5),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 4),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_relation, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 1),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_description, 1),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_description, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_note, 5, .production_id = 22),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_composite, 5),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_composite, 5),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_stmt_arrow, 5),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_stmt_arrow, 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2),
  [1165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(284),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 2),
  [1170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 2),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_composite_body_repeat1, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_generics, 3),
  [1198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_generics, 3),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(219),
  [1205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(380),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2), SHIFT_REPEAT(80),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_text_literal, 1),
  [1217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_text_literal, 1),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_stmt_subgraph_inner, 1),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 7),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 1),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_entity_name, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(777),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(396),
  [1261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(313),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_pie_repeat1, 2), SHIFT_REPEAT(745),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_node, 2),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_node, 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_pie, 4),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 6),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 5),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_node_repeat1, 2), SHIFT_REPEAT(596),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_node_repeat1, 2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 4),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_circle, 3),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_circle, 3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_odd, 3),
  [1294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_odd, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_trapezoid, 3),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanright, 3),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_leanleft, 3),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_rect, 3),
  [1310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_rect, 3),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_inv_trapezoid, 3),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_cylinder, 3),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_stadium, 3),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_subroutine, 3),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_hexagon, 3),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_ellipse, 3),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_square, 3),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_square, 3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_round, 3),
  [1342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_round, 3),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex, 2),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex, 2),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_vertex_kind, 1),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_vertex_kind, 1),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow_vertex_diamond, 3),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 18),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 6),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_flow_stmt_vertice_repeat1, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_linetype, 1),
  [1382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class_linetype, 1),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 4),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_dotted, 1),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_dotted, 1),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 3),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 5),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_linetype_solid, 1),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_linetype_solid, 1),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 19),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 20),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2),
  [1420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_method_line_repeat1, 2), SHIFT_REPEAT(364),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_reltype, 1),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_non_identifying, 1),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_reltype_identifying, 1),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_rl, 1),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2),
  [1471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(388),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_lr, 1),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_bt, 1),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flowchart_direction, 1),
  [1486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flowchart_direction, 1),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flowchart_direction_tb, 1),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 1),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pie_stmt_title, 1),
  [1500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pie_stmt, 1),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_title, 2),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_vertex_text, 1),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_one, 1),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_zero_or_more, 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_cardinarity_one_or_more, 1),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_cardinarity, 1),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block_inner, 1),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_showdata, 1),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2),
  [1532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_er_stmt_entity_block_inner_repeat1, 2), SHIFT_REPEAT(883),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_composition, 1),
  [1537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [1541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_dependency, 1),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_reltype, 1),
  [1545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_reltype_extension, 1),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(873),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [1563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [1565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(880),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [1571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 2), SHIFT_REPEAT(432),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_arrow_text, 1),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_stmt_element, 3),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 4),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 5),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_stmt_subgraph_inner_repeat1, 2),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_flow_text_literal_repeat1, 2), SHIFT_REPEAT(449),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_name, 1),
  [1611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_actor_repeat1, 2), SHIFT_REPEAT(455),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 2),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 6),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2),
  [1630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_flow_repeat1, 2), SHIFT_REPEAT(339),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_flow, 3),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_flow_arrow_text_repeat1, 1),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2),
  [1645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_state_repeat1, 2), SHIFT_REPEAT(76),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_relation, 3),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 4),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2),
  [1664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_alt_repeat1, 2), SHIFT_REPEAT(48),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2),
  [1669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_stmt_par_repeat1, 2), SHIFT_REPEAT(50),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_er, 2),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 24),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 18),
  [1686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 25),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 19),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 26),
  [1692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 20),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3, .production_id = 27),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 3),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_state, 2),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 5),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2),
  [1722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_stmt_class_repeat1, 2), SHIFT_REPEAT(320),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 4, .production_id = 16),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 7),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 8),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_line, 2, .production_id = 21),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_subgraph, 3),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 3),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2),
  [1777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_class_repeat1, 2), SHIFT_REPEAT(296),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2),
  [1788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_er_repeat1, 2), SHIFT_REPEAT(367),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_stmt_direction, 2),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2),
  [1797] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_gantt_task_text_repeat1, 2), SHIFT_REPEAT(605),
  [1800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2), SHIFT_REPEAT(612),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_body_repeat1, 2),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_stmt, 1),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gantt_task_text, 1),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_solid_point, 1),
  [1817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_solid_point, 1),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_signal_type, 1),
  [1821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_type, 1),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_open_arrow, 1),
  [1825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotted_open_arrow, 1),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram_class, 3),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 4),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_note_placement, 1),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_stmt, 1),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow, 1),
  [1871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_arrow, 1),
  [1873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_method, 3),
  [1875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_left, 1),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_simplelink, 1),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 10, .production_id = 16),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 9, .production_id = 16),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 8, .production_id = 16),
  [1921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 5),
  [1923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_relation, 7),
  [1925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7),
  [1927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 7, .production_id = 16),
  [1929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 4),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 6),
  [1933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation_line, 3, .production_id = 17),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_attribute_key_type, 1),
  [1945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_fk, 1),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_key_type_pk, 1),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute, 3),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_label, 1),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_class, 5),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__er_stmt, 1),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_relation, 5),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_placement_right, 1),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_role, 1),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_stmt_entity_block, 5),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_stmt_annotation, 4, .production_id = 17),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [2011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pie_label, 1),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [2041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [2069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(726),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [2079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [2083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_left, 1),
  [2085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_placement_right, 1),
  [2087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_note_placement, 1),
  [2089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [2131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [2139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [2171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [2173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [2175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [2177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [2179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_plus_sign, 1),
  [2181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_signal_minus_sign, 1),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [2201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [2211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrow_start, 1),
  [2213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_link, 1),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_type, 1),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_relation, 3),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [2295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_er_attribute_comment, 1),
  [2297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_arrowtext, 4),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [2303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_link_middletext, 3),
  [2305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [2309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
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
