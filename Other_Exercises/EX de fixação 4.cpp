#include<stdio.h>

int main(){
	
int cont;

printf("Digite um numero positivo: ");
scanf("%d", &cont);

do{

while(cont < 0){
	
printf("\nDigite um numero inteiro positivo novamente: ");
scanf("%d", &cont);
} 

printf("\nOs numeros impares menores que %d e maiores que 1 sao:\n ",cont);

if(cont%2==0){
cont--;
}

else{
cont=cont-2;	
}

while(cont > 1){

printf("\n%d eh impar\n", cont);
cont=cont-2;
}

}while(cont <= cont);

}
