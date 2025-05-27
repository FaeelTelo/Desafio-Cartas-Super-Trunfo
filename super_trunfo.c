#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char _estado1, _codigo1[4], _nomeCidade1[50];
    int _populacao1, _pontosTuristicos1;
    float _area1, _pib1;

    // Declaração das variáveis para a Carta 2
    char _estado2, _codigo2[4], _nomeCidade2[50];
    int _populacao2, _pontosTuristicos2;
    float _area2, _pib2;

    // Instruções
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado: ");
    scanf(" %c", &_estado1);
    printf("Informe o Codigo da Carta: ");
    scanf("%s", _codigo1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %s", _nomeCidade1);  
    printf("Informe a Populacao: ");
    scanf("%i", &_populacao1);
    printf("Informe a Area: ");
    scanf("%f", &_area1);
    printf("Informe o PIB: ");
    scanf("%f", &_pib1);
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%i", &_pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");

    printf("Informe o Estado: ");
    scanf(" %c", &_estado2);
    printf("Informe o Codigo da Carta: ");
    scanf("%s", _codigo2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %s", _nomeCidade2);  
    printf("Informe a Populacao: ");
    scanf("%i", &_populacao2);
    printf("Informe a Area: ");
    scanf("%f", &_area2);
    printf("Informe o PIB: ");
    scanf("%f", &_pib2);
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%i", &_pontosTuristicos2);

    // Exibição dos dados em tela
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", _estado1);
    printf("Codigo: %s\n", _codigo1);
    printf("Nome da Cidade: %s\n", _nomeCidade1);
    printf("Populacao: %i\n", _populacao1);
    printf("Area: %.2f km²\n", _area1);
    printf("PIB: %.2f bilhões de reais\n", _pib1);
    printf("Numero de Pontos Turisticos: %i\n", _pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", _estado2);
    printf("Codigo: %s\n", _codigo2);
    printf("Nome da Cidade: %s\n", _nomeCidade2);
    printf("Populacao: %i\n", _populacao2);
    printf("Area: %.2f km²\n", _area2);
    printf("PIB: %.2f bilhões de reais\n", _pib2);
    printf("Numero de Pontos Turisticos: %i\n", _pontosTuristicos2);

    return 0;
}
