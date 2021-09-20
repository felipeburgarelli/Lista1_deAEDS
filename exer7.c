exer7
#include <stdio.h>

int main(void) {
  // variaveis
  double x;

  // leitura do valor de x
  printf("Digite o valor de x: ");
  scanf("%lf",&x);

  // cálculo e impressão do valor de y
  if(x<=1)
  {
    printf("O valor de x na expressão y=f(x) é 1\n");
  }
  else if(x<=2)
  {
   printf("O valor de x na expressão y=f(x) é 2\n");
  }
  else if(x<=3)
  {
    printf("O valor de x na expressão y=f(x) é: %.2lf\n", x*x);
  }
  else 
  printf("O valor de x na expressão y=f(x) é: %.2lf\n", x*x*x);


  printf("Fim do programa\n");
  return 0;
}