#include <stdio.h>

main(){

int ano;
float salario_i=1500, aumento=1.5, salario_novo;

printf("\n O salario no ano de 2006 foi de 1500 e o aumento de 1.5");

for(ano=2007; ano<=2022; ano++){
    
    aumento = aumento * 2;
    salario_novo = salario_novo + aumento * salario_i;
	printf("\n O salario no ano de %d foi de %2.f e o aumento de %2.f",ano, salario_novo, aumento);
	
}
	
}
