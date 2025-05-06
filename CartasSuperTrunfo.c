#include <stdio.h>

// Desafio Super Trunfo - Países - Matheus Rabelo Eulalio
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacaoA01, populacaoA02, pontosturisticosA01, pontosturisticosA02;
    float pibA01, pibA02, areaA01, areaA02;
    char nomeA01[50], nomeA02[50], estadoA01[50], estadoA02[50], codigoA01[50], codigoA02[50];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Cadastro de cidade \n");
    printf("Insira o nome da cidade \n");
    scanf("%s", &nomeA01);
    printf("insira o estado da cidade \n");
    scanf("%s", &estadoA01);
    printf("Insira a área da cidade \n");
    scanf("%f", &areaA01);
    printf("Insira quantidade de pontos turisticos \n");
    scanf("%i", &pontosturisticosA01);
    printf("insira a populacao da cidade \n");
    scanf("%i", &populacaoA01);
    printf("Insira o pib da cidade \n");
    scanf("%f", &pibA01);
    printf("Insira o codigo da carta \n");
    scanf("%s", codigoA01);
    printf("\n");

    printf("Cadastro de cidade \n");
    printf("Insira o nome da cidade \n");
    scanf("%s", &nomeA02);
    printf("insira o estado da cidade \n");
    scanf("%s", &estadoA02);
    printf("Insira a área da cidade \n");
    scanf("%f", &areaA02);
    printf("Insira quantidade de pontos turisticos \n");
    scanf("%i", &pontosturisticosA02);
    printf("insira a populacao da cidade \n");
    scanf("%i", &populacaoA02);
    printf("Insira o pib da cidade \n");
    scanf("%f", &pibA02);
    printf("Insira o codigo da carta \n");
    scanf("%s", &codigoA02);
    printf("\n");

    float pibpercapitaA01 = (float) pibA01 / populacaoA01, pibpercapitaA02 = (float) pibA02 / populacaoA02;
    float densidadepopulacaoA01 = (float) populacaoA01 / areaA01, densidadepopulacaoA02 = (float) populacaoA02 / areaA02;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("Carta A01: %s\n", nomeA01);
    printf("Estado: %s\n", estadoA01);
    printf("Area km2: %.2f\n", areaA01);
    printf("Pontos Turisticos: %i\n", pontosturisticosA01);
    printf("Populacao: %i\n", populacaoA01);
    printf("Densidade Populacional hab/km2: %.2f \n", densidadepopulacaoA01);
    printf("PIB R$: %.2f\n", pibA01);
    printf("PIB Per Capita R$: %.2f\n", pibpercapitaA01);
    printf("Codigo da Cidade: %s\n", codigoA01);
    printf("\n");

    printf ("Carta A01: %s\n", nomeA02);
    printf("Estado: %s\n", estadoA02);
    printf("Area km2: %.2f\n", areaA02);
    printf("Pontos Turisticos: %i\n", pontosturisticosA02);
    printf("Populacao: %i\n", populacaoA02);
    printf("Densidade Populacional hab/km2: %.2f \n", densidadepopulacaoA02);
    printf("PIB: %.2f\n", pibA02);
    printf("PIB Per Capita: %.2f\n", pibpercapitaA02);
    printf("Codigo da Cidade: %s\n", codigoA02);
    printf(" \n\n\n");

    return 0;
}
