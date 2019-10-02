/*trabalho até 3 pts entragar até dia 20/06/2018
elaborar um programa que contemple:
1 - abertura do programa com validação de usuário e senha
2 - cadastro, alteração, listagem e consulta de livros
3 - aramazenamento dos livros: código(gerar automaticamente),titulo,autores,isbn,editora,anop de publicação
4 - as consultas podem ocorrer por código, titulo do livro ou periodo de publicação(ano final- ano inicial)
5 - a listagem deve ser gerada em ordem alfabetica de titulo
6 - gerenciar as informações por meio de menu
7 - utilizar funções
8 - armazenar o registro dos livros em modo binário
*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>

//variáveis globais
int opc;

//struct de login
typedef struct entrar{
	
	char nome[25];
	char senha[10];
	
}login;

//struct de cadastros dos livros
typedef struct list{
	
	struct list *prox;
	struct list *ant;
	int codigo;
	char titulo[100];
	char autores[50];
	char isbn[50];
	int ano_publicacao;
	
}lista;

//ponteiros de arquivos
FILE *usuarios,*livros,*codigos;

//bibliotecas exclusivas
#include"buble_sort.h"
#include"cadlibrary.h"
#include"loadlibrary.h"
#include"toolslibrary.h"


//função principal
int main(){
	
	//lista de livros cadastrados
	lista *acervo = (lista *)malloc(sizeof(lista));
	acervo->prox = NULL;
	acervo->ant = NULL;	
	
	//estruturas do tipo login
	login usuario;
	login verificacao;
	
	printf("\t\t\tFaca Login para ter acesso ao conteudo!\n\n\n");
	
	//abre o arquivo em modo leitura
	if((usuarios = fopen("usuario_cadastrado.txt","r")) == NULL){
		
		usuarios = fopen("usuario_cadastrado.txt","w");
		printf("\t\t\t\tUsuario nao cadastrado\n\n\nCadastre-se e tenha acesso completo e exclusivo ao acervo de nossa biblioteca!\n\n");
		
		printf("Usuario: ");
		fgets(usuario.nome,25,stdin);
		printf("\nSenha: ");
		fgets(usuario.senha,10,stdin);
		
		fwrite(&usuario,sizeof(usuario),1,usuarios);
		fclose(usuarios);
		
	}else{
	
		//recebe os dados do arquivo na estrutura usuario
		fread(&usuario,sizeof(usuario),1,usuarios);
		fclose(usuarios);
		
		//recebe a entrada de dados do usuario
		printf("Usuario: ");
		fgets(verificacao.nome,25,stdin);
		printf("Senha: ");
		fgets(verificacao.senha,10,stdin);
		
		//verifica se os dados informados são equivalentes aos dados cadastrados
		while(strcmp(usuario.nome,verificacao.nome) != 0 or strcmp(usuario.senha,verificacao.senha) != 0){
			
			system("cls");
			printf("\n\n\n\t\t\tUsuario ou senha incorretos verifique seus dados e tente novamente!!!!\n");
			sleep(1);
			
			system("cls");
			printf("\t\t\tFaca Login para ter acesso ao conteudo\n\n\n");
			
			printf("Usuario: ");
			fgets(verificacao.nome,25,stdin);
			printf("Senha: ");
			fgets(verificacao.senha,10,stdin);
		}
	}
	
	//laço de repetição do menu
	while(1==1){
		
		//libera memória;
		desaloca(acervo);
		
		//função para carregar cadastros do arquivo para a memória
		carregar(livros,acervo);
		
		system("cls");
		printf("\t\t\t\t\t\tSelecione uma opcao:\n\n\n1 - Cadastrar\n2 - Alterar cadastro\n3 - Listar livros\n4 - Pesquisar Livro\n5 - Sair");
		opc = (getch()-48);
		
		switch(opc){
			
			case 1:{
				
				system("cls");
				//função para cadastrar livros
				cadastrar(livros,codigos);
				
				break;
			}
			
			case 2:{
				
				system("cls");
				if(acervo->prox == NULL){
		
					printf("\n\n\n\t\t\t\tNao existem livros cadastrados!");
					sleep(2);
					
				}else{
					
					//função para alterar cadastro de livro
					alterar(acervo);
					//função para guardar lista no arquivo
					descarregar(acervo,livros);
				}
				break;
			}
			
			case 3:{
				
				
				system("cls");
				//organiza a lista em ordem alfabetica
				alfabetica(acervo);
		
				//função para exibir livros cadastrados
				listar(acervo);
				
				break;
			}
			
			case 4:{
				
				system("cls");
				//função para consultar livros
				busca(acervo);
				break;
			}
			
			case 5:{
				
				exit(0);
				break;
			}
			default:
				
				system("cls");
				printf("\n\n\n\n\n\t\t\t\tInvalido");
				sleep(2);
		}	
	}
	
	return(0);
}
