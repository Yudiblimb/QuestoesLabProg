#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 unsigned char armarios = 0;
 int opcao, posicao;
 int livres, escolhido, contador;

 srand(time(NULL));

 do {
   puts("\n------------------------");
   puts("    ARMARIOS");
   puts("--------------------");

   puts("Armarios ocupados:");
   for(int i=0;i<8;i++) {
      if(armarios & (1 << i))
          printf("%d ",i+1);
   }

   puts("\nArmarios livres:");
   for (int i=0; i<8;i++) {
      if( !(armarios & (1 << i)) )
       printf("%d ", i+1);
   }

   puts("\n");
   puts("1 -Ocupar armario");
   puts("2 -Liberar armario");
   puts("3 -Sair");
   puts("Digite uma opcao:");
   scanf("%d",&opcao);

   if(opcao == 1) {

      livres=0;

      for(int i=0;i<8;i++) {
        if( !(armarios & (1<<i)) )
            livres++;
      }

      if( livres == 0) {
        puts("Nao tem nenhum armario livre.");
      }
      else {
        escolhido=rand()%livres;
        contador=0;

        for(int i=0;i<8;i++) {
          if(!(armarios & (1 << i))) {

            if(contador == escolhido) {
              armarios = armarios | (1<<i);
              printf("O armario %d foi ocupado.\n",i+1);
              break;
            }

            contador++;
          }
        }
      }

   } else if( opcao == 2) {

      puts("Digite o numero do armario que deseja liberar:");
      scanf("%d",&posicao);

      if(posicao<1 || posicao>8) {
        puts("Armario invalido.");
      } else if(armarios & (1 << (posicao-1))) {
          armarios=armarios & ~(1 << (posicao-1));
          puts("Armario liberado.");
      } else {
        puts("Esse armario ja esta livre.");
      }

   } else if(opcao == 3) {
      puts("Programa encerrado.");
   }
   else {
      puts("Opcao invalida.");
   }

 } while(opcao != 3);

 return 0;
}

