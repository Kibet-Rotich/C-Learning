#include <stdio.h>

int main() {
    int x = 42;
    float y = 3.14159;

    printf("Integer: %d\n", x);          // prints: Integer: 42
    printf("Float: %.2f\n", y);          // prints: Float: 3.14
    printf("Right-justified: %6d\n", x); // prints: "    42"
    printf("String: %s\n", "Hello");     // prints: String: Hello
    return 0;
}

