#include <stdio.h>

int main (){

  int codigop1, codigop2, unid1, unid2;
  double valor1, valor2, total, total1, total2;

  scanf("%d %d %lf", &codigop1, &unid1, &valor1);
  scanf("%d %d %lf", &codigop2, &unid2, &valor2);
  total1 = (unid1*valor1);
  total2 = (unid2*valor2);
  total = (total1+total2);

  printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}