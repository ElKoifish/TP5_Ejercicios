#include <stdio.h>
#include <stdlib.h>

int main() {
	int resistencia[5];
	int resistenciaTotal=0;
	int i=0;
	
	for(i=0;i<=4;i++){
		printf("Ingrese una resistencia: \n");
		scanf("%d",&resistencia[i]);
		resistenciaTotal=resistenciaTotal+resistencia[i];
	}

	printf("La resistencia total es: %d\n",resistenciaTotal);
	
	system("pause");
}
