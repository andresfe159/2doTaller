#include <stdio.h>
/*Comentario
Programa que muestra el mes del año segun el numero que ingresa el usuario
Fecha: 09-Septiembre-2017
Elaborado por: Andres Pastrana*/

int main()
{
	int iNumero;
	
	printf("Ingrese un numero del 1 al 12:\n");
	scanf("%d",&iNumero);
	
	switch(iNum)
	{
	case 1:
		printf("El Numero %d Corresponde al mes de :Enero",iNumero);
	case 2:
		printf("El Numero %d Corresponde al mes de :Febrero \n",iNumero);
		break;
	case 3:
		printf("El Numero %d Corresponde al mes de :Marzo\n",iNumero);
		break;
	case 4:
		printf("El Numero %d Corresponde al mes de :Abril\n",iNumero);
		break;
	case 5:
		printf("El Numero %d Corresponde al mes de :Mayo\n",iNumero);
		break;
	case 6:
		printf("El Numero %d Corresponde al mes de :Junio\n",iNumero);
		break;
	case 7:
		printf("El Numero %d Corresponde al mes de :Julio\n",iNumero);
		break;
	case 8:
		printf("El Numero %d Corresponde al mes de :Agosto\n",iNumero);
		break;
	case 9:
		printf("El Numero %d Corresponde al mes de :Septiembre\n",iNumero);
		break;
	case 10:
		printf("El Numero %d Corresponde al mes de :Octubre\n",iNumero);
		break;
	case 11:
		printf("El Numero %d Corresponde al mes de :Noviembre\n",iNumero);
		break;
	case 12:
		printf("El Numero %d Corresponde al mes de :Diciembre\n",iNumero);		
		break;
	}
	return 0;
}
