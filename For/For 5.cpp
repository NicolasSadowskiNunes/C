#include <stdio.h>

main()
{
int cont, idade, quant, soma;

printf("Digite a quantidade de idades a serem calculadas: ");
scanf("%d",&quant); 

for(cont=1; cont <= quant; cont++)
{
	printf("Digite uma idade: ");
	scanf("%d", &idade);
	
	soma = soma+idade;
}	
	
	printf("A media das idades eh: %d", soma/quant);
	
}
