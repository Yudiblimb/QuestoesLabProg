#include <stdio.h>

int main()
{
  int f;
  int i = 1;
  int r = 1;
  puts("digite um fatorial de um numero");
  scanf("%d",&f);
  while (i<=f){
    r = r * i;
    i++;
  }
  printf("fatorial: %d \n",r);
  return 0;
}
