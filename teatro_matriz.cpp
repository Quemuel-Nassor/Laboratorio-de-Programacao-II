/*Algoritmo para gerenciar a aloca��o dos lugares de um teatro.
O teatro possui 100 lugares (10 cadeiras por 10 fileiras), o
valor zero representa cadeira vazia e o valor um representa 
cadeira ocupada. O algoritmo dever� permitir a reserva de 
lugares, assim o usu�rio informar� o n�mero da fileira e da
cadeira e o programa retornar� se foi poss�vel a reserva ou
n�o */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//declara��o das vari�veis
int teatro[10][10], cadeira, fileira, i, j;
char resposta;

//declara��o da fun��o principal
main()
{
	//inicializa��o da matriz - liberar todos os lugares
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
			teatro[i][j]=0;
	}
	
	//estrutura de repeti��o para reserva do lugar
	do
	{
		//entrada de dados
		printf("\nInforme a fileira (1-10)");
		scanf("%i", &fileira);
		printf("\nInforme a cadeira (1-10)");
		scanf("%i", &cadeira);
		
		if(teatro[fileira-1][cadeira-1]==0)
		{
			printf("\nLocal disponivel");
			teatro[fileira-1][cadeira-1]=1;
		}
		else
			printf("\nLocal ocupado...\nEscolha outro...");
		printf("Deseja escolher outro lugar <S/N>");
		resposta=getche();
	} while(resposta=='s' || resposta=='S');
	
	printf("\n*** RESERVAS DO TEATRO ***\n");
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
			printf("%i ", teatro[i][j]);
		printf("\n");	
	}
}
