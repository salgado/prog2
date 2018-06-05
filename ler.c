#include <stdio.h>

int main()
{
	char linha[100];
	char nome[100];
	FILE *arq;
	
	printf("\nEntre com um arquivo:");
	gets(nome);
	
	//abrir arquivo para gravacao
	arq = fopen("meuarq.txt", "r");
	
	if(arq == NULL)
	{
		printf("\nerro ao abrir %s", nome);
		exit(-1);
	}
	else
	{
		//gravar 1 linha no arquivo
		while(fgets(linha, 100, arq)!=NULL)
		{
			printf("%s", linha);
		}
	}
	// fecha o arquivo
	fclose(arq);
	
	return 0;
	
}
