#include <stdio.h>
#include <stdlib.h>

int main() {
	int numeros[5];
	int suma=0;
	int mayor=0;
	int promedio=0;
	int i;
	
	for(i=0;i<5;i++) {
		printf("Ingrese su numero: ");
		scanf("%d",&numeros[i]);
		suma=suma+numeros[i];
	
		if(numeros[i]>mayor){
		mayor=numeros[i];
	}
	}
	promedio=suma/5;
	
	printf("El promedio de los numeros ingresados es: %d\n",promedio);
	printf("El mayor de los numeros ingresadoes es: %d\n",mayor);
	system("pause");
	
	return 0;
}

