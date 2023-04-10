#include <stdio.h>

int main (){

    float salary, custoh;
    int num, horas;

    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%f", &custoh);

    salary = (custoh*horas);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salary);

    return 0;
}