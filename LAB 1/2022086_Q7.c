#include <stdio.h>

float area(float r);

int main(){
    float radius;
    while (1 == 1){
        printf("Enter radius: ");
        scanf("%f", &radius);
        if (radius<0){
            printf("Error: Negative values not permitted.\n\n");
        }else{
            break;
        }
    }
    printf("The area of a circle of radius %.2f units is %.2f units", radius,area(radius)); 
    return 0;
}

float area(float r){
    float pi = 3.14159;
    return pi * r * r;
}
