#include"cadastro.h"
#include"projeto.h"

void menu(){
	
	int opc;
	
	while(1){
			
			system("cls");
			printf("\t\t\tGerenciador de Projetos\n\n\n");
			printf("Selecione uma opcao:\n\n");
			printf("\t1 - Pesquisar projeto de pesquisa por numero\n");
			printf("\t2 - Listar projeto de pesquisa(ordem alfabetica)\n");
				
			if(conta.perfil == 1){
		
				printf("\t3 - Cadastrar usuario\n");
				printf("\t4 - Cadastrar projeto de pesquisa\n");
				printf("\t5 - Alterar projeto de pesquisa\n");
				
			}
			printf("\t0 - Sair\n");
			
			
			opc = getch() -48;
			
			switch(opc){
			
				case 1:{
					
					cad_usuario(1);
					
					break;
				}
				
				case 2:{
					
					cad_projeto();
					
					break;
				}
				
				case 3:{
					
					break;
				}
				
				case 4:{
					
					break;
				}
				
				case 5:{
					
					break;
				}
				
				case 0:{
					exit(0);
					break;
				}
				
				default: 
					printf("Opção inválida!");
					
			}
	}
}
