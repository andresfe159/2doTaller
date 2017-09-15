#include <stdio.h>
/*Comentario
Programa que lea un vocal y muestra si es mayuscula o no
Fecha: 10-Septiembre-2017
Creado por Andres Pastrana*/

int main()
{
	char cVoc;
	
	printf("Ingrese una vocal:\n");
	scanf("%c",&cVoc);
	
	switch(cVoc)
	{
	 case 'a':
	 case 'e':
	 case 'i':
	 case 'o':
	 case 'u':
		printf("La Vocal es Minuscula\n");
		break;
	default:
		printf("La Vocal es Mayuscula\n");
	}
	return 0;
}

