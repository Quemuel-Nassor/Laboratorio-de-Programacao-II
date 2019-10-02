/*Algoritmo para receber um conjunto de n n�meros inteiros e mostrar qual o menor e qual o maior
por meio de uma �nica fun��o utilizando passagem por refer�ncia */

//declara��o de bibliotecas
#include<stdio.h>
#include<stdlib.h>

//declara��o do prot�tipo da fun��o maxmin()
int maxmin(int n, int *maximo, int *minimo);

//declara��o da fun��o principal
main(){
	
	//delcara��o das vari�veis locais 
	int qtd, maior, menor;
	
	//entrada de dados
	printf("Informe a quantidade de valores: ");
	scanf("%i",&qtd);
	
	//chamada da fun��o maxmin
	if(maxmin(qtd, &maior, &menor)==1){
		
		printf("\nMaior = %i\nMenor = %i", maior,menor);
		
	}else{
		
		printf("\nSequencia vazia..");
		
	}
	
	fflush(stdin);
	getchar();
	
	return(0);
}

//fun��o maxmin()
int maxmin(int n, int *maximo, int *minimo){
	
	//variaveis locais
	int numero, i;
	
	//validar n <= 0
	if(n <= 0){
		
		return 0;
		
	}
	//validar apenas um n�mero	
	printf("\nInforme um numero: ");
	scanf("%i",minimo);
	*maximo = *minimo;
	
	
	//n numeros
	for(i=2;i <= n;i++){
		
		printf("\nInforme um numero: ");
		scanf("%i",&numero);
		
		if(numero > *maximo){
			
			*maximo = numero;
			
		}else if(numero < *minimo){
			
			*minimo = numero;
			
		}
	}
	return 1;
		
}
