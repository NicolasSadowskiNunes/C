#include <stdio.h>

main(){
	
float nota, total, media;	
int cont;

total = 0;
cont = 1;

while(cont <= 4){

	printf("Insira uma nota %d: ", cont);	
	scanf("%f", &nota);
	total= total+nota;

	cont++;
		
	}	
	
media = total/4;
printf("A media somando as 4 notas eh %f: ", media);
	
}


 
