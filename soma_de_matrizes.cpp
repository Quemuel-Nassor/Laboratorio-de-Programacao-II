/*Programa para receber valores inteiros em duas matrizes 3 x 3,
realizar a soma das matrizes e mostrar o matriz resultantes */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int matriz1[3][3], matriz2[3][3], matrizr[3][3], i, j;

//declara��o da fun��o principal
main()
{
	//entrada de dados na primeira matriz
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe um numero inteiro para posicao %iX%i da matriz 1",i+1,j+1);
			scanf("%i", &matriz1[i][j]);
		}
	}
	
	//entrada de dados na segunda matriz
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Informe um numero inteiro para posicao %ix%i da matriz 2",i+1,j+1);
			scanf("%i", &matriz2[i][j]);
		}
	}
	
	//calcular a soma das matrizes
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			matrizr[i][j]=matriz1[i][j]+matriz2[i][j];
	}
	
	//mostrar o resultado das soma das matrizes
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
			printf("%i ", matrizr[i][j]);
		printf("\n");
	}
	system("pause");
}
