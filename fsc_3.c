#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq;  //declara variavel ponteiro para arquivo
	char nome[30];
	float nota;

    //abre arquivo
	arq=fopen("notas.csv", "r");

	if(arq==NULL)  //testa se existe
	{
		printf("Arquivo nao existe\n");
		exit(-10);
	}

	//le a proxima linha do arquivo
	fscanf(arq,"%s,%s",nome, nome);
	fscanf(arq,"%[^,],%f",nome, &nota);

    //le o arquivo
    while(!feof(arq))
    {
    	printf("%s\t%f",nome, nota);
		//le a proxima linha do arquivo
		fscanf(arq,"%[^,],%f",nome, &nota);
	}

	//fecha arquivo
	fclose(arq);

	return 0;
}