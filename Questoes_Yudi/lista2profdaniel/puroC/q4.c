#include <stdio.h>

int main(int argc, char *argv[])
{
  int jose = 150;
  int pedro = 110;
  int i = 0;
  while (jose>=pedro) {
    jose = jose + 2*1;
    pedro = pedro + 3*1;
    i++;
  }
  printf("o total de anos sera: %d \n pedro: %d \n jose: %d \n ",i,pedro,jose);
  return 0;
}
