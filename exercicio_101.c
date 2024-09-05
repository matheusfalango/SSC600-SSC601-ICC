#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade_aluno = 0, soma = 0, media = 0, *notas;
    scanf("%d", &quantidade_aluno);
    notas = (int *)malloc(quantidade_aluno*4);

    for(int i = 0; i < quantidade_aluno; i++)
    {
        scanf("%d", notas+i);
        //printf("%d\n", *(notas+i));
        soma = soma + *(notas+i);
        //printf("%d", soma);
    }
    media = soma/quantidade_aluno;
    printf("Media: %d", media);
}
