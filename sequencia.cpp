//Gerenciador de sequ�ncia 
//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//fun��o sequ�ncia
int sequencia()
{
	//vari�veis locais
	int numero;
	//ponteiro para o arquivo
	FILE *pontseq;
	
	//verificar se � a primeira vez
	if((pontseq=fopen("sequencia.txt","r"))==NULL)
	{
		//abrir o arquivo para grava��o
		pontseq=fopen("sequencia.txt", "w");
		fprintf(pontseq, "%i", 1);
		fclose(pontseq);
		return 1;
	}
	//depois da primeira vez
	while((fscanf(pontseq, "%i", &numero))!=EOF)
		numero++;
	fclose(pontseq);
	//abrir o arquivo para grava��o
	pontseq=fopen("sequencia.txt", "w");
	fprintf(pontseq, "%i", numero);
	fclose(pontseq);
	return numero;
}

//fun��o principal
main()
{
	printf("Sequencia: %i\n", sequencia());
	system("pause");
}
