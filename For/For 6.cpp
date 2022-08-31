#include <stdio.h>

main()
{
int cont, num, par, impar;

par=0;
impar=0;

for (cont=1; cont <= 10; cont++)
{
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		par++;	
	}
	else{
		impar++;
	}
		
}	
	printf("\n A quantidade de pares eh: %d", par);	
	printf("\n E quantidade de impares eh: %d", impar);	
}
