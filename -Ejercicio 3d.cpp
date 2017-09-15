#include <stdio.h>
/*Comentario
Programa que me permita sumar los numeros Impares de 1 al 50 
Fecha: 15-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int isumat;
	int iNum;
	
	isumat=0;
	iNum=1;
	
	printf("\n Sumatoria de los numeros impares del 1 al 50 \n");
	while(iNum<=50){
		if (iNum%2==1){
			isumat=iNum+isumat;	
		}
		iNum++;
	}
	printf("\n\n La sumatoria de los numeros impares de 1 al 50 es : \n");
	printf("%d\n",isumat);
	return 0;
}

