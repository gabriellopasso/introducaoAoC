#include <stdio.h>
int main () {
    int a = 10;
    float b = 2.2;
   
    //Conversão implicita
    int soma = a + b;
    float produto = b * a;
    printf("Resultado implicito: %.2f\n", produto);
    printf("Resultadoimplicito: %.2f\n", soma);

    //conversão explicita
    int d = 3;
    int e = 10;
    float quociente = (float) e/d;
    printf("Resultado explicito: %.2f\n", quociente);

    return 0;
}



