#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, x1, x2, x3, x4;
	
	a = 8;
	b = 19;
	x1 = a + b;
	x2 = a - b;
	x3 = a / b;
	x4 = a * b;
	
	printf("As operações de %f e %f resultam em %f, %f, %f e %f", a, b, x1, x2, x3, x4);
	
	return 0;
}
