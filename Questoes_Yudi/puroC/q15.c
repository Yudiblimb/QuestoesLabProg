#include <stdio.h>

int main(int argc, char *argv[])
{
  float v_hora,inss,bruto,liquido;
  int horas;

  puts("escreva a valor da hora de trabalho");
  scanf("%f",&v_hora);
  puts("escreva a quantidade de horas trabalhadas");
  scanf("%d",&horas);
  puts("escreva o percentual de desconto do inss (ex: 20)");
  scanf("%f",&inss);
  
  bruto = v_hora*horas;
  liquido = bruto -(bruto*inss/100);

  printf("valor bruto: %.2f\n",bruto);
  printf("valor liquido: %.2f\n",liquido);


  return 0;
}
