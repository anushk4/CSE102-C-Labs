#include <stdio.h>

void compound(float pound,float rate,int year);

int main(){
    int capital,year;
    float pound,rate;
    printf("Enter capital sum in pence: "); //given in question
    scanf("%d",&capital);
    pound=capital/100.0; //in question
    printf("Capital in pounds: %.2f\n",pound); //further calculation done on pounds
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter no of years: ");
    scanf("%d",&year);
    printf("Year     Interest        Sum\n");
    printf("--------------------------------\n");
    compound(pound,rate,year);
    return 0;
}

void compound(float pound,float rate,int year){
    for (int i=1;i<=year;i++){
        float interest=((pound*rate)/100.0);
        pound+=interest;
        printf("%02d       %.2f       %.2f\n",i,interest,pound);
    }
}