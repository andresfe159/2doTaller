#include <stdio.h>
/*Comentario
Programa que solicite un entero del 1 al 10 y muestre su tabla de multiplicar
Fecha: 10 Septiembre 2017
Elaborado por: Andres Pastrana*/
int main() {
	int iNum;
	int inn;
	int iTable;
	
	inn=0;
	
	printf("Ingrese un numero del 1 al 10 \n");
	scanf("%d",&iNum);
	printf("Tabla de multiplicar del numero:  %d\n", iNum);
	do
	{
		inn++;
		iTable=iNum*inn;
		printf("%d * %d  -----> %d\n",iNum,inn,iTable);
	}
	while (inn<=9);{
	}
	return 0;
}

