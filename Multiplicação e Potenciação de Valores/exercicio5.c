#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	float x,n,resultado;
	
	printf("\n Multiplicação e Potenciação de Valores");
	printf("\n Digite o Valor de X: ");
	scanf("%f", &x);
	printf("\n Digite o Valor de N: ");
	scanf ("%f", &n);
	
	resultado = x*pow(n,2);
	
	printf("\nO resultado e: %f\n ", resultado);
	system("PAUSE");
	
	return 0;
}
