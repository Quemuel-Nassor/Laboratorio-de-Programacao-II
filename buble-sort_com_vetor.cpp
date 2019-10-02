/*Exerc�scio de ordena��o Bubble Sort 
Algoritmo para receber 10 numeros inteiros em um vetor e mostrar os numeros informados em
ordem crescente e decrescente */

//declara��o de biblitecas
#include<stdio.h>
#include<stdlib.h>
#define MAX 10 //constante

//declrara��o de vari�veis globais
int i,j;

//declara��o da fun��o de entrada de dados
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

//fun��o para ordena��o crescente
void ordenacres(int numero[])
{
	//vari�vel local
	int aux;
	
	//ordena��o crescente
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

//fun��o mostrar
void mostrar(int numero[])
{
	for(i=0; i < MAX; i++)
		printf("%i ", numero[i]);
}

void ordenadecresc(int numero[])
{
	//vari�vel local
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


//declara��o da fun��o principal
main()
{
	//declara��o da vari�vel local
	int vetor[MAX];
	
	//chamada da fun��o entrada()
	entrada(vetor); 
	
	//chamada da fun��o ordenacres
	ordenacres(vetor);
	
	printf("\nNumeros em ordem crescente:\n");
	//chamada da fun��o mostrar
	mostrar(vetor);
	
	//chamada da fun��o ordenadecres
	ordenadecres(vetor);

	printf("\nNumeros em ordem decrescente:\n");
	//chamada da fun��o mostrar
	mostrar(vetor);
}
