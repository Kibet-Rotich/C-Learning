#include <stdio.h>

#define TABWIDTH 4 

int main() {
    int c, pos;
    int spaces;

    pos = 0; // Current column position
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // Calculate how many spaces to the next tab stop 
            spaces = TABWIDTH - (pos % TABWIDTH);
            
            while (spaces > 0) {
                putchar(' ');
                ++pos;
                --spaces;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 0; // Reset position on new line
        } else {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}
