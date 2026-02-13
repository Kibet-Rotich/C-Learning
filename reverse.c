#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int c,i,j;
    for(i =0, j = strlen(str)-1; i<j; i++, j--){
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

int main() {
    
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
