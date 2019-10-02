//declaração de bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//variavel para gererenciar
void gerencia(float *n1){
	
	*n1 = *n1 + 1;
	
}

main(){
	
	float numero;
		
	printf("Informe o valor: ");
	scanf("%f",&numero);
	
	gerencia(&numero);
	printf("\n\nnumero %f",numero);
	
	return(0);
}
