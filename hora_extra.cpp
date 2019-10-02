/*Algoritmo para receber o valor do sal�rio, o total de horas 
trabalhadas no m�s, a quantidade de horas extras 50%, a quantidade de
horas extras 100% e mostrar o valor que o colaborador dever� receber
considerando seu valor mais o valor das horas extras. O algoritmo deve
ser implementado utilizando fun��o */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o do prot�tipo da fun��o
float valorhe(float vlrhora, float qtdhe, int tipohora);

//declara��o da fun��o principal
main()
{
	//declara��o das vari�veis locais
	float salario, totalhmes, horasextras, vlrhe50, vlrhe100;	
	//entrada de dados
	printf("Informe o valor do salario");
	scanf("%f", &salario);
	printf("Informe o total de horas trabalhadas no mes");
	scanf("%f", &totalhmes);
	printf("Informe qtd horas extras 50%");
	scanf("%f", &horasextras);
	//chamada da fun��o valorhe
	vlrhe50 = valorhe(salario/totalhmes,horasextras,50);
	horasextras=0;
	printf("Informe qtd horas extras 100%");
	scanf("%f", &horasextras);
	//chamada da fun��o valorhe
	vlrhe100 = valorhe(salario/totalhmes,horasextras,100);
	
	//sa�da de dados
	printf("\nTotal a receber = R$ %.2f", salario+vlrhe50+vlrhe100);
	system("pause");
}

//cria��o da fun��o valorhe
float valorhe(float vlrhora, float qtdhe, int tipohora)
{
	return (vlrhora+vlrhora*tipohora/100)*qtdhe;
}
