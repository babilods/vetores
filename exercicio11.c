#include <stdio.h>

int main() {
    float vetor[10];
    int i, countNegativos = 0;
    float somaPositivos = 0;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }
    printf("Quantidade de numeros negativos: %d\n", countNegativos);

    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);
}
