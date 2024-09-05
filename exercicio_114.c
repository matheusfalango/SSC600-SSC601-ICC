#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char titulo[60];
    char genero[60];
    int ano;
}st_filmes;

int main()
{

    char genero_dig[60];
    int itens_iguais = 0;
    st_filmes vetor[5];
    scanf("%s", genero_dig);
    //printf("%s\n", genero_dig);

    FILE *arquivo = fopen("filmes.bin", "rb");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(EXIT_FAILURE);
    }

    fread(vetor, sizeof(st_filmes), 5, arquivo);

    fclose(arquivo);

    for(int i = 0; i < 5; i++)
    {
        //printf("%s\n", vetor[i].genero);
        //printf("%s\n", vetor[i].titulo);
        //printf("%d\n", vetor[i].ano);

        if(strcmp(vetor[i].genero, genero_dig) == 0)
            printf("%s\n", vetor[i].titulo);

    }
}


