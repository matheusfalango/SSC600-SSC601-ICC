#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo = fopen("pesquisa", "r");

    int itens_lidos = 0, flag = 0, contador = 0;
    char copia[99], vetor[99];

    scanf("%s", vetor);
    rewind(arquivo);

    while(fscanf(arquivo, "%s", copia) != EOF){
        //printf("%s\n", copia);
        itens_lidos++;                              //inclui espaços, caracteres especiais e pontuações
        flag = strcmp(vetor, copia);
        if(flag == 1) contador++;
    }

    printf("Foram lidos %d itens e existe %d itens iguais a %s", itens_lidos, contador, vetor);

    fclose(arquivo);

    return 0;
}
