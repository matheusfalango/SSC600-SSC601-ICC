#include <stdio.h>
#include <stdlib.h>

int conversao(int a);

int main()
{
   int tempo, *vetor;
   scanf("%d", &tempo);

   vetor = conversao(tempo);

   printf("%d %d %d", *(vetor), *(vetor+1), *(vetor+2));

}

int conversao(int a)
{
    int aux, *vetor1;
    vetor1 = (int *)calloc(3,sizeof(int));

    *vetor1 = a/3600;
    aux = a%3600;
    *(vetor1+1) = aux/60;
    *(vetor1+2) = aux%60;

    return vetor1;
}

