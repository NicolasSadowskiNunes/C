#include <stdio.h>
#include <stdlib.h>

int main()

{
int num;

printf("Digite um numero: ");
	scanf("%d", &num);

if (num%5==0 && num%3==0){
	printf("O numero eh divisivel por 5 e 3");	
}
else
	printf("O numero nao eh divisivel por 5 e 3");	
  	
 }
