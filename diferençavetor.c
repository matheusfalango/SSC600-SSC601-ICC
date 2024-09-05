#include <stdio.h>

int main(){

    int vetor[10], diferenca = 0, maiordiferenca = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    for(int j = 1; j < 9; j++){
        diferenca = abs(vetor[j] - vetor[j-1]);
        if(diferenca > maiordiferenca){maiordiferenca = diferenca;}
    }
    printf("%d", maiordiferenca);
}
