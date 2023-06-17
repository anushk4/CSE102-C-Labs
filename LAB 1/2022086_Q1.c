#include <stdio.h>

int sum(int n1, int n2);
float avg(int n1, int n2);
int sumofsq(int n1, int n2);

int main(){
    int n1,n2;
    printf("Enter numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Sum: %d\nAverage: %f\nSum of squares: %d",sum(n1,n2),avg(n1,n2),sumofsq(n1,n2));
    return 0;
}

int sum(int n1, int n2){
    return n1+n2;
}

float avg(int n1, int n2){
    return (n1+n2)/2.0;
}

int sumofsq(int n1, int n2){
    return (n1*n1+n2*n2);
}