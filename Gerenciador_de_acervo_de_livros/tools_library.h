

//função para listar o acervo cadastrado
void listar(lista *acervo){
	
	//ponteiro temporário para percorrer a lista
	lista *temp = acervo->prox;
	
	//verifica se a lista está ou não vazia
	if(temp == NULL){
		
		system("cls");
		printf("\n\n\n\t\t\t\tAcervo vazio!!!");
		sleep(2);
		
	}else if(temp->prox == NULL){
		
		printf("Codigo: %i\n",temp->codigo);	
		printf("Titulo: %s\n",temp->titulo);
		printf("Autoria: %s\n",temp->autores);
		printf("ISBN: %s\n",temp->isbn);
		printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
		
		fflush(stdin);
		getchar();
	
	}else if(temp->prox != NULL){

		//laço de repetição para exibição da struct
		while(temp->prox!=NULL){
			
			printf("Codigo: %i\n",temp->codigo);	
			printf("Titulo: %s\n",temp->titulo);
			printf("Autoria: %s\n",temp->autores);
			printf("ISBN: %s\n",temp->isbn);
			printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
		
			temp = temp->prox;
		}
		
		//exibe a struct que fica de fora do while
		printf("Codigo: %i\n",temp->codigo);	
		printf("Titulo: %s\n",temp->titulo);
		printf("Autoria: %s\n",temp->autores);
		printf("ISBN: %s\n",temp->isbn);
		printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
		
		fflush(stdin);
		getchar();
	}
	
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//função para alterar cadastro
void alterar(lista *acervo){
	
	//variaveis locais
	int codigo;
	lista *temp = acervo->prox;
	
	//recebe o codigo do livro
	printf("Informe o codigo do livro: ");
	scanf("%i",&codigo);

	//laço para busca e comparação
	while(temp->prox != NULL){
		
		if(temp->codigo == codigo){
			
			printf("Informe o titulo da obra: ");
			fflush(stdin);
			fgets(temp->titulo,100,stdin);
			temp->titulo[strlen(temp->titulo) - 1] = '\0';
			
			printf("\nInforme o(s) autor(es) da obra: ");
			fflush(stdin);
			fgets(temp->autores,50,stdin);
			temp->autores[strlen(temp->autores) - 1] = '\0';
			
			printf("\nInforme o codigo ISBN: ");
			fflush(stdin);
			fgets(temp->isbn,50,stdin);
			temp->isbn[strlen(temp->isbn) - 1] = '\0';
			
			printf("\nInforme o ano de publicacao da obra: ");
			scanf("%i",&temp->ano_publicacao);
			break;
		}
		temp = temp->prox;
	}
	//verifica se a ultima estrutura não possui o mesmo código
	if((temp->prox == NULL) and (temp->codigo == codigo)){
			
			printf("Informe o titulo da obra: ");
			fflush(stdin);
			fgets(temp->titulo,100,stdin);
			temp->titulo[strlen(temp->titulo) - 1] = '\0';
			
			printf("\nInforme o(s) autor(es) da obra: ");
			fflush(stdin);
			fgets(temp->autores,50,stdin);
			temp->titulo[strlen(temp->titulo) - 1] = '\0';
			
			printf("\nInforme o codigo ISBN: ");
			fflush(stdin);
			fgets(temp->isbn,50,stdin);
			temp->titulo[strlen(temp->titulo) - 1] = '\0';
			
			printf("\nInforme o ano de publicacao da obra: ");
			scanf("%i",&temp->ano_publicacao);
			
	}else if((temp->prox == NULL) and (temp->codigo != codigo)){
		
		system("cls");
		printf("\n\n\n\t\t\t\tLivro nao encontrado verifique o codigo e tente novamente!");
		sleep(2);
		
	}
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

//função para consulta específica
void busca(lista *acervo){
	
	//variaveis locais
	lista *temp = acervo->prox;
	int opc,num,data1,data2,i = 0,j = 0, k = 0;
	char titulo[100];
	
	//verficação de conteúdo na lista
	if(temp == NULL){
		
		printf("\n\n\n\t\t\t\tNao existem livros cadastrados!");
		sleep(2);
		
	}else{
		
		//seleção do modo de busca
		printf("Selecione uma forma de pesquisa: \n1 - Codigo\n2 - Titulo\n3 - Periodo de publicacao\n\n");
		opc = getch()-48;
		system("cls");
		
		switch(opc){
		
		case 1:{
			
			printf("Informe o codigo: ");
			scanf("%i",&num);
			
			break;
		}
		
		case 2:{
			
			printf("Informe o titulo: ");
			fflush(stdin);
			gets(titulo);
			
			break;
		}
			
		case 3:{
			
			printf("Informe a data inicial: ");
			scanf("%i",&data1);
			printf("Informe a data final: ");
			scanf("%i",&data2);
			
			break;
		}
			
		default:
			
			printf("\n\n\n\n\t\t\t\tInvalido!!");
			sleep(2);
			
		}
		system("cls");
	
		//laço de busca
		while(temp->prox != NULL){
			
			//sequência de verificações
			if((strcmp(titulo,temp->titulo)) == 0){
				
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				fflush(stdin);
				getchar();
				break;
				
			}else if(num == temp->codigo){
				
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				fflush(stdin);
				getchar();
				break;
				
			}else if(data1 < temp->ano_publicacao and temp->ano_publicacao < data2){
				
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao:\t%i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				
			}
			
			temp = temp->prox;
		}
		
		//verificação da última struct da lista
		if(temp->prox == NULL){
		
			if((strcmp(titulo,temp->titulo)) == 0){
					
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				fflush(stdin);
				getchar();	
					
			}else if(num == temp->codigo){
					
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				fflush(stdin);
				getchar();
						
			}else if(data1 < temp->ano_publicacao and temp->ano_publicacao < data2){
					
				printf("Codigo: %i\n",temp->codigo);	
				printf("Titulo: %s\n",temp->titulo);
				printf("Autoria: %s\n",temp->autores);
				printf("ISBN: %s\n",temp->isbn);
				printf("Ano de publicacao: %i\n-------------------------------------------------\n\n",temp->ano_publicacao);
				fflush(stdin);
				getchar();
			
			}else{
				
				system("cls");
				printf("\n\n\n\n\t\t\tNao foram encontrados itens com titulo, codigo ou periodo informados!!!\n\t\t\t\t\tPor favor verifique os dados e tente novamente");
				sleep(5);
				system("cls");
				
			}
			
		}
	}
}
