#include <stdio.h>

struct reg_hora{
	int hora;
	int min;
	int seg;
};

void imprimeHora(struct reg_hora p)
{
	printf("\%d:%d:%d", p.hora, p.min, p.seg);
}

void lerHora(struct reg_hora *p)
{    
	printf("\nEntre com hora:");
	scanf("%d", &p->hora);
	printf("\nEntre com min:");
	scanf("%d", &p->min);
	printf("\nEntre com seg:");
	scanf("%d", &(*p).seg);
}

void adicionarMin(struct reg_hora *p, int min)
{
	p->min += min;
}
int main()
{
	struct reg_hora hora;
	int novo_min;
	
	lerHora(&hora);
	
	printf("\nEntre com minutos a adicionar:");
	scanf("%d", &novo_min);
	
	adicionarMin(&hora, novo_min);
	
	imprimeHora(hora);
	
	return 0;
	
}

