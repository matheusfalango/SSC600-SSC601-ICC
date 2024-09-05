#include <stdio.h>

int main(){

    int numero = 0,count = 0,valor = 1;
    scanf("%d", &numero);
    printf("0\n");

    for(int i = 1; i <= numero; i = valor){
        printf("%d\n", valor);
        valor = i + count;
        count = i;
    }
    printf("%d", valor);
}
