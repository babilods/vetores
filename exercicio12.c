#include <stdio.h>

int main() {
    int quantidadeValores = 5;
    int valores[5];
    int maior, menor, soma = 0;
    float media;

    
    for (int i = 0; i < quantidadeValores; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        
        if (i == 0) {
            maior = menor = valores[i];
        } else {
            
            if (valores[i] > maior) {
                maior = valores[i];
            }
            if (valores[i] < menor) {
                menor = valores[i];
            }
        }

        soma += valores[i];
    }

    media = (float)soma / quantidadeValores;

    printf("\nValores lidos: ");
    for (int i = 0; i < quantidadeValores; i++) {
        printf("%d ", valores[i]);
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
