#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n Altura: %.2f\n Idade: %d\n Matricula: %d", nome, altura, idade, matricula);

}