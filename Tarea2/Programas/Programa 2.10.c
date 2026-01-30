#include <stdio.h>
#include <math.h>

/* Expresion par, inpar o nulo*/

int main(void)
{
int NUM;
printf("Ingrese un numero: ");
scanf("%d", &NUM);
if (NUM == 0)
printf("\nEl numero es nulo");
else
if (pow(-1, NUM) > 0)
printf("\nPar");
else
printf("\nImpar");
}