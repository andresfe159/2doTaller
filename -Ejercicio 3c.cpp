#include <stdio.h>
/*Comentario
Programa que me permita sumar los numeros pares de 1 al 50 
Fecha:10-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int isumat;
	int iNum;
	
	iNum=1;
	isumat=0;
	
	printf("\n Sumatoria de los numeros pares del 1 al 50 \n");
	while(iNum<=50){
		if (iNum%2==0){
			isumat=iNum+isumat;	
	    }
		iNum++;
	}
    printf("\n\n La sumatoria de los numeros pares de 1 al 50 es : \n");
	printf("%d\n",isumat);
	return 0;
}

