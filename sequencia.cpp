//Gerenciador de sequência 
//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//função sequência
int sequencia()
{
	//variáveis locais
	int numero;
	//ponteiro para o arquivo
	FILE *pontseq;
	
	//verificar se é a primeira vez
	if((pontseq=fopen("sequencia.txt","r"))==NULL)
	{
		//abrir o arquivo para gravação
		pontseq=fopen("sequencia.txt", "w");
		fprintf(pontseq, "%i", 1);
		fclose(pontseq);
		return 1;
	}
	//depois da primeira vez
	while((fscanf(pontseq, "%i", &numero))!=EOF)
		numero++;
	fclose(pontseq);
	//abrir o arquivo para gravação
	pontseq=fopen("sequencia.txt", "w");
	fprintf(pontseq, "%i", numero);
	fclose(pontseq);
	return numero;
}

//função principal
main()
{
	printf("Sequencia: %i\n", sequencia());
	system("pause");
}
