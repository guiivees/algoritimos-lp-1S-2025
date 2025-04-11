#include <stdio.h>

int main(int argc, char* argv[]) {
    int numAlunos, i, aprovados = 0, k;
    float soma = 0.0, menorNota = 0.0, maiorNota = 10.0;

    // Solicita o número de alunos
    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &numAlunos);

    // Verifica se o número de alunos é válido
    if (numAlunos <= 0) {
        printf("Numero invalido de alunos.\n");
        return 1;
    }

    // Vetor para armazenar as notas
    float notas[numAlunos];

    // Leitura das notas
    for (i = 0; i < numAlunos; i++) {
        do {
            printf("Digite a nota do aluno %d (0.0 a 10.0): ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota invalida! Digite uma nota entre 0.0 e 10.0.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);

        soma += notas[i];

        // Verifica maior e menor nota
        if (notas[i] > maiorNota) maiorNota = notas[i];
        if (notas[i] < menorNota) menorNota = notas[i];

        // Verifica se o aluno foi aprovado
        if (notas[i] >= 6.0) aprovados++;
    }

    // Calcula média geral
    float media = soma / numAlunos;

    // Solicita a posição k
    printf("Digite a posicao do aluno (1 a %d) para ver a nota: ", numAlunos);
    scanf("%d", &k);

    if (k >= 1 && k <= numAlunos) {
        printf("Nota do aluno na posicao %d: %.2f\n", k, notas[k - 1]);
    } else {
        printf("Posicao invalida.\n");
    }

    // Exibe resultados
    printf("\n--- Resultados ---\n");
    printf("Media geral da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
