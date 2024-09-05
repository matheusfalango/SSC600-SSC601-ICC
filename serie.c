#include <stdio.h>

int main(){

    float j,sum;
    j=0;
    sum=0;

    for(int i = 1; i <= 99; i = i + 2){
        j++;
        sum += i/j;
    }

    printf("%f", sum);
    return 0 ;
}
