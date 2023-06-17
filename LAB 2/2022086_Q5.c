#include <stdio.h>

int max(int arr[]);
float average(int arr[]);
int min(int arr[]);
int sum(int arr[]);

int main(){
    int arr[10];
    printf("Enter elements of array: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Average: %.1f\nMaximum: %d\nMinimum: %d",average(arr),max(arr),min(arr));
    return 0;
}

int sum(int arr[]){
    int add=0;
    for (int i=0;i<10;i++){
        add+=arr[i];
    }
    return add;
}

float average(int arr[]){
    int add=sum(arr);
    return add/10;
}

int max(int arr[]){
    int maximum=arr[0];
    for (int i=0;i<10;i++){
        arr[i]>maximum ? maximum=arr[i] : printf("");
    }
    return maximum;
}

int min(int arr[]){
    int minimum=10e7;
    for (int i=0;i<10;i++){
        arr[i]<minimum ? minimum=arr[i] : printf("");
    }
    return minimum;
}