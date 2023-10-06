#include <stdio.h>

int main() {
    int vetor[10];

    // Lendo e armazenando 10 números inteiros no vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializando a variável para o maior elemento e sua posição
    int maior = vetor[0];
    int posicao = 0;

    // Encontrando o maior elemento e sua posição
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprimindo o vetor
    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprimindo o maior elemento e sua posição
    printf("O maior elemento e %d e esta na posicao %d.\n", maior, posicao);

}
