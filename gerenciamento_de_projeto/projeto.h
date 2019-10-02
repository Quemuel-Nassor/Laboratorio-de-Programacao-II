//estrutura de cadastro de pesquisas
struct cad{
	
	int numero;
	char titulo[40];
	char resposavel[40];
	char data_inicio[10];
	char data_fim[10];
	float valor;
	
};

typedef struct cad projeto;

projeto pesquisa;

//ponteiros de arquivo
FILE *numero, *cad_pesquisas;

//função para cadastrar pesquisa
void cad_projeto(){
	
	int num = 1;
	
	//abre o arquivo para adição
	cad_pesquisas = fopen("cad_pesquisas.txt","a");
	
	printf("Informe o titulo do projeto: ");
	fflush(stdin);
	gets(pesquisa.titulo);
	printf("Informe o nome do resposavel: ");
	fflush(stdin);
	gets(pesquisa.resposavel);
	printf("Informe a data de inicio do projeto: ");
	fflush(stdin);
	gets(pesquisa.data_inicio);
	printf("Informe a data para o fim do projeto:");
	fflush(stdin);
	gets(pesquisa.data_fim);
	printf("Informe o valor do projeto: ");
	scanf("%f", & pesquisa.valor);
	
	//ler numero da pesquisa
	if((numero = fopen("numero.txt","r"))!= NULL){

		fscanf(numero,"%i",&num);
		pesquisa.numero = num+1;
		fclose(numero);
			
	}else{
		
		pesquisa.numero = 1;
		
	}
	
	//gravar numero da pesquisa
	numero = fopen("numero.txt","w");
		fprintf(numero,"%i",pesquisa.numero);
	fclose(numero);
	
	//escrever struct pesquisa
		fwrite(&pesquisa,sizeof(pesquisa),1,cad_pesquisas);
	fclose(cad_pesquisas);
}


