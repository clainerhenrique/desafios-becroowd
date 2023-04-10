#include <stdio.h>

int main (){

    int nota100, nota50;
    float entrada;

    scanf("%f", &entrada);

    nota100 = entrada/100;
    nota50 = ((int)entrada%100)/50;
    //nota20 = ((int)(entrada%100)%50)/20;
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00", nota100, nota50);

    

    return 0;
}