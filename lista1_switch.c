#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exec1() {
	int a1, b1, aux1;
	
	printf("\nATIVIDADE 1.\nInsira o primeiro valor: ");
	scanf("%d", &a1);
	
	printf("Insira o segundo valor: ");
	scanf("%d", &b1);
	
	aux1 = a1;
	a1 = b1;
	b1 = aux1;
	
	printf("\nOs valores sao %d e %d. Kk to zuando burro", a1, b1);
}

void exec2() {
	double a2, aux2;
	int casas2;
	
	printf("\nATIVIDADE 2.\nInsira um numero inteiro positivo: ");
	scanf("%lf", &a2);
	aux2 = a2;
	
	if (a2 == 0) {
		casas2 = 1;
	} else {
		while (a2 > 10) {
			a2 /= 10;
			casas2++;
		}
	}
		
	printf("%.0lf em notacao cientifica fica: %lf x 10^%d ", aux2, a2, casas2);
}

void exec3() {
	int n3, aux3, bit64_3, bit32_3, bit16_3, bit8_3, bit4_3, bit2_3;
	
	printf("\nATIVIDADE 3.\nInsira um numero de 0 a 127: ");
	scanf("%d", &n3);
	aux3 = n3;
	
	bit64_3 = n3 % 2;
	n3 /= 2;
	
	bit32_3 = n3 % 2;
	n3 /= 2;
	
	bit16_3 = n3 % 2;
	n3 /= 2;
	
	bit8_3 = n3 % 2;
	n3 /= 2;
	
	bit4_3 = n3 % 2;
	n3 /= 2;
	
	bit2_3 = n3 % 2;
	n3 /= 2;
	
	printf("O numero %d em binario eh %d%d%d%d%d%d%d.", aux3, n3%2, bit2_3, bit4_3, bit8_3, bit16_3, bit32_3, bit64_3);
}

void exec4() {
	float salario4, vendas4, comis4;
	
	printf("\nATIVIDADE 4.\nInsira seu salario: R$");
	scanf("%f", &salario4);
	
	printf("Insira seu valor total de vendas: R$");
	scanf("%f", &vendas4);
	comis4 = vendas4 * 0.15;
	
	printf("Voce vai receber R$%.2f esse mes.", salario4 + comis4);
}

void exec5() {
	int a5, b5, c5, d5, soma5, media5, prod5;
	
	printf("\nATIVIDADE 5. Insira o primeiro valor: "); scanf("%d", &a5);
	printf("Insira o segundo valor: "); scanf("%d", &b5);
	printf("Insira o terceiro valor: "); scanf("%d", &c5);
	printf("Insira o quarto valor: "); scanf("%d", &d5);
	
	soma5 = a5 + b5 + c5 + d5;
	media5 = soma5 / 4;
	prod5 = a5 * b5 * c5 * d5;
	
	printf("A soma eh igual a %d, a media eh igual a %d e o produto eh igual a %d.", soma5, media5, prod5);
}

void exec6() {
	int idade6;
	
	printf("\nATIVIDADE 6. Insira a sua idade (em dias): ");
	scanf("%d", &idade6);
	
	printf("Voce possui %d anos, %d meses e %d dias de idade.", idade6 / 365, (idade6 % 365) / 12, (idade6 % 365) % 12);
}

void exec7() {
	double r7;
	
	printf("\nATIVIDADE 7. Insira o raio da esfera (em cm): ");
	scanf("%lf", &r7);
	
	printf("O volume da esfera eh %.3lfcm^3", (4/3.0) * 3.14159 * pow(r7, 3));
}

void exec8() {
	float xp8, xs8, yp8, ys8;
	
	printf("\nATIVIDADE 8. Insira as coordenadas do primeiro ponto separadas por virgula (x, y): ");
	scanf("%f, %f", &xp8, &yp8);
	printf("Insira as coordenadas do segundo ponto (x, y): ");
	scanf("%f, %f", &xs8, &ys8);
	
	printf("A distancia entre (%.1f, %.1f) e (%.1f, %.1f) eh de %.2f", xp8, yp8, xs8, ys8, sqrt(pow(xs8 - xp8, 2) + pow(ys8 - yp8, 2)));
}

int main(int argc, char *argv[]) {
	int op;
	printf("Escolha um exercicio (1 a 8): ");
	scanf("%d", &op);
	
	switch(op) {
		case 1:
			exec1();
		break;
		
		case 2:
			exec2();
		break;
		
		case 3:
			exec3();
		break;
		
		case 4:
			exec4();
		break;
		
		case 5:
			exec5();
		break;
		
		case 6:
			exec6();
		break;
		
		case 7:
			exec7();
		break;
		
		case 8:
			exec8();
		break;
	}
	return 0;
}
