#include <stdio.h>

void counterFunc() {
    static int count = 0;  // persists across calls
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counterFunc();  // prints 1
    counterFunc();  // prints 2
    counterFunc();  // prints 3
    return 0;
}

