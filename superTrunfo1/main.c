#include <stdio.h>

int main() {
    int codigoCarta;
    int populacao;
    int pontosTuristicosN; 
    float area;
    float pib;
    char nomeCidade[50];
    char estado;

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Diga a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Informe a area da cidade (m²): ");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib);

    printf("Coloque o código da carta:  ");
    scanf("%d", &codigoCarta);
    

}