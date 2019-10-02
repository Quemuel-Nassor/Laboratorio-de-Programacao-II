/*função para gerar uma matriz transposta de uma matriz informada de no máximo 5x5*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int linhas,colunas,i,j,matriz[MAX][MAX],aux;

int exibe(int linhas,int colunas,int matrizt[MAX][MAX]){
	
	aux = linhas;
	linhas = colunas;
	colunas = aux;
	
	for(i=0;i<linhas;i++){printf("\n");
		for(j=0;j<colunas;j++){
			printf("\t%i",matrizt[j][i]);
						 	  }printf("\n");	  
						 }
}

int main(){
	printf("Informe a quantidade de linhas:\n");
	scanf("%i",&linhas);
	system("cls");
	printf("Informe a quantidade de colunas:\n");
	scanf("%i",&colunas);
	system("cls");
	
	int u;
	
	printf("Informe  um numero inteiro:\n");
	scanf("%i",&u);
			
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matriz[i][j] = u;
			printf("\t%i",matriz[i][j]);
			system("cls");
						     }
						}
	printf("Matriz Original:\n");					 
	for(i=0;i<linhas;i++){printf("\n");
		for(j=0;j<colunas;j++){
			printf("\t%i",matriz[i][j]);
						 	  }printf("\n");	  
						 }printf("\n\n\nMatriz Transposta:\n");
							 						
	exibe(linhas,colunas,matriz);
	return(0);
}
	
