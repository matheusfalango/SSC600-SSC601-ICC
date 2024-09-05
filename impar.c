#include <stdio.h>

int main(){

    int vetor[10], soma = 0;

    for (int i = 0; i < 10; i++){
        scanf ("%d", &vetor[i]);
    }

    for(int j = 1; j < 10; j += 2){
        soma += vetor[j];
    }
    printf("%d", soma);
}
