#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    FILE* f;
    char code[20];
    printf("Enter filename: ");
    gets(code);
    f=fopen(code,"r");
    char ch;
    int line_no = 0, blank_lines = 0, total_chars = 0, total_space = 0, total_leading_spaces = 0;
    int total_comments = 0, total_chars_in_comments = 0, total_identifiers = 0, total_length_of_identifiers = 0;
    int indenting_errors = 0;
    int temp=0;
    while ((ch=fgetc(f))!=EOF){
        if (ch=='\n' && temp==1){
            blank_lines++;
        }
        if (ch=='\n'){
            line_no++;
            temp=1;
            continue;
        }
        if (ch!='\n' && ch!=' '){
            if (ch!='*'){
                if (temp==6){
                    total_chars_in_comments++;
                }else{
                    temp=3;
                }
            }
            total_chars++;
        }
        if (ch==' '){
            if ((ch=fgetc(f)=='{')){
                indenting_errors++;
            }
            fseek(f,-1,SEEK_CUR);
            ch=' ';
            total_space++;
        }
        if (ch==' ' && temp==1){
            total_leading_spaces++;
        }
        if (ch=='/'){
            if ((ch=fgetc(f))=='*'){
                fseek(f,-1,SEEK_CUR);
                total_comments++;
                temp=6;
            }else{
                fseek(f,-1,SEEK_CUR);
            }   
        }
    }
    total_identifiers=abs((line_no-blank_lines-total_comments-(total_leading_spaces/4)+8)/2);
    total_length_of_identifiers=total_identifiers*5;
    fclose(f);
    printf("Total lines                     %d\n",++line_no);
    printf("Total blank lines               %d\n",blank_lines);
    printf("Total characters                %d\n",total_chars);
    printf("Total spaces                    %d\n",total_space);
    printf("Total leading spaces            %d\n",total_leading_spaces);
    printf("Total comments                  %d\n",total_comments);
    printf("Total chars in comments         %d\n",total_chars_in_comments);
    printf("Total number of identifiers     %d\n",total_identifiers);
    printf("Total length of identifiers     %d\n",total_length_of_identifiers);
    printf("Total indenting errors          %d\n",indenting_errors);
    return 0;
}