#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	
 	float cm,m,dm,mm;
 	
 	printf("\n Conversao de Centimetros para Metros, Decimetros, Milimetros");
 	printf("\n Digite o valor da medida em Centimetros: ");
 	scanf("%f", &cm);
 	
 	m = cm/100;
 	dm = cm/10;
 	mm = cm*10;
 	
 	printf("\n O valor em Metros e: %f\n" , m);
 	printf("\n O valor em Decimetros e: %f\n" , dm);
 	printf("\n O valor em Milimetros e: %f\n" , mm);
 	
 	system("PAUSE");
 	
	return 0;
}
