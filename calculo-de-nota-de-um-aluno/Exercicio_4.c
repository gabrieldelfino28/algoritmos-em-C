#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float n1,n2,n3,n4;
	float md;
	char na[6];
	
	printf("\nCalculo de Notas Bimestrais");
	printf("\nDigite o nome do aluno: ");
	scanf("%s", &na);
	system("CLS");
	printf("\n Digite o Valor da nota do 1o Bimestre: ");
	scanf("%f", &n1);
	system("CLS");
	printf("\n Digite o Valor da nota do 2o Bimestre: ");
	scanf("%f", &n2);
	system("CLS");
	printf("\n Digite o Valor da nota do 3o Bimestre: ");
	scanf("%f", &n3);
	system("CLS");
	printf("\n Digite o Valor da nota do 4o Bimestre: ");
	scanf("%f", &n4);
	
	md = (n1 + n2 + n3 + n4)/4;
	
	printf("\n A nota bimestral do aluno: %s\n", na);
	printf(" e: %f\n", md);
	system("PAUSE");
	
	
	return 0;
}
