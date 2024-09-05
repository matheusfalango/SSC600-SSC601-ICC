#include <stdio.h>

int main(){

    int valor,resto,divisao;
    scanf("%d",&valor);

    for(int i = 1; i <= valor; i++){
        divisao = valor/i;
        resto = valor%i;
        if(resto == 0){
            printf("%d\n", i);
        }
    }
}
