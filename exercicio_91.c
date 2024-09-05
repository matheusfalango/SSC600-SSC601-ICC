#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int *vetor1;
    vetor1 = (int *)calloc(10,sizeof(int));

    for(int i = 0; i < 10; i++)
        scanf("%d", &vetor1[i]);


    int *vetor2;
    vetor2 = (int *)calloc(20,sizeof(int));

    memcpy(vetor2, vetor1, 40);

    for(int i = 10; i < 20; i++)
        scanf("%d", &vetor2[i]);

    for(int i = 0; i < 20; i ++)
    {
        printf("Conteudo indicado por vetor2[%d]: %d\n", i, vetor2[i]);
        printf("Endereco deste valor: %d\n", &vetor2[i]);
    }

    free(vetor1);
    printf("Depois do free:\n");

    for(int i = 0; i < 20; i ++)
    {
        printf("Conteudo indicado por vetor2[%d]: %d\n", i, vetor2[i]);
        printf("Endereco deste valor: %d\n", &vetor2[i]);
    }

    exit(EXIT_SUCCESS);
}

    //p = &x
    //*p = x
    // v == &v[0]
    //v+1==&v[1]
