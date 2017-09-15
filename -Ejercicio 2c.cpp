#include <stdio.h>
/*Comentario 
Programa que lea un valor en entero y determine si es par o impar 
Fecha: 15-Septiembre-2017 
Elaborado por: Andres Pastrana*/
int main() {
	int iNum;
	
	scanf("%d",&iNum);
	
	if(iNum%2==0)
		printf("El numero es par %d \n", iNum);
	else 
		printf("El numero es impar %d \n", iNum);
	return 0;
}

