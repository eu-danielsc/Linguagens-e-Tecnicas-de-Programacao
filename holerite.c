#include <stdio.h>
#include <stdlib.h>

float calcINSS(float bruto) {
	if (bruto <= 1412.0) return bruto * 0.075;
	else if (bruto <= 2666.68) return bruto * 0.09;
	else if (bruto <= 4000.03) return bruto * 0.12;
	else return bruto * 0.14;
}

float calcIRPF(float base) {
	if (base <= 2259.2) return 0;
	else if (base <= 2826.65) return (base * 0.075) - 169.44;
	else if (base <= 3751.05) return (base * 0.15) - 381.44;
	else if (base <= 4664.68) return (base * 0.225) - 662.77;
	else return (base * 0.275) - 896;
}

int main(int argc, char *argv[]) {
	float valHora, qHoras, bruto, descINSS, base, descIRPF, liq;
	
	printf("Indique o valor da sua hora trabalhada: R$");
	scanf("%f", &valHora);
	printf("Indique a quantidade de horas trabalhadas num mes: ");
	scanf("%f", &qHoras);
	bruto = valHora * qHoras;
	
	descINSS = calcINSS(bruto);
	base = bruto - descINSS;
	descIRPF = calcIRPF(base);
	liq = base - descIRPF;
	
	printf("\n\n======================================================\n    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n======================================================\n Salario Bruto (Horas x Valor):   R$   %.2f\n (-) Desconto INSS:               R$   %.2f\n (-) Desconto IRPF:               R$   %.2f\n------------------------------------------------------\n LIQUIDO A RECEBER:               R$ %.2f\n======================================================\n", bruto, descINSS, descIRPF, liq);
	
	return 0;
}
