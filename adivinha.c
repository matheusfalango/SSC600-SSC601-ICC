#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int nro;
  int num;

  srand(1234);
  printf   (">> Adivinhe o numero sorteado entre 0 e 99\n");
  nro=rand() % 100;
  for ( ; ; )
  {
      scanf ("%d", &num);
      if (nro > num) printf ("Maior! ");
      if (nro < num) printf ("Menor! ");
      if (nro == num) break;
  }
  printf("Parabens! Voce acertou!\n");

  return(0);
}
