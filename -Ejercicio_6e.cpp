#include <stdio.h>
/*Comentario
Programa que simula un cajero automatico.
Fecha: 10-Septiembre-2017
Elaborado por: Andres Pastrana*/

int main()
{
	int iOp;
	int iRet;
	int iSal;
	int iCuenta;
	int iAbono;


	
	printf("Ingrese 1. Para Abonar o 2. Para Retirar  :\n");
	scanf("%d",&iOp);
	
	iCuenta=1000000;	
	
	switch(iOp)
	{
	case 1:
		printf("Ingrese Valor de Abono:\n");
		scanf("%d",&iAbono);
		iSal=iCuenta+iAbono;
		printf("Su Saldo es de: %d\n",iSal);
		break;
	case 2:
		printf("Ingrese Valor de Retirar:\n");
		scanf("%d",&iRet);
		iSal=iCuenta-iRet;
		printf("Su Saldo es de: %d\n",iSal);
	}
	return 0;
}
