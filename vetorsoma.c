#include <stdio.h>

int main(){

    int vetorA[5], vetorB[5], vetorS[5];

    for(int j = 0; j < 5; j++){
        scanf("%d", &vetorA[j]);
    }

    for(int k = 0; k < 5; k++){
        scanf("%d", &vetorB[k]);
    }


    for(int i = 0; i < 5; i++){
        vetorS[i] = vetorA[i] + vetorB[i];
        printf("%d\n", vetorS[i]);
    }
}
