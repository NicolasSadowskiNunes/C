#include <stdio.h>
#include <conio.h>

main()
{
 float valor_c, valor_d;
 int op;
 
 
 printf("\nDigite o valor da compra: RS$");
 	scanf("%f", &valor_c);
 	
 printf("\n 1- Usuario Comum");
 printf("\n 2- Funcionario");
 printf("\n 3- Cliente VIP");
 printf("\n Selecione uma das opcoes acima: ");
 	scanf("%d", &op);
 switch(op){
 	
 	case 1:
 		printf(" Voce eh usuario padrao, o valor total eh: R$ %f", valor_c); 
 	break;
 	
 	case 2:
 		valor_d = valor_c-(valor_c*0.1);
 		printf(" Voce eh funcionario, o valor total eh: R$ %f", valor_d); 
 	break;
 	
 	case 3:
 		valor_d = valor_c-(valor_c*0.05);
 		printf(" Voce eh Cliente VIP, o valor total eh: R$ %f", valor_d); 
 	break;
 	
 	default:
 		printf(" Opcao invalida!");
}
	  	
 }
  
	

