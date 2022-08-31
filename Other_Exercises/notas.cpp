#include <stdio.h>

main()
{

float media, n1, n2, n3;
	
printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
printf("Digite o segundo numero: ");
	scanf("%f", &n2);

printf("Digite o terceiro numero: ");
	scanf("%f", &n3);

media = 3/(n1+n2+n3);	
	
printf("O resultado eh: %.2f", media );	

if (media >= 6)
{
	
	printf("\n APROVADO \n");
	
}

else
	printf("\n REPROVADO \n");1
	

	



}
