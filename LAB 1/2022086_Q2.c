#include <stdio.h>

struct PersonalInfo{
    char name[100],address[100];
    int age;
};

int main(){
    struct PersonalInfo person;
    printf("Enter your name: ");
    scanf("%[^\n]%*c",&person.name);
    printf("Enter address: ");
    scanf("%[^\n]%*c",&person.address);
    printf("Enter age: ");
    scanf("%d",&person.age);
    printf("\nName: %s\nAddress: %s\nAge: %d",person.name,person.address,person.age);
    return 0;
}