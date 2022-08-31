#include<stdlib.h>
#include<stdio.h>

int verificaMenor();
int x, y, i;
int verificaMenor(){
	if(x>y){
		printf("\nO menor numero eh: %d", y);
	}	
	else{
		printf("\nO menor numero eh: %d", x);	
	}
		
}

int main(){
	
		printf("\nInsira o 1o valor: ");
		scanf("%d", &x);
			
		printf("\nInsira o 2o valor: ");
		scanf("%d", &y);
		
		verificaMenor();
		
}
