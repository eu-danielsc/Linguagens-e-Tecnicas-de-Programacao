#include <stdio.h>
#include <stdlib.h>

int maj(int a, int b) {
	if (a > b) return a;
	else return b;
}

int min(int a, int b) {
	if (a < b) return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valores[10], maior, menor, i;
	
	for(i=0; i<10; i++) {
		printf("Leia o %do valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	for(i=1, maior = valores[0]; i<5; i += 2) {
		int temp = maj(valores[i], valores[i+1]);
		maior = maj(maior, temp);
		printf("\nrepete");
	}
	printf("\nO maior eh %d", maior);
	
	for(i=6, menor = valores[5]; i<10; i += 2) {
		int temp = min(valores[i], valores[i+1]);
		menor = min(menor, temp);
		printf("\nrepete");
	}
	printf("\nO menor eh %d", menor);
	
	return 0;
}
