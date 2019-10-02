/*Programa para receber o nome e o valor de 5 colaboradores por meio de
estrutura de dados, calcular a média dos salários e mostrar o nome dos
colaboradores que possuem remuneração acima da média */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaração do tipo estrutura de dados
struct funcionario
{
	char nome[30];
	float salario;
};

//declaração das variáveis
struct funcionario colaborador[5];
float media, total=0;
int i;

//declaração da função principal
main()
{
	//estrutura de repetição para entrada de dados
	for(i=0; i<5; i++)
	{
		printf("Informe o nome do colaborador: ");
		fflush(stdin);
		gets(colaborador[i].nome);
		printf("\nInforme o salario do colaborador: ");
		scanf("%f", &colaborador[i].salario);
		total+=colaborador[i].salario;
		system("cls");
	}
	
	//calcular a média
	media=total/5;
	
	//estrutura de repetição para saída de dados
	for(i=0; i<5; i++)
	{
		if(colaborador[i].salario>media)
			printf("\nNome: %s", colaborador[i].nome);
	}
	system("pause");
}

