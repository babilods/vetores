#include <stdio.h>

int main() {
    int quantidadeValores = 5;
    int valores[5];
    int posicaoMaior = 0, posicaoMenor = 0;
    
    for (int i = 0; i < quantidadeValores; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 1; i < quantidadeValores; i++) {
        if (valores[i] > valores[posicaoMaior]) {
            posicaoMaior = i;
        } else if (valores[i] < valores[posicaoMenor]) {
            posicaoMenor = i;
        }
    }

    printf("\nPosicao do maior valor: %d\n", posicaoMaior + 1);
    printf("Posicao do menor valor: %d\n", posicaoMenor + 1);

    return 0;
}
