#include <stdio.h>
#include <stdlib.h>

int replace(char *arr);

int main(){
    char *str = malloc(sizeof(char) * 100);
    printf("Enter string: ");
    scanf("%[^\n]%*c",str);
    int n=replace(str);
    printf("%s\n",str);
    printf("n: %d",n);
    return 0;
}

int replace(char *arr){
    int count=0;
    for (int i=0;arr[i]!='\0';i++){
        if (arr[i]==' '){
            arr[i]='-';
            count++;
        }
    }
    return count;
}