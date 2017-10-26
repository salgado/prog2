#include <stdio.h>
int main () {

int i=0 , j=0 , k=0 , numalunos=0 , numav=0;
float nota[500];

// Coleta informação de quantoas alunos ha na turma
printf("Sistema de controle de Avaliacoes\n==================================\n\nInforme o numero de alunos: ");
scanf("%d" , &numalunos);

// Coleta in formação de quantas provas foram realizadas
printf("\nInforme o numero de avaliacoes: ");
scanf("%d" , &numav);

// Coleta as notas
for(i=0 ; i<numalunos ; i++){
    printf("\nEntre com as notas do aluno %d: \n", i+1);
    for(j=0 ; j<numav ; j++){
    printf("Informe a nota da AV %d: ", j+1);
    scanf("%f" , &nota[k]);
    k++;
    }
}
// Zera o contador auxiliar de float nota[]

k=0;

// Imprime todos os dados inseridos
for(i=0 ; i<numalunos ; i++){
    printf("\nAs notas do aluno %d foram: ", i+1);
    for(j=0 ; j<numav ; j++){
    printf("\nNota da AV %d: ", j+1);
    printf("%.2f" , nota[k]);
    k++;
    }
}
return 0;
}
