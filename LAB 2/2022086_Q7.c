#include <stdio.h>
#include <string.h>
#include <math.h>

int convert(int base, int num);

int main(){
    int base;
    char num[20],update[20];
    int final=0;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter number: ");
    scanf("%s",num);
    int i=0;
    int k=0;
    char f='F';
    while (num[i]!='\0'){
        if (!(num[i]>='0' && num[i]<(base+'0')) && (f=='F')){
            i++;
        }else if (!(num[i]>='0' && num[i]<(base+'0')) && (f=='T')){
                break;
        }else{
            f='T';
            update[k]=num[i];
            k++;
            i++;
        }
    }
    update[k]='\0';
    int j=0;
    int p=pow(10,(strlen(update)-1));
    while (update[j]!='\0'){
        final+=(update[j]-'0')*p;
        j++;
        p/=10;
    }
    printf("Decimal equivalent: %d",convert(base,final));
    return 0;
}

int convert(int base, int num){
    int convert=0;
    int k=0;
    while (num>=1){
        convert+=(num%10)*pow(base,k);
        k++;
        num/=10;
    }
    return convert;
}