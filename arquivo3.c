#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo = fopen("inteiros.bin", "wb");
    int vetor[5];

    for(int i = 0; i < 5; i++)
        scanf("%d", &vetor[i]);

    // Teste de abertura
    if(arquivo == NULL)
        printf("Erro ao abrir o arquivo.\n");

    // Transcrever dados para o arquivo em binario
    fwrite(vetor, sizeof(int), 5, arquivo);

    int itens_lidos = fread(vetor, sizeof(int), 5, arquivo);
    printf("Os %d itens foram lidos com sucesso.", itens_lidos);

    fclose(arquivo);

    return 0;
}
