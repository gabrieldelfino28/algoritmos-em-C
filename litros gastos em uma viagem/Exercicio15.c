#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float lu,tg,vm,dist;
 	
 	printf("\nCalculo de quantidade de litros gasto em uma viagem\n");
 	printf("\nInforme o tempo gasto na viagem(em horas): ");
 	scanf("%f",&tg);
 	printf("\nInforme a velocidade media na viagem(em km/h): ");
 	scanf("%f",&vm);
 	
 	dist = tg*vm;
 	
 	lu = dist/12;
 	
 	printf("\n=================================\n");
	printf("\n Tempo gasto na Viagem (em horas):%f \n",tg);
 	printf("\n Velocidade Media na Viagem (em km/h):%f \n", vm);
 	printf("\n Distancia Percorrida (em km):%f \n", dist);
 	printf("\n Quantidade de litros gastos:%f \n", lu);
 	
 	system("PAUSE");
 	
	return 0;
}
