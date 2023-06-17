#include <stdio.h>

int sum(int arr[],int k);

int main(){
    int arr[100];
    int k=0;
    while (1==1){
        printf("Enter number: ");
        scanf("%d",&arr[k]);
        if (arr[k]==-999){
            break;
        }
        k++;
    }
    printf("Sum: %d",sum(arr,k));
    return 0;
}

int sum(int arr[],int k){
    int add=0;
    for (int i=0;i<k;i++){
        add+=arr[i];
    }
    return add;
}