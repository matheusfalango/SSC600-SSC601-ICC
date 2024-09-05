#include <stdio.h>

int main(){

    int hour,minute,second,duration,beginTime,finalTime;
    scanf("%d", &hour);
    scanf("%d", &minute);
    scanf("%d", &second);
    scanf("%d", &duration);

    beginTime = 3600*hour + 60*minute + second;
    finalTime = beginTime + duration;

    int fhour, fminute, fsecond;
    fhour = finalTime/3600;
    fminute = (finalTime%3600)/60;
    fsecond = (finalTime%3600)%60;

    printf("%d %d %d", fhour,fminute,fsecond);
    return 0;

}
