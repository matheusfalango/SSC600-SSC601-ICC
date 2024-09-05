#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisor(int a);
int j = 0;

int main()
{
    int inteiro = 0, *vetor;
    //vetor = (int *)malloc(sizeof(int));
    scanf("%d", &inteiro);

    vetor = divisor(inteiro);
    //printf("%d", *vetor);

    for(int i = 0; i < j; i++)
        printf("%d\n", *(vetor + i));
}

int divisor(int a)
{
    int *vetor1 = (int *)malloc(sizeof(int));

    for(int k = 1; k <= a; k++)
    {
        if( (a%k) == 0 )
        {
            *(vetor1 + j) = k;
            j++;
        }
    }

    //printf("%d", vetor1);
    return vetor1;

}
