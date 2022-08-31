#include<stdio.h>

main(){
	
int p, j, i;

printf("Diga a idade de Pedro: ");
scanf("%d", &p);

printf("Diga a idade de Joana: ");
scanf("%d", &j);

printf("Diga a idade de Ismael: ");
scanf("%d", &i);

printf("==============================");

	if(p > j && p > i){
		printf("\nO mais velho eh o Pedro!");	
	}
	if(j > p && j > i){
		printf("\nO mais velho eh a Joana!");	
	}
	if(i > p && i > j){
		printf("\nO mais velho eh o Ismael!");	
	}

}
