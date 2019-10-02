#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//declaração do ponteiro para o arquivo
FILE *pontarq;

//declaração da função entrada
void entrada(){
	
	//declaração da variável
	char dado,continuar;
	
	pontarq = fopen("arquivo1.txt","ab");
	
	do{
	
		//estrutura de repetição
		while((dado=getche())!='\r'){
			
			fputc(dado,pontarq);
					
		}
		//delimitador
		fputc('\n',pontarq);
		
		system("cls");
		printf("Outro dado?<S/N>");
		continuar = getche();
		
	}while(continuar == 's' or continuar == 'S');
	
	//fechar o arquivo 
	fclose(pontarq);
	
}

//função saída
void saida(){
	
	//declaração da variável
	char caractere;
	
	//abertura do arquivo para leitura
	if((pontarq = fopen("arquivo1.txt","rb"))==NULL){
		
		printf("Erro ao abrir o arquivo");
		fflush(stdin);
		getchar();
		exit(0);
	}
	
	printf("Saida de dados:\n");
	while((caractere=fgetc(pontarq))!=EOF){
	
		printf("%c",caractere);
		
	}
	
	//fechar o arquivo
	fclose(pontarq);
	
}

//função principal
int main(){
	
	entrada();
	saida();
	
	return(0);
}
