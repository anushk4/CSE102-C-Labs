#include <stdio.h>

void convert(float cm,int *feet,float *inch);

int main(){
    float cm,inch;
    int feet;
    printf("Enter value in cm: ");
    scanf("%f",&cm);
    convert(cm,&feet,&inch);
    printf("%.6g centimetres is %d feet %.1f inches.",cm,feet,inch);
    return 0;
}

void convert(float cm,int *feet,float *inch){
    *feet= (int) cm/(2.54*12);
    *inch=((cm/(2.54*12))-*feet)*12;
    if (*inch>=12){
        *inch-=12;
        *feet+=1;
    }
}