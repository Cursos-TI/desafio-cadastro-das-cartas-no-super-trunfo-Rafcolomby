#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
  
      // Variáveis
      char estado_A[3]; // Estado em formato de sigla (ex.: "SP")
      char codigo_da_carta_A01[3]; // Código de até 2 caracteres (ex.: "01")
      char nome_da_cidade_A01[50]; // Nome da cidade
      int populacao_A01;
      float area_em_km2_A01;
      float pib_A01;
      int pontos_turisticos_A01;

      // Cadastro da carta
      printf("Carta 1:\n");

      printf("Estado (sigla, ex.: SP): ");
      scanf("%2s", estado_A);

      printf("Código da carta: ");
      scanf("%2s", codigo_da_carta_A01);

      printf("Nome da cidade: ");
      while(getchar() != '\n'); 
      fgets(nome_da_cidade_A01, 50, stdin);

      printf("População: ");
      scanf("%d", &populacao_A01);

      printf("Área em km²: ");
      scanf("%f", &area_em_km2_A01);

      printf("PIB: ");
      scanf("%f", &pib_A01);

      printf("Número de pontos turísticos: ");
      scanf("%d", &pontos_turisticos_A01);

      // Exibição dos dados
      printf("\n--- DADOS DA CARTA ---\n");
      printf("Estado: %s\n", estado_A);
      printf("Código da carta: %s\n", codigo_da_carta_A01);
      printf("Nome da cidade: %s", nome_da_cidade_A01); // fgets já inclui '\n'
      printf("População: %d\n", populacao_A01);
      printf("Área km²: %.2f\n", area_em_km2_A01);
      printf("PIB: %.2f\n", pib_A01);
      printf("Número de pontos turísticos: %d\n", pontos_turisticos_A01);

      char estado_A[3]; // Estado em formato de sigla (ex.: "SP")
      char codigo_da_carta_A01[3]; // Código de até 2 caracteres (ex.: "01")
      char nome_da_cidade_A01[50]; // Nome da cidade
      int populacao_A01;
      float area_em_km2_A01;
      float pib_A01;
      int pontos_turisticos_A01;

      // Cadastro da carta
      printf("Carta 2:\n");

      printf("Estado (sigla, ex.: SP): ");
      scanf("%2s", estado_B);

      printf("Código da carta: ");
      scanf("%2s", codigo_da_carta_B01);

      printf("Nome da cidade: ");
      while(getchar() != '\n'); 
      fgets(nome_da_cidade_B01, 50, stdin);

      printf("População: ");
      scanf("%d", &populacao_B01);

      printf("Área em km²: ");
      scanf("%f", &area_em_km2_B01);

      printf("PIB: ");
      scanf("%f", &&area_em_km2_B01);

      printf("Número de pontos turísticos: ");
      scanf("%d", &pontos_turisticos_B01);

      // Exibição dos dados
      printf("\n--- DADOS DA CARTA ---\n");
      printf("Estado: %s\n", estado_B);
      printf("Código da carta: %s\n", codigo_da_carta_B01);
      printf("Nome da cidade: %s", nome_da_cidade_B01); // fgets já inclui '\n'
      printf("População: %d\n", populacao_B01);
      printf("Área km²: %.2f\n", area_em_km2_B01);
      printf("PIB: %.2f\n", pib_B01);
      printf("Número de pontos turísticos: %d\n", pontos_turisticos_B01);

      return 0;
    }
