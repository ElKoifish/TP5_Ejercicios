#include <stdio.h>
#include <stdlib.h>

int nota(int*notas){
	
	int i=0,notaMayor=0,notaMenor=0;
	
	for(i=1;i<16;i++){
		printf("Ingrese la nota %d: ",i);
		scanf("%d",&notas[i]);
		if(notas[i]>8){
			notaMayor=notaMayor+1;
		}
		else{
			notaMenor=notaMenor+1;
		}
	}
	printf("Notas mayores a 8: %d\n",notaMayor);
	printf("Notas menores a 8: %d\n",notaMenor);
}

int main(){
	int notas[15];
	
	nota(notas);
	system("pause");
	return 0;
}
