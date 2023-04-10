#include <stdio.h>

int main (){

    double A, B, C, pa, pb, pc, MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    pa = (A*0.2);
    pb = (B*0.3);
    pc = (C*0.5);

    MEDIA = (pa+pb+pc);
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}