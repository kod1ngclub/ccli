#ifndef CCLI_SELECTION_MODEL_STYLE_H
#define CCLI_SELECTION_MODEL_STYLE_H

enum selection_indent_style {
    SELECTION_INDENT_STYLE_SPACE01,
    SELECTION_INDENT_STYLE_SPACE02,
    SELECTION_INDENT_STYLE_SPACE03,
    SELECTION_INDENT_STYLE_SPACE04,
    SELECTION_INDENT_STYLE_TAB01
};

enum selection_color_style {
    SELECTION_COLOR_STYLE_NONE,
    SELECTION_COLOR_STYLE_RED,
    SELECTION_COLOR_STYLE_BLUE
};

enum selection_deco_style {
    SELECTION_DECO_STYLE_NONE,
    SELECTION_DECO_STYLE_UNDERLINE,
    SELECTION_DECO_STYLE_BOLD
};

struct selection_config {
    const char prefix;
    const enum selection_indent_style indent;
    const enum selection_color_style color;
    const enum selection_deco_style deco;
};

#endif // CCLI_SELECTION_MODEL_STYLE_H
