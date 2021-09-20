exer5
#include <stdio.h>

  int main(void) {
    //vairiávies
    int valorDia;
    double diariaPromo,comPromo, semPromo;

    //leitura
    printf("Qual o valor da diária: ");
    scanf("%i",&valorDia);

    //calculo da diária promocional
    diariaPromo = valorDia*0.75;

    //letra A 
    printf("O valor da diária promocional é: %.2lf\n", diariaPromo);

    //Letra B
    comPromo = diariaPromo*2*75*0.8;
    printf("O valor arrecadado com a promoçaõ sera de %.2lf\n", comPromo);

    //Letra C, irei utilizar 37 como 50% de 75 apartamentos
    semPromo = valorDia*37*2;
    printf("O valor arrecadado sem a promoçaõ sera de %.2lf\n",semPromo);

      // Letra D
      if(semPromo<comPromo)
      {
      printf("A diferença de valores é: %lf",comPromo-semPromo);
      }
      else
      printf("A diferença de valores é: %lf",semPromo-comPromo);

    printf("Fim do programa\n");
    return 0;
  }