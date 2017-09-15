#include <stdio.h>
/*Comentario
Programa que tiene una cadena que dice "Buenos Dias" luego le pide al usuario su nombre
y lo almacena en otra cadena, y muestra el mensaje de buenos dias con el nombre del
usuario.
Fecha: 14-Septiembre-2017
Creado por Andres Pastrana */
int main() {
	char Hi[10]={'B','u','e','n','o',' s',' ','D','i','a','s',' '};
	char name[30];
	char def[42];
	char i;
	printf ("Ingrese su nombre:\n");
	fgets (name,30,stdin);
		for (i=0; i<12; i++){ 
		def[i]=Hi[i];
	}
		for(i=12;i<42;i++)	{
		def[i]=name[i-12];
	}
	printf("Mostrando Saludo\n");
	printf("%s",def);
	return 0;
}
	

