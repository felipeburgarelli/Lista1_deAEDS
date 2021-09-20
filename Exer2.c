Exer2
#include <stdio.h>

int main(void) {

  //variaveis
  int num1, num2,soma;

  //leitura dos números
  printf("Digite o 1° número: ");
  scanf("%d",&num1);
  printf("Digite o 2° número: ");
  scanf("%d",&num2);

  soma = num1+num2;

  if (soma>=10)
  {
    printf("%d\n",(soma+5));
  }
  else 
  printf("%d\n",(soma+7));


  printf("Fim do programa\n");
  return 0;
}