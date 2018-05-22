#include <stdio.h>

#define TAM 3

typedef struct aluno{
	char nome[100];
	float nota;
}Aluno;

void ler(Aluno *al)
{
	int i;
	for(i=0;i<TAM;i++)
	{
		printf("\nEntre com o nome do aluno %d:", (i+1));
		gets(al[i].nome);
	
		printf("\nEntre com a nota do aluno %d:", (i+1));
		scanf("%f", &al[i].nota);
		fflush(stdin);
	}
	
}

void imprime(Aluno *al)
{
	int i;
	for(i=0;i<TAM;i++)
	{
		printf("\nNome do Aluno : %s", al[i].nome );	
		printf("\nNota do Aluno : %.2f", al[i].nota );	
	}
}

int main()
{
	Aluno aluno_uni[TAM];
	
	ler(&aluno_uni);
	imprime(aluno_uni);
	
	return 0;
	
}
