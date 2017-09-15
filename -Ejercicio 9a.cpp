#include <stdio.h>
/*Comentario 
Programa que pide al usuario que digite una cadena y verificar su longitud y su supera los 10 caratcteres mostrar en pantalla
Fecha: 15-Septiembre-2017
Elaborado por: Andres Pastrana*/
int main() {
	char cadena[30];
	int contador=0;
	int i;
	printf ("Ingrese una cadena de caracteres \n");
	fgets (cadena,30,stdin);
	for (i=0; i<=100; i++){ 
		if (cadena [i]!= '\0'){ 
			contador=contador+1;
		}else{ 
			break;
		}
	}
	if (contador>10)
	{ 
		printf ("\n%s",cadena);
	} 
	return 0;
}



