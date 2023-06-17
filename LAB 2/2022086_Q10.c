#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int count=0;
    int a=0,e=0,i=0,o=0,u=0,rest=0;
    char vowels[5]={'a','e','i','o','u'};
    while ((ch=getchar())!='\n'){
        count++;
        switch (tolower(ch))
        {
        case 'a': a+=1;
                  break;
        case 'e': e+=1;
                  break;
        case 'i': i+=1;
                  break;
        case 'o': o+=1;
                  break;
        case 'u': u+=1;
                  break;        
        default: rest+=1;
                 break;
        }
    }
    printf("Number of characters:\n");
    printf("a  %d ; e  %d ; i  %d ; o  %d ; u  %d ; rest  %d\n",a,e,i,o,u,rest);
    float para=100.0/count;
    printf("Percentages of total:\n");
    printf("a  %.0f%% ; e  %.0f%% ; i  %.0f%% ; o  %.0f%% ; u  %.0f%% ; rest  %.0f%%\n",a*para,e*para,i*para,o*para,u*para,rest*para);
    return 0;
}