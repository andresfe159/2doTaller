#include <stdio.h>
/*Comentario
Descpripcion: Es un programa que calcule y muestre la suma de los cuadrados de los 10 primeros enteros mayores que 0
Fecha: 09-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	int iCuad;
	int iSumat;
	int i;
	
	iSumat=0;
	
	for(i=1;i<=10;i++){
		iCuad=i*i;
		iSumat=iCuad+iSumat;
	}
	printf("%d",iSumat);
	return 0;
}

