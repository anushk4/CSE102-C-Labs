#include <stdio.h>
#include <string.h>

void reverse(char arr[]);

//reversing word by word
int main(){
    char arr[1000],ch,word[100];
    int k=0;
    while ((ch=getchar())!='\n'){
        arr[k]=ch;
        k++;
    }
    arr[k]='\0';
    int j=0;
    for (int i=strlen(arr)-1;i>=0;i--){
        if (arr[i]!=' '){ //for reversing line by line, (arr[i]!='|')
            word[j]=arr[i];
            j++;
        }else{
            word[j]='\0';
            reverse(word);
            printf("%c",arr[i]);
            word[0]='\0';
            j=0;
        }
    }
    word[j]='\0';
    reverse(word);
    return 0;
}

//reversing letter by letter
// int main(){
//     char str[100];
//     printf("Enter string: ");
//     scanf("%[^\n]%*c",str);
//     reverse(str);
//     return 0;
// }

void reverse(char arr[]){
    for (int i=strlen(arr)-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}