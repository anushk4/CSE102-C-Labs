#include <stdio.h>

float convert(float c);

int main(){
    float celsius;
    printf("Enter temperature in celsius: ");
    scanf("%f",&celsius);
    printf("%.1f degrees Celsius converts to %.1f degrees Fahrenheit.",celsius,convert(celsius));
    return 0;
}

float convert(float c){
    float fahrenheit;
    fahrenheit=(9*c/5.0)+32;
    return fahrenheit;
}