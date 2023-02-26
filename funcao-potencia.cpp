#include <stdio.h>

int potencia(int base, int exp){
	int i, resultado = 1;
	for(i = 0; i < exp; i++)
		resultado = resultado * base;
	return resultado;
}

int main(void) {

	int base, expoente;
	printf("Digite a base: ");
	scanf("%d", &base);
	printf("\nDigite o expoente: ");
	scanf("%d", &expoente);
	printf("\n\nResultado de %d^%d = %d", base, expoente, potencia(base, expoente));
  return 0;
}
