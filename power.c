#include<stdio.h>

int power(int base, int n){
    // if(n == 0)
    //     return 1;
    // else
    //     return base * power(base, n - 1);
    for(int i = 1; i < n; i++){
        base = base * base;
    }
    return base;
}

int main(){
    int base, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &n);
    int result = power(base, n);
    printf("%d raised to the power of %d is %d\n", base, n, result);
    return 0;
}