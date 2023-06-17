#include <stdio.h>

void format(int d1,int *d2,int m1,int *m2,int y1,int *y2);

int main(){
    int d1,d2,m1,m2,y1,y2;
    printf("Enter date: ");
    scanf("%d %d %d",&d1,&m1,&y1);
    format(d1,&d2,m1,&m2,y1,&y2);
    printf("Date following %02d:%02d:%04d is %02d:%02d:%04d",d1,m1,y1,d2,m2,y2);
    return 0;
}

void format(int d1,int *d2,int m1,int *m2,int y1,int *y2){
    *d2=d1+1;
    *m2=m1;
    if (*d2>28){
        if (m1==2 && y1%4!=0){
            *d2-=28;
            *m2=m1+1;
        }else if(m1==2 && y1%100==0){
            if (y1%400==0){
                if (*d2>29){
                    *d2-=29;
                    *m2=m1+1;
                }
                
            }else{
                *d2-=28;
                *m2=m1+1;
            }
        }else if (m1==2 && y1%4==0 && *d2>29){
            *d2-=29;
            *m2=m1+1;
        }else if ((*d2>30) && (m1==4 || m1==6 || m1==9 || m1==11)){
            *d2-=30;
            *m2=m1+1;
        }else if (*d2>31){
            *d2-=31;
            *m2=m1+1;
        }else{
            *m2=m1;
        }
    }
    if (*m2>12){
        *m2-=12;
        *y2=y1+1;
    }else{
        *y2=y1;
    }
}