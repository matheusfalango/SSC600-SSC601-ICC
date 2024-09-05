#include <stdio.h>

int main(){

    int totalDuck,totalRabbit,totalHead,totalFoot;

    scanf("%d", &totalHead);
    scanf("%d", &totalFoot);

    totalRabbit = (totalFoot - (totalHead*2))/2;
    totalDuck = totalHead - totalRabbit;

    printf("%d %d", totalDuck,totalRabbit);
    return 0;

}
