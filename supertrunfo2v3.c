#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Declaração da função getValor
float getValor(int atributo, int pop1, int pop2, float ar1, float ar2, float pi1, float pi2, int tur1, int tur2, float den1, float den2, float pc1, float pc2, int carta);

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Atribuição das variáveis
    char estado1[20], estado2[20];
    char codigo1[6], codigo2[6];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    // Entrada de dados para as cartas
    printf("Digite a primeira letra do estado da carta 1: ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &turismo1);

    printf("Digite a primeira letra do estado da carta 2: ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &turismo2);

    // Cálculo de atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Escolha dos atributos para comparação
    int atributo1, atributo2;
    printf("Escolha dois atributos para comparação:\n");
    printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Pontos turísticos\n");
	printf("5 - Densidade demográfica\n");
	printf("6 - PIB per capita\n");

    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &atributo1);
    do {
        printf("Digite o número do segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo1 == atributo2);

    // Comparação dos dois atributos
    float valor1_attr1 = getValor(atributo1, populacao1, populacao2, area1, area2, pib1, pib2, turismo1, turismo2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, 1);
    float valor2_attr1 = getValor(atributo1, populacao1, populacao2, area1, area2, pib1, pib2, turismo1, turismo2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, 2);
    float valor1_attr2 = getValor(atributo2, populacao1, populacao2, area1, area2, pib1, pib2, turismo1, turismo2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, 1);
    float valor2_attr2 = getValor(atributo2, populacao1, populacao2, area1, area2, pib1, pib2, turismo1, turismo2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, 2);

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\nResultado da comparação:\n");
    printf("Carta 1 - Atributos escolhidos: %.2f, %.2f (Soma: %.2f)\n", valor1_attr1, valor1_attr2, soma1);
    printf("Carta 2 - Atributos escolhidos: %.2f, %.2f (Soma: %.2f)\n", valor2_attr1, valor2_attr2, soma2);

    if (soma1 > soma2) {
        printf("Carta 1 venceu!\n");
    }
    else if (soma2 > soma1) {
        printf("Carta 2 venceu!\n");
    }
    else {
        printf("Empate!\n");
    }

    return 0;
}

// Definição da função getValor
float getValor(int atributo, int pop1, int pop2, float ar1, float ar2, float pi1, float pi2, int tur1, int tur2, float den1, float den2, float pc1, float pc2, int carta) {
    switch (atributo) {
    case 1: return carta == 1 ? pop1 : pop2;
    case 2: return carta == 1 ? ar1 : ar2;
    case 3: return carta == 1 ? pi1 : pi2;
    case 4: return carta == 1 ? tur1 : tur2;
    case 5: return carta == 1 ? den1 : den2;
    case 6: return carta == 1 ? pc1 : pc2;
    default: return 0;
    }
}