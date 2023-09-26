#include <stdio.h>
#include <stdlib.h>

int operaciones(int*numeros){
	
	int suma=0,producto=1,i=0,elementos=0;
	float promedio=0;
	
	for(i=1;i<=10;i++){
		printf("Ingrese un numero: \n");
		scanf("%d",&numeros[i]);
		suma=suma+numeros[i];
		producto=producto*numeros[i];
	}
	
	promedio=suma/10;
	for(i=1;i<=10;i++){
		if(numeros[i]<promedio){
			elementos=elementos+1;
		}
	}
	
	printf("Suma: %d\n",suma);
	printf("Producto: %d\n",producto);
	printf("Promedio: %.2f\n",promedio);
	printf("Elementos debajo del promedio: %d\n",elementos);
}
int main(){
	int numeros[10];
	
	operaciones(numeros);
	
	system("pause");
	return 0;
}
