/*elaborar um programa para cadastrar produtos, sendo que o codigo do produto deve ser gerado 
automaticamente(sequencia).registra-se de cadea produto o codigo(sequencia), o nome e o valor.
o programa deve permitir cadastrar e listar os produtos cadastrados.
utilizar estrutura para o cadastro/listagem do produto e funções */

//declaração de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//estrutura para cadastro
struct cad{
	
	int indice;
	char nome[30];
	float valor;
		
};

typedef cad cad;

//ponteiro de arquivo
FILE *produtos;

//recebe indice
int indice(cad produto,FILE *produtos){

	while(fread(&produto,sizeof(produto),1,produtos)!= EOF){
		
		produto.indice++;
		
	}	
	return produto.indice;
}

//função para gerenciar índice
void indice(cad produto,FILE *produtos){
	
	cad recebe;
	
	if((produtos = fopen("cadastro.txt","r")) == NULL){
		
		produtos = fopen("cadastro.txt","a");
		fwrite(&produto,sizeof(produto),1,produtos);
		fclose(produtos);
		
	}

	fclose(produtos);
	produto.indice = indice(produto,produtos);
	
	produtos = fopen("cadastro.txt","a");
	fwrite(&produto,sizeof(produto),1,produtos);
	fclose(produtos);
	
}

//função para exibir a lista de cadastros
void exibe(FILE *mostrar){
	
	cad exibe;
	mostrar = fopen("cadastro.txt","r");
	
	system("cls");
	while((fread(&exibe,sizeof(exibe),1,mostrar))==1){
		
		printf("%i - \t %s\t %.3f\n",exibe.indice,exibe.nome,exibe.valor);
		
	}
	fclose(mostrar);
}

//função principal
int main(){
	
	//variavel do tipo cadastro
	cad produto;
	
	//entrada de dados
	printf("Informe o nome do produto: ");
	fflush(stdin);
	gets(produto.nome);
	
	printf("Informe o valor do produto: ");
	scanf("%f",&produto.valor);
	
	produto.indice = 1;
	
	indice(produto,produtos);
	
	exibe(produtos);
	
	return(0);
}

