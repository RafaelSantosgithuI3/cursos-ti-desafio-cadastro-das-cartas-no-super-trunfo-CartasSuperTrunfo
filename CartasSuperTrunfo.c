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
    printf("Comparativo de PIB per capita, o maior sera o vencedor! \n");

        char estado[20]; 
        char codigo[3];
        char nome[20];
        int populacao;
        float area;
        float pib;
        int npontosturi;
       

       printf("Para começar, digite o codigo da carta1: ");
       scanf("%s", &codigo);
       printf("Digite o nome do estado: ");
       scanf("%s", &estado);
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


       float densi = populacao / area;
       float pibper = pib / populacao;
      
         printf("\n");
         printf("Carta1 cadastrada com sucesso!\n");   
         printf("\n");

    
            char estado2[20]; 
            char codigo2[3];
            char nome2[20];
            int populacao2;
            float area2;
            float pib2;
            int npontosturi2;
            
    
            printf("Para começar, digite o codigo da carta2: ");
            scanf("%s", &codigo2);
            printf("Digite o nome do estado2: ");
            scanf("%s", &estado2);
            printf("Digite o nome da cidade2: ");
            scanf("%s", &nome2);
            printf("Informe a população da cidade2: ");
            scanf("%d", &populacao2);
            printf("Digite a área da cidade2: ");
            scanf("%f", &area2);
            printf("Informe o PIB2: ");
            scanf("%f", &pib2);
            printf("Diga a quantidade de pontos turisticos da cidade2: ");
            scanf("%d", &npontosturi2);
            
            float densi2 = populacao2 / area2;
            float pibper2 = pib2 / populacao2;

                printf("\n");
                printf("Carta2 cadastrada com sucesso!\n");   
                printf("\n");

                printf("Informações da carta 1\n");
                printf("Densidade populacional: %.2f\n", densi);
                printf("PIB per capita: %.2f\n", pibper);
                printf("\n");
                printf("Informações da carta 2\n");
                printf("Densidade populacional2: %.2f\n", densi2);
                printf("PIB per capita2: %.2f\n", pibper2);
                printf("\n");
                       
                    if (pibper > pibper2) {
                        printf("O vencedor é a carta 1\n");
                    } else {
                        printf("O vencedor é a carta 2\n");
                    }

                        printf("\n");
                        printf("Obrigado por participar do desafio Super Trunfo!\n");
                        printf("\n");

    return 0;
}