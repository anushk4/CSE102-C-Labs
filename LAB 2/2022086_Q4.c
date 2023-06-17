#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2;
    printf("Enter 2 numbers: ");
    if (scanf("%d %d",&n1,&n2)!=2){
        printf("Error");
        exit(0);
    }
    if (n1<n2){
        printf("Up");
    }else if (n1>n2){
        printf("Down");
    }else if (n1==n2){
        printf("Equal");
    }
    return 0;
}