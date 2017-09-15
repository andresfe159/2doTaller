#include <stdio.h>
/*Comentario
Programa que lee numeros hasta que se introduzca un cero
Fecha: 10 Septiembre 2017
Creado por Andres Pastrana*/
int main() {
	int iNum;
	int iContador;
	
	iContador=0;
	
	do{
		printf("Ingrese los numeros \n");
		scanf("%d", &iNum);
		if (iNum>0){
			iContador++;
		}
	}while (iNum!=0);
		printf("La cantidad de numeros ingresados mayores que 0 es %d",iContador);
	return 0;
}

