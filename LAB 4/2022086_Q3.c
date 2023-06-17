#include <stdio.h>

int search(char arr[],char ch,int n);

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    //assuming the array to be a char type
    char arr[size];
    char *ptr=&arr[0];
    printf("Enter elements of the array: ");
    for (int i=0;i<size;i++){
        scanf(" %c",ptr+i);
    }
    char ch;
    printf("Enter character to search: ");
    scanf(" %c",&ch);
    if (search(arr,ch,size)==1){
        printf("Element found");
    }else{
        printf("Element not found");
    }
    return 0;
}

int search(char arr[],char ch,int n){
    char f=0;
    for (int i=0;i<n;i++){
        if (arr[i]==ch){
            f=1;
            break;
        }
    }
    return f;
}