#include <stdio.h>

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //-----Variável carta1-----//
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  //-----Variável carta2-----//
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  // Área para entrada de dados

  //-----Leitura da carta1----//
  printf("Super Trunfo Carta 1\n");

  printf("Estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Código da carta (ex: A01): ");
  scanf(" %3s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", &cidade1);

  printf("População: ");
  scanf(" %d", &populacao1);

  printf("Área (Km2): ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Números de pontos turísticos: ");
  scanf(" %d", &pontos_turisticos1);

  //------Leitura da carta2-----//
  printf("Super Trunfo Carta 2\n");

  printf("Estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Código da carta (ex: B02): ");
  scanf(" %3s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %49[^\n]", &cidade2);

  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área (Km2): ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Números de pontos turísticos: ");
  scanf(" %d", &pontos_turisticos2);
  // Área para exibição dos dados da cidade
  printf("Cartas cadrastadas\n");

  //-----Carta1-----//
  printf("Carta 1:\n");
  printf(" Estado: %c\n", estado1);
  printf(" Código: %s\n", codigo1);
  printf(" Nome da cidade: %s\n", cidade1);
  printf(" População: %d\n", populacao1);
  printf(" Área: %.2f km2\n", area1);
  printf(" PIB: %.2f\n", pib1);
  printf(" Número de pontos turísticos: %d\n", pontos_turisticos1);

  //-----Carta2-----//
  printf("Carta 2:\n");
  printf(" Estado: %c\n", estado2);
  printf(" Código: %s\n", codigo2);
  printf(" Nome da cidade: %s\n", cidade2);
  printf(" População: %d\n", populacao2);
  printf(" Área: %.2f km2\n", area2);
  printf(" PIB: %.2f\n", pib2);
  printf(" Número de pontos turísticos: %d\n", pontos_turisticos2);

  printf("\n");
return 0;
}