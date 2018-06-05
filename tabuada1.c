#include <stdio.h>
int main()
{
	int i, j;
	FILE *arq;
	printf("\nGerando a tabuada...");
	
	arq=fopen("tabuada-soma.txt", "w");
	
	///imprime na tela a tabuada de adicao
	fprintf(arq, "\nTabuada de Adicao");
	fprintf(arq, "\n-----------------");
	
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			fprintf(arq, "\n%d + %d = %d", i, j, i+j);
		}
		fprintf(arq, "\n-----------------");
		
	}
	
	fclose(arq);
	printf("\nTabuada gerada com sucesso!! arquivo: tabuada-soma.txt");
	
	return 0;
}
