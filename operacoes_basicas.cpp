/* Programa que contempla as opera��es b�sicas de um calculadora. */

#include "calculo.h"
#include <stdio.h>
#include <stdlib.h>

//fun��o entrada de dados
float recebe()
{
	//declara��o da vari�vel local
	float numero;
	printf("\nInforme um numero: ");
	scanf("%f", &numero);
	return numero;
}

void menu()
{
	//vari�vel local
	int opcao;
	system("cls");
	printf("\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n0-Sair");
	scanf("%i", &opcao);
	switch(opcao)
	{
		case 1 : printf("\nSoma = %.1f", soma(recebe(),recebe()));
		system("pause");
		menu();
		case 2 : printf("\nSubtracao = %.1f", subtrai(recebe(),recebe()));
		system("pause");
		menu();
		case 3 : printf("\nDivisao = %.1f", divide(recebe(),recebe()));
		system("pause");
		menu();
		case 4 : printf("\nMultiplicacao = %.1f", multiplica(recebe(),recebe()));
		system("pause");
		menu();
		case 0 : exit(0);
		default: printf("\nOpcao Invalida!!!");
		system("pause");
		menu();
	}
}


//declara��o da fun��o principal
int main()
{
	//chamada da fun��o menu
	menu();
}
