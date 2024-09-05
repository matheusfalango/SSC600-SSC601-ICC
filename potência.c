#include <stdio.h>

int main() {

    int X,Y,pot;
    scanf("%d", &X);
    scanf("%d", &Y);
    pot = 1;

    for(int i = 1; i <= Y; i++){
        pot = pot*X;
    }

    printf("%d", pot);
    return 0;
}
