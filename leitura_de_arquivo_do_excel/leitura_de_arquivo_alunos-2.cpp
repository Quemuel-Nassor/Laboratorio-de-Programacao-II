// declara��o das bibliotecas

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//declara��o de vari�veis

char palavra[100],letra[2],caractere;

//declara��o de ponteiro para o arquivo

FILE *pontarq;

//fun��o principal
int main(){
	
	//abertura do arquivo para leitura
	if((pontarq = fopen("alunos.csv","r"))==NULL){
		
		printf("Erro de leitura");
		exit(0);	
	}
	
	while((caractere = fgetc(pontarq))!=EOF){
		
		if((caractere == '\n') or (caractere == ';')){
			
			printf("%s\n",palavra);
			strcpy(palavra," ");
			
			if(caractere == '\n'){
				
				printf("-----------------------------------------------------------------\n");
				
			}
			
			
		}else{
			
			letra[0] = caractere;
			letra[1] = '\0';
			strcat(palavra,letra);
			
		}
		
	}
	printf("%s\n",palavra);
	
	fclose(pontarq);
	
	return(0);
}
