#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule la multiplicacion de los elementos
Fecha: 09-Septiembre-2017
Creado por: Andres Pastrana*/
int main() {
	int iVector[5];
	int iMultipli;
	int i;
	
	iMultipli=1;
	
	for (i=1;i<=5;i++){
		scanf("%d",&iVector[i]);
		iMultipli=iMultipli*iVector[5];
	}
	printf("La multiplicacion del vector y sus elementos es: %d\n",iMultipli);
	return 0;
}

