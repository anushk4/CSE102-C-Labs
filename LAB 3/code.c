/*code to check if the given word is a palindrome or not ---> test code for Q5*/

#include <stdio.h>
#include <stdbool.h>

/*functions used in the code*/

bool palindrome(char str[]);
int len(char str[]);

int main(){
    char str[100];
    printf("Enter string to check: ");
    scanf("%s",str);
    if (palindrome(str)==true){
        printf("%s is a palindrome",str);
    }else{
        printf("%s is not a palindrome",str);
    }
    return 0;
}

/* Function to calculate the length of the passed array */

int len(char str[]){
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

/* Function which checks if the passed string array  is a palindrome or not and returns the boolean value */

bool palindrome(char str[]){
    int size = len(str);
    for (int i = 0; i < size / 2; i++){
        if (str[i] != str[size - 1 - i]){
            return false;
        }
    }
    return true;
}