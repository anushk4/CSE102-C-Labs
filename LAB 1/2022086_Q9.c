#include <stdio.h>

void convert(int s,int *hour,int *minute,int *second);

int main(){
    int s,hour,minute,second;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    convert(s,&hour,&minute,&second);
    printf("%d seconds is equivalent to %d hours %d minutes %d seconds.",s,hour,minute,second);
    return 0;
}

void convert(int s,int *hour,int *minute,int *second){
    *hour=s/3600;
    *minute=(s%3600)/60;
    *second=(s%3600)%60;
}