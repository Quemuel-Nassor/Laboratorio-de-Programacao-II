/*Uma empresa fabrica 10 produtos, sendo assim, implemente um programa
utilizando estrutura de dados para armazenar o nome, o valor do produto
e sua descri��o */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o do tipo estrutura de dados
struct produto
{
	char nomeprod[30];
	float vlrprod;
	char descprod[100]; 
};

//declara��o das vari�veis
struct produto produto[10];
int i;

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o entrada de dados
	for(i=0; i<10; i++)
	{
		system("cls");
		printf("Informe o nome do produto");
		fflush(stdin);
		gets(produto[i].nomeprod);
		printf("\nInforme o valor do produto");
		scanf("%f", &produto[i].vlrprod);
		printf("\nInforme a descricao do produto");
		fflush(stdin);
		gets(produto[i].descprod);
	}
	
	//mostrar os produtos que foram cadastrados
	for(i=0; i<10; i++)
	{
		printf("\nNome produto: %s", produto[i].nomeprod);
		printf("\nValor produto: %.2f", produto[i].vlrprod);
		printf("\nDescricao produto: %s\n", produto[i].descprod);
	}
	system("pause");
}
