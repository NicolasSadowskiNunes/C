#include <stdio.h>
main(){
int num, cont;

cont = 1;
printf("Digite um numero:  ");	
scanf("%d", &num);
while(cont <= num){
	if(cont%2 == 0){
	printf("\n %d = par! ", cont);	
		}
	else{
	printf("\n %d = impar! ", cont);
		}	
cont++;
}		
}


 
