#ifndef CCLI_SELECT_MODEL_STYLE_H
#define CCLI_SELECT_MODEL_STYLE_H

enum select_indent_style {
    SELECT_INDENT_STYLE_SPACE01,
    SELECT_INDENT_STYLE_SPACE02,
    SELECT_INDENT_STYLE_SPACE03,
    SELECT_INDENT_STYLE_SPACE04,
    SELECT_INDENT_STYLE_TAB01
};

enum select_color_style {
    SELECT_COLOR_STYLE_NONE,
    SELECT_COLOR_STYLE_RED,
    SELECT_COLOR_STYLE_BLUE
};

enum select_deco_style {
    SELECT_DECO_STYLE_NONE,
    SELECT_DECO_STYLE_UNDERLINE,
    SELECT_DECO_STYLE_BOLD
};

struct select_style {
    const char prefix;
    const enum select_indent_style indent;
    const enum select_color_style color;
    const enum select_deco_style deco;
};

#endif // CCLI_SELECT_MODEL_STYLE_H
