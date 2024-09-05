#include <stdio.h>

int X,Y,Z;

int finalResult()   { printf("%d %d %d", X,Y,Z); }

int main(){

    int A,B,C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (((A - B) < 0) && ((A - C) < 0)){
        X = A;

        if ((B - C) < 0){
            Y = B;
            Z = C;
            finalResult();}

        else {
            Y = C;
            Z = B;
            finalResult();}
    }

    else if (((A - B) > 0) && ((A - C) > 0)){
        Z = A;

        if ((B - C) < 0){
            Y = C;
            X = B;
            finalResult();}

        else {
            Y = B;
            X = C;
            finalResult();}
        }

    else if (((A - B) < 0) || ((A - C) < 0 )){
        Y = A;

        if ((A - C) > 0){
            X = C;
            Z = B;
            finalResult();}

        else {
            X = B;
            Z = C;
            finalResult();}
    }
}
