#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count(char str[],char sub[]);
void lower(char str[]);

int main(){
    char str[100],sub[100];
    printf("Enter word: ");
    scanf("%[^\n]%*c",sub);
    printf("Enter sentence: ");
    scanf("%[^\n]%*c",str);
    lower(str);
    lower(sub);
    printf("The word is \"%s\".\nThe sentence is \"%s\".\nThe word occurs %d times.",sub,str,count(str,sub));
    return 0;
}

int count(char str[],char sub[]){
    int count=0,j,k;
    for (int i=0;;i++){
        if (str[i]=='\0'){
            break;
        }
        if (str[i]==sub[0] && (str[i-1]==' ' || !(isalpha(str[i-1])))){
            char temp[strlen(sub)+1];
            for (j=i,k=0;k<strlen(sub);j++,k++){
                temp[k]=str[j];
            }
            if (str[j]==' ' || !(isalpha(str[j]))){
                temp[strlen(sub)]='\0';
                if (strcmp(temp,sub)==0){
                    count++;
            }
            }
        }
    }
    return count;
}

void lower(char str[]){
    for (int i=0;i<100;i++){
        if (str[i]=='\0'){
            break;
        }
        str[i]=tolower(str[i]);
    }
}