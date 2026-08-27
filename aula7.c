#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int a,b,div;
	float h;
	printf("Insira dois valores: ");
	scanf("%d %d", &a, &b);
	
	printf("\nVerificando se sao positivos ou negativos...");
	// positivos ou negativos
	if ((a > 0) && (b > 0)) {
		
		printf("\nVerificando se sao maiores ou menores que 10...");
		// maiores ou menores q 10
		if ((a < 10) && (b < 10)) {
			
			printf("\nVerificando se sao primos...");
			// primos
			if ((a == 2 || a == 3 || a == 5 || a == 7) && (b == 2 || b == 3 || b == 5 || b == 7)) {
				h = sqrt(pow(a, 2) + pow(b, 2));
				printf("\n\nNumeros sao primos.\nA area do triangulo eh %d e a hipotenusa eh %f", (a * b) / 2, h);
			// não primos
			} else {
				div = a/b;
				// divisão deu resultado com vírgula
				if (div == 0) {
					printf("\n\nNumeros nao sao primos.\nAs operacoes (+, -, * e /) entre %d e %d resultam em %d, %d, %d e 0 (resultado quebrado).", a,b, a+b, a-b, a*b);
				} else {
					printf("\n\nNumeros nao sao primos.\nAs operacoes (+, -, * e /) entre %d e %d resultam em %d, %d, %d e %d.", a,b, a+b, a-b, a*b, div);
				}
			}
			
		// maiores que 10
		} else {
			if ((a % b == 0.0) || (b % a == 0.0)) {
				printf("\n\nNumeros maiores que 10.\nOs numeros sao multiplos.");
			} else {
				printf("\n\nNumeros maiores que 10.\nNao sao multiplos.");
			}
		}
		
	// igual a 0 ou negativo
	} else {
		if ((a == 0) || (b == 0)) {
			printf ("\n\nTem zero, pae :/");
			}
		if (((a < 0) && (b > 0)) || ((a > 0) && (b < 0))) {
			printf ("\n\nNumeros com sinais diferentes.");
		}
		if ((a < 0) && (b < 0)) {
			printf("\n\nNumeros sao negativos.\nOs inversos desses numeros sao %d e %d", abs(a), abs(b));
			}
		}
	return 0;
}
