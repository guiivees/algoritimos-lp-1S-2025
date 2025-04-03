#include <stdio.h>

int main(){
    float b, h, A;

    printf("digite a base (b) do retangulo: ");
    scanf("%f", &b);

    printf("digite a altura (h) do retangulo: ");
    scanf("%f", &h);

    A = b * h;

    printf("a area do retangulo e: %.2f\n", A);

    return 0;
}