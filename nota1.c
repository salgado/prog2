#include <stdio.h>

typedef struct aluno{
	char nome[100];
	float nota;
}Aluno;

void ler(Aluno *al)
{
	printf("\nEntre com o nome do aluno:");
	gets(al->nome);
	
	printf("\nEntre com a nota do aluno:");
	scanf("%f", &al->nota);
}

void imprime(Aluno al)
{
	printf("\nNome do Aluno : %s", al.nome );	
	printf("\nNota do Aluno : %.2f", al.nota );	
	
}

int main()
{
	Aluno aluno_uni;
	
	ler(&aluno_uni);
	imprime(aluno_uni);
	
	return 0;
	
}
