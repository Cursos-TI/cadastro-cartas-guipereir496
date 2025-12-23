#include <stdio.h>

#define TOTAL_ESTADOS 8
#define CIDADES_POR_ESTADO 4
#define TOTAL_CARTAS (TOTAL_ESTADOS * CIDADES_POR_ESTADO)

struct Carta {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta cartas[TOTAL_CARTAS];
    int index = 0;

    // Cadastro das cartas
    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int cidade = 1; cidade <= 4; cidade++) {

            printf("\nCadastro da cidade %c0%d\n", estado, cidade);

            // Código da carta
            cartas[index].codigo[0] = estado;
            cartas[index].codigo[1] = '0';
            cartas[index].codigo[2] = cidade + '0';
            cartas[index].codigo[3] = '\0';

            printf("Populacao: ");
            scanf("%d", &cartas[index].populacao);

            printf("Area (km²): ");
            scanf("%f", &cartas[index].area);

            printf("PIB: ");
            scanf("%f", &cartas[index].pib);

            printf("Numero de pontos turisticos: ");
            scanf("%d", &cartas[index].pontosTuristicos);

            index++;
        }
    }

    // Exibição dos dados
    printf("\n===== CARTAS CADASTRADAS =====\n");

    for (int i = 0; i < TOTAL_CARTAS; i++) {
        printf("\nCodigo da carta: %s\n", cartas[i].codigo);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
