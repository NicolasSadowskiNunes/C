#include <stdio.h>
#include <conio.h>

main()
{
 float valor_t, valor_av;
 int op;
 
 
 printf("\nDigite o valor da compra: RS$");
 	scanf("%f", &valor_t);
 	
 printf("\n 1- A Vista");
 printf("\n 2- A prazo");
 printf("\n Selecione uma das opcoes acima: ");
 	scanf("%d", &op);
 switch(op){
 	
 	case 1:
 		valor_av = valor_t-(valor_t*0.1);
 		printf(" Opcao A Vista, o total eh: R$ %.2f", valor_av); 
 	break;
 	
 	case 2:
 		printf(" Opcao A prazo, o valor total eh: R$ %.2f", valor_t); 
 	break;
 	
 	default:
 		printf(" Opcao invalida!");
}
	  	
 }
  
