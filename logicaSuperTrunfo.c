#include <stdio.h>

int main() {
    // Variáveis para armazenar os atributos dos jogadores
    char pais1[20], pais2[20];
    char codigoEstado1[10], codigoEstado2[10];
    char codigoCidade1[10], codigoCidade2[10];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    int turismo1, turismo2;
    double pibPercapita1, pibPercapita2;
    double densidade1, densidade2;


    // Coleta as informações inseridas pelo usuário para o Jogador 01.
    printf ("----- Jogador 01 ----- \n");
    printf ("Digite o país: ");
    scanf ("%s", pais1);
    printf ("Digite o Código do Estado: ");
    scanf ("%s", codigoEstado1);
    printf ("Digite o Código da Cidade: ");
    scanf ("%s", codigoCidade1);
    printf ("Digite a população: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área (km²): ");
    scanf ("%f", &area1);
    printf ("Digite o PIB: ");
    scanf ("%lf", &pib1);
    printf ("Digite o n° de Pontos Turísticos: ");
    scanf ("%d", &turismo1);


    // Cálculo do PIB per capita e Densidade Populacional.
    pibPercapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;


    // Exibição dos atributos inseridos pelo usuário para o Jogador 01.
    printf (" \n Jogador 01 \n");
    printf ("País: %s \n", pais1);
    printf ("Código da Carta: %s%s \n", codigoEstado1, codigoCidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %.2f km \n", area1);
    printf ("PIB: %.2lf \n", pib1);
    printf ("Pontos Turísticos: %d \n", turismo1);
    printf ("PIB per capita: %.2lf \n", pibPercapita1);
    printf ("Densidade Populacional: %.2lf \n", densidade1);








    return 0;
}
