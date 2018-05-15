#include <stdio.h>
#include <math.h>

typedef struct reg_ponto {
	float x;
	float y;
}Ponto;

void lerPonto(Ponto *p)
{
	printf("\nEntre com a coordenada x:");
	scanf("%f", &p->x);
	
	printf("\nEntre com a coordenada y:");
	scanf("%f", &p->y);
	
}

void imprimePonto(Ponto p)
{
	printf("\ncoordenadas (x,y)= (%.2f, %.2f)", p.x, p.y);
}

float calcDistancia(Ponto pA, Ponto pB )
{
	float d;
	
	d=sqrt(pow((pB.x-pA.x),2)+pow((pB.y-pA.y),2));
	
	return d;
}

int main()
{
	//struct reg_ponto ponto1;
	//struct reg_ponto ponto2;

	Ponto ponto1;
	Ponto ponto2;

	float dist;
	
	lerPonto(&ponto1);
	lerPonto(&ponto2);
	
	dist = calcDistancia(ponto1, ponto2);
	
	printf("\nDistancia entre os 2 pontos = %.2f", dist);
	
	imprimePonto(ponto1);
	imprimePonto(ponto2);
	
	return 0;
	
}
