#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        rcomment(c);
    }
    return 0;
}

/* Handles characters and decides if we are entering a comment or string */
void rcomment(int c) {
    int d;

    if (c == '/') {
        if ((d = getchar()) == '*') {         /* Beginning of block comment */
            in_comment();
        } else if (d == '/') {                /* Beginning of line comment */
            while ((d = getchar()) != '\n' && d != EOF);
            if (d == '\n') putchar(d);
        } else {                              /* Just a lonely slash */
            putchar(c);
            putchar(d);
        }
    } else if (c == '\'' || c == '"') {       /* Beginning of a quote/string */
        echo_quote(c);
    } else {
        putchar(c);
    }
}

/* Skips everything until the end of a block comment */
void in_comment(void) {
    int c, d;

    c = getchar();
    d = getchar();
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

/* Prints strings/characters and handles escape sequences like \" */
void echo_quote(int c) {
    int d;

    putchar(c);
    while ((d = getchar()) != c) {
        putchar(d);
        if (d == '\\') {                      /* Ignore the character after backslash */
            putchar(getchar());
        }
    }
    putchar(d);
}
