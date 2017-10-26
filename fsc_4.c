#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq;  //declara variavel ponteiro para arquivo
	char nome[30];
	float nota;

    //abre arquivo
	arq=fopen("notas_espaco.txt", "r");

	if(arq==NULL)  //testa se existe
	{
		printf("Arquivo nao existe\n");
		exit(-10);
	}

	//le a proxima linha do arquivo
	fscanf(arq,"%s %f",nome, &nota);

    //le o arquivo
    while(!feof(arq))
    {
    	printf("%s\t%f\n",nome, nota);
		//le a proxima linha do arquivo
		fscanf(arq,"%s %f",nome, &nota);
	}

	//fecha arquivo
	fclose(arq);

	return 0;
}