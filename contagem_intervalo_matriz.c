#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int elemento[4][5], A, B, contador = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &elemento[i][j]);
        }
    }

    scanf("%d", &A);
    scanf("%d", &B);

    if(A < B){
        for(int l = 0; l < 4; l++){
            for(int m = 0; m < 5; m++){
                if ((elemento[l][m] >= A)&&(elemento[l][m] <= B)){contador++;}
            }
        }
        printf("%d", contador);
    }
}
