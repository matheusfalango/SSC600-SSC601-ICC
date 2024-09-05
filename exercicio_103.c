#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, *maior, *menor;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
        //printf("%d", v[i]);
    }

    maior = (int *)malloc(sizeof(int));
    menor = (int *)malloc(sizeof(int));
    *maior = v[0];
    //printf("%d\n", *maior);
    *menor = *maior;
    //printf("%d\n", *menor);

    for(i = 0; i < 10; i++)
    {
        if(*maior < v[i])
            *maior = v[i];
        else if(*menor > v[i])
            *menor = v[i];
    }

    printf("Maior: %d\nMenor: %d", *maior, *menor);
}
