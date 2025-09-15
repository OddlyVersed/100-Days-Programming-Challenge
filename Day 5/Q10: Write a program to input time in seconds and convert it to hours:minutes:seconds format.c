#include <stdio.h>
int main() {
    int totalseconds,minutes,hours,seconds;
    printf("Enter the time in seconds = ");
    scanf("%d",&totalseconds);
    hours= totalseconds/3600;
    minutes=((totalseconds/3600)%60);
    seconds= totalseconds%60;
    printf("Hours:Minutes:Seconds = %d:%d:%d",hours,minutes,seconds);
    return 0;
}
