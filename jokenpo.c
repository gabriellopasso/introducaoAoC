#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {
  srand(time(NULL));
  int playerEscolha;
  char playerResposta[20];
  int pcEscolha = (rand()% 3) + 1;
  char pcResposta[20]; 
  //printf("%d",pcEscolha);
  printf("\nPedra papel tesoura... \n1. PEDRA \n2. PAPEL \n3. TESOURA \nEscolha um numero: ");
  scanf("%d", &playerEscolha);

  switch (playerEscolha)
  {
  case 1:
    strcpy(playerResposta, "PEDRA");
    break;
  case 2:
    strcpy(playerResposta, "PAPEL");
    break;
  case 3:
    strcpy(playerResposta, "TESOURA");
    break;
  default:
    break;
  }

   switch (pcEscolha)
  {
  case 1:
    strcpy(pcResposta, "PEDRA");
    break;
  case 2:
    strcpy(pcResposta, "PAPEL");
    break;
  case 3:
    strcpy(pcResposta, "TESOURA");
    break;
  default:
    break;
  }

  printf("JOGADOR: %s - %s  :COMPUTADOR\n", playerResposta, pcResposta);
  
  // pedra > tesoura & pedra < papel
  // tesoura > papel & tesoura < pedra
  // papel > pedra & papel < tesoura
  // 1 x 1 | 1 x 2 | 1 x 3
  if (playerEscolha == pcEscolha) {
  printf("Resultado: EMPATE!\n");
  } 
  // Verificar as condições de vitória do jogador
  else if (
           (playerEscolha == 1 && pcEscolha == 3) || // Pedra ganha de Tesoura
           (playerEscolha == 2 && pcEscolha == 1) || // Papel ganha de Pedra
           (playerEscolha == 3 && pcEscolha == 2)    // Tesoura ganha de Papel
          ) 
  {
    printf("Resultado: VOCÊ VENCEU!\n");
  } 
  // Se não empatou e o jogador não ganhou, o PC deve ter ganhado (ou a entrada foi inválida)
  else 
  {
    // Adicionamos uma verificação simples para entradas inválidas do jogador
    if (strcmp(playerResposta, "INVALIDO") == 0) {
        printf("Resultado: Escolha do jogador inválida. Fim de jogo.\n");
    } else {
        printf("Resultado: COMPUTADOR VENCEU!\n");
    }
  }

  return 0;
  
}