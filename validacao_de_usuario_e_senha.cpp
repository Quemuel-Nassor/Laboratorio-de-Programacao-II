//Algoritmo para validar usuário e senha

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaração das variáveis
char usuario[10], senha[10];
int flag = 0;

//declaração da função principal
main()
{
	while(flag==0)
	{
		system("cls");
		printf("Informe o nome do usuario:");
		fflush(stdin);
		gets(usuario);
		//comparar duas strings
		if(strcmp(usuario,"engenharia")==0)
		{
			printf("\nUSUARIO VALIDO....");
			system("pause");
			flag = 1;
		}
		else
		{
			printf("\nUSUARIO INVALIDO....");
			system("pause");
			flag = 0;	
		}
	}
}

