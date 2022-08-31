#include <stdlib.h>
#include <stdio.h>

int main(){
	
int mat[3][3];
int L, C;

for(L=0; L<=2; L++){
	for(C=0; C<=2; C++){
		printf("Entre com o valor na posicao mat[%d][%d]: ", L+1,C+1);
		scanf("%d", &mat[L][C]);
		
	}
}	
	
system("CLS");

printf("\n === ELEMENTOS ORIGINAIS E NA ORDEM INVERSA === \n");

for(L=0; L<=2; L++){
	for(C=0; C<=2; C++){
		printf("\n Valor mat[%d][%d] = %d ", L+1,C+1, mat[L][C]);		
	}
}

printf("\n");

for(L=2; L>=0; L--){
	for(C=2; C>=0; C--){
		printf("\n O elemento na inversa mat[%d][%d] = %d ", L+1, C+1, mat[L][C]);		
	}
}

system("PAUSE");	
system("CLS");

printf("\n === ELEMENTOS MULTIPLICADOS E NA ORDEM INVERSA === \n");

for(L=0; L<=2; L++){
	for(C=0; C<=2; C++){
		mat[L][C] = mat[L][C] * mat[L][C];
		printf("\n O elemento multiplicado na posicao mat[%d][%d] eh %d ",L+1, C+1, mat[L][C]);		
	}		
	
}

printf("\n");

for(L=2; L>=0; L--){
	for(C=2; C>=0; C--){
		printf("\n O elemento multiplicado na ordem inversa [%d][%d] eh %d ",L+1, C+1, mat[L][C]);		
	}
}

}
