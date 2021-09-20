Exer1.C
#include <stdio.h>

    int
    main(void)
{
  //variaveis
  int num1, num2;

  //leitura dos números
  printf("Digite o 1° número: ");
  scanf("%d", &num1);
  printf("Digite o 2° número: ");
  scanf("%d", &num2);

  if (num1 > num2)
  {
    printf("O maior númro é: %d\n", num1);
  }
  else
    printf("O maior númro é: %d\n", num2);

  printf("Fim do programa\n");
  return 0;
}
