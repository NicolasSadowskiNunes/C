#include <stdlib.h>
#include <stdio.h>

main() {
int VET[15];
int I; 

 for (I=0; I<=14; I++) {
     printf("Entre com o valor para a posicao %d do vetor:\n",I);
     scanf("%d",&VET[I]);
 }
 
 for (I=0; I<=14; I++) { 
     printf("\n Posicao %d do vetor preenchida por %d.\n",I,VET[I]);    
 }
 
 system("PAUSE");
 
 system("CLS"); 
 I = 0;
 while ((I<=14) & ((VET[I] % 3) != 0)) {
     I++;
 }
 if (I > 14) { 
    printf("Nao existe multiplo de 3 no vetor \n");
 }
 else {
    printf("O primeiro multiplo de 3 esta na posicao %d do VETOR\n",I);
 }
 system("PAUSE"); 
}
