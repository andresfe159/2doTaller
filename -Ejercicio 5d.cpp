#include <stdio.h>
#include <math.h>
/*Comentario
Programa que calcula la sumatoria de la potencia de 2 hasta un numero ingresado
Fecha: 10-Septiembre-2017
Creado por Andres Pastrana*/
int main() {
	int iSum;
	int iPot;
	int i;
	int iNum;
	
	iSum=0;
	printf("Ingrese numeros \n");
	scanf("%d",&iNum);
	for(i=0;i<=iNum;i++){
		iPot=pow(2,i);
		iSum=iSum+iPot;
	}
	printf("El toal de la suma es %d\n", iSum);
	return 0;
}

