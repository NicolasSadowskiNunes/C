#include <stdio.h>

main()
{
float nota, soma, media, menor, maior;	
int cont;
menor = 10;
maior = 0;
for(cont=1; cont <= 10; cont++){

	if (nota <= 0 || nota > 10){
	printf("\n Valor invalido! Insira uma nota valida de novo: ");
	
	scanf("%f", &nota);
	}
	
	printf("\n Insira a nota: ");
	scanf("%f", &nota);
	
	soma = soma+nota;
	media = media+nota;
	
	if(nota > maior){
	maior = nota;	
	}
	
	if (nota < menor)
	menor = nota;

}
	printf("\n A soma das notas eh: %2.f ", soma);	
	printf("\n A media das notas eh: %f", media/10);
	printf("\n A maior nota eh: %f", maior);
	printf("\n A menor nota eh: %f", menor);	
}
