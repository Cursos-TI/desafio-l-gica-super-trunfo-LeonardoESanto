#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float PIBpercapta1;
    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float PIBpercapta2;

    
    // Leitura dos dados da Carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta (ex: CD1): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%c", nomeCidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: CD02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%c", nomeCidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n",densidadepopulacional1);
    printf("PIB Percapta: %.2f\n",PIBpercapta1);

    densidadepopulacional1 =(float) (populacao1 / area1);
    PIBpercapta1 = (float) (pib1 / populacao1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n",densidadepopulacional2);
    printf("PIB Percapta: %.2f\n",PIBpercapta2);

    densidadepopulacional2 =(float) (populacao2 / area2);
    PIBpercapta2 = (float) (pib2 / populacao2);

    if (pib1 > pib2)
    {
        printf("O PIB da cidade 1 é maior que da cidade 2. \n");
    }
    else
    {
        printf("O PIB da cidade 2 é maior que da cidade 1. \n");
    }

   // Resultado

     printf("\n=== Resultado Final ===\n");
    if (pib1 > pib2) 
    {
        printf("A cidade vencedora é: %c\n", nomeCidade1);
    } 
    else 
    {
        printf("A cidade vencedora é: %c\n", nomeCidade2);
    }
    return 0;
}