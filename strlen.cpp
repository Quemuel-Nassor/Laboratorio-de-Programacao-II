//Algrítmo para manipulação de strings
//declaração de bibliotecas 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//declaração de variáveis
int i, qtdcaracteres;
char nome[30];

//declaração da função princial
main(){
	//estrutura de repetição
	for(i=1;i<=3;i++){
		
		printf("Informe o nome da pessoa:");
		fflush(stdin);
		gets(nome);
		
		//função strlen() - string length - retorna a quantidade de caracteres de uma string
		printf("Nome: %s - %i caracteres\n",nome,strlen(nome));
		
	}
	system("pause");
	
	
}
