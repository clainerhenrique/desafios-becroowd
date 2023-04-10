#include <stdio.h>

int main(){

    int tempo, velocidade;
    double media;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    media = ((double)tempo*(double)velocidade)/12;
    printf("%.3lf\n", media);

    return 0;
}
