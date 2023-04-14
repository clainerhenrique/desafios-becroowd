#include <stdio.h>

int main(){

    int x,i, rest;
    scanf("%d", &x);
    rest = x%2;
    if (rest==0){
        x=x+1;
        printf("%d\n", x);
    } 
    else{
        x=x;
        printf("%d\n", x);
    }

    for ( i = 0; i < 5 ; i++)
    {
        x=x+2;
        printf("%d\n", x);
    }
    
    return 0;
}