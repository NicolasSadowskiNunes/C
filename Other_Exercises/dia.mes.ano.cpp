#include<stdio.h>

main()
{
	
	int dia, mes, ano;

printf("Digite o dia do seu aniversario: ");
	scanf("%d", &dia);
	
printf("Digite o mes do seu aniversario: ");
	scanf("%d", &mes);
	
printf("Digite o ano do seu aniversario: ");
	scanf("%d", &ano);
	
if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 2022)

		
	printf("A data do seu aniversario eh: %d/%d/%d", dia, mes, ano);
	
else
		
		printf("Dados invalidos");
	
}
