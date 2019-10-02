/* elaborar um programa para receber números inteiros em duas matrizes 3x3, realizar a multiplicação das matrizes
e mostrar o resultado*/

#include<stdio.h>
#include<stdlib.h>


int i,j,aux[3][3],u,matriz1[3][3],matriz2[3][3];

int main(){
	
	//inicialização das matrizes
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
       	
	       	aux[i][j] = 0;
	        matriz1[i][j] = 0;
			matriz2[i][j] = 0;
			  
			//entrada de dados da primeira matriz
			system("cls");	
	        printf("Informe um numero inteiro para a primeira tabela:\n");
	        scanf("%i",&matriz1[i][j]);
	              			}
					} 
       
    // entrada de dados da segunda matriz
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
       	
	       	system("cls");	
	        printf("Informe um numero inteiro para a segunda tabela:\n");
	        scanf("%i",&matriz2[i][j]);
       					}
					}
	system("cls");
	
	//multiplicação das linhas pela colunas	
	for(u=0;u<3;u++){
	    for(i=0;i<3;i++){	
	       for(j=0;j<3;j++){
	       		aux[u][i] += matriz1[u][j]*matriz2[j][i];//linha u da primeira matriz vezes coluna j da segunda matriz
	       		 //printf("(%i x %i)+",matriz1[u][j],matriz2[j][i]);
							}//printf("\t");
						}//printf("\n");
					}
							
		 	
	
	//impressão dos resultados    	
	system("cls");	 
	printf("\n\nresultado\n\n");
	
	
	    for(i=0;i<3;i++){
	       for(j=0;j<3;j++){
	       		printf("\t%i   ",aux[i][j]);
						   }
					    	printf("\n\n");
						}	     
	    
	return 0;
	
}

