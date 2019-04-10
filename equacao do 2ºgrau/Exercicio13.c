#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a,b,c,x1,x2,delta;
	
	printf("\nEquacao do 2o Grau");
	printf("\nDigite o valor de A: ");
	scanf("%f", &a);
	printf("\n Digite o valor de B: ");
	scanf("%f", &b);
	printf("\n Digite o valor de C: ");
	scanf("%f", &c);
	
	delta=(b*b)-(4*a*c);
	
	printf("\n O resultado do delta e: %f",delta);
	
	if (delta<0)
	{
		printf("\nNao e possivel extrair a raiz deste numero\n\n");
	}
	
	else
	{
		x1 = ((-b) + sqrt(delta))/(2*(a));
		x2 = ((-b) - sqrt(delta))/(2*(a));	
		
	}
	
	printf("\n O valor de x1 e:%f\n",x1);
	printf("\n O valor de x2 e:%f\n",x2);
	
	system("PAUSE");
	
	return 0;
}
