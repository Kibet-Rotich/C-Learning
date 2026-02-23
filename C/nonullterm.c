#include <stdio.h>

int main() {
    // Declare a character array without a null terminator
    char str[5] = {'H', 'e', 'l', 'l', 'o'};  // No '\0' at the end

    // This invokes undefined behavior: printf() keeps reading memory until it finds a null byte
    printf("Printing non-null-terminated string: %s\n", str);

    return 0;
}   
