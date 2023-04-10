#include <stdio.h>

int main(){

    int X;
    double Y, media;

    scanf("%d", &X);
    scanf("%lf", &Y);

    media = (X/Y);
    printf("%.3lf km/l\n", media); 

    return 0;
}