#include <stdio.h>
#include <stdlib.h>

int notas(int*alumnos) {
	int i=0;
	int promedio=0;
	int sumaPromedio=0;
	
	for(i=0;i<30;i++) {
		printf("Ingrese la nota del alumno: ");
		scanf("%d",&alumnos[i]);
		sumaPromedio=sumaPromedio+alumnos[i];
	}
	
	promedio=sumaPromedio/30;
	printf("El promedio de las notas ingresadas es: %d\n",promedio);
}

int main(){
	int alumnos[30];
	
	notas(alumnos);
	
	system("pause");
	return 0;
}

