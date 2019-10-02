/*Algoritmo para receber dois números inteiros e a opção de cálculo de
raiz quadrado ou exponenciação. Após retornar o valor do cálculo o
usuário terá novamente a possibilidade de escolher novamente valores e
o tipo de cálculo */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declaração da função menu()
int menu()
{
	int opcao;
	printf("Escolha a opcao: \n1-Raiz Quadrada \n2-Exponenciacao");
	scanf("%i", &opcao);
	return opcao;
}

//declaração da função principal 
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

