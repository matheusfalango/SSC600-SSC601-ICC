#include <stdio.h>
#include <stdlib.h>

int aloca();
int compara(int *b);

int main()
{
    int *a, *c;
    a = aloca();
    c = compara(a);
    printf("Menor: %d\nMaior: %d", *(c+10), *(c+11));
}

int aloca()
{
    int *vetor;
    vetor = (int *)calloc(10, sizeof(int));

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", vetor + i);
    }
    return vetor;
}

int compara(int *b)
{
    int menor = *b, maior = *b;
    //printf("%d", numero);

    for(int j = 0; j < 10; j++)
    {
        if(maior < *(b+j))
            maior = *(b+j);
        else if(menor > *(b+j))
            menor = *(b+j);
    }

    *(b+10) = menor;
    *(b+11) = maior;

    return b;
}
