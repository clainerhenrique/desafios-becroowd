#include <stdio.h>

int main (){

    int entrada, minutos, horas, seg;

    scanf("%d", &entrada);

    horas = entrada/3600;
    minutos = (entrada%3600)/60;
    seg = (entrada%60);

    printf("%d:%d:%d", horas, minutos, seg);



    


    return 0;
}