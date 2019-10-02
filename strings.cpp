/*Algoritmo para exemplicar a manipulação de string. */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
//biblioteca para podermos chamar as funções para manipulação de strings
#include <string.h>
#include <conio.h>

//declaração das variáveis
char nome[30], nomemax[30];
int i, idade, maxidade=0;

//declaração da função principal
main()
{
	//estrutura de repetição
	for(i=1; i<=5; i++)
	{
		//entrada de dados
		printf("Informe o nome da pessoa:");
		//limpar o buffer
		fflush(stdin);
		//função gets() - permite a entrada de string
		gets(nome);
		printf("Informe a idade da pessoa:");
		scanf("%i", &idade);
		
		//verificar a idade
		if(idade >= maxidade)
		{
			maxidade = idade;
			/*função strcpy() (string copy) = copia uma string 
			para outra - sintaxe: strcpy(string1, string2) */
			strcpy(nomemax,nome);
		}
	}
	//saída de dados
	printf("A pessoa mais velha chama-se %s", nomemax);
	printf("\nTem %i anos", maxidade);
	system("pause");
}
