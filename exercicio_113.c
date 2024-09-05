#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30], copia[30];
    int qntd_copia = 0;
    scanf("%s", &palavra);
    //printf("%s\n", palavra);

    FILE *arquivo = fopen("palavras.txt", "r+");

    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(EXIT_FAILURE);
    }

    while(!feof(arquivo))
    {
        //printf("%s\n", copia);
        fscanf(arquivo, "%s", copia);
        if(strcmp(palavra, copia) == 0)
           qntd_copia++;
           //printf("%d\n", qntd_copia);
    }

    fclose(arquivo);

    printf("%d", qntd_copia);

    exit(EXIT_SUCCESS);

}
