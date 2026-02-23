#include <stdio.h>
#include"test.h"

int counter =  0;

int main() {
counter = 5;
    printf("Counter in main: %d\n", counter);
    printCounter();
    return 0;
}
