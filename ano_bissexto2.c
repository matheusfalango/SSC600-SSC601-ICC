#include <stdio.h>

int main(){

    int year1,year2,count = 0;
    scanf("%d", &year1);
    scanf("%d", &year2);

    for(int count = year1; count <= year2; count++){
        int a,b,c;
        a = count%4;
        b = count%100;
        c = count%400;

        if ((a == 0 && b != 0) || (c == 0)){
            printf("%d\n", count);}
    }
}
