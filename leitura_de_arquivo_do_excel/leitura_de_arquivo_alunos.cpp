/*exercício :
1 - criar um programa para ler o arquivo aluno.csv e nome seu conteúdo com a seguinte formatação:
nome
email
status
--------
nome 
email
status
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

FILE *arquivo;
char letra;

//função para ler o arquivo
void leitura(){
	
	arquivo = fopen("alunos.csv","r");
	
	while((letra = fgetc(arquivo))!= EOF){
		
		printf("%c",letra);
		if(letra == ';'){
			
			printf("\n");
			
		}else if(letra == '\n'){
			
			printf("--------------------------------------------------\n");
			
		}
		
	}
	
}


//função principal
int main(){
	
	leitura();
	
	return(0);
}
