#include <stdio.h>

#define null 0 //definição de uma constante nula

int main(){

    int sideOne,sideTwo,sideThree;
    scanf("%d", &sideOne);
    scanf("%d", &sideTwo);
    scanf("%d", &sideThree);

    if (((sideOne+sideTwo)<sideThree) || ((sideOne+sideThree)<sideTwo) || ((sideTwo+sideThree)<sideOne)){
        printf("Invalido");}

    else{
        if ((sideOne == null) || (sideTwo == null) || (sideThree == null)){
        printf("Invalido");}

        else{
            if ((sideOne == sideTwo) && (sideOne == sideThree) && (sideTwo == sideThree)){
                printf("Equilatero");}

            else{
                if ((sideOne != sideTwo) && (sideOne != sideThree) && (sideTwo != sideThree)){
                    printf("Escaleno");}

                else{
                    if(((sideOne == sideTwo) && (sideThree != sideOne)) || ((sideOne == sideThree) && (sideOne != sideTwo)) ||((sideTwo == sideThree) && (sideOne != sideTwo))){
                        printf("Isosceles");}
                }
            }
        }
    }
}
