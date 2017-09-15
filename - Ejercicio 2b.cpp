#include <stdio.h>
//*Comentario: Este es un programa que lee 3 numeros y determina el mayor de ellos 
// Fecha: 15-Septiembre-2017
// Creado por Andres Pastrana
int main() {
	int iNum1;
	int iNum2;
	int iNum3;
	int iMax;
	
	scanf("%d",&iNum1);
	scanf("%d",&iNum2);
	scanf("%d",&iNum3);
	
//Process
	iMax=iNum1;
	
	if(iNum2>iMax)
	{
		iMax=iNum2;
	}if (iNum3>iMax)
	{
		iMax=iNum3;
	}
	printf("\n El mayor de los numeros es %d", iMax);
	return 0;
}


