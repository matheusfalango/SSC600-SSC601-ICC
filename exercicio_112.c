#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* divisor(int *v);
int j = 0;

int main()
{
    int *vetor, *inteiros;
    inteiros = (int *)calloc(3,sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", inteiros + i);
    }

    vetor = divisor(inteiros);

    for(int i = 0; i < j; i++)
        printf("%d\n", *(vetor + i));
}

int* divisor(int *v)
{
    int *vetor1 = (int *)calloc(100,sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        for(int k = 1; k <= *(v+i); k++)
        {
            if( (*(v+i)%k) == 0 )
            {
                *(vetor1 + j) = k;
                j++;
            }
        }
    }
    return vetor1;
}

