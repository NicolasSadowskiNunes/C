#include <stdio.h>

main()
{
	
int cont=1, altura, maior_alt, menor_alt=200, menor_nc, maior_nc, nc;	

do
{
	printf("Digite o seu numero de chamada: ");
	scanf("%d", &nc);
 	
 	printf("Digite a sua altura: ");
 	scanf("%d", &altura);
 	
 	if(altura > maior_alt){
 		maior_alt = altura;
 		maior_nc = nc;
	 }
	 
	if(altura < menor_alt){
		menor_alt = altura;
		menor_nc = nc;
	}
	
	cont++;	
}while (cont <= 2);

printf("\nO maior numero da chamada eh: %d", maior_nc);
printf("\nA maior altura eh: %d", maior_alt);
printf("\n=================================");
printf("\nO menor numero da chamada eh: %d", menor_nc);
printf("\nA menor altura eh: %d", menor_alt);
	
}
