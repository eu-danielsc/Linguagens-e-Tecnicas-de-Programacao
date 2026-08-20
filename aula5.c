#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, d, maior_temp1, maior_temp2, maior;
	
	printf("LISTA 2 - ATIVIDADE 10.\nInsira os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	maior_temp1 = (a+b+abs(a-b)) / 2;
	maior_temp2 = (c+d+abs(c-d)) / 2;
	maior = (maior_temp1+maior_temp2+abs(maior_temp1-maior_temp2)) / 2;
	
	printf("O maior valor entre |%d|%d|%d|%d| = %d", a,b,c,d, maior);
	return 0;
}
