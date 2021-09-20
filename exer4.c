exer4
#include <stdio.h>

int main(void) {
//variaveis 
double nota;
printf("Digite sua nota: ");
scanf("%lf",&nota);

  if(nota>=8 && nota<=10)
  {
    printf("Seu resultado foi óimo\n");
  }
  else if(nota>=7)
  {
    printf("Seu resultado foi bom\n");
  }
  else if(nota>=5)
  {
    printf("Seu resultado foi regular\n");
  }
  else
  printf("Seu resultado foi insatisfatório\n");


  printf("Fim do programa\n");
  return 0;
}