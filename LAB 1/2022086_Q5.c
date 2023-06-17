#include <stdio.h>

//hardcoding

int main(){
    printf("Hello\nMy name is XYZ\nI live at ABC\nThank you\nHave a good day.");
    return 0;
}

//getting user input until an empty line is encountered

// int main(){
//     char sen[1000];
//     int i=0;
//     do{
//         char string[1000];
//         fgets(string, 1000, stdin);
//         for(int j=0; string[j]!='\0'; j++) {
//             sen[i]=string[j];
//             i++;
//         }
//     }while(sen[i-1]!='\n' || (i>1 && sen[i-2]!='\n'));
//     for (int j=0; j<i; j++){
//         printf("%c",sen[j]);
//     }
//     return 0;
// }