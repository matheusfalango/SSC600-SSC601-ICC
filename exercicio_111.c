
#include <stdio.h>
#include <stdlib.h>

int* calc_mmc_mdc(int a, int b, int c);

int main()
{
    int *resultado;
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    resultado = calc_mmc_mdc(num1, num2, num3);

    printf("%d %d", *(resultado+1), *resultado);
}

int* calc_mmc_mdc(int a, int b, int c)
{
        int *v, aux;
        v = (int *)calloc(2,sizeof(int));

        aux = a;
        if(b > a && b > c)
            aux = b;
        else if(c > b && c > a)
            aux = c;

        //Inicialização do conteudo do vetor
        *v = 1;
        *(v + 1) = 1;

        for(int i = 2; i <= aux; i++)
        {
            int a1 = a%i;
            int b1 = b%i;
            int c1 = c%i;

            if(a1 == 0 || b1 == 0 || c1 == 0)
            {
                if(a1 == 0 && b1 == 0 && c1 == 0)
                *(v+1) = i;
            }
        }

        for(int j = 0; j < (a*b*c); j++)
            {
                *v = *v + 1;
                //printf("%d\n", *v);

                if(*v%a == 0 && *v%b == 0 && *v%c == 0)
                    break;
            }

        return v;
}
