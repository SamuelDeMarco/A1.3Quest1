#include <stdio.h>

float valdep, valbem, valbemdep, periodo, dep = 0.0;

int main(void) {
  
  printf("Olá, informe o valor do bem a ser depressiado: \n");
  scanf("%f", &valbem);
  printf("Informe o período da depressiação(em anos): \n");
  scanf("%f", &periodo);
  float valtot = valbem;

  printf("\n Ano\t Valor do Bem\t Depreciacao\t Valor Depreciado");
  printf("\n=========================================================");
  
  for(int i = 0; i < periodo; i++){
    valdep = valtot * (1.5/100);
    valbemdep = valtot - valdep;
    valtot = valbemdep;
    dep = valdep + dep;
    printf("\n %d\t\t %.2f\t\t\t %.2f\t\t\t\t %.2f", i+1, valbem, valdep, valbemdep);
  }
    printf("\n=========================================================");
    printf("\nO valor total de depressiação é de: %.2f", dep);
  
    return 0;
}