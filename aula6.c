#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,c,d, maior1, maior2;
		
	printf("ATIVIDADE 1 - Insira os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (b > a) {
		a = b;
	}
	if (d > c) {
		c = d;
	}
	if (c > a) {
		a = c;
	}
		
	printf("O maior eh %d", a);
	
	// versão alternativa que repete os números no final
	// na outra versão o código é menor, mas muda todas as variáveis durante a operação
	/*if (a > b) {
		maior1 = a;
	} else {
		maior1 = b;
	}
	
	if (c > d) {
		maior2 = c;
	} else {
		maior2 = d;
	}
	
	if (maior2 > maior1) {
		maior1 = maior2;
	}
	
	printf("O maior entre |%d|%d|%d|%d| = %d", a,b,c,d,maior1);*/
	
	int a2;
	
	printf ("\n\nATIVIDADE 2 - Insira um numero: ");
	scanf ("%d", &a2);
	
	if ((a % 2) == 0) {
		printf("O numero eh par");
	} else {
		printf("O numero eh impar");
	}
	
	return 0;
}
