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
    float poder1, poder2;
    int menu;

    printf (" \n ----- Menu de Jogo ----- \n");
    printf (" 1 - Iniciar Jogo \n");
    printf (" 2 - Visualizar Regras \n");
    printf (" 3 - Sair do Jogo \n");
    printf (" \n Digite a opção: ");
    scanf ("%d", &menu);

    switch (menu)
    {
    case 1:
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
    poder1 = populacao1 + area1 + pib1 + turismo1;


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
    printf ("Super Poder: %.2f \n", poder1);


    // Coleta as informações inseridas pelo usuário para o Jogador 02.
    printf (" \n ----- Jogador 02 ----- \n");
    printf ("Digite o país: ");
    scanf ("%s", pais2);
    printf ("Digite o Código do Estado: ");
    scanf ("%s", codigoEstado2);
    printf ("Digite o Código da Cidade: ");
    scanf ("%s", codigoCidade2);
    printf ("Digite a população: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área (km²): ");
    scanf ("%f", &area2);
    printf ("Digite o PIB: ");
    scanf ("%lf", &pib2);
    printf ("Digite o n° de Pontos Turísticos: ");
    scanf ("%d", &turismo2);


    // Cálculo do PIB per capita e Densidade Populacional para o Jogador 02.
    pibPercapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    poder2 = populacao2 + area2 + pib2 + turismo2;


    // Exibição dos atributos inseridos pelo usuário para o Jogador 02.
    printf (" \n Jogador 02 \n");
    printf ("País: %s \n", pais2);
    printf ("Código da Carta: %s%s \n", codigoEstado2, codigoCidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f km²", area2);
    printf ("PIB: %.2lf \n", pib2);
    printf ("Pontos Turísticos: %d \n", turismo2);
    printf ("PIB per capita: %.2lf \n", pibPercapita2);
    printf ("Densidade Populacional: %.2lf \n", densidade2);
    printf ("Super Poder: %.2f \n", poder2);

    // Menu de escolha do atributo da carta para ser comparado entre os jogadores.
    printf ("\n Escolha uma Opção: \n");
    printf (" 1 - População. \n");
    printf (" 2 - Área. \n");
    printf (" 3 - PIB. \n");
    printf (" 4 - Pontos Turísticos. \n");
    printf (" 5 - PIB per capita. \n");
    printf (" 6 - Densidade Populacional. \n");
    printf (" 7 - Super Poder. \n");
    printf (" Digite a opção escolhida: ");
    scanf ("%d", &menu);

    if (menu < 1 || menu > 7) {
        printf ("Opção inválida! Tente novamente. \n");
        return 0;
    }


            // Compara e mostra qual jogador vencedor.
            switch (menu) {
                case 1: // População
                    if (populacao1 > populacao2)
                        printf("Jogador 1 venceu! \n");
                    else if (populacao2 > populacao1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 2: // Área
                    if (area1 > area2)
                        printf("Jogador 1 venceu! \n");
                    else if (area2 > area1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 3: // PIB
                    if (pib1 > pib2)
                        printf("Jogador 1 venceu! \n");
                    else if (pib2 > pib1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 4: // Pontos turísticos
                    if (turismo1 > turismo2)
                        printf("Jogador 1 venceu! \n");
                    else if (turismo2 > turismo1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 5: // PIB per capita
                    if (pibPercapita1 > pibPercapita2)
                        printf("Jogador 1 venceu! \n");
                    else if (pibPercapita2 > pibPercapita1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 6: // Densidade populacional (menor vence)
                    if (densidade1 < densidade2)
                        printf("Jogador 1 venceu! \n");
                    else if (densidade2 < densidade1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                case 7: // Super Poder
                    if (poder1 > poder2)
                        printf("Jogador 1 venceu! \n");
                    else if (poder2 > poder1)
                        printf("Jogador 2 venceu! \n");
                    else
                        printf("Empate! \n");
                    break;

                default:
                    printf("Opção inválida para comparação! \n");
                    break;
            }
            break;

        case 2:
            printf(" ----- Regras ----- \n");
            printf("1 - O jogador deverá digitar um país (Brasil, EUA, Rússia e China). \n");
            printf("2 - O jogador deverá digitar o Estado (de A até H). \n");
            printf("3 - O jogador deverá digitar a Cidade (de 01 até 04). \n");
            printf("4 - O jogador vai inserir valores para cada atributo que o jogo pedir. \n");
            printf("5 - Após o jogador inserir os atributos o jogo vai calcular automaticamente os atributos de PIB per capita e Densidade Populacional. \n");
            printf("6 - Após os jogadores inserirem os atributos o jogo dará opção de escolha de qual atributo será disputado o valor. \n");
            printf("7 - Ganha o jogador que tiver o maior valor de atributo comparado, exceto pelo atributo Densidade Populacional que sairá vencedor o jogador que tiver o menor valor. \n");
            break;

        case 3:
            printf("Jogo encerrado! \n");
            break;

        default:
            printf("Opção inválida \n");
            break;
    }

    return 0;
}
