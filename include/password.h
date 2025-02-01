#ifndef CCLI_PASSWORD_H
#define CCLI_PASSWORD_H

// ==== password config
enum password_indentset {
    PASSWORD_INDENTSET_SPACE01,
    PASSWORD_INDENTSET_SPACE02,
    PASSWORD_INDENTSET_SPACE03,
    PASSWORD_INDENTSET_SPACE04,
    PASSWORD_INDENTSET_TAB01
};

enum password_lineset {
    PASSWORD_LNIESET_NONE,
    PASSWORD_LINESET_NEWLINE01,
    PASSWORD_LINESET_NEWLINE02
};

struct password_conf {
    const int retry;
    const int delay;

    const char prefix;
    const enum password_indentset indent;
    const enum password_lineset line;
};

// ==== password config - default
static const struct password_conf PASSWORD_DEFAULT = {
    .retry      = 3,
    .delay      = 3000,
    .prefix     = '>',
    .indent     = PASSWORD_INDENTSET_SPACE01,
    .line       = PASSWORD_LINESET_NEWLINE01
};

// ==== out types
typedef char* const out_password;

// ==== API functions
void password(
    const char* const message,
    const struct password_conf conf,

    const out_password* const out
);

#endif // CCLI_PASSWORD_H
