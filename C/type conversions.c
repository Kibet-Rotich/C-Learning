#include<stdio.h>
#include<ctype.h>

int main() {
    char ch = 'A';
    int num = 65;

    // Implicit conversion from char to int
    int asciiValue = ch;
    printf("ASCII value of '%c' is %d\n", ch, asciiValue);

    // Explicit conversion from int to char
    char character = (char)num;
    printf("Character for ASCII value %d is '%c'\n", num, character);

    // Implicit conversion from int to double
    double decimalValue = num;
    printf("Double value of %d is %.2f\n", num, decimalValue);

    // Explicit conversion from double to int
    double pi = 3.14159;
    int intValue = (int)pi;
    printf("Integer value of %.5f is %d\n", pi, intValue);

    return 0;
}