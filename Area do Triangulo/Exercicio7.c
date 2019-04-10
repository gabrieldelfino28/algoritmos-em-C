#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	float b,h,resultado;
	
	printf("\nCalculo da Area do triangulo");
	printf("\n Digite o Valor da Base: ");
	scanf("%f", &b);
	printf("\n Digite o Valor da Altura: ");
	scanf("%f", &h);
	
	resultado = b*h/2;
	
	printf("\n O resultado e: %f\n", resultado);
	system("PAUSE");
	
	return 0;
}
