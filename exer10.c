exer10
#include <stdio.h>
  int main(void) {
  // variáveis
  int velDoCarro,velPerm;
              
  // leitura das velocidades
  printf("Digite a velocidade do carro: ");
  scanf("%i",&velDoCarro);
  printf("Digite a velocidade máxima permitida na via: ");
  scanf("%i",&velPerm);

  //Cálculo da diferença de velocidades e mensagem de acordo com a velocidade do carro e da via
  if(velPerm>velDoCarro)
    {
      printf("Motorista  respeitou  a  lei\n");
   }
      else if (velDoCarro-velPerm<=10)
    {
      printf("Multa no valor de 50 reais\n");
    }
      else if (velDoCarro-velPerm<=30)
    {     
      printf("Multa no valor de 100 reais\n");
    }
    else
    printf("Multa no valor de 200 reais\n");

  printf("Fim do programa\n");
  return 0;
  }