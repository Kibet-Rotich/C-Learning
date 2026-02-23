#include <stdio.h>

int main() {
    char *words[] = {"apple", "banana", "cherry"};

    for (int i = 0; i < 3; i++) {
        printf("%s\n", words[i]);   // prints each string
    }
    return 0;
}

