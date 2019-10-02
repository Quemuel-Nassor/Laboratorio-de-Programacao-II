/*Exercício 2 */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração da constante
#define MAX 5

//declaração da estrutura de dados
struct empresa
{
	int melhoria, satisfacao;
	float valor;
};

struct empresa pesquisa[10];

//função coleta de dados
void coleta(struct empresa pesquisa[])
{
	//variáveil local
	int i;
	for(i=0; i<MAX; i++)
	{
		system("cls");
		printf("Informe o indice de melhoria da empresa (1 a 5): ");
		scanf("%i", &pesquisa[i].melhoria);
		if(pesquisa[i].melhoria < 1 && pesquisa[i].melhoria > 5)
		{
			printf("\n*** Indice invalido ... ***\n");
			system("pause");
			i--;
		}
		printf("Informe o grau de satisfacao da empresa (1 a 5): ");
		scanf("%i", &pesquisa[i].satisfacao);
		if(pesquisa[i].satisfacao < 1 && pesquisa[i].satisfacao > 5)
		{
			printf("\n*** Grau invalido ... ***\n");
			system("pause");
			i--;
		}
		printf("Informe o valor custo/beneficio: ");
		scanf("%f", &pesquisa[i].valor);
	}
}

int melhoria(struct empresa pesquisa[])
{
	//variável local
	//int i, indice1=0, indice2=0, indice3=0, indice4=0, indice5=0, maior=0; 
	//melhorando o código
	int i, maior, resultado, indice[5]={0,0,0,0,0};
	for(i=0; i<MAX; i++)
	{
		if(pesquisa[i].melhoria==1)
			indice[0]++;
		else if(pesquisa[i].melhoria==2)	
			indice[1]++;
		else if(pesquisa[i].melhoria==3)
			indice[2]++;
		else if(pesquisa[i].melhoria==4)
			indice[3]++;
		else
			indice[4]++;			
	}
	
	//inicializar o maior
	maior = indice[0];
	resultado=1;	
	for(i=1; i<5; i++)
	{
		if(indice[i]>maior)
		{
			maior=indice[i];
			resultado=i+1;
		}
	}

	return resultado;
}

//função média do grau de satisfação dos gestores
float media(struct empresa pesquisa[])
{
	//variável local
	int i, soma=0;
	for(i=0; i<MAX; i++)
	{
		soma+=pesquisa[i].satisfacao;		
	}
	return float(soma)/MAX;
}

//função para retornar o menor valor custo/benefício
float menor(struct empresa pesquisa[])
{
	//variáveis locais
	int i;
	float menor;
	menor = pesquisa[0].valor;
	for(i=1; i<MAX; i++)
	{
		if(pesquisa[i].valor<menor)
			menor = pesquisa[i].valor;
	}
	return menor;
}


//função principal
main()
{
	coleta(pesquisa);
	printf("\nIndice de melhoria mais encontrado: %i", melhoria(pesquisa));
	printf("\nMedia grau de satisfacao: %.1f", media(pesquisa));
	printf("\nMenor custo / beneficio: %.2f", menor(pesquisa));
	system("pause");
}
