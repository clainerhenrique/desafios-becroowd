#include <stdio.h>

int main(){
    int forcaN, rep, i;
    char nome[100];

    scanf("%d", &rep);

    for(i=0; i<=rep; i++){
    
        scanf("%s %d", nome, &forcaN);
        if (nome == "Thor"){
            printf("Y");
        }
        else{
            printf("N");
        }
    }
    return 0;
}