//Exemplo de declara��o e inicializa��o de uma matriz

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o das vari�veis
int matriz[5][5]; //matriz
int x, y; //vari�veis controle da matriz

main()
{
	//inicializar a matriz
	for(x=0;x<5;x++)
	{
		for(y=0; y<5; y++)
			matriz[x][y]=0;
	}
	
	//mostrar a matriz inicializada
	for(x=0; x<5; x++)
	{
		for(y=0; y<5; y++)
			printf("%i ", matriz[x][y]);
		printf("\n");
	}

}
