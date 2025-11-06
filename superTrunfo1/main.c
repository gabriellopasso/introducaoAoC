#include <stdio.h>

int main() {
    // Variaveis cidade 1
    int codigoCarta;
    int populacao;
    int pontosTuristicosN; 
    float area;
    float pib;
    float densidadePopulacional;
    float rendaPerCapta;
    float poder;
    char nomeCidade[50];
    char estado;

    // Variáveis da cidade 2
    int codigo2, pop2, pontos2;
    float area2, pib2, densidadePopulacional2, rendaPerCapta2, poder2;
    char nome2[50];
    char estado2;

    //--- Cidade 1 ---
    printf("Digite o estado em que a cidade se encontra(Uma letra de 'a' a 'h'): ");
    scanf("%c", &estado);

    printf("Coloque o codigo da carta:  ");
    scanf("%d", &codigoCarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);

    printf("Diga a populacao da cidade: ");
    scanf("%d", &populacao);
    
    printf("Informe a area da cidade (m2): ");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?: ");
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos:  ");
    scanf("%d", &pontosTuristicosN);

// --- Cidade 2 ---
    printf("\n=== Cadastro da Cidade 2 ===\n");
    printf("Estado (letra de 'a' a 'h'): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%d", &codigo2);
    
    printf("Nome da cidade: ");
    scanf("%49s", nome2);

    printf("Populacao: ");
    scanf("%d", &pop2);
    
    printf("Area (m2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // DIferentes prints

    densidadePopulacional = (float) populacao/area ;
    rendaPerCapta = (float) pib/populacao;
    poder = (float) ( populacao + area + pib + pontosTuristicosN + rendaPerCapta ) - (densidadePopulacional);

    printf(
    "Carta 1:\n"
    "Estado: %c\n"
    "Codigo: %d\n"
    "Nome da Cidade: %s\n"
    "Populacao: %d\n"
    "Area: %.2f\n"
    "PIB: %.2f\n"
    "Numero de Pontos Turísticos: %d\n"
    "Densidade Populacional: %.2f hab/km\n"
    "Renda per capta: %.2f reais",
    estado,
    codigoCarta,
    nomeCidade,
    populacao,
    area,
    pib,
    pontosTuristicosN,
    densidadePopulacional,
    rendaPerCapta
    );
    // Desfio 2
    densidadePopulacional2 = (float) pop2/area2 ;
    rendaPerCapta2 = (float) pib2/pop2;
    poder2 = (float) ( pop2 + area2 + pib2 + pontos2 + rendaPerCapta2 ) - (densidadePopulacional2);
    //desafio 3 
    
    
    printf("\n=== CIDADE 2 ===\n");
    printf("Estado: %c\nCodigo: %d\nNome: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f hab/km2\nRenda per capta: %.2f reais",
           estado2, codigo2, nome2, pop2, area2, pib2, pontos2, densidadePopulacional2, rendaPerCapta2);

    if (poder > poder2)
    {
        printf("\nA cidade 1 ganhou com %f pontos", poder);
    }
    else
    {
        printf("\nA cidade 2 ganhou com %f pontos", poder2);
    };
    
    

}