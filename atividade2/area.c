#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    char opcao;
    float b, B, A, d, D, L, h, r
    printf("area.c\n");
    printf("escolha uma opcao: ");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf(%c, opcao);

    switch (opcao){

    case 'c':
        printf("Circulo\n");
        printf("Digite o raio (r) do círculo: ");
    scanf("%f", &r);

    A = M_PI * r * r;

    printf("A área do círculo é: %.2f\n", A);
    break;

    case 'l':
    printf("Losango\n");
    printf("Digite a diagonal maior (D) do losango: ");
    scanf("%f", &D);

    printf("Digite a diagonal menor (d) do losango: ");
    scanf("%f", &d);

    A = (D * d) / 2;

    printf("A área do losango é: %.2f\n", A);
    break;

    case 'q':
    printf("Quadrado\n");
    rintf("Digite o comprimento do lado do quadrado (L): ");
    scanf("%f", &L);

    A = L * L;

    printf("A área do quadrado é: %.2f\n", A);
    break; 

    case'r':
    printf("Retangulo\n");
    printf("digite a base (b) do retangulo: ");
    scanf("%f", &b);

    printf("digite a altura (h) do retangulo: ");
    scanf("%f", &h);

    A = b * h;

    printf("a area do retangulo e: %.2f\n", A);
    break;

    case 't':
    printf("Triangulo\n");
    printf("Digite a base (b) do triângulo: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do triângulo: ");
    scanf("%f", &h);

    A = (b * h) / 2;

    printf("A área do triângulo é: %.2f\n", A);
    break;

    case 'z':
    printf("Trapezio\n");
    printf("Digite a base maior (B) do trapézio: ");
    scanf("%f", &B);

    printf("Digite a base menor (b) do trapézio: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do trapézio: ");
    scanf("%f", &h);

    A = ((B + b) * h) / 2;

    printf("A área do trapézio é: %.2f\n", A);
    break; 

    default:
    printf("opcao invalida\n");
    A = 0
    break;
    }
    return 0;
}