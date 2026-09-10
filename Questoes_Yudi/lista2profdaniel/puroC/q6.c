#include <stdio.h>

int main(){
  int paulo,renata,branco,nulo,voto,confirmacao;

  while(1){
    puts("\n\n----- ESCOLHA RENATA(7) ou PAULO(5) ou nulo(0) ou branco(qualquer numero positivo nao relacionado a um candidato) -----\n(ou um inteiro negativo para parar a execucao)\n\n");
    scanf("%d",&voto);
    if (voto >= 0) {
    
    switch(voto){
      case 5:
        puts("deseja confirmar seu voto em Paulo? \n1 - sim \n2 - nao");
        scanf("%d",&confirmacao);
        switch(confirmacao){
          case 1:
            paulo++;
            puts("voto confirmado !");
            continue;
          case 0:
            puts("voto cancelado, vote novamente!");
            continue;
        }
      case 7:
        puts("deseja confirmar seu voto em Renata? \n1 - sim \n2 - nao");
        scanf("%d",&confirmacao);
        switch(confirmacao){
          case 1:
            renata++;
            puts("voto confirmado !");
            continue;
          case 0:
            puts("voto cancelado, vote novamente!");
            continue;
        }
      case 0:
        puts("deseja confirmar seu voto nulo? \n1 - sim \n2 - nao");
        scanf("%d",&confirmacao);
        switch(confirmacao){
          case 1:
            nulo++;
            puts("voto confirmado !");
            continue;
          case 0:
            puts("voto cancelado, vote novamente!");
            continue;
        }
      default:
        puts("Seu voto nao foi em nenhum candidato, nem nulo, deseja realmente votar em branco?");
        puts("1 - sim \n2 - nao");
        scanf("%d",&confirmacao);
        switch(confirmacao){
          case 1:
            branco++;
            puts("voto confirmado !");
            continue;
          case 0:
            puts("voto cancelado, vote novamente!");
            continue;
        }
 
  }
  }else{
    puts("\n\n ---- EXECUCAO ENCERRADA ---- \n\n");
    printf("Votos paulo:%d \nVotos renata:%d \nVotos nulo:%d \nVotos branco:%d \n",paulo,renata,nulo,branco);
      if(paulo > renata){
        printf("Paulo ganhou com %d votos (brancos + diretos)",paulo+branco);
      }else if(paulo == renata){
        puts("--- OCORREU UM EMPATE TECNICO! :O ---");
      }
      else{ 
        printf("Renata ganhou com %d votos (brancos + diretos)",renata+branco);
      }
  break;
  }

  }
}
