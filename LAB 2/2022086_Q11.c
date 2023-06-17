#include <stdio.h>

int main(){
    FILE *f;
    char ch;
    f=fopen("file.txt","r");
    int s=1;
    do{
        ch=fgetc(f);
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            printf("%c",ch);
            s=1;
        }else if (ch==' ' && s==1){
            printf("\n");
            s=0;
        }
    }while(ch>0);
    return 0;
}