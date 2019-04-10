#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float sb,sl,vh,htm,dp;
 	
 	printf("\n Calculo do Salario Liquido e Bruto");
 	printf("\n Digite o numero de Dependentes: ");
 	scanf("%f", &dp);
 	printf("\n Digite o Valor da Hora: ");
 	scanf("%f", &vh);
 	printf("\n Digite a quantidade de horas trabalhadas: ");
 	scanf("%f", &htm);
 	
 	sb = vh*htm;
 	sl = sb+(dp*300);
 	
 	printf("\n O salario liquido e: %f\n", sl);
 	system ("PAUSE");
 	
	return 0;
}
