#include <stdio.h>

int main(){

    int nota,maior,menor;
    maior = 0; nota = 0;

    while(nota>=0){
    scanf("%d", &nota);
    if((menor>nota)&&(nota>=0)){menor = nota;}
    if((maior<nota)){maior = nota;}
    }
    printf("%d %d", maior,menor);
}
