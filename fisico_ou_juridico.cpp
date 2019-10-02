/*Programa para receber as informa��es de clientes que podem ser
classificados em pessoa f�sica ou jur�dica. De qualquer cliente
armazena-se nome e telefone, quando for pessoa f�sica registra-se
tamb�m o RG e o CPF e se pessoa jur�dica registra-se o CNPJ e a IE */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o do tipo de estrutura de dados
struct cliente
{
	char nome[30];
	char telefone[15]; 
};

struct fisica
{
	struct cliente cliente;
	char rg[11];
	char cpf[14];
};

struct juridica
{
	struct cliente cliente;
	char cnpj[18];
	char ie[18];
};

//declara��o das vari�veis
int tipo;
struct juridica clijuridica;
struct fisica clifisica;

//declara��o da fun��o principal
main()
{
	printf("\nInforme o tipo de cliente: \n1 - Fisica\n2 - Juridica");
	scanf("%i", &tipo);
	
	if(tipo==1)
	{
		printf("Informe o nome do cliente: ");
	 	fflush(stdin);
	 	gets(clifisica.cliente.nome);
	 	printf("Informe o telefone do cliente: ");
	 	fflush(stdin);
	 	gets(clifisica.cliente.telefone);
	 	printf("Informe o RG do cliente: ");
	 	fflush(stdin);
	 	gets(clifisica.rg);
	 	printf("Informe o CPF do cliente: ");
	 	fflush(stdin);
	 	gets(clifisica.cpf);	 	
	}
	else if(tipo==2)
	{
		printf("Informe o nome do cliente: ");
	 	fflush(stdin);
	 	gets(clijuridica.cliente.nome);
	 	printf("Informe o telefone do cliente: ");
	 	fflush(stdin);
	 	gets(clijuridica.cliente.telefone);
	 	printf("Informe o CNPJ do cliente: ");
	 	fflush(stdin);
	 	gets(clijuridica.cnpj);
	 	printf("Informe a IE do cliente: ");
	 	fflush(stdin);
	 	gets(clijuridica.ie);
	}
	else
		printf("\nNao foi possivel o cadastro...");
}




