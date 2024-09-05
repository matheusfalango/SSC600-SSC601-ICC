#include <stdio.h>

int main(){

    int N,j;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        j = i*i;
        if(j <=  N){
            printf("%d\n", j);
        }
        else{
            break;
        }
    }
}
