#include <stdio.h>
#include <stdlib.h>

int sueldos(int*sueldo){
	int sueldoMayor=0,sueldoMenor=0,i;
	
	for(i=1;i<=20;i++){
		printf("Ingrese el sueldo %d: ",i);
		scanf("%d",&sueldo[i]);
		if(sueldo[i]>2000){
			sueldoMayor=sueldoMayor+1;
		} else
		   sueldoMenor=sueldoMenor+1;
	}
	printf("Los sueldos mayores a 2000 son: %d\n", sueldoMayor);
	printf("Los sueldos menores a 2000 son: %d\n", sueldoMenor);
}

int main(){
	int sueldo[21];
	
	sueldos(sueldo);
	
	system("pause");
	return 0;
}
