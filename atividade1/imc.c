#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{

    float altura, peso, imc;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f\n", imc);

    if (imc <= 18.5)
    {
        printf("baixo peso\n");
    }

    if (imc > 18.5 && imc <= 24.9)
    {
        printf("intervalo normal\n");
    }
    if (imc > 29.9 && imc <= 34.9)
    {
        printf("obesidade 1\n");
    }
    if (imc > 34.9)
    {
        printf("obesidade 2\n");
    }
    if (imc > 39.9 && imc <= 39.9)
    {
        printf("obesidade 3\n");
    }

    return 0;
}