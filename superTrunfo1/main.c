#include <stdio.h>

int main() {
    int codigoCarta;
    int populacao;
    int pontosTuristicosN; 
    float area;
    float pib;
    char nomeCidade[50];
    char estado;

    printf("Digite o estado em que a cidade se encontra(Uma letra de 'a' a 'h'): ");
    scanf("%s", &estado);

    printf("Coloque o código da carta:  ");
    scanf("%d", &codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Diga a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Informe a area da cidade (m²): ");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos:  ");
    scanf("%d", &pontosTuristicosN);

    printf(
    "Carta 1:\n"
    "Estado: %s\n"
    "Código: %d\n"
    "Nome da Cidade: %s\n"
    "População: %d\n"
    "Área: %.2f\n"
    "PIB: %.2f\n"
    "Número de Pontos Turísticos: %d\n",
    estado,
    codigoCarta,
    nomeCidade,
    populacao,
    area,
    pib,
    pontosTuristicosN
);


}