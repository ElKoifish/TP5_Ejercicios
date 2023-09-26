#include <stdio.h>
#include <stdlib.h>

int numeros(int numero){
	
	printf("Ingrese la cantidad de numeros: ");
	scanf("%d", &numero);
	
	if (numero <= 0) {
		printf("La cantidad de números debe ser mayor que cero.\n");
		return 1;
	}
	
	int numeros[numero];
	
	printf("Ingrese los numeros uno por uno:\n");
	
	for (int i = 0; i < numero; i++) {
		scanf("%d", &numeros[i]);
	}
	
	int suma = numeros[0] + numeros[numero - 1];
	
	if (numeros[0] < numeros[numero - 1]) { 
		printf("Los numeros fueron ingresados de forma ascendente.\n");
	
	} else if (numeros[0] > numeros[numero - 1]) {
		printf("Los numeros fueron ingresados de forma descendente.\n");
	
	} else {
		printf("Los numeros fueron ingresados de forma desordenada.\n");
	}
	printf("La suma entre el primer y el ultimo numero es: %d\n", suma);
}
int main() {
	int numero;
	
	numeros(numero);
	
	system("pause");
	return 0;
}
