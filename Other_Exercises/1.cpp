#include <stdio.h>
#include <stdlib.h>

main(){
	
int cont, qtd;
float notas[100],soma, media;	

printf("Digite a quantidade de alunos: ");
scanf("%d", &qtd);

while(qtd < 0 || qtd > 100){	
	printf("Digite um valor entre 0 e 100!: ");
	scanf("%d", &qtd);	
	}
	
for(cont=1; cont<=qtd; cont++){
		printf("Digite a nota do aluno %d: ", cont);
		scanf("%f", &notas[cont]);
		soma = soma + notas[cont];
}	

	media = soma/qtd;
	printf("\nA soma das notas eh %f: ", soma);
	printf("\nA media eh %f", media);
}
