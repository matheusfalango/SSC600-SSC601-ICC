#include <stdio.h>

int main(){

    int intervalo[3], soma = 0, resto = 0;
    for (int i = 0; i < 2; i++){
        scanf ("%d", &intervalo[i]);      //definição do intervalo de números
        //printf ("%d\n", intervalo[i]);
    }

    if(intervalo[0] < intervalo[1]){
        printf("Intervalo de valores invalido");
        exit(0);
    }
    else{
        for(int j = intervalo[1]; j <= intervalo[0]; j++){
            resto = j%2;
            if(resto!=0){soma = soma + j;}
        }
        printf("%d", soma);
    }
}
