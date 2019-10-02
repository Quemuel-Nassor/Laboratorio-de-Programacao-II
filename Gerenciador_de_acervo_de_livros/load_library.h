//função para ler do arquivo para a struct
void carregar(FILE *livros,lista *acervo){
	
	//abre o arquivo livros
	livros = fopen("livros.txt","rb");
	
	//ponteiro temporário para percorrer a lista
	lista *temp;
	
	//struct para receber os dados do arquivo
	cad recebe;
	
	//passa struct do arquivo para a lista
	while((fread(&recebe,sizeof(recebe),1,livros))==1){
	
		//cria uma nova alocação/
		lista *novo = (lista *)malloc(sizeof(lista));
		novo->prox = NULL;
		novo->ant = NULL;
		
		//transpõe os dados para a lista
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
			
			//printf("\n\ncondição2\n\n");
			
		//adiciona ao fim
		}else{
			
			//percorre a lista até encontrar o final
			while(temp->prox!= NULL){
				
				temp= temp->prox;
				
			}
			
			//inserção ao fim da lista
			temp->prox = novo;
			novo->ant = temp;	
			//printf("\n\ncondição3\n\n");			
		}		
	}
	
	fclose(livros);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------

//função para liberar memória alocada
void desaloca(lista *acervo){
	
	//laço que percorre e libera a lista
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

//função para reescrever struct no arquivo
void descarregar(lista *acervo,FILE *livros){
	
	//ponteiro temporario
	lista *temp = acervo->prox;
	
	//struct para guardar em arquivo
	cad armazena;
	
	//abre arquivo em modo escrita
	livros = fopen("livros.txt","wb");		
			
	while(temp->prox != NULL){
		
		//transpõe os dados para aarmazenamento
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
	
		//transpõe os dados para armazenamento
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
