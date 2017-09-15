#include <stdio.h>
/*Comentario 
Programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale a la suma de todo
Fecha: 09-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int iVector[6];
	int iSumat;
	int i;
	
	iSumat=0;
	for(i=0;i<=4;i++){
		scanf("%d",&iVector[i]);
		iSumat=iSumat+iVector[i];
	}
	if (iSumat==iVector[i]){
		printf("El resultado de la sumatoria es igual es un numero del vector\n");
	}else{
		printf("El resultado de la sumatoria es diferente a un elemento del vector\n");
	}
	return 0;
}

