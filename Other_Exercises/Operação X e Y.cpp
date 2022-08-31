#include <stdio.h>
#include <conio.h>

main()
{
 int x, y, op, resultado;
 y=0;
 x=0;
 op=0;
 resultado=0;
 
printf("\nCalculadora: ");
 
printf("\n Entre com o primeiro operador X: ");
 	scanf("%d", &x);
	 	
printf("\n Entre com o segundo operador Y: ");
 	scanf("%d", &y);
 	
printf("\n Escolha qual operacao quer fazer(1-soma, 2-subtracao, 3-multiplicacao ou 4-divisao): ");
 	scanf("%d", &op);
	 
switch(op)
	{
	
	case 1:
		printf("\n A opcao selecionada foi soma");
		resultado = x+y;
		printf("\n O resultado da soma entre X e Y eh: %d", resultado);

	break;
	
	case 2:
		printf("\n A opcao selecionada foi subtracao");
		resultado = x-y;
		printf("\n O resultado da soma entre X e Y eh: %d", resultado);

	break;
	
	case 3:
		printf("\n A opcao selecionada foi multiplicacao");
		resultado = x*y;
		printf("\n O resultado da soma entre X e Y eh: %d", resultado);

	break;
	
	case 4:
		printf("\n A opcao selecionada foi divisao");
		
		resultado = x/y;
		
		if (y==0){
			
			printf("\n Nao existe divisao por 0");
				
		}
		else
		printf("\n O resultado da soma entre X e Y eh: %d", resultado);


	break;
		
	default:
		
		printf("\n Esta opcao nao existe", resultado);
			
		}
			
}
