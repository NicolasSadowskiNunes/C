#include<stdio.h>

main(){
	
int qtd_alunos, qtd_alunas;

printf("Diga a quantidade de alunos: ");
scanf("%d", &qtd_alunos);

printf("Diga a quantidade de alunas: ");
scanf("%d", &qtd_alunas);

printf("==============================");

	if(qtd_alunos > qtd_alunas){
		printf("\nExistem mais alunos que alunas!");
	}
	else if(qtd_alunos < qtd_alunas){
		printf("\nExistem mais alunas que alunos!");
	}
	else if(qtd_alunos == qtd_alunas){
		printf("\nA quantidade de alunos e alunas sao iguais!");
	}	
		
}
