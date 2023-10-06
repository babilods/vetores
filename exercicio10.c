#include <stdio.h>

int main() {
    int numeroAlunos = 15;
    float notas[15];
    float somaNotas = 0;
    float media;

    for (int i = 0; i < numeroAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    media = somaNotas / numeroAlunos;

    printf("A media geral das notas dos alunos e: %.2f\n", media);

}
