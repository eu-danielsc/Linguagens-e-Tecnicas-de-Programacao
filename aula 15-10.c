#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exec1 (int a1, int b1, int c1, int n1) {
	printf("\nEXERCICIO 1\nInsira o valor inicial: ");
	scanf("%d", &a1);
	printf("Insira o valor a ser alcancado: ");
	scanf("%d", &b1);
	printf("Insira o tamanho do passo: ");
	scanf("%d", &c1);
	
	while (a1<(b1 - a1)) {
		a1 += c1;
		printf("\n   Seu numero eh %d", a1);
		n1++;
	}
	printf("Foram feitas %d somas", n1);
}

void exec2 (int n2, double a2) {
	printf("\nEXERCICIO 2\nInsira a quantidade de termos a serem somados: ");
	scanf("%d", &n2);
	
	for (a2 = 1.0/2.0; n2 > 1; n2--) {
		a2 += a2/2.0;
	}
	
	printf("A soma eh igual a %lf", a2);
}

void exec3 (int n3, int e3, int l3) {
	printf("EXERCICIO 3\nInsira o numero de linhas do seu triangulo: ");
	scanf("%d", &n3);
	for (l3 = 1; l3 <= n3; l3++) {
		
		for (e3 = n3; e3 > l3; e3--) {
			printf("  ");
		}
		
		printf("1\n");
	}
}

int main(int argc, char *argv[]) {
	int op, a, b, c, n;
	double x;
	printf("Escolha um exercicio (1 a 3): ");
	scanf("%d", &op);
	while (op < 1 && op > 3) {
		printf("Exercicio invalido. Escolha outro: ");
		scanf("%d", &op);
	}
	
	switch(op) {
		case 1:
			exec1(a, b, c, n);
		break;
		
		case 2:
			exec2(n, x);
		break;
		
		case 3:
			exec3(n, a, b);
		break;
	}
	
	return 0;
}
