//struct para cadastro dos livros
typedef struct livros{
	
	int codigo;
	char titulo[100];
	char autores[50];
	char isbn[50];
	int ano_publicacao;
	
}cad;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
	
//função de cadastro dos livros 
void cadastrar(FILE *livros,FILE *codigos){
	
	//estrutura do livro a ser cadastrado
	cad livro;
	
	//abre o arquivo livros para escrita
	livros = fopen("livros.txt","ab");
	
	
	//entrada de dados do livro
	printf("Informe o titulo da obra: ");
	fflush(stdin);
	fgets(livro.titulo,100,stdin);
	livro.titulo[strlen(livro.titulo) - 1] = '\0';
	
	printf("\nInforme o(s) autor(es) da obra: ");
	fflush(stdin);
	fgets(livro.autores,50,stdin);
	livro.autores[strlen(livro.autores) - 1] = '\0';
	
	printf("\nInforme o codigo ISBN: ");
	fflush(stdin);
	fgets(livro.isbn,50,stdin);
	livro.isbn[strlen(livro.isbn) - 1] = '\0';
	
	printf("\nInforme o ano de publicacao da obra: ");
	scanf("%i",&livro.ano_publicacao);
	
	
	//verifica se o arquivo codigos existe
	if((codigos = fopen("codigos_livros.txt","r")) == NULL){
		
		//abre o arquivo em modo escrita
		codigos = fopen("codigos_livros.txt","w");
		
		livro.codigo = 12476981;
		//adiciona um valor inical aos códigos dos livros
		fprintf(codigos,"%i",livro.codigo);
		fclose(codigos);
	
	}else if((codigos = fopen("codigos_livros.txt","r")) != NULL){
		
		//recebe e incrementa o valor do código
		fscanf(codigos,"%i",&livro.codigo);
		livro.codigo = livro.codigo + 1;
		
		//fecha o arquivo codigos e reabre em modo escrita
		fclose(codigos);
		codigos = fopen("codigos_livros.txt","w");
		
		//devolve o valor do código dos livros
		fprintf(codigos,"%i",livro.codigo);
		fclose(codigos);
		
	}
	
	
	
		
	fwrite(&livro,sizeof(livro),1,livros);
	fclose(livros);
	
}
