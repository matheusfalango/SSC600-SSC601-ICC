#include <stdio.h>
#include <stdlib.h>

int primo(int a), teste;

int main()
{
    int numero = 0;
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++)
    {
        teste = primo(i);
        //printf("%d\n", teste);
        if(teste == 1)
        {
            printf("%d ", i);
        }
    }
}

int primo(int a)
{
    int resto = 0, k = 0;
    for(int j = 1; j <= a; j++)
    {
        resto = a%j;
        if(resto == 0)
            k++;
    }

    if(k==2)
        return 1;

    else if(k > 2)
        return 0;

}
