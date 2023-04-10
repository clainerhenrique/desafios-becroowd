#include <stdio.h>
#include <math.h>

int main () {
    
    int a, b, c, MaiorAB, MaiorRC;
    scanf("%d %d %d", &a, &b, &c);
    MaiorAB = (a+b+abs(a-b))/2;
    MaiorRC = (MaiorAB+c+abs(MaiorAB-c))/2;

    printf("%d eh o maior\n", MaiorRC);

    return 0;
}
