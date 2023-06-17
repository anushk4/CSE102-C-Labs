#include <stdio.h>
#include <string.h>

void format(int d1,int *d2,int m1,int *m2,int y1,int *y2);
enum months get_month(int n,char month[],char M2[]);

enum months{
    January=1, February, March, April, May, June, July,
    August,September,October,November,December
};

int main(){
    int d1,d2,m2,y1,y2;
    char M1[10],M2[10];
    printf("Enter date: ");
    scanf("%d %s %d",&d1,&M1,&y1);
    enum months m1=get_month(0,M1,M2);
    format(d1,&d2,m1,&m2,y1,&y2);
    char garbage[]="abc";
    enum months temp=get_month(m2,garbage,M2);
    printf("Date following %02d %s %04d is %02d %s %04d",d1,M1,y1,d2,M2,y2);
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

enum months get_month(int n,char month[],char M2[]){
    enum months m;
    if (strcmp(month,"January")==0 || n==1){
        m=January;
        strcpy(M2, "January");
    }else if (strcmp(month,"February")==0 || n==2){
        m=February;
        strcpy(M2, "February");
    }else if (strcmp(month,"March")==0 || n==3){
        m=March;
        strcpy(M2, "March");
    }else if (strcmp(month,"April")==0 || n==4){
        m=April;
        strcpy(M2, "April");
    }else if (strcmp(month,"May")==0 || n==5){
        m=May;
        strcpy(M2, "May");
    }else if (strcmp(month,"June")==0 || n==6){
        m=June;
        strcpy(M2, "June");
    }else if (strcmp(month,"July")==0 || n==7){
        m=July;
        strcpy(M2, "July");
    }else if (strcmp(month,"August")==0 || n==8){
        m=August;
        strcpy(M2, "August");
    }else if (strcmp(month,"September")==0 || n==9){
        m=September;
        strcpy(M2, "September");
    }else if (strcmp(month,"October")==0 || n==10){
        m=October;
        strcpy(M2, "October");
    }else if (strcmp(month,"November")==0 || n==11){
        m=November;
        strcpy(M2, "November");
    }else if (strcmp(month,"December")==0 || n==12){
        m=December;
        strcpy(M2, "December");
    }
    return m;
}