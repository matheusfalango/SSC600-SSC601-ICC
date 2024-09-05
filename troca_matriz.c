#include <stdio.h>
#include <string.h>

int elemento[4][5], auxiliar[5];

int main(){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &elemento[i][j]);
        }
    }

    for(int k = 0; k < 5; k++){
        auxiliar[k] = elemento[2][k];
        elemento[2][k] = elemento[k][2];
        elemento[k][2] = auxiliar[k];
    }

    for(int l = 0; l < 5; l++){
        for(int m = 0; m < 5; m++){
            printf("%d ", elemento[l][m]);
        }
    printf("\n");
    }
}
