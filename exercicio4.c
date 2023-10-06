#include <stdio.h>

main(){

    int vetor[8], x, y, soma = 0;

    for(int i = 0; i < 8; i++){
        printf("\nDigite o numero em vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    do{
        printf("Digite o valor de x (0 - 7): ");
        scanf("%d", &x); 
        printf("Digite o valor de y (0 - 7): ");
        scanf("%d", &y); 
        if(x < 0 || x > 7 || y < 0 || y > 7 ){
            printf("indice invalido");
        }

    }while(x < 0 || x > 7 || y < 0 || y > 7);

    for(int i = 0; i < 8; i++ ){
        if(i == x){
            soma += vetor[i];
        }
        if(i == y){
             soma += vetor[i];
        }
    }

     printf("Soma do indice[%d] + indice[%d] = %d", x, y, soma);


    //soma = vetor[x] + vetor[y];

  

}