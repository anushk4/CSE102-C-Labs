#include <stdio.h>

void final_time(int time,int duration,int *end);

int main(){
    int time,duration,end;
    printf("Enter time: ");
    scanf("%d",&time);
    printf("Enter time duration: ");
    scanf("%d",&duration);
    final_time(time,duration,&end);
    printf("Start time is %04d. Duration is %d. End time is %04d.",time,duration,end);
    return 0;
}

void final_time(int time,int duration,int *end){
    int minute=time%100;
    int dur_min=duration%100;
    int carry=0;
    int final_min=minute+dur_min;
    if (final_min>=60){
        final_min-=60;
        carry++;
    }
    int hour=time/100;
    int dur_hour=duration/100;
    int final_hour=hour+dur_hour+carry;
    *end=(final_hour*100)+final_min;
    while (*end>=2400){
        *end-=2400;
    }
}