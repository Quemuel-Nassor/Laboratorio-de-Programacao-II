//estrutura para cadastro
struct cadastro{
	
	char login[40];
	char senha[40];
	int perfil;
};

typedef struct cadastro usuario;

usuario conta;

//fun��o para receber dados do usuario
void dados_usuario(){
	
	printf("Informe o nome do usu�rio: ");
	fflush(stdin);
	gets(conta.login);
	printf("Informe a senha do usu�rio: ");
	fflush(stdin);
	gets(conta.senha);
		
}

//fun��o para cadastro de usuarios
void cad_usuario(int verificacao){
	
	cad_usuarios = fopen("cad_usuarios.txt","a");
	
	dados_usuario();
	
	if(verificacao == 0){
		
		conta.perfil = 1;
		
	}else{
		
		printf("Informe o perfil que deseja utilizar:\n1 - Administrador\n2 - T�cnico\n");
		conta.perfil = (getch()-48);
		
	}
	
	fwrite(&conta,sizeof(conta),1,cad_usuarios);
	fclose(cad_usuarios);
	
}
