#include<stdio.h>

double convertCtoF(double celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}

double convertFtoC(double fahrenheit){
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(){
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = convertCtoF(celsius);
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = convertFtoC(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}