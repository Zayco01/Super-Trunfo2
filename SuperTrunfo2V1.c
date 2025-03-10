#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL, "Portuguese");

    //atribuição das variáveis

    int carta1 = 1;
    int carta2 = 2;

    char estado1[20], estado2[20];
    char codigo1[6], codigo2[6];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    float resultado1;
    float resultado2;

    //entrada de dados

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

    //saida de dados

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);

    printf("Código: %c%s\n", estado1[0], codigo1);

    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", populacao1 / area1);
    printf("PIB per capita: %f\n", pib1 / populacao1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", estado2[0], codigo2);

    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", populacao2 / area2);
    printf("PIB per capita: %f\n", pib2 / populacao2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    resultado1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + (pib1 / (float)populacao1) - (1 / ((float)populacao1 / area1));
    resultado2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + (pib2 / (float)populacao2) - (1 / ((float)populacao2 / area2));

    //resultado da soma dos valores atribuidos as cartas e qual carta venceu

    printf("\nComparação de Cartas:\n");

	printf(" carta 1 - %s : %2.f\n", cidade1, resultado1);
	printf(" carta 2 - %s : %2.f\n", cidade2, resultado2);
    if (resultado1 > resultado2)
        printf("A carta 1 venceu!\n");
    else
        printf("A carta 2 venceu!\n");
		
    return 0;
}
