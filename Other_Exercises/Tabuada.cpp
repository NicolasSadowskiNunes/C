#include <stdlib.h>
#include <stdio.h>

main(){
	
int cont, num;

printf("Digite um numero para checar sua tabuada: ");
scanf("%d", &num);

for(cont; cont<=10; cont++){
	
	printf("\n %d X %d = %d", num, cont, num*cont);
	
}
	
}
