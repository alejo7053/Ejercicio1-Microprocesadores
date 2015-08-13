#include <stdio.h>
#include "calculadora.h"

int main(void)
{
	int op, a, b, r;
	printf("Escoja la operacion a realizar:\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n");
	scanf("%d", &op);
	printf("Ingrese el numero:\t");
	scanf("%d", &a);
	printf("Ingrese el numero:\t");
	scanf("%d", &a);
	switch(op)
	{
	case 1:
		r=suma(a,b);
		printf("El resultado es:\t %d", r);
	case 2:
		r=resta(a,b);
		printf("El resultado es:\t %d", r);
	case 3:
		r=multiplicacion(a,b);
		printf("El resultado es:\t %d", r);
	case 4:
		r=division(a,b);
		printf("El resultado es:\t %d", r);
	default:
		printf("Error!");
	}
	return 0;
}
