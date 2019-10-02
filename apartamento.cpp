/*Elaborar um programa para cadastrar, alterar e listar em ordem alfab�tica os moradores
de um condom�nio com 12 apartamentos. O programa deve atender ao seguinte escopo:
1 - Ter um menu para as op��es mencionadas, mais a op��o sair;
2 - Os dados de cada apartamento s�o: n�mero do apartamento, nome do morador, CPF
do morador e % da taxa de condom�nio;
3 - N�o deve permitir cadastrar n�mero de apartamento repetido;
4 - Utilizar fun��es.
Enviar para o e-mail: ecarita@gmail.com at� dia 09/04/2018 as 23:59 - at� 1 ponto.
*/

//declara��o de bibliotecas e constantes
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#define MAX 12
#include<string.h>

//declara��o de vari�veis
int i,j,u= 0,opc;
char alfabeto[27] = {"abcdefghijklmnopqrstuvwxyz"};


//declara��o de estrutura
struct apartamento{
	int numero;
	int documento;
	float taxa;
	char nome[30];
	
};

//declara��o do tipo cadastro
typedef struct apartamento cadastro;


//fun��o cadastro
void cadastrar(cadastro morador[],int j){
	int comparativa,i;
	int vlr1 = 0,vlr2 = 0;
	
	
		
		vlr1 = vlr2 = 0;
		while(vlr2 < 12){//==================================================================================================/	mant�m o la�o enquanto o valor for igual
			printf("Informe o n�mero do apartamento:\n");//recebe o valor para comparar 
			scanf("%i",&comparativa);
																															
				for(i=0;i<12;i++){//------------------------------------------------------------------------------------|			
					
					if(morador[i].numero == comparativa){
					system("cls");
					printf("if\n");																																					
						vlr1++;																		
					}else{			
					system("cls");
					printf("else\n");		//percorre o vetor comparando se o o numero j� foi usado
						vlr2++;  																						
					}
																														
				}//----------------------------------------------------------------------------------------------------|
				printf("\nsaiu do for\n");
				for(i=0;i<12;i++){
					printf("%i\n",morador[i].numero);
				}
				if(vlr1>0 and i == 12 and vlr2 < 12){
					vlr1 = vlr2 = 0;
					printf("volta pro while\n");
				}else if(vlr1 == 0 and i == 12 and vlr2 == 12){
					vlr2 == 12;
					printf("sai do while\n");
				}else{printf("ta errado");
				}
		}//=================================================================================================================/
	
	morador[j].numero = comparativa;//variavel.numero do vetor/estrutura morador recebe o valor diferentes dos j� existentes
	
	printf("Informe o n�mero do CPF do residente:\n");
	scanf("%i",&morador[j].documento);
	printf("Informe a taxa de condom�nio que ir� pagar(%%):\n");
	scanf("%f",&morador[j].taxa);
	printf("Informe o nome do Residente:\n");
		fflush(stdin);	
		gets(morador[j].nome);	
}

//fun��o alterar 
void alterar(cadastro morador[]){
	int doc;
	printf("Informe o n�mero do CPF do residente que deseja alterar:\n");//recebe o numero de cpf para procurar o morador que deseja alterar(j� que CPF � �nico)
	scanf("%i",&doc);
	for(j=0;j<13;j++){
		if(morador[j].documento == doc){
			cadastrar(morador,j);//chama a fun��o cadastro passando a posi��o J do vetor que tenha o CPF igual ao informado
		
		}else if(morador[j].documento != doc){
			if(morador[j].documento == doc){
			system("cls");
			printf("\nO CPF requisitado n�o foi cadastrado!");
			}
		}
	}system("pause");
};

//fun��o exibi��o
void exibir(cadastro morador[]){
	
	int vazios = 0;
	
	for(j=0;j<12;j++){
		if(morador[j].numero == 0 and morador[j].documento == 0 and morador[j].taxa == 0){
		vazios ++;			
		}//flag para saber se o vetor/estrutura se encontra vazia ou totalmente preenchida
		}
	
	if(vazios == 0){
		printf("\n\n\t\tTodos os apartamentos est�o ocupados!");
	
	}else if(vazios == 12){
		printf("\n\n\t\tTodos os apartamentos est�o vazios\n");
		
	}else if(0 < vazios <= 11){
	
		for(j=0;j<12;j++){
			
			if(morador[j].numero != 0 and morador[j].documento != 0 and morador[j].taxa != 0){
	
				printf("\n\n\nN�mero do apartamento: %i\n\n",morador[j].numero);
				printf("CPF do residente: %i\n\n",morador[j].documento);
				printf("Taxa de condom�nio: %.1f%%\n\n",morador[j].taxa);
				printf("Nome do residente: ");
				for(i=0;i<30;i++){	
					printf("%c",morador[j].nome[i]);
				}printf("\n\n\n");
			}
		}
	}
}


main(){
	
	setlocale(LC_ALL,"portuguese");
	
	cadastro aux[MAX];
	cadastro residente[MAX];
	
	//incializa��o da estrutura
	for(j=0;j<12;j++){
	residente[j].numero = 0;
	residente[j].documento = 0;
	residente[j].taxa = 0;
	for(i=0;i<30;i++){	
		residente[j].nome[i] = 0;
			}
	}
	
	
	//ordena��o 
	/*for(j=0;j<26;j++){
		for(i=0;i<12;i++){
			if(alfabeto[j] == tolower(residente[i].nome[0])){
				aux[i] = residente[i];
				residente[j] = aux[i];
				//residente[i] = 
			}}
		}*/

	
	
	
	while(1==1){
	i = u;
	system("cls");	
	 
	printf("\t\tSelecione uma op��o:\n\n1- Cadastro\n2- Modificar\n3- Exibir moradores\n4- Sair\n");
	opc = getch()-48;
	
	switch(opc){
	
	case 1:{
		system("cls");
		cadastrar(residente,i);
		break;
	}
	
	case 2:{
		system("cls");
		alterar(residente);
		break;
	}
	
	case 3:{
		system("cls");
		exibir(residente);
		system("pause>>null");
		break;
	}
	
	case 4:{
		system("cls");
		exit(0);
		break;
	}
	}
	i++;
	u = i;
	}
	
	return(0);
}

