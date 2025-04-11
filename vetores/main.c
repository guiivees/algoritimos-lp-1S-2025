#include <stdio.h>

int main(int argc, char* argv[]){
    int qtdAlunos = 0;
  
    printf("informe a quantidade de alunos: \n");
    scanf("%d", &qtdAlunos);
      float notas[qtdAlunos];
      for(int i = 0; i < qtdAlunos; i++){
        printf("\ndigite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
      }

    return 0;
}