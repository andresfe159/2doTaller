#include <stdio.h>
/*Comentario
	Este es un programa que devuelve el dinero pero en dolares 
	Fecha: 15-Septiembre-2017
	Creado por Andres Pastrana*/
int main() {
	float fVDolar;
	int iCantidadDolar;
	float fTotal;
	
	printf("\n Ingrese el valor del dolar \n");
	scanf("%f", &fVDolar);
	
	printf("\n Ingrese cantidad de dolares \n");
	scanf("%d", &iCantidadDolar);
	
	fTotal=fVDolar*iCantidadDolar;
	
	printf("\n La cantidad de dinero en dolares es: %f \n", fTotal);
	return 0;
}

