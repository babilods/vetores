#include <stdio.h>

main(){

    int vetorA[10];
    int vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("Digite os valores");
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 10; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
        printf("\nVetorA[%d] = %d - VetorB[%d] = %d", i, vetorA[i],i, vetorB[i]);
    }

}