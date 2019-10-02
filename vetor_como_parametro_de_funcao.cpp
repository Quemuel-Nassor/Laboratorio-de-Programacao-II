/*Programa para manipular vetores utilizando fun��o */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de constante
#define MAX 10

//declara��o da fun��o inserir no vetor
void inserir(int vetor[], int tamanho)
{
	int i;
	for(i=0; i<tamanho; i++)
	{
		printf("Informe um numero inteiro: ");
		scanf("%i", &vetor[i]);
	}
}

//declara��o da fun��o mostrar dados do vetor
void mostrar(int vetor[], int tamanho)
{
	int i;
	for(i=0; i<tamanho; i++)
		printf("%i ", vetor[i]);
}

//implementar fun��o para retornar o produto escalar de dois vetores 
//Equa��o: soma vetor1[i]*vetor2[i]


//declara��o da fun��o principal
main()
{
	//declara��o da vari�vel local
	int numeros[MAX];
	
	//chamada da fun��o para cadastrar n�meros no vetor
	inserir(numeros, MAX);
	
	//chamada da fun��o para mostrar os n�meros do vetor
	mostrar(numeros, MAX);
	system("pause");
}
