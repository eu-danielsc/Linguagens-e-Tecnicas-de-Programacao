#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void numExec (int opExec) {
	printf("\nAgora, escolha um exercicio (0, 1 ou 2): ");
	scanf("%d", &opExec);
	while (opExec != 0 && opExec != 1 && opExec != 2) {
		printf("\nExercicio invalido. Insira outro: ");
		scanf("%d", &opExec);
	}
}

void consec (int a, int b) {
	if ((a + 1 == b) || (b + 1 == a)) {
		printf("\n%d e %d sao consecutivos.", a, b);
	}
}

void exec1_0 (int a, int b, int c, int d, int e) {
	printf("\nInsira 5 valores inteiros separados por virgula: ");
	scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);
	
	consec(a, b);
	consec(a, c);
	consec(a, d);
	consec(a, e);
	consec(b, c);
	consec(b, d);
	consec(b, e);
	consec(c, d);
	consec(c, e);
	consec(d, e);
}

void exec1_1 (float peso, float alt, float imc) {
	printf("Insira o seu peso: ");
	scanf("%f", &peso);
	printf("\nInsira a sua altura: ");
	scanf("%f", &alt);
	imc = peso / (alt * alt);
	if (imc < 18.5) printf("\nVoce esta abaixo do peso.");
	else if (imc < 24.9) printf("\nSeu peso esta normal.");
	else if (imc < 29.9) printf("\nVoce esta acima do peso.");
	else printf("\nVoce esta obeso.");
}

void exec1_2 () {
	
}

void exec2_0 () {
	
}

void exec2_1 () {
	
}

void exec2_2 () {
	
}

void exec3_0 () {
	
}

void exec3_1 () {
	
}

void exec3_2 () {
	
}


int main(int argc, char *argv[]) {
	int opProva, opExec, a, b, c, d, e;
	float fa, fb, fc;
	printf("Bom dia, man. Escolha uma prova pra pegar o exercicio (1 - ADS | 2 - ESOFT A | 3 - ESOFT B): ");
	scanf("%d", &opProva);
	
	while (opProva != 1 && opProva != 2 && opProva != 3) {
		printf("\nProva invalida. Escolha outra: ");
		scanf("%d", &opProva);
	}
	
	switch(opProva) {
	case 1:
		numExec(opExec);
		switch(opExec) {
			case 0:
				exec1_0(a, b, c, d, e);
			break;
			
			case 1:
				exec1_1(fa, fb, fc);
			break;
			
			case 2:
				exec1_2();
			break;
		}
	}
	
	return 0;
}
