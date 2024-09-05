#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

    char escrita[100], leitura[100];

    FILE *arq;
    arq = fopen("FILE_TEXTO", "w+");

    //Confere se o arquivo foi aberto
    if(arq == NULL)
    printf("\nErro na abertura do arquivo.\n");

    //Faz a leitura de uma frase do stdin e escreve a frase no arquivo
    gets(leitura);
    fprintf(arq, "%s", leitura);
    fclose(arq);
    //fseek(arq, SEEK_SET, SEEK_END);

    //Leitura do arquivo para escrever no stdout
    arq = fopen("FILE_TEXTO", "r+");

    fgets(escrita, strlen(escrita), arq);
    printf("%s", escrita);

    fclose(arq);
}
