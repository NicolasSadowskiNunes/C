#include <stdio.h>
#include <conio.h>

main()
{
char letra;

printf("Digite uma letra: ");
	scanf("%c", &letra);

switch(letra)
{

	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("Eh Vogal");
		break
	default:
		printf("Eh Consoante");	
 }
 }
