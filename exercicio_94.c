#include <stdio.h>
#include <stdlib.h>

void trocar(int *a);

int main()
{
    int *v;
    v = (int *)calloc(2, sizeof(int));

    for(int i = 0; i < 2; i++)
    scanf("%d", v + i);
    printf("A: %d B: %d\n", *v, *(v + 1));

    trocar(v);

    printf("A:%d B:%d", *v, *(v + 1));
}

void trocar(int *a)
{
    int aux = 0;
    aux = *a;
    *a = *(a+1);
    *(a+1) = aux;

}
