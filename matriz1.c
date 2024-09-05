#include <stdio.h>
#include <string.h>

int elemento[4][5], soma[5];

int main(){

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &elemento[i][j]);
        }
    }

    for(int k = 0; k < 5; k++){
        somatoria(k);
        printf("%d\n", soma[k]);
    }
    return 0;
}
void somatoria(int coluna){

    for(int l = 0; l < 4; l++){
        soma[coluna] += elemento[l][coluna];
    }
}


