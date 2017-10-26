#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq;  //declara variavel ponteiro para arquivo
	char nome[30];
	int nota;

    //abre arquivo
	arq=fopen("arq1.txt", "r");

	if(arq==NULL)  //testa se existe
	{
		printf("Arquivo nao existe\n");
		exit(-10);
	}

	//le a proxima linha do arquivo
	fscanf(arq,"%s\t%d",nome, &nota);

    //le o arquivo
    while(!feof(arq))
    {
    	printf("%s\t%d\n",nome, nota);
		//le a proxima linha do arquivo
		fscanf(arq,"%s\t%d",nome, &nota);
	}

	//fecha arquivo
	fclose(arq);

	return 0;
}