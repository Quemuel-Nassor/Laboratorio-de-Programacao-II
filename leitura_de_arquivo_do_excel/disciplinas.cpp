//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declara��o das vari�veis
char palavra[100], letra[2], caractere;

//declara��o do ponteiro para o arquivo
FILE *pontarq;

//declara��o da fun��o principal
main()
{
	//abertura do arquivo para leitura
	if((pontarq=fopen("disciplinas.csv","r"))==NULL)
	{
		printf("erro na abertura do arquivo...");
		system("pause");
		exit(0);
	}
	
	while((caractere=fgetc(pontarq))!=EOF)
	{
		if((caractere=='\n') || (caractere==','))
		{
			printf("%s\n", palavra);
			strcpy(palavra, " ");
			
			if(caractere == '\n')
				printf("-------------------\n");
		}
		else
		{
			letra[0]=caractere;
			letra[1]='\0';
			//strcat() - fun��o para concatenar strings
			strcat(palavra,letra);
		}
	}
	printf("%s\n", palavra);
	fclose(pontarq);
	system("pause");	
}
