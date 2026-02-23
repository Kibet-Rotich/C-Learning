#include <stdio.h>

int main() {
    int array[] = {23,54,67,98,56};
    for(int i = 0;i<5;i++){
    printf("%d ,",*(array+i));
    }
    return 0;
}
