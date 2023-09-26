#include <stdio.h>
#include <stdlib.h>

int fibonacci(int numero){
	
	printf("Ingrese la cantidad de términos de la secuencia Fibonacci que desea mostrar: ");
	scanf("%d", &numero);
	
	if (numero <= 0) {
		printf("La cantidad de términos debe ser mayor que cero.\n");
		return 1;
	
	}
	
	if (numero == 1) {
		printf("1\n");
		return 0;
	}
	
	int fibonacci[numero];
	fibonacci[0] = 1;
	fibonacci[1] = 1;
	
	for (int i = 2; i < numero; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	
	printf("Secuencia Fibonacci de %d terminos:\n", numero);
	for (int i = 0; i < numero; i++) {
		printf("%d", fibonacci[i]);
		
		if (i < numero - 1) {
			printf(", ");
		
		}else {
			
			printf("\n");
		}
	}
	
}

int main() {
	int numero;
	
	fibonacci(numero);
	
	system("pause");
	return 0;
}
