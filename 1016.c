#include <stdio.h>

int main(){

    int km, cal;

    scanf("%d", &km);
    cal = (km*60)/30;
    printf("%d minutos\n", cal);

    return 0;
}