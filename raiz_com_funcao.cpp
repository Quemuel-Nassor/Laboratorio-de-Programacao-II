//declara��o de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//variavel para gerar a potencia��o
void troca(float n1){
	
	return (pow((n1+1),2));
	
}

main(){
	
	float n1;
	while(1){
		
		printf("Informe o valor: ");
		scanf("%f",&n1);
		
		printf("\n\nvari�vel 1 %f",pow((n1+1),2));
		printf("\n\nvari�vel 2 %f",pow(n1,2));
	}
	return(0);
}
