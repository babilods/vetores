#include <stdio.h>

main(){

    int vetor[6];

    for(int i = 0; i < 6; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("\nVetor[%d] = %d",i, vetor[i]);
    }
}