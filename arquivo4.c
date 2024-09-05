#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declarações
    FILE *arquivo = fopen("leitura.bin", "wb");
    int vetor[5], vetor_lido[5], itens_lidos = 0;

    // Leitura dos dados
    for(int i = 0; i < 5; i++)
        scanf("%d", &vetor[i]);

    // Teste de abertura de arquivo
    if(arquivo == NULL)
        printf("Erro ao inicializar o arquivo.");

    // Armazenando os dados no arquivo binario
    fwrite(vetor, sizeof(int), 5, arquivo);

    // Fechamento do arquivo
    fclose(arquivo);

    // Abertura do arquivo
    arquivo = fopen("leitura.bin", "rb");

    // Teste de abertura do arquivo
    if(arquivo == NULL)
        printf("Erro ao inicializar o arquivo.");

    // Leitura dos dados presentes no arquivo
    itens_lidos = fread(vetor_lido, sizeof(int), 5, arquivo);

    // Fechamento do arquivo
    fclose(arquivo);

    // Transcrevendo os dados do arquivo na saída comum
    for(int j = 0; j < itens_lidos; j++)
        printf("%d ", vetor_lido[j]);

    printf("\nTodos os dados foram digitados com sucesso.");
}
