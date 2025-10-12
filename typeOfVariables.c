#include <stdio.h>

int main() {
    int idade;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.3;
    char letra;
    char nome[20] = "RobsonSchacker";

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Escolha uma letra: ");
    scanf(" %c", &letra);

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c", letra);
    
}


/*
printf(''texto com formatação'', variavel1, variavel2, ...);

%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.


*/