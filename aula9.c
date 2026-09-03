#include <stdio.h>
#include <stdlib.h>

// tipo nome (lista de parâmetros) { comandos }
void exec3() {
	float r3, cd3;
		
	printf("\nATIVIDADE 3.\nInsira um valor em reais: R$");
	scanf("%f", &r3);
	printf("Na cotacao atual, 1 dolar = R$");
	scanf("%f", &cd3);
		
	printf("R$%.2f = $%.2f\n", r3, r3 * cd3);
}

void exec4() {
	float c4;
		
	printf("\nATIVIDADE 4.\nInsira uma temperatura em graus Celsius: ");
	scanf("%f", &c4);
		
	printf("%.1f graus Celsius = %.1f graus Fahrenheit\n", c4, (c4 * (9.0/5.0)) + 32.0);
}

void exec8() {
	int s8, h8, m8;
		
	printf("\nATIVIDADE 8.\nInsira um tempo em segundos: ");
	scanf("%d", &s8);
	h8 = s8 / 3600;
	m8 = (s8 % 3600) / 60;
	s8 = ((s8 % 3600) % 60) % 60;
		
	printf("O tempo total eh de %d:%d:%d\n", h8, m8, s8);
}

int main(int argc, char *argv[]) {
	
	int op;
	printf("Escolha um exercicio (3, 4 ou 8): ");
	scanf("%d", &op);
	
	switch(op){
	case 3:
		exec3();
	break;
	
	case 4:
		exec4();
	break;
	
	case 8:
		exec8();
	break;
	
	default:
		printf("Exercicio invalido.");
	break;
	}
	
	return 0;
}
