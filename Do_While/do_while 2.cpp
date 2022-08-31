#include <stdio.h>

main()
{
int cont = 1;
float num, soma=0, maior, menor=10;

do
{
	printf("\n Digite um nota: ");
	scanf("%f", &num);
	
	while(num < 0 || num > 10){
		printf("\n Nota invalida, insira novamente(entre 1 e 10): ");
		scanf("%f", &num);
	}
	
	soma = soma + num;
	
	if (num > maior){
		maior = num;
	}
	
	if(num < menor){
		menor = num;
	}
		
	cont++;	
}while(cont <= 10);

printf("\n O maior numero eh: %f", maior);
printf("\n O menor numero eh: %f", menor);
printf("\n A soma dos numeos eh: %f", soma);
printf("\n A media dos numeros eh: %.2f", soma/cont);


}

