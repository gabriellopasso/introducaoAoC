#include <stdio.h>

int main () {
  int nota1, nota2, nota3;
  float media;

  printf("Calculo da media Trimestral \n");

  printf("Digite a nota arredondada da primeira prova: ");
  scanf("%d", &nota1);

  printf("Digite a nota arredondada da segunda prova: ");
  scanf("%d", &nota2);

  printf("Digite a not arredondada da terceira prova: ");
  scanf("%d", &nota3); 

  //Calculando as medias

  media = (float)  (nota1 + nota2 + nota3) / 3;
  
  printf("Media igual a: %.2f", media);
  
  return 0;
}