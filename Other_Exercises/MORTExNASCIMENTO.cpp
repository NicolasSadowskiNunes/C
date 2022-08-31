#include <stdio.h>
#include <stdlib.h>

main()
{
float txnatal, txmorte, habit, morte, nasc;
char op;

	printf("\n CALCULO DA TAXA DE NATALIDADE E MORTALIDADE");
	printf("\n Entre com o numero de habitantes:");
	scanf("%f", &habit);
	printf("\n Entre com o numero de mortos:");
	scanf("%f", &morte);
	printf("\n Entre com o numero de nascimentos:");
	scanf("%f", &nasc);
	
	printf("\n Entre com uma opcao: ");
	printf("\n N = Natalidade, M = Mortalidade ");
	scanf(" %c", &op);
	
	switch (op)
	{
		case 'N':
			txnatal=(nasc*1000)/habit;
			printf("A taxa de natalidade eh %.2f", txnatal);
		break;
		
		case 'M':
			txmorte=(morte*1000)/habit;
			printf("A taxa de mortalidade eh %.2f", txmorte);
		break;
		
		default:
		 	printf("\n Entre com uma opcao valida!");	
	}
	return 0;
	
	
}
