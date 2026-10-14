#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, i = 0, soma = 0;
	printf("Insira 10 valores inteiros positivos (separados por enter): ");
	
	do {
		scanf ("%d", &a);
		while (a < 0) {
			printf("   Numero invalido. Insira outro: ");
			scanf("%d,", &a);
		}
		soma += a;
		i++;
	} while (i < 10);
	
	printf("\nA soma desses numeros eh %d e a media eh %.1f", soma, soma / 10.0);
	
	return 0;
}
