//Algr�tmo para manipula��o de strings
//declara��o de bibliotecas 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//declara��o de vari�veis
int i, qtdcaracteres;
char nome[30];

//declara��o da fun��o princial
main(){
	//estrutura de repeti��o
	for(i=1;i<=3;i++){
		
		printf("Informe o nome da pessoa:");
		fflush(stdin);
		gets(nome);
		
		//fun��o strlen() - string length - retorna a quantidade de caracteres de uma string
		printf("Nome: %s - %i caracteres\n",nome,strlen(nome));
		
	}
	system("pause");
	
	
}
