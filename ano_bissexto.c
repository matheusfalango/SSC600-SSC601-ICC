#include <stdio.h>

int main(){

    int yearValue;
    scanf("%d", &yearValue);

    float a,b,c;
    a = yearValue%4;
    b = yearValue%100;
    c = yearValue%400;

    if ((a == 0 && b != 0) || (c == 0)){
        printf("Sim");}

    else {printf("Nao");}
}
