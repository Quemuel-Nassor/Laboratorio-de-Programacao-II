/*Programa para manipular matrizes utilizando função */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração das constantes
#define NLIN 5
#define NCOL 5

//declaração da função cadastrar na matriz
void cadastram(int matriz[NLIN][NCOL], int linha, int coluna)
{
	//variáveis locais
	int i, j;
	
	//estrutura de repetição
	for(i=0; i<linha; i++)
	{
		for(j=0; j<coluna; j++)
		{
			printf("Informe um numero inteiro: ");
			scanf("%i", &matriz[i][j]);
		}
	}
}

//declaração da função principal
main()
{
	//declaração da matriz
	int dados[NLIN][NCOL];
	
	//chamada da função cadastrar valores na matriz
	cadastram(dados,3,3);
	
	//EXERCÍCIO: Implementar função para mostrar os valores de uma matriz
}
