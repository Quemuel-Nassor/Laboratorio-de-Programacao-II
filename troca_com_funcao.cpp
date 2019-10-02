/*1- utilizando fun��o com passagem de par�metro por refer�ncia implemente um algoritmo
para ler dois numeros reais e trocar os valores entre as vari�veis, assim o valor da 
primeira vari�vel vai para a segunda e o valor da segunda vai para a primeira 

2- implementar um algoritmo para gerar o quadrado de um n�mero

3- implementar um algoritmo para gerenciar(incrementar a cada chamada) uma sequencia*/

//declara��o de bibliotecas
#include<stdio.h>
#include<stdlib.h>

//variavel para gerar a troca
void troca(float *n1, float *n2){
	
	//variavel local
	float aux;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
	
}

main(){
	
	//variaveis locais
	float num1,num2;
	
	//entrada de dados
	printf("Informe os valores que deseja trocar:\n");
	scanf("%f",&num1);
	scanf("%f",&num2);
	
	printf("numero1 %f numero2 %f",num1,num2);
	
	//chamada da fun��o troca 
	troca(&num1,&num2);
	
	printf("\n\nTroca:\nnumero1 %f numero2 %f",num1,num2);
	
	return(0);
}
