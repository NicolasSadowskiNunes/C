#include <stdio.h>

main()
{
	
int cont, num;
if(num <= 0 && num > 10 ){
	printf("\n Valor invalido, insira novamente: ");
	scanf("%d", &num);
	
}

printf("A Tabuada do: ");
scanf("%d", &num);

for(cont= 0; cont <= 10; cont++)
{
	
	printf("\n %d X %d = %d", cont, num, cont*num);	

}
}
