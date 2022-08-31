#include <stdio.h>
#include <stdlib.h>

int main(){
	
int num[12], vetpar[12], vetimpar[12], cont, cpar=0, cimpar=0;

for(cont=1; cont<=12; cont++){
	printf("Digite o %do numero: ", cont);
	scanf("%d", &num[cont]);
	
	if(num[cont]%2 == 0){
		vetpar[cpar] = num[cont];
		cpar++;
	}
	else{
		vetimpar[cimpar] = num[cont];
		cimpar++;
	}
}
for(cont=0; cont< cpar; cont++){
	printf("\n Existem %d numeros pares! \n", vetpar[cont]);	
}

for(cont=0; cont< cimpar; cont++){
printf("\n Existem %d numeros impares! \n", vetimpar[cont]);
}

}
