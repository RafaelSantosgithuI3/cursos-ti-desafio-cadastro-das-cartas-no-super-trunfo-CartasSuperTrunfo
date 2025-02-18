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
	printf("DESAFIO SUPER TRUNFO \n");
        char codigo[3];
        char nome[20];
        int populacao;
        float area;
        float pib;
        int npontosturi;


       printf("Para começar, digite o codigo da cidade: ");
       scanf("%s", &codigo);
       printf("Digite o nome da cidade: ");
       scanf("%s", &nome);
       printf("Informe a população da cidade: ");
       scanf("%d", &populacao);
       printf("Digite a área da cidade: ");
       scanf("%f", &area);
       printf("Informe o PIB: ");
       scanf("%f", &pib);
       printf("Diga a quantidade de pontos turisticos da cidade: ");
       scanf("%d", &npontosturi);

         printf("\n");
         printf("Carta cadastrada com sucesso!\n");   
         printf("\n");

         printf("Segue abaixo as informações da cidade cadastrada\n");
         printf("\n");

         printf("Codigo da cidade: %s\n", codigo);
         printf("Nome da cidade: %s\n", nome);
         printf("População da cidade: %d\n", populacao);
         printf("Área: %.2f\n", area);
         printf("PIB: %.2f\n", pib);
         printf("Pontos turisticos: %d\n", npontosturi);

         printf("\n");
         printf("Obrigado por participar do desafio Super Trunfo!\n");
         printf("\n");

    return 0;
}
