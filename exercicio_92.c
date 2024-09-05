#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int distancia(int *a, int *b);

int main(){

    int *coord1, *coord2;
    coord1 = (int *)calloc(2,sizeof(int));
    coord2 = (int *)calloc(2,sizeof(int));

    for(int i = 0; i < 2; i++){
        scanf("%d", coord1 + i);
        scanf("%d", coord2 + i);
    }

    float resultado = distancia(coord1, coord2);
    printf("distancia: %.2f", resultado);

    exit(EXIT_SUCCESS);
}

int distancia(int *a, int *b){

    int eixox, eixoy;
    float valor;

    eixox = abs(*a - *b);
    printf("eixo x: %d\n", eixox);
    eixoy = abs((*(a+1)) - (*(b+1)));
    printf("eixo y: %d\n", eixoy);
    valor = sqrt(pow(eixoy,2)/pow(eixox,2));

    return valor;

}
