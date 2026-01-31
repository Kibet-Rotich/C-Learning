#include <stdio.h>

#define TABSIZE 4

int main() {
    int c, pos;
    int spaces, tabs;

    spaces = 0;
    tabs = 0;

    for (pos = 1; (c = getchar()) != EOF; ++pos) {
        if (c == ' ') {
            if (pos % TABSIZE != 0) {
                ++spaces; // Keep track of spaces needed to reach next stop
            } else {
                spaces = 0; // We reached a tab stop, convert all previous spaces to one tab
                ++tabs;
            }
        } else {
            // Before printing the non-space character, print our "stored" tabs/spaces
            for ( ; tabs > 0; --tabs)
                putchar('\t');
            if (c == '\t') // If the character itself is a tab, clear spaces
                spaces = 0;
            else
                for ( ; spaces > 0; --spaces)
                    putchar(' ');
            
            putchar(c);
            
            if (c == '\n')
                pos = 0; // Reset position for new line
            else if (c == '\t')
                pos = pos + (TABSIZE - (pos - 1) % TABSIZE) - 1; 
        }
    }
    return 0;
}
