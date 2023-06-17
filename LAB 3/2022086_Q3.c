#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int length[26]={0};
    int _len=0;
    while ((ch=getchar())!='\n'){
        if (isalnum(ch)){
            _len++;
        }else{
            if (_len!=0){
            length[_len]++;
            _len=0;
            }
        }
    }
    //ignoring the cases where frequency is zero to maintain neatness of the output
    for (int i=1;i<26;i++){
        if (length[i]==0){
            continue;
        }
        printf("Length %d : %d occurences\n",i,length[i]);
    }
    return 0;
}