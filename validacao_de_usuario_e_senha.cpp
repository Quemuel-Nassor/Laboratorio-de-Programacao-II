//Algoritmo para validar usu�rio e senha

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declara��o das vari�veis
char usuario[10], senha[10];
int flag = 0;

//declara��o da fun��o principal
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

