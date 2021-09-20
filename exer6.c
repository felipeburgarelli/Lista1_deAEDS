exer6
#include <stdio.h>

    int
    main(void)
{
  //variáveis
  int a, b;

  //leitura dos coeficientes

  printf("Digite o valor do a: ");
  scanf("%d", &a);
  printf("Digite o valor do b: ");
  scanf("%d", &b);
  printf("Sua equação é: %dx = %d\n", a, b);

  // Cálculo da raiz
  printf("A raiz da equação é x= %.2lf\n", (double)(-b / a));

  printf("Fim de programa\n");
  return 0;
}