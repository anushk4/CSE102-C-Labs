#include <stdio.h>

struct pay_rate{
    int rate;
    int hour;
    float pay;
}arr[100];

int main(){
    struct pay_rate arr[100];
    int len;
    for (int i=0;i<100;i++){
        printf("Enter rate (pence/hour) and number of hours: ");
        scanf("%d %d", &arr[i].rate,&arr[i].hour);
        if (arr[i].rate==0){
            break;
        }else{
            if (arr[i].hour>60){
                arr[i].pay=(((arr[i].hour-60)*2*arr[i].rate)+(20*1.5*arr[i].rate)+(40*arr[i].rate))/100.0;
            }else if (arr[i].hour>=40 && arr[i].hour<=60){
                arr[i].pay=(((arr[i].hour-40)*1.5*arr[i].rate)+(40*arr[i].rate))/100.0;
            }else if (arr[i].hour<40){
                arr[i].pay=(arr[i].hour*arr[i].rate)/100.0;
            }
            len++;
        }
    }
    float total=0;
    printf("\n");
    for (int i=0;i<len;i++){
        printf("Pay at %d pence/hr for %d hours is %.2f pounds\n",arr[i].rate,arr[i].hour,arr[i].pay);
        total+=arr[i].pay;
    }
    printf("Total pay is %.2f pounds",total);
    return 0;
}