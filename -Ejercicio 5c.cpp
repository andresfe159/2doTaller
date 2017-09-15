#include <stdio.h>
/*Comentario
Este es un programa que muestre la sumatoria de los numeros.
Fecha: 09-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int iAcumula;
	int i;
	int iNum;
	
	iAcumula=0;
	
	printf("Ingrese un numero \n");
	scanf("%d",&iNum);
	for(i=0;i<=iNum;i++){
		iAcumula=iAcumula+i;
	}
	printf("La sumatoria de los numeros es %d\n",iAcumula);
	return 0;
}

