#include <stdio.h>
#include<stdlib.h>
/*Comentario
Programa que realiza el producto de dos matrices cuadradas de 3x3.
Fecha: 13-Septiembre-2017
Elaborado por: Andres Pastrana*/

int main() 
{
	int k;
	int c;
	int im[3][3];
	int iProduct[3][3];	
	int m2[3][3];
	int i,j;
	
	printf("Ingrese valores de la primer matriz\n");
	
	k=3;
	c=3;
	
	for(i=0;i<k;i++)
	{
		for(j=0;j<c;j++)
		{		
			scanf("%d",&im[i][j]);
		}		
	}	
	printf("\n");
	printf("Ingrese valores de la segunda matriz\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<c;j++)
		{		
			scanf("%d",&m2[i][j]);
		}		
	}	
	printf("\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<c;j++)
		{	
			iProduct[i][j]=m2[i][j]*im[i][j];
			printf(" %d ",iProduct[i][j]);
		}
		printf("\n");
	}
	return 0;
}
