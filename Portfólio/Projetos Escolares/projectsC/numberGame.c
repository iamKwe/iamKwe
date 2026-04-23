#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;
  int regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha um opcao: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
        srand(time (0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        printf("numero secreto %d\n", numeroSecreto);
        if (numeroSecreto == palpite){
            printf("Voce acertou!\n");
        }
            else {
                printf("Voce errou!\n");
            }

        break;
    case 2:
      printf("Explicacao das Regras...\n");
      printf("Digite a opcao relacionada as regras do Jogo!\n");
      printf("1° Regra\n");
      printf("2° Regra\n");
      scanf("%d", &regras);
      switch (regras)
      {
      case 1:
         printf("Regra 1...\n");
         break;            
        case 2:
         printf("Regra 2...\n");
         break;       
      default:
        break;
      }
      break;
    case 3:
      printf("Saindo\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}