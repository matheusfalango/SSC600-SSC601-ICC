#include <stdio.h>

int main(){

    float g1, g2, g3, pre;
    scanf("%f", &pre);
    scanf("%f", &g1);
    scanf("%f", &g2);
    scanf("%f", &g3);

    float soma = g1+g2+g3;
    float a,b,c;

    a = (g1/soma)*pre;
    b = (g2/soma)*pre;
    c = (g3/soma)*pre;

    printf("%.2f %.2f %.2f", a,b,c);
    return 0;
}
