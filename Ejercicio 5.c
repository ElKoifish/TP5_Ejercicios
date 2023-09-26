#include <stdio.h>
#include <stdlib.h>

int ventas(int*vendedores,int unidadesTotales) {
	int vendedorMVP=0;
	int i=0;
	
	printf("GESTION DE VENTAS CHOBYSOFT. MADE BY CHOBY CORPORATIONS\n");
	printf("------------------------------------------------------------------------------------------------------------\n");
	
	for(i=1;i<=5;i++) {
		printf("Ingrese la cantidad de unidades vendidas del vendedor %d: ",i);
		scanf("%d",&vendedores[i]);
		unidadesTotales+=vendedores[i];
		
		if(vendedores[i]>unidadesTotales){
			vendedorMVP=vendedores[i];
			
	}
	}
	
	printf("El total de unidades vendidas por Chobysoft en los ultimos 15 dias es de: %d\n",unidadesTotales);
	printf("El vendedor con mayor cantidad de ventas tiene: %d\n",vendedorMVP);
	system("pause");
	
	return 0;
}

int main(){
	int vendedores[20];
	int unidadesTotales;
	
	ventas(vendedores,unidadesTotales);
	
	system("pause");
	return 0;
}
