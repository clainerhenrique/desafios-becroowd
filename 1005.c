#include <stdio.h> 

int main (){

    double A, B, MEDIA, podA, podB;

    scanf("%lf", &A);
    scanf("%lf", &B);
    podA = (((3.5*100)/11)*A);
    podB = (((7.5*100)/11)*B);
    MEDIA = (podA+podB)/100;
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}