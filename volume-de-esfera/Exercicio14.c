#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float v,r;
 	
 	printf("\n\nVolume de uma Esfere\n");
 	printf("\nDigite o valor do Raio: ");
 	scanf("%f", &r);
 	
 	v = (4*3.14)*pow(r,3)/3;
 	
 	printf("\n===========================================================\n");
 	printf("\nO volume do uma esfera e: %f\n", v);
 	
 	system("PAUSE");
 		
 	return 0;
}
