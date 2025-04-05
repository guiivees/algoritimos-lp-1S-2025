#include <stdio.h>

int main(int argc, char* argv[]){
int tipo, tipo2, tipo3;
char leve, intenso, terror, acao;
printf("escolha um tipo de filme.\nselecione 1 para filme LEVE e 2 para filme INTENSO.\n");
scanf("%d", &tipo);

switch (tipo){
case 1:
printf("\nsua escolha foi LEVE. \nselecione um genero para o seu filme: \n \"1\" para filme de COMEDIA e 2 para filme de ANIMACAO. \n");
scanf("%d", &tipo2);

if(tipo2 == 1){
    printf("\nsua escolha foi COMEDIA.\nRECOMENDACAO\nAs Banquelas.\n");
}else if (tipo == 2){
    printf("\nsua escolha foi ANIMACAO.\nRECOMENDACAO\nToy Story.\n");
}else {
    printf("\nescolha invalida. \n");
} break;

case 2:
printf("\nsua escolha foi INTENSO. \nselecione um genero para o seu filme: \n 1 para filme de TERROR e 2 para filme de ACAO. \n");
scanf ("%d", &tipo2);

if(tipo2 == 1){
printf("\nsua escolha foi INTENSO. \nselecione um genero para seu filme.\n 1 para filme de TERROR PSICOLOGICO e 2 para filme de TERROR SOBRENATURAL.\n");
scanf("%d", &tipo3);
f (tipo3 == 1){
                    printf("\nSua escolha foi TERROR PSICOLOGICO.\nRECOMENDACAO\nCorra!.\n");
                } else if (tipo3 == 2){
                    printf ("\nSua escolha foi TERROR SOBRENATURAL.\nRECOMENDACAO\nInvocacao do Mal.\n");
                }else {
                    printf ("\nescolha invalida.\n");
                }}
          else if (tipo2 == 2){
                printf ("\nSua escolha foi ACAO.\nSelecione um genero para o seu filme.\n1 para filma SUPER-HEROIS e 2 para AVENTURA REALISTA.\n");
                scanf ("%d", &tipo3);
                if (tipo3 == 1){
                    printf("\nSua escolha foi SUPER-HEROIS.\nRECOMENDACAO\nVingadores Ultimato.\n");
                }else if (tipo3 == 2){
                    printf ("\nSua escolha foi AVENTURA REALISTA.\nRECOMENDACAO\nMad Max: Estrada Furia.\n");
        } else {
            printf ("\nescolha invalida\n");
        } } else {
            printf ("\nescolha invalida.\n");
        }
        break; 
        default:
    printf ("\nescolha invalida.\n");
        break;
        }

    return 0;
}
