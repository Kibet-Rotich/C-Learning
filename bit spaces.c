#include <stdio.h>

typedef struct Status {
    unsigned int isVisible : 1;   // 1 bit
    unsigned int isActive  : 1;   // 1 bit
    unsigned int errorCode : 4;   // 4 bits
} Status;

int main() {
    Status s;

    s.isVisible = 1;
    s.isActive = 0;
    s.errorCode = 9;

    printf("Visible: %u, Active: %u, Error: %u\n",
           s.isVisible, s.isActive, s.errorCode);

    return 0;
}

