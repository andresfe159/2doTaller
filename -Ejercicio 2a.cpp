#include <stdio.h>
/*Comentario
	Programa que determina el mayor de dos numeros  
	Fecha: 15-Septiembre-2017
	Elaborado por: Andres Pastrana*/
int main() {
	int iNum1;
	int iNum2;
	
	scanf("%d",&iNum1);
	scanf("%d",&iNum2);
	
	if(iNum1>iNum2)
	{
		printf("\n el mayor es: %d \n", iNum1); 
	}else{
		printf("\n el mayor es: %d \n", iNum2);
	}
	return 0;
}

