#include <stdio.h>
#include <stdlib.h>

int main()

{
int n1, n2, n3, n4, maior, menor;

printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	

printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
printf("Digite o terceiro numero: ");
	scanf("%d", &n3);

	
printf("Digite o quarto numero: ");
	scanf("%d", &n4);

if (n1>n2 && n1>n3 && n1>n4){

	menor = n2 + n3 + n4;
	printf(" O resultado da soma dos tres menores eh: %d", menor);

}

else if (n2>n1 && n2>n3 && n2>n4){

	menor = n1 + n3 + n4;
	printf(" O resultado da soma dos tres menores eh: %d", menor);

}
else if (n3>n1 && n3>n2 && n3>n4){

	menor = n1 + n2 + n4;
	printf(" O resultado da soma dos tres menores eh: %d", menor);

}
else if (n4>n1 && n4>n2 && n4>n3){

	menor = n1 + n2 + n3;
	printf(" O resultado da soma dos tres menores eh: %d", menor);

}

 }
