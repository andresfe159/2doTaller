#include <stdio.h>
/*Comentario
Programa que llena una matriz pidiendo al usuario que ingrese el numero de filas
y columnas y la imprime en pantalla.
Fecha: 14-Septiembre-2017
Creado por Andres Pastrana*/

int main() 
{
	int fio;
	int co;
	int ima [100][100];

	
	printf("Ingrese Cantidad de Filas:\n");
	scanf("%d",&fio);
	printf("Ingrese Cantidad de Columnas:\n");
	scanf("%d",&co);
	
	printf("Ingrese Elementos de la Matriz\n");
	for(int i=0;i<fio;i++)
	{
		for(int j=0;j<co;j++)
		{			
			scanf("%d",&ima[i][j]);
		}	
	}	
	printf("\n");	
	printf("Mostrando Matriz\n");		
	for(int i=0;i<fio;i++)
	{
		for(int j=0;j<co;j++)
		{
			printf("%d",ima[i][j]);		 
		}	
		printf("\n");	
	}
	return 0;
}

