#include <stdio.h>

int main(){

int valor, dias, semanas;

    scanf("%d", &valor);

    semanas = valor/7;
    dias = valor%7;

    printf("%d %d", semanas, dias);
    return 0;
}
