#include <stdio.h>

// A simple function
void greet() {
    printf("Hello!\n");
}

// Another function
void farewell() {
    printf("Goodbye!\n");
}

int main() {
    // Declare a pointer to a function that takes no arguments and returns void
    void (*fp)();

    fp = greet;     // point to greet
    fp();           // calls greet indirectly

    fp = farewell;  // point to farewell
    fp();           // calls farewell indirectly

    return 0;
}

