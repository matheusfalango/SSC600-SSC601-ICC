#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int nota;
}s_aluno;

float itens_lidos = 0, soma_notas = 0, media = 0;

int main(){

    s_aluno aluno[5] = {0};

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("Digite a nota do aluno %s: ", aluno[i].nome);
        scanf("%d", &aluno[i].nota);
    }

    //Cadastro do nome e nota dos alunos
    FILE *arquivo = fopen("cadastro_alunos.bin", "wb+");

    fwrite(aluno, sizeof(s_aluno), 5, arquivo);

    fclose(arquivo);

    //Analise das notas para listar os aprovados
    FILE *leitura = fopen("cadastro_alunos.bin", "rb+");

    itens_lidos = fread(aluno, sizeof(s_aluno), 5, leitura);

    fclose(leitura);

    for(int i = 0; i < 5; i++){
        soma_notas += aluno[i].nota;
        media = soma_notas/itens_lidos;
    }

    printf("\nNome dos alunos aprovados: \n");
    for(int j = 0; j < itens_lidos; j++){
        if(aluno[j].nota >= 5)
        printf("%s\n", aluno[j].nome);
    }
    printf("Media geral da turma: %.1f\n", media);

    exit(EXIT_SUCCESS);

}
