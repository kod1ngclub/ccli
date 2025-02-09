#ifndef CCLI_SELECT_MODEL_STYLE_H
#define CCLI_SELECT_MODEL_STYLE_H

enum ccli_select_indent_style {
    CCLI_SELECT_INDENT_STYLE_SPACE01,
    CCLI_SELECT_INDENT_STYLE_SPACE02,
    CCLI_SELECT_INDENT_STYLE_SPACE03,
    CCLI_SELECT_INDENT_STYLE_SPACE04,
    CCLI_SELECT_INDENT_STYLE_TAB01
};

enum ccli_select_color_style {
    CCLI_SELECT_COLOR_STYLE_NONE,
    CCLI_SELECT_COLOR_STYLE_RED,
    CCLI_SELECT_COLOR_STYLE_BLUE
};

enum ccli_select_deco_style {
    CCLI_SELECT_DECO_STYLE_NONE,
    CCLI_SELECT_DECO_STYLE_UNDERLINE,
    CCLI_SELECT_DECO_STYLE_BOLD
};

struct ccli_select_style {
    const char prefix;
    const enum ccli_select_indent_style indent;
    const enum ccli_select_color_style color;
    const enum ccli_select_deco_style deco;
};

#endif // CCLI_SELECT_MODEL_STYLE_H
