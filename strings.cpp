/*Algoritmo para exemplicar a manipula��o de string. */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
//biblioteca para podermos chamar as fun��es para manipula��o de strings
#include <string.h>
#include <conio.h>

//declara��o das vari�veis
char nome[30], nomemax[30];
int i, idade, maxidade=0;

//declara��o da fun��o principal
main()
{
	//estrutura de repeti��o
	for(i=1; i<=5; i++)
	{
		//entrada de dados
		printf("Informe o nome da pessoa:");
		//limpar o buffer
		fflush(stdin);
		//fun��o gets() - permite a entrada de string
		gets(nome);
		printf("Informe a idade da pessoa:");
		scanf("%i", &idade);
		
		//verificar a idade
		if(idade >= maxidade)
		{
			maxidade = idade;
			/*fun��o strcpy() (string copy) = copia uma string 
			para outra - sintaxe: strcpy(string1, string2) */
			strcpy(nomemax,nome);
		}
	}
	//sa�da de dados
	printf("A pessoa mais velha chama-se %s", nomemax);
	printf("\nTem %i anos", maxidade);
	system("pause");
}
