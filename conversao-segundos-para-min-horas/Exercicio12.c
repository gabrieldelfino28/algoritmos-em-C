#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float s,h,m;
	
	printf("\n Conversao de Segundos para Minutos e Horas");
	printf("\n Digite o Valor de Segundos: ");
	scanf("%f", &s);
    
    m = s/60;
    h = m/60;
    
    printf("\n O valor em minutos e: %f\n", m);
    printf("\n O valor em Horas e: %f\n", h);
    
    system("PAUSE");

	return 0;
}
