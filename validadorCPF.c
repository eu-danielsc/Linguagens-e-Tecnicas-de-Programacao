#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multDig(int digit, int valor) {
	return digit*valor;
}

int main(int argc, char *argv[]) {
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11, soma, resto1, resto2; 
	
	printf("Insira o seu CPF (digitos separados por espaco, com formatacao): ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	
	soma = multDig(n1, 10)+multDig(n2, 9)+multDig(n3,8)+multDig(n4,7)+multDig(n5,6)+multDig(n6,5)+multDig(n7,4)+multDig(n8,3)+multDig(n9,2);
	soma *= 10;
	resto1 = soma%11;
	if (resto1 == 10) resto1 = 0;
	
	soma = multDig(n1, 11)+multDig(n2, 10)+multDig(n3,9)+multDig(n4,8)+multDig(n5,7)+multDig(n6,6)+multDig(n7,5)+multDig(n8,4)+multDig(n9,3)+multDig(n10, 2);
	soma *= 10;
	resto2 = soma%11;
	if (resto2 == 10) resto2 = 0;
	
	if ((resto1 == n10) && (resto2 == n11)) {
		printf("CPF valido!!!!!");
	} else {
		printf("CPF invalido !!! >:(");
	}
	
	return 0;
}
