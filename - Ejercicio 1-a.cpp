#include <stdio.h>
/*Comentario 
Es un programa que devuelve el area, diametro y longitud de una circunferencia
Fecha: 15-Septiembre-2017
Creado por: Andres Pastrana */
int main() {
	float fPi;
	float fLongitud;
	float fDiametro;
	float fRadio;
	float fArea;
	
	fPi=3.1416;

	printf("\n Ingrese el valor del radio de la circunferencia \n");
	scanf ("%f", &fRadio);
	
	//Process
	fArea=fPi*(fRadio*fRadio);
	fDiametro=2*fPi;
	fLongitud=2*fPi*fRadio;
	
	printf("\n La longitud de la circunferencia es de: %f \n", fLongitud);
	printf("\n Circunferencia con radio: %f \n", fRadio);
	printf("\n El area de la circunferencia es de: %f \n", fArea);
	printf("\n El diametro de la circunferencia es de: %f \n", fDiametro);

	return 0;
}

