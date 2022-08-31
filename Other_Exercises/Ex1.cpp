#include <stdlib.h>
#include <stdio.h>

main() {
int VET[14];
int I;

 for (I=0; I<=14; I++) { 
     printf("Entre com o valor para a posicao %d do vetor:\n",I);
     scanf("%d",&VET[I]);
 }
 system("CLS"); 
 for (I=0; I<=14; I++) { 
     printf("\n Posicao %d do vetor preenchida por %d.\n",I,VET[I]);    
 }
 printf("\n");   
  
 for (I=14; I>=0; I--) {
 	printf("\n Posicao %d do vetor preenchida em ordem decrescente %d\n",I,VET[I]);
 }
 system("PAUSE"); 
}
