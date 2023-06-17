#include <stdio.h>

void swap(int *a, int *b, int *c);

int main(){
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nBefore rotating:\na=%d\nb=%d\nc=%d\n",a,b,c);
    swap(&a,&b,&c);
    printf("\nAfter rotating:\na=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}

void swap(int *a, int *b,int *c){
    int t=*c;
    *c=*b;
    *b=*a;
    *a=t;
}