#include <stdlib.h>
#include <stdio.h>

main(){

int cont, num = 1;
	
for(cont = 1; num != 0; cont++){
	
	printf("\n Dgite um numero e direi se eh primo ou nao!(para sair digite 0): ");
	scanf("%d", &num);
	
	if(num%== 0){
		printf("%d nao eh primo", num);
	}
	else{
			printf("%d eh primo", num);
	}
}	
}




