#include <stdio.h>
#include <conio.h>
int main (void)
{
int n_sala, cap, ta;

printf("\n Digite o numero da sala: ");
 scanf("%d", &n_sala);
 
printf("\n Digite a capacidade: ");
 scanf("%d", &cap);
 
printf("\n Digite o total de alunos matriculados: ");
 scanf("%d", &ta);
 
if(cap <= ta){

 printf("\n Numero da sala: %d", n_sala);
 printf("\n Capacidade da sala: %d", cap);
 printf("\n Total de alunos matriculados: %d", ta);
 printf("\n A sala esta lotada ");
}
else if(cap >= ta){

 printf("\n Numero da sala: %d", n_sala);
 printf("\n Capacidade da sala: %d", cap);
 printf("\n Total de alunos matriculados: %d", ta);
 printf("\n Esta sobrando vagas ");
}
}
