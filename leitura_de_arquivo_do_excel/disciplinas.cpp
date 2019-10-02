//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//declaração das variáveis
char palavra[100], letra[2], caractere;

//declaração do ponteiro para o arquivo
FILE *pontarq;

//declaração da função principal
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
			//strcat() - função para concatenar strings
			strcat(palavra,letra);
		}
	}
	printf("%s\n", palavra);
	fclose(pontarq);
	system("pause");	
}
