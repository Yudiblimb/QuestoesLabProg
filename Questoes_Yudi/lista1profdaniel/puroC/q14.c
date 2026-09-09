#include <stdio.h>

int main(int argc, char *argv[])
{
  float v_dia = 50.25;
  int q_dias;

  puts("Digite a quantidade de dias trabalhados");
  scanf("%d",&q_dias);

    if(q_dias<=10){
    printf("Valor liquido a ser pago: %.2f \n",q_dias*v_dia*0.9);
  }else if(q_dias>10 && q_dias<=20){
    printf("Valor liquido a ser pago: %.2f \n",q_dias*v_dia*1.2*0.9);
  }else{
    printf("Valor liquido a ser pago: %.2f \n",q_dias*v_dia*1.3*0.9);
  }

  return 0;
}
