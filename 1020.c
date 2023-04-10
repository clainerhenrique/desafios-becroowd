#include <stdio.h>

int main (){

    int entrada, ano, mes, dia;

    scanf("%d", &entrada);

    ano = entrada/365;
    mes = (entrada%365)/30;
    dia = (entrada%365)%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}