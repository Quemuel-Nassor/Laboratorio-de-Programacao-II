/*Programa para manipular matrizes utilizando fun��o */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das constantes
#define NLIN 5
#define NCOL 5

//declara��o da fun��o cadastrar na matriz
void cadastram(int matriz[NLIN][NCOL], int linha, int coluna)
{
	//vari�veis locais
	int i, j;
	
	//estrutura de repeti��o
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("Informe um numero inteiro: ");
			scanf("%i", &matriz[i][j]);
		}
	}
}

//declara��o da fun��o principal
main()
{
	//declara��o da matriz
	int dados[NLIN][NCOL];
	
	//chamada da fun��o cadastrar valores na matriz
	cadastram(dados,3,3);
	
	//EXERC�CIO: Implementar fun��o para mostrar os valores de uma matriz
}
