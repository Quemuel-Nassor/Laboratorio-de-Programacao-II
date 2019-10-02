/*Exercíscio de ordenação Bubble Sort 
Algoritmo para receber 10 numeros inteiros em um vetor e mostrar os numeros informados em
ordem crescente e decrescente */

//declaração de biblitecas
#include<stdio.h>
#include<stdlib.h>
#define MAX 10 //constante

//declraração de variáveis globais
int i,j;

//declaração da função de entrada de dados
void entrada(int numero[])
{
	//entrada de dados
	for(i=0; i<MAX; i++)
	{
		system("cls");
		printf("Informe um numero inteiro");
		scanf("%i",&numero[i]);
	}
}

//função para ordenação crescente
void ordenacres(int numero[])
{
	//variável local
	int aux;
	
	//ordenação crescente
	for(i=0; i < MAX; i++)
	{
		for(j=i+1; j < MAX; j++)
		{
			if(numero[i]>numero[j])
			{
				aux = numero[i];
				numero[i]=numero[j];
				numero[j]=aux;
			}
		}
	}
}

//função mostrar
void mostrar(int numero[])
{
	for(i=0; i < MAX; i++)
		printf("%i ", numero[i]);
}

void ordenadecresc(int numero[])
{
	//variável local
	int aux;
	for(i=0; i < MAX; i++)
	{
		for(j=i+1; j < MAX; j++)
		{
			if(numero[i]<numero[j])
			{
				aux = numero[i];
				numero[i] = numero[j];
				numero[j] = aux;
			}
		}
	}
}


//declaração da função principal
main()
{
	//declaração da variável local
	int vetor[MAX];
	
	//chamada da função entrada()
	entrada(vetor); 
	
	//chamada da função ordenacres
	ordenacres(vetor);
	
	printf("\nNumeros em ordem crescente:\n");
	//chamada da função mostrar
	mostrar(vetor);
	
	//chamada da função ordenadecres
	ordenadecres(vetor);

	printf("\nNumeros em ordem decrescente:\n");
	//chamada da função mostrar
	mostrar(vetor);
}
