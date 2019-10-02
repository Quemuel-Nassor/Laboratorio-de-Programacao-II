//função de ordenação alfabetica
void alfabetica(lista *ordena){
	
	//verifica se a lista possui mais de uma struct
	lista *teste = ordena->prox;
	
	//indicadores de passagem do loop
	int marcador = -5;
	
	if(teste == NULL){
		
		printf("Lista vazia!");
	
	}else if(teste->prox != NULL){
	
		lista *temp1, *temp2;
		
		//loop secundário de verificação de ordenação 
		while(marcador !=0){
		
			temp1 = ordena->prox;
			temp2 = temp1->prox;
		
			marcador = 0;
			
			//loop primário de ordenação 
		 	while(temp2->prox != NULL){
	
				if(strcmp(temp2->titulo,temp1->titulo)<0){
			 		
					temp1->prox = temp2->prox;
					temp2->prox->ant = temp1;
					temp2->ant = temp1->ant;
					temp1->ant->prox = temp2;
					temp1->ant = temp2;
					temp2->prox = temp1;
					
					marcador++;
				 	//printf(" LOOP1\n ");
				}
				temp1 = temp2;
				temp2 = temp2->prox;
				//printf(" MUDANÇA DE CAIXAS\n ");
			}
			
			//verificação de termos desordenados ao fim da lista
			if((temp2->prox == NULL ) and (strcmp(temp2->titulo,temp1->titulo)<0)){
				 
				 	temp1->prox = temp2->prox;
				 	temp2->prox = temp1;
				 	temp2->ant = temp1->ant;
				 	temp1->ant = temp2;
				 	temp2->ant->prox = temp2;
				 	marcador++;
				 	//printf(" marcador%i\n ",marcador);
				
			 }
		}
		//getchar();
	}
}

