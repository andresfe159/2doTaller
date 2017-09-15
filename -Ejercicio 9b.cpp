#include <stdio.h>
/*Comentario 
Programa que pide al usuario una cadena de caracteres la almacena en un arreglo
y la copia en otra para mostrarla en pantalla. 
Fecha: 15-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	char name1[30];
	char name2[30];
	char i;
	printf("Ingrese los caracteres\n");
	fgets(name1,30,stdin);
	for(i=0;i<=30;i++){
		name2[i]=name1[i];
	}
	printf("Mostrando Cadena 2\n");
	printf("%s",name2);
	return 0;
}
	
