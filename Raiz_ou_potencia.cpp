/*Algoritmo para receber dois n�meros inteiros e a op��o de c�lculo de
raiz quadrado ou exponencia��o. Ap�s retornar o valor do c�lculo o
usu�rio ter� novamente a possibilidade de escolher novamente valores e
o tipo de c�lculo */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declara��o da fun��o menu()
int menu()
{
	int opcao;
	printf("Escolha a opcao: \n1-Raiz Quadrada \n2-Exponenciacao");
	scanf("%i", &opcao);
	return opcao;
}

//declara��o da fun��o principal 
int main()
{
	int calculo;
	calculo = menu();
	switch (calculo)
	{
		case 1 : printf("\nRaiz Quadrada");
		break;
		case 2 : printf("\nExponenciacao");
		break;
		default : printf("\nOpcao Invalida");
	}
}

