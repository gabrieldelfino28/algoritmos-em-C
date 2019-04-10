#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int adn,at,ifinal,ia,aqd;
	
	printf("\n Calculo de Idade Atual ate o Ano que desejar");
	printf("\n Digite o Ano de Nascimento: ");
	scanf("%d", &adn);
	printf("\n Digite o Ano Atual: ");
	scanf("%d", &at);
	printf("\n Digite o Ano que Deseja: ");
	scanf("%d", &aqd);
	
	ia = at - adn;
	ifinal = aqd - adn;
	
	printf("\n=========================================================================\n");
	printf("\n A sua Idade Atual e: %d\n", ia);
	printf("\n Sua Idade em:%d ", aqd);
	printf("Sera:%d\n" , ifinal);
	
	system("PAUSE");

	return 0;
}
