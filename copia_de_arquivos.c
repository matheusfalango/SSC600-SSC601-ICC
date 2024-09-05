#include <stdio.h>
#include <stdlib.h>

char arquivo_origem[100], arquivo_final[100], texto[100];
void binario(), decimal();
int caso = 0;

void main(){

    printf("Digite 1 para copiar arquivos binários ou digite 2 para copiar arquivos texto: ");
    scanf("%d", &caso);

    if(caso == 1){
        binario();
        printf("\nArquivo copiado com sucesso de %s para %s.\n", arquivo_origem, arquivo_final);
        exit(EXIT_SUCCESS);
    }

    else if(caso == 2){
        decimal();
        printf("\nArquivo copiado com sucesso de %s para %s.\n", arquivo_origem, arquivo_final);
        exit(EXIT_SUCCESS);
    }
}

void binario(){

    FILE *origem, *destino;

    printf("Digite o nome do arquivo origem: ");
    scanf("%s", arquivo_origem);

    printf("Digite o nome do arquivo destino: ");
    scanf("%s", arquivo_final);

    // Copiar o texto do arquivo origem
    origem = fopen(arquivo_origem, "rb");

    if(origem == NULL)
        printf("Erro ao inicializar o arquivo %s.", arquivo_origem);

    int itens__lidos = fread(texto, sizeof(char), 100, origem);
    printf("Itens lidos do texto do arquivo %s: %d\n", arquivo_origem, itens__lidos);
    for(int i = 0; i < itens__lidos; i++)
        printf("%c", texto[i]);

    // Colar o texto no arquivo final

    destino = fopen(arquivo_final, "wb");

    if(destino == NULL)
        printf("Erro ao inicilaizar o arquivo %s.", arquivo_final);

    //for(int i = 0; i < itens__lidos; i++){
        fwrite(texto, sizeof(char), 100, destino);
    //}

    fclose(destino);
    fclose(origem);
}

void decimal(){

    FILE *origem, *destino;

    printf("Digite o nome do arquivo origem: ");
    scanf("%s", arquivo_origem);

    printf("Digite o nome do arquivo destino: ");
    scanf("%s", arquivo_final);

    //Copiar o texto do arquivo origem
    origem = fopen(arquivo_origem, "r+");

    if(origem == NULL)
        printf("Erro ao abrir o arquivo %s", arquivo_origem);

    fgets(texto, 100, origem);

    //Escrever o texto no arquivo destino
    destino = fopen(arquivo_final, "w+");

    if(destino == NULL)
        printf("Erro ao abrir o arquivo %s", arquivo_final);

    fputs(texto,destino);

    fclose(origem);
    fclose(destino);
}
