#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule la summa de los elementos
Fecha: 09-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int iVector[5];
	int iSum;
	int i;
	
	iSum=0;
	
	for (i=1;i<=5;i++){
		scanf("%d",&iVector[i]);
		iSum=iSum+iVector[i];
	}
	printf("La suma del vector y sus elementos es: %d\n",iSum);
	return 0;
}

