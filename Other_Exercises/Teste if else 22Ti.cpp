#include<stdio.h>
#include<stdlib.h>

main()
{
	
	int idade, cep, sexo; 
printf("\n Nicolas Sadowski Nunes \n");

printf("\n \n");

printf("Digite a sua idade:");

	scanf("%d", &idade);
	
printf("\nA minha idade eh %d \n", idade);

printf("\n \n");

printf("Digite o seu CEP: ");

	scanf("%d", &cep);
	
printf("\nO CEP eh %d \n", cep);

printf("\n \n"); 

printf("Digite o 1 para masculino ou 2 para feminino: ");

	scanf("%d", &sexo);
	
if (sexo==1)

	printf("Eh Masculino");
	
if (sexo==2)

printf("Eh Feminino");

if (sexo!=1 && sexo!=2)

	printf("Opcao Invalida!");
		
}
