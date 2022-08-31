#include <stdio.h>

main(){
	
float num, total, media;	
int cont=0;

total = 0;

printf("Insira um valor ou digite -1 para sair: ");
scanf("%f", &num);

while(num != -1){
	
	total = total+num;
	cont++;
	
	printf("Insira um valor ou digite -1 para sair: ");
	scanf("%f", &num);
	
	}	
	
media = total/cont;
printf("\n A media somando os valores eh %.2f: ", media);
	
}


 
