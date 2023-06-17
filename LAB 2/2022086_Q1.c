#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int idx(char arr[6],char c);
int convert(int arr[2]);

int main(){
    char num[2];
    char valid[6]={'A','B','C','D','E','F'};
    int deci[6]={10,11,12,13,14,15};
    int num1[2];
    printf("Enter hexadecimal number: ");
    scanf("%s",num);
    for (int i=0;i<2;i++){
        if (num[i]>='0' && num[i]<='9'){
            num1[i]=num[i]-'0';
        }else if (num[i]>='A' && num[i]<='F'){
            num1[i]=deci[idx(valid,num[i])];
        }else{
            printf("Invalid character entered");
            exit(0);
        }
    }
    printf("Decimal equivalent: %d",convert(num1));
    return 0;
}

int idx(char arr[6],char c){
    for (int i=0;i<6;i++){
        if (arr[i]==c){
            return i;
        }
    }
}

int convert(int arr[2]){
    int decimal=0;
    int k=1;
    for (int i=0;i<2;i++){
        decimal+=arr[k]*pow(16,i);
        k--;
    }
    return decimal;
}