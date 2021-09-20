Exer3.C
#include <stdio.h>

int main(void) {

//variaveis
  int anoNasc, anoAtual,idade;
  char ani;

  // Leitura do ano de nascimento e ano atual
  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);
  printf("Digite seu ano de nascimento: ");
  scanf("%d", &anoNasc);

  printf("Você já fez aniversário esse ano (s/n): ");
  scanf("%s", &ani);

  // Cálculo idade
  idade = anoAtual - anoNasc;
  
  switch(ani)
  { 
    case 's': printf("Sua idade é %i\n", idade);
     if (idade>18)
     {
       printf("Você pode tirar Carteira de Habilitação\n");
     }
     else 
     printf("Ainda não possui idade para tirar Carteira de Habilitação\n");
     break;
    case 'n':  printf("Sua idade é %i\n", idade - 1);   if (idade>18)
     {
       printf("Você pode tirar Carteira de Habilitação\n");
     }
     else 
     printf("Ainda não possui idade para tirar Carteira de Habilitação\n");
     break;

  }

  printf("Fim do programa\n");
  return 0;
}