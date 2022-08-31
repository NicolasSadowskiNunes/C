#include <stdio.h>
#include <conio.h>
int main (void )
{
int valor; // armazena valor inteiro em valor

printf ("#############################################\n");
printf ("#                                           #\n");
printf ("#         Entre com numero de 1 a 12        #\n");
printf ("#                                           #\n");
printf ("#############################################\n");

scanf("%d", &valor); // le valor

switch ( valor ) //testa a variável
	{
	case 1 :
		printf ("Janeiro\n");
		break;
	
	case 2 :
		printf ("Fevereiro\n");
		break;
	
	case 3 :
		printf ("Marco\n");
		break;
	
	case 4 :
		printf ("Abril\n");
		break;
	
	case 5 :
		printf ("Maio\n");
		break;
	
	case 6 :
		printf ("Junho\n");
		break;
	
	case 7 :
		printf ("Julho\n");
	break;
	
	case 8 :
		printf ("Agosto\n");
	break;
	
	case 9 :
		printf ("Setembro\n");
	break;
	
	case 10 :
		printf ("Outubro\n");
	break;
	
	case 11 :
		printf ("Novembro");
	break;
	
	case 12 :
		printf ("Dezembro\n");
	break;
	
	default : //caso não seja nenhuma das opções o default serve como saída e aviso que o usuário digitou uma opção inválida (que não consta no case)
		printf ("#############################################\n");
		printf ("#                                           #\n");
		printf ("#             Valor invalido!               #\n");
		printf ("#         Entre com numero de 1 a 12        #\n");
		printf ("#                                           #\n");
		printf ("#############################################\n");
	}
	
	getch();
//return 0;
}

