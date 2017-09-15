#include <stdio.h>
/*Comentario
Este es un programa que solicita numeros hasta que el valor este entre 20-30 o sea igual a 0  y muestra la sumatoria.
Fecha: 10 Septiembre 2017
Elaborado por: Andres Pastrana*/
int main() {
	int iNum;
	int iSumatoria;
	
	iSumatoria=0;
	
	do{
		printf("Ingrese los numeros \n");
		scanf("%s",&iNum);
		
		iSumatoria=iSumatoria+iNum;
	}
	while((iNum>20||iNum<30)&&iNum!=0);{
		
	}
	printf("La sumatoria es de --------> %d", iSumatoria);
	return 0;
}

