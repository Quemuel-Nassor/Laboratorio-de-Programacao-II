//declaração de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

//declaração da etrutura de dados
typedef struct usuario{

	char nome[30];
	char login[15];
	char senha[10];
	int perfil;

}usuario;

usuario usuarios;

typedef struct cliente{
	
	char nome[30];
	char nascimento[30];
	char email[50];
	int telefone;
	
}cliente;

cliente cadastros;

//ponteiros para o arquivo
FILE *arquivos,*clientes;

//prototipo da função cad_usuario
void cad_usuario(int chamada);

//prototipo da função cadastrar cliente
void cad_clientes (cliente recebe);

//prototipo da função consultar clientes
void consulta(cliente consulta);

//função menu
void menu(int perfil){
	//declaração das variaveis locais
	int opcao;
	system("cls");
	
	printf("*** Menu ***");
	printf("\n1 - Consultar clientes");
	
	if (perfil == 1 or perfil == 2 ){
		printf("\n2 - Inserir cliente");
	}
	if(perfil == 1){
		printf("\n3 - Cadastrar usuario");
		printf("\n0 - Sair");
	}else{
	
		printf("\n2 - inserir cliente\n3 - Cadastrar usuario\n0 - Sair\nEscolhe uma opcao: ");
	
	}
	
	
	fflush(stdin);
	opcao = (getch()-48);
	
	
	if(opcao == 0){
		
		system("cls");
		exit(0);
		
	}else if(opcao == 1){
		
		system("cls");
		consulta(cadastros);
		menu(perfil);
		
	}else if(opcao == 2 and (perfil == 1 or perfil == 2)){
		
		system("cls");
		cad_clientes(cadastros);
		menu(perfil);
		
	}else if(opcao == 3 and perfil == 1){
		
		system("cls");
		cad_usuario(1);
		menu(perfil);
		
	}else{
			
			system("cls");
			printf("Opcao invalida...");
			fflush(stdin);
			getchar();
			menu(perfil);
	}
	
}

//função cadastrar usuário
void cad_usuario(int chamada){
	
	//abrir o arquivo para gravação modo binário
	arquivos = fopen("usuario.txt","ab");
	printf("Informe o nome de usuario: ");
	fflush(stdin);
	gets(usuarios.nome);
	printf("Informe o login do usuario: ");
	fflush(stdin);
	gets(usuarios.login);
	printf("Informe a senha do usuario: ");
	fflush(stdin);
	gets(usuarios.senha);
	

	if(chamada == 0){

		usuarios.perfil = 1;
	
	}else{
		
		printf("Informe o perfil:\n1 - Administrador\n2 - Gerente\n3 - Tecnico ");
		usuarios.perfil = getche()-48;
		
	}
	
	//gravar em arquivo 
	fwrite(&usuarios,sizeof(usuarios),1,arquivos);
	
	//fecha o arquivo
	fclose(arquivos);
	
}

//função login
void login(){
	
	//variveis auxiliares 
	char auxlogin [15],auxsenha[10];
	int flag = 0;
	
	//abrir o arquivo para leitura e gravação
	if((arquivos = fopen("usuario.txt","rb")) == NULL){
		
		printf("Primeiro acesso...cadastrar usuario administrador\n\n");
		cad_usuario(0);
		
	}else{
		
		printf("Informe o Login: ");
		fflush(stdin);
		gets(auxlogin);
		printf("Informe a senha: ");
		fflush(stdin);
		gets(auxsenha);
		
		while(fread(&usuarios,sizeof(usuarios),1,arquivos)==1){
			
			if((strcmp(usuarios.login,auxlogin)==0) and (strcmp(usuarios.senha,auxsenha)==0)){
				
				flag = 1;
				menu(usuarios.perfil);
				
			}
		}
		
		if(flag == 0){
			printf("\nUsuario nao encontrado");
			getchar();
		
		}
	
	}
}

//função para evitar repetição de cadastros
int verifica(cliente recebe,cliente verifica){
	
	int teste1,teste2,flag = 0;
	clientes = fopen("cliente.txt","rb");
	
	while(fread(&recebe,sizeof(cliente),1,clientes)==1){
			
		if((strcmp(recebe.nome,verifica.nome) == 0) and (strcmp(recebe.nascimento,verifica.nascimento) == 0)){
			printf("Este cliente já foi cadastrado!!!");
			getchar();
			flag = 1;
		}
	}
	
	return flag;
}

//função para cadastrar clientes
void cad_clientes(cliente recebe){
	
	cliente verifica; 
	clientes = fopen("cliente.txt","ab");
	int flag = 0;
	
	
	while(flag == 1){
		
	printf("Informe o nome do cliente: ");
	fflush(stdin);
	gets(recebe.nome);
	printf("Informe a data de nascimento do cliente: ");
	fflush(stdin);
	gets(recebe.nascimento);
	printf("Informe o email do cliente: ");
	fflush(stdin);
	gets(recebe.email);
	printf("Informe o telefone do cliente: ");
	scanf("%i", &recebe.telefone);
	
	flag = (verifica(verifica,recebe));
	
	fwrite(&recebe,sizeof(cliente),1,clientes);
	fclose(clientes);
	}
	
}

//função para listar clientes 
void consulta(cliente consulta){
	
	clientes = fopen("cliente.txt","rb");
	
	while(fread(&consulta,sizeof(cliente),1,clientes)==1){
		
		printf("\nNome: %s",consulta.nome);
		printf("\tNascimento: %s",consulta.nascimento);
		printf("\nEmail: %s",consulta.email);
		printf("\tTelefone: %i\n\n",consulta.telefone);
	
	}
	
	fclose(clientes);
	getchar();
}


//função principal
int main(){
	login();
	return(0);
}
