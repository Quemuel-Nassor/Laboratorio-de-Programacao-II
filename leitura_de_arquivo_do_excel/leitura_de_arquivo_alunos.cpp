/*exerc�cio :
1 - criar um programa para ler o arquivo aluno.csv e nome seu conte�do com a seguinte formata��o:
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

//fun��o para ler o arquivo
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


//fun��o principal
int main(){
	
	leitura();
	
	return(0);
}
