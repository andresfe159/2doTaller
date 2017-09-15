#include <stdio.h>
/*Comentario
Programa que devuelve el area de un Triangulo
Fecha: 15-Septiembre-2017
Creado por: Andres Pastrana
*/

int main() 
{
	float fBase;
	float fAltura;
	float fArea;
	
	printf("\n Ingrese la base del triangulo: \n");
	scanf("%f", &fBase);
	
	printf("\n Ingrese la altura del triangulo: \n");
	scanf("%f", &fAltura);
	
	//Process
	fArea=(fBase*fAltura)/2;
	
	printf("\n El area del Triangulo es: %f \n", fArea);
	printf("\n base del Triangulo: %f \n", fBase);
	printf("\n altura del Triangulo: %f \n", fAltura);
	
	return 0;
}
