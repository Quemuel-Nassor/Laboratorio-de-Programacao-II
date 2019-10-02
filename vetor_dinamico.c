#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

const int MAX_LENGTH = 100;

//lenght count
int i = 0;

//dinamic string function
char* vector(char* vetor){

	//insertion loop
	do{	
		
		setbuf(stdin,NULL);
		vetor[i] = getche(stdin);
		
		if(vetor[i] != ' ' && strlen(vetor) < MAX_LENGTH){
		
			strcat(vetor,(char*)malloc(sizeof(char)));

		}else{
			
			vetor[i] = '\0';
			return(vetor);
			
		}
		i++;
		
	}while(vetor[i-1] != '\0');
}

main(){

	//pointer to char vector
	char* vetor = (char*) malloc(sizeof(char));
	char* matrix = (char*)malloc(sizeof(char));;
	char vet[] = {""}, temp[] = {""};
	
	//vector(vetor);
	//printf("%i",teste);
	//printf("%i",strlen(matrix));
	
	do{	
		setbuf(stdin,NULL);
		fgets(temp,100,stdin);
		temp[strlen(temp)-1] = '\0';
		//printf("%s",temp);
		if(strcmp(matrix,"") == 0){
			matrix = (char*)malloc(sizeof(temp));
			printf("realocou memoria %i",i);
		}
		
		if(strcmp(temp,"\0") != 0){
			
			//matrix[i] = (char*)temp;
			strcpy((char*)matrix[i],temp);
			strcat(matrix,(char*)malloc(sizeof(temp)));
			
		}else{
			printf("false");
			matrix[i] = '\0';
			
		}
		i++;
		
	}while(matrix[i-1] != '\0');
		
//	printf("\n\n\nterminou de inserir, |%s|\n",vetor);
//	printf("tamanho vector: %i",strlen(vetor));
	//printf("\n\n\nterminou de inserir, |%s|\n",matrix);
	//printf("tamanho matrix: %i",strlen(matrix));
	system("pause");

	return(0);
}
