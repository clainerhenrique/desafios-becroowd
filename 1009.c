#include <stdio.h>

int main (){

  char nome[10];
  double salario, total; 
  double vendas;

  scanf("%s", &nome);
  scanf("%lf", &salario);
  scanf("%lf", &vendas);

  total = (vendas*0.15)+salario;

  printf("TOTAL = R$ %.2lf\n", total);


    return 0;
}