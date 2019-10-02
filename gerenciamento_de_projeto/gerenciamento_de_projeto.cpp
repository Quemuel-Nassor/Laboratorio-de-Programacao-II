/*Elaborar um programa para gerenciar projetos de pesquisa e atenda as seguintes premissas:
1- ser acessado por usuario e senha
2- gerenciar  acesso as funcionalidades por perfil
3- apenas o administrador poderá cadastrar novos usuários
4- o programa terá as seguintes funções: cadastrar usuario,cadastrar projeto de pesquisa,
alterar projeto de pesquisa, pesquisar projetode pesquisa por número e listar projeto de 
pesquisa(ordem alfabética).
5- o número do projeto de pesquisa deverá ser gerado automaticamente.
6- os dados do projeto de pesquisa são:nujmero,titulo,pesquisador responsavel,data de inicio,
data de fim e valor.
*/

//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


//ponteiros de arquivo cadastros
FILE *cad_usuarios;

//biblioteca do menu
#include"menu.h"


//função principal
int main(){
	
	usuario teste;
	cad_usuarios = fopen("cad_usuarios.txt","r");
	

	if ((cad_usuarios = fopen("cad_usuarios.txt","r")) == NULL ){
	
		cad_usuario(0);
		
		
	}else{
		
		
		dados_usuario();
		
		while(fread(&teste,sizeof(teste),1,cad_usuarios)== 1){
			
	
			if((strcmp(conta.login,teste.login)!=0) and (strcmp(conta.senha,teste.senha)!=0) ){
				
				printf("Usuario invalido");
				
			}	
		}
	
	}

	menu();
	
	return(0);
}
