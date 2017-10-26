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

	fscanf(arq,"%s",linha);

    //le o arquivo
    while(!feof(arq))
    {
    	printf("%s\n", linha);
    	fscanf(arq,"%s",linha);
	}

	//fecha arquivo
	fclose(arq);

	return 0;
}