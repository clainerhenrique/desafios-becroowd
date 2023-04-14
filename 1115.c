#include <stdio.h>

int main (){

    int X=0, Y=0;                     //DECLARAÇAO DAS VARIAVEIS RESPONSAVEIS PELAS COORDENADAS X E Y

    scanf("%d %d", &X, &Y);           //ENTRADA DOS VALORES DAS COORDENADAS X E Y

    while (X!=0 && Y!=0)
    {
        if(X>0&&Y>0){                 // SE 'X' E 'Y' FOREM MAIOR QUE '0' ENTÃO PRINTA
            printf("primeiro\n");     //PRINTA NA TELA 'primeiro'
        
        }
        else if(X>0&&Y<0){           // SE 'X' FOR MAIOR QUE 0 E 'Y' MENOR QUE '0' ENTÃO PRINTA
            printf("quarto\n");      // PRINTA NA TELA "quarto"
        
        }
        else if(X<0&&Y<0){           // SE 'X' E 'Y' MENOR QUE '0' ENTÃO PRINTA
            printf("terceiro\n");    // PRINTA NA TELA "terceiro"
        
        }
        else if(X<0&&Y>0){            //SE 'X' FOR MENOR QUE '0' E 'Y' FOR MAIOR QUE '0'
            printf("segundo\n");      // PRINTA NA TELA "segundo"
        
        }
    scanf("%d %d", &X, &Y);           //ENTRADA DOS VALORES DAS COORDENADAS X E Y
    }
    return 0;
}