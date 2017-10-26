#include <stdio.h>
int main()
{
	FILE *arq;
	char cab[150];
	char nome[15];
	float nota;
	int totNotas=0, numPassou=0;
	
	//abre o arquivo para leitura
	arq = fopen("notas.txt", "r");
	
	//testa o sucesso do arquivo
	if(arq==NULL)
	{
		printf("\nErro na abertura do arquivo.");
		exit(-10);
	}
	
	//ler o cabecalho
	fscanf(arq, "%s %s", nome, cab);
	
	//ler o primeiro dado relevante
	fscanf(arq, "%s %f", nome, &nota);
	printf("\nlog---: nome:%s , nota:%f", nome, nota);
	//se nao for fim de arquivo.....
	while(!feof(arq))
	{
		totNotas++;
		
		if(nota>=6)
		{
			numPassou++;
		}
	
		//ler proxima linha do arquivo
		fscanf(arq, "%s %f", nome, &nota);
	}
	
	//FECHAR O ARQUIVO
	fclose(arq);
	
	//exibe o relatorio
	printf("\nRelario Vestibular 2017");
	printf("\n-----------------------");
	
	printf("\nTotal de notas lidas: %d", totNotas);
	printf("\nPercentual de Aprovação: %.2f", (float) numPassou/totNotas);
	
	return 0;
	
}
