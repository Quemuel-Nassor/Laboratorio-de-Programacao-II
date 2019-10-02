/*Algoritmo para receber o valor do salário, o total de horas 
trabalhadas no mês, a quantidade de horas extras 50%, a quantidade de
horas extras 100% e mostrar o valor que o colaborador deverá receber
considerando seu valor mais o valor das horas extras. O algoritmo deve
ser implementado utilizando função */

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração do protótipo da função
float valorhe(float vlrhora, float qtdhe, int tipohora);

//declaração da função principal
main()
{
	//declaração das variáveis locais
	float salario, totalhmes, horasextras, vlrhe50, vlrhe100;	
	//entrada de dados
	printf("Informe o valor do salario");
	scanf("%f", &salario);
	printf("Informe o total de horas trabalhadas no mes");
	scanf("%f", &totalhmes);
	printf("Informe qtd horas extras 50%");
	scanf("%f", &horasextras);
	//chamada da função valorhe
	vlrhe50 = valorhe(salario/totalhmes,horasextras,50);
	horasextras=0;
	printf("Informe qtd horas extras 100%");
	scanf("%f", &horasextras);
	//chamada da função valorhe
	vlrhe100 = valorhe(salario/totalhmes,horasextras,100);
	
	//saída de dados
	printf("\nTotal a receber = R$ %.2f", salario+vlrhe50+vlrhe100);
	system("pause");
}

//criação da função valorhe
float valorhe(float vlrhora, float qtdhe, int tipohora)
{
	return (vlrhora+vlrhora*tipohora/100)*qtdhe;
}
