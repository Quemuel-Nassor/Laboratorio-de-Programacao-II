//fun��o para ler do arquivo para a struct
void carregar(FILE *livros,lista *acervo){
	
	//abre o arquivo livros
	livros = fopen("livros.txt","rb");
	
	//ponteiro tempor�rio para percorrer a lista
	lista *temp;
	
	//struct para receber os dados do arquivo
	cad recebe;
	
	//passa struct do arquivo para a lista
	while((fread(&recebe,sizeof(recebe),1,livros))==1){
	
		//cria uma nova aloca��o/
		lista *novo = (lista *)malloc(sizeof(lista));
		novo->prox = NULL;
		novo->ant = NULL;
		
		//transp�e os dados para a lista
		strcpy(novo->titulo,recebe.titulo);
		strcpy(novo->autores,recebe.autores);
		strcpy(novo->isbn,recebe.isbn);
		novo->ano_publicacao = recebe.ano_publicacao;
		novo->codigo = recebe.codigo;
		
		//verifica o inicio da lista
		if(acervo->prox == NULL){
		
			acervo->prox = novo;
			novo->ant = acervo;
			temp = acervo->prox;
			
			//printf("\n\ncondicao1\n\n");
			
		//verifica o segundo item da lista
		}else if(temp->prox == NULL){
			
			temp->prox = novo;
			novo->ant = temp;
			
			//printf("\n\ncondi��o2\n\n");
			
		//adiciona ao fim
		}else{
			
			//percorre a lista at� encontrar o final
			while(temp->prox!= NULL){
				
				temp= temp->prox;
				
			}
			
			//inser��o ao fim da lista
			temp->prox = novo;
			novo->ant = temp;	
			//printf("\n\ncondi��o3\n\n");			
		}		
	}
	
	fclose(livros);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

//fun��o para liberar mem�ria alocada
void desaloca(lista *acervo){
	
	//la�o que percorre e libera a lista
	while(acervo->prox!= NULL){
		
		lista *temp = acervo->prox;
		acervo->prox = temp->prox;
		
		if(temp->prox == NULL){
		
			free(temp);
			break;
			
		}
		
		temp->prox->ant = acervo;
		free(temp);
		
	}
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------

//fun��o para reescrever struct no arquivo
void descarregar(lista *acervo,FILE *livros){
	
	//ponteiro temporario
	lista *temp = acervo->prox;
	
	//struct para guardar em arquivo
	cad armazena;
	
	//abre arquivo em modo escrita
	livros = fopen("livros.txt","wb");		
			
	while(temp->prox != NULL){
		
		//transp�e os dados para aarmazenamento
		strcpy(armazena.titulo,temp->titulo);
		strcpy(armazena.autores,temp->autores);
		strcpy(armazena.isbn,temp->isbn);
		armazena.ano_publicacao = temp->ano_publicacao;
		armazena.codigo = temp->codigo;
		
		//escreve a struct no arquivo
		fwrite(&armazena,sizeof(armazena),1,livros);
		temp = temp->prox;
	}
	
	//armazena a ultima struct
	if(temp->prox == NULL){
	
		//transp�e os dados para armazenamento
		strcpy(armazena.titulo,temp->titulo);
		strcpy(armazena.autores,temp->autores);
		strcpy(armazena.isbn,temp->isbn);
		armazena.ano_publicacao = temp->ano_publicacao;
		armazena.codigo = temp->codigo;
		
		//escreve a struct no arquivo
		fwrite(&armazena,sizeof(armazena),1,livros);
	}
	
	//fecha o arquivo
	fclose(livros);
}
