#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int l, a, igual;
	char palavra[100];
	
	scanf("%s", palavra);
	printf("palavra inserida: %s\n", palavra);
	
	for (l=0; l < 100 && palavra[l] != '\0'; l++);
	for (a=0; a < l; a++, l--) if (palavra[a] == palavra[l - 1]) igual++;
	
	if (igual == a)	printf("\nEh palindromo");
	else printf("\nNao eh palindromo");
	
	return 0;
}
