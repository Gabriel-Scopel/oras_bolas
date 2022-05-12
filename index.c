#include <stdio.h>
#include <math.h>

void menu(void){
  
  printf("Bem vindo ao simulador de trajétória do Robo FEI\n");
  printf("1-começar simulação\n2-Sem Limites\n3-Sair\n");
  
  int resp;
  scanf("%d", &resp);
  switch(resp){
    //criar as funções main e sem_limites
    case 1://main();
    break;
    case 2://sem_limites();
    break;
    case 3:
    break;
    default:printf("Digite uma opção válida. Voltando ao Menu...");
      menu();
  }

}
int main(){
  menu();
}