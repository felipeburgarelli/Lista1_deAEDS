exer9
#include <stdio.h>

  int main(void) {
  //  variaveis
  char simb;

  // leitura do caracter
  printf("Digite um símbolo do teclado:");
  scanf("%c",&simb);

  switch(simb)
  {
    case '<': printf("Sinal de menor\n");break;
    case '>': printf("Sinal de maior\n");break;
    case '=': printf("Sinal de igual\n");break;
    default:printf("Outro sinal\n");break;
  }

  printf("Fim do programa\n");
  return 0;
}