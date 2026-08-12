#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float areaC, raio;
	
	printf("Insira o valor do raio: ");
	scanf("%f", &raio);
	
	raio *= raio;
	areaC = pi * raio;
	
	printf("A área do círculo é %f", areaC);
	
	float bM, bm, h, areaT;
	
	printf("\n\nInsira o valor da base maior: ");
	scanf("%f", &bM);
	printf("Insira o valor da base menor: ");
	scanf("%f", &bm);
	printf("Insira o valor da altura: ");
	scanf("%f", &h);
	
	areaT = ((bM + bm) * h) / 2;
	
	printf("A área do trapézio é %f", areaT);
	
	return 0;
}
