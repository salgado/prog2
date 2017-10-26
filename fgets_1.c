#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq;  //declara variavel ponteiro para arquivo
	char linha[150];

    //abre arquivo
	arq=fopen("notas_turma.c", "r");

	if(arq==NULL)  //testa se existe
	{
		printf("Arquivo nao existe\n");
		exit(-10);
	}

	//le 1 linha do arquivo
	fgets(linha,150,arq);

    //enquanto nao for fim de arquivo....
    while(!feof(arq))
    {
    	printf("%s\n", linha);
		fgets(linha,150,arq);
	}

	//fecha arquivo
	fclose(arq);

	return 0;
}