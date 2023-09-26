#include <stdio.h>
#include <stdlib.h>


int numerador (int*numero){
	
	printf("Ingrese cualquier numero : ");
	scanf("%d",&numero[1]);
	
	
	printf("Ingrese cualquier numero : ");
	scanf("%d",&numero[2]);
	
	
	while(numero[1] < numero[2]){
		
		printf("%d \n ",1+numero[1]); 
		numero[1]++; 
	}
}

int main(){
	int numero[2];
	numerador(numero);
	
	system("pause");
	return 0;
}

