/*Programa para manipular vetores utilizando função */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//definição de constante
#define MAX 10

//declaração da função inserir no vetor
void inserir(int vetor[], int tamanho)
{
	int i;
	for(i=0; i<tamanho; i++)
	{
		printf("Informe um numero inteiro: ");
		scanf("%i", &vetor[i]);
	}
}

//declaração da função mostrar dados do vetor
void mostrar(int vetor[], int tamanho)
{
	int i;
	for(i=0; i<tamanho; i++)
		printf("%i ", vetor[i]);
}

//implementar função para retornar o produto escalar de dois vetores 
//Equação: soma vetor1[i]*vetor2[i]


//declaração da função principal
main()
{
	//declaração da variável local
	int numeros[MAX];
	
	//chamada da função para cadastrar números no vetor
	inserir(numeros, MAX);
	
	//chamada da função para mostrar os números do vetor
	mostrar(numeros, MAX);
	system("pause");
}
