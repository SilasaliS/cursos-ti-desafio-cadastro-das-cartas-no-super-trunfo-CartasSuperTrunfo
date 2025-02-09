#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //variáveis = tipo nome;
    //int = valor inteiro, float = casas decimais, char = letras ou nomes[]
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int código;
    char nome[50];
    int população;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Código da cidade:");
    scanf("%d", &código);

    printf("Nome da cidade:");
    scanf("%s", &nome);

    printf("População da cidade:");
    scanf("%d", &população);

    printf("PIB da cidade:");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:");
    scanf(" %d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Código da cidade: %d \n", código);
    printf("Nome da cidade: %s \n", nome);
    printf("População da cidade: %d \n", população);
    printf("PIB da cidade: %f \n", pib);
    printf("Número de pontos turísticos da cidade: %d \n", pontos_turisticos);

    return 0;
}