#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	system("color 1F");
	float m1,m2,m3;
 	
 	printf("\n Valor de uma poupança em 3 meses");
 	
 	m1 = 500+ ((500/100)*1);
 	m2 = m1+ ((m1/100)*1);
 	m3 = m2+ ((m2/100)*1);
 	
 	printf("\n O Valor da poupança no 3o mes sera: %f\n", m3);
 	system("PAUSE");
 	
 	
 	
	return 0;
}
