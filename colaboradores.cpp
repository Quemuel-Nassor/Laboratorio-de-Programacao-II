/*Programa para receber o nome e o valor de 5 colaboradores por meio de
estrutura de dados, calcular a m�dia dos sal�rios e mostrar o nome dos
colaboradores que possuem remunera��o acima da m�dia */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declara��o do tipo estrutura de dados
struct funcionario
{
	char nome[30];
	float salario;
};

//declara��o das vari�veis
struct funcionario colaborador[5];
float media, total=0;
int i;

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o para entrada de dados
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
	
	//calcular a m�dia
	media=total/5;
	
	//estrutura de repeti��o para sa�da de dados
	for(i=0; i<5; i++)
	{
		if(colaborador[i].salario>media)
			printf("\nNome: %s", colaborador[i].nome);
	}
	system("pause");
}

