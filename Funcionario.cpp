/*Programa para c�lculo de pagamento de funcion�rios
- Dever� contemplar:
cr�dito: sal�rio, he50%, he100% e adic. noturno (acr�scimo de 20% no valor das 
horas trabalhadas no per�odo noturno).
descontos: (inss e irrf - tabela do governo)
empresa: (fgts (8%) e pis (1%) */

//declara��o das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//fun��o c�lculo impostos da empresa
float encargo(float salario, float indice)
{
	return (salario*indice)/100;
}

//fun��o c�lculo irrf
float irrf(float salario)
{
	if (salario <= 1903.98)
		return 0;
	else if (salario <= 2826.65)
		return salario * 0.075 - 142.80;
	else if (salario <= 3751.05)
		return salario * 0.15 - 354.80;
	else if (salario <= 4664.68)
		return salario * 0.225 - 636.13;
	else
		return salario * 0.275 - 869.36;			
}

//fun��o c�lculo inss
float inss(float salario)
{
	if(salario <= 1693.72)
		return salario * 0.08;
	else if (salario <= 2822.90)
		return salario * 0.09;
	else if (salario <= 5645.80)
		return salario * 0.11;
	else
		return 621.04;
}

//fun��o principal
main()
{
	//declara��o das vari�veis
	float salario, desconto;
	char resposta;
	do
	{
		//entrada de dados
		printf("Informe o valor do salario");
		scanf("%f", &salario);
		desconto = inss(salario)+irrf(salario);
		printf("\nINSS = %.2f", inss(salario));
		printf("\nIRRF = %.2f", irrf(salario));
		printf("\nDesconto = %.2f", desconto);
		printf("\n----------------------");
		printf("\nFGTS = %.2f", encargo(salario,8));
		printf("\nPIS = %.2f", encargo(salario,1));
		printf("\n\nOutro calculo <S/N>");
		resposta = getche();
	} while (resposta == 'S' || resposta == 's');
}
