#include <stdio.h>

struct PersonalInfo{
    char name[100],address[100],dob[30];
    int age;
};

int main(){
    struct PersonalInfo person;
    printf("Enter your name: ");
    scanf("%[^\n]%*c",&person.name);
    printf("Enter address: ");
    scanf("%[^\n]%*c",&person.address);
    printf("Date of birth: ");
    scanf("%[^\n]%*c",&person.dob);
    printf("Enter age: ");
    scanf("%d",&person.age);
    printf("\nName: %s\nAddress: %s\nDate of Birth: %s\nAge: %d",person.name,person.address,person.dob,person.age);
    return 0;
}