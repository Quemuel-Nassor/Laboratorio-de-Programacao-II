//gerenciador de sequencia

//delcara��o de bilbiotecas
#include<stdio.h>
#include<stdlib.h>

//fun��o sequencia
int sequencia(){
	
	//variaveis locais
	int numero;
	//ponteiro para o arquivo
	FILE *pontseq;
	
	//verificar se � a primeira vez
	if((pontseq=fopen("sequencia.txt","r"))==NULL){
		
		//abrir o arquivo para grava��o
		pontseq=fopen("sequencia.txt","w");
		fprintf(pontseq,"%i",1);
		fclose(pontseq);
		return 1;
		
	}
	//depois da primeira vez
	while((fscanf(pontseq,"%i",&numero))!=EOF){
		numero++;
	}
	fclose(pontseq);
	
	//abrir o arquivo para grava�ao
	pontseq=fopen("sequencia.txt","w");
	fprintf(pontseq,"%i",numero);
	fclose(pontseq);
	
	return numero;
}


//fun��o principal
int main(){
	
	printf("sequencia: %i",sequencia());
	getchar;
	
	return(0);
}
