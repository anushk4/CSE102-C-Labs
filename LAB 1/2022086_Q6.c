#include <stdio.h>
#include <stdlib.h>

int random(int n);
void print(int i, int j, int k);

int main(){
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n>=3){
        i=random(n);
        j=random(n);
        k=random(n);
        print(i,j,k);
        print(i,k,j);
        print(j,i,k);
        print(j,k,i);
        print(k,i,j);
        print(k,j,i);
    }else{
        printf("Enter value greater than 3");
    }
    return 0;
}

int random(int n){
    return ((rand()%n)+1);
}

void print(int i, int j, int k){
    printf("%d %d %d\n",i,j,k);
}

// int main(){
//     int n,i,j,k;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     if (n>=3){
//         for (int i=1;i<=n;i++){
//             for (int j=i+1;j<=n;j++){
//                 for (int k=j+1;k<=n;k++){
//                     printf("%d %d %d\n",i,j,k);
//                 }
//             }
//         }
//     }else{
//         printf("Enter value greater than 3");
//     }
//     return 0;
// }