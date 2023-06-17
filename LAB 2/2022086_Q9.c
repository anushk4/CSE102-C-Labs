#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,count=1;
    printf("Enter number: ");
    scanf("%d",&n);
    if (n<1){
        printf("Error");
        exit(0);
    }
    printf("Initial value is %d\n",n);
    while (n!=1){
        if (n%2==0){
            n/=2;
        }else{
            n=3*n+1;
        }
        if (n==1){
            break;
        }
        count++;
        printf("Next value is %d\n",n);
    }
    printf("Final value is %d, number of steps %d",n,count);
    return 0;
}