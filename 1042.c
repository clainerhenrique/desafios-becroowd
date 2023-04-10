#include <stdio.h>

int main() {

    int vetor[3];
    int i;

    for (i =0; i < 3; i++){

        scanf("%d", &vetor[i]);
    }

    for (i =0; i < 3; i++){

        printf("%d ", vetor[i]);
    }


    return 0;
}