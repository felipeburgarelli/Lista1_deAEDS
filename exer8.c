exer8
#include <stdio.h>

    int main(void) {
      // variáveis
      double salario;
      char codigo;

      // Leitura do salário e do codigo de aumento
      printf("Digite o salário atual: ");
      scanf("%lf",&salario);
      printf("\n");
      printf("A = aumento de 8 no salário\n");
      printf("B = aumento de 11 no salário\n");
      printf("C = aumento fixo no salário\n ");
      printf("Digite o código de aumento salarial: ");
      scanf("%s",&codigo);



      switch(codigo)
        {
        case 'a': printf("O novo salário é: R$%.2lf\n",salario*1.08);break;
        case 'b': printf("O novo salário é: R$%.2lf\n",salario*1.11);break;
        case 'c': if(salario<=1000)
        {
          printf("O novo salário é: R$%.2lf\n",salario+350);        }
        else
          printf("O novo salário é: R$%.2lf\n",salario+200);break;
        default :printf("Código informado incorreto\n"); break;

      }


  printf("Fim do programa\n");
  return 0;
}