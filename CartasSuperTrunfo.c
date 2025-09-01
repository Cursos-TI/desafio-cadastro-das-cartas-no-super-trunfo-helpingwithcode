#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // atributos carta 1
    char atributoEstado1;
    char atributoCodigoCidade1[6];
    char atributeNomeCidade1[60];
    int atributoPopulacao1;
    float atributoArea1;
    float atributoPIB1;
    int atributoPontosTuristicos1;

    // atributos carta 2
    char atributoEstado2;
    char atributoCodigoCidade2[6];
    char atributeNomeCidade2[60];
    int atributoPopulacao2;
    float atributoArea2;
    float atributoPIB2;
    int atributoPontosTuristicos2;

    // Introdução ao jogo
    printf("Bem vindo ao cadastrador de cartas para o jogo Super Trunfo!\n\n");
    printf("As cartão terão de ter as seguintes informações: Estado, Código da Carta, Nome da Cidade, População, Área (em km2), PIB e Número de Pontos Turísticos\n");
    printf("Vamos começar pela primeira carta, adicione o valor após o prompt\n");
    
    // Usuário irá adicionar informações da Carta 1
    printf("Estado (em um caracter):\n");
    scanf("%c%*c", &atributoEstado1);

    printf("Código da Cidade (A letra do estado seguida de um número de 01 a 04):\n");
    fgets(atributoCodigoCidade1, 5, stdin);
    atributoCodigoCidade1[strcspn(atributoCodigoCidade1, "\n")] = '\0';


    printf("Nome da Cidade:\n");
    fgets(atributeNomeCidade1, 51, stdin);
    atributeNomeCidade1[strcspn(atributeNomeCidade1, "\n")] = '\0';

    printf("População (número inteiro):\n");
    scanf("%d", &atributoPopulacao1);

    printf("Área (em km2):\n");
    scanf("%f", &atributoArea1);

    printf("PIB:\n");
    scanf("%f", &atributoPIB1);

    printf("Número de Pontos Turísticos (número inteiro):\n");
    scanf("%d", &atributoPontosTuristicos1);

    // Usuário irá adicionar informações da Carta 2
    printf("\n\nPara terminar, vamos aos valores da segunda carta\n");
    printf("Estado (em um caracter):\n");
    scanf(" %c%*c", &atributoEstado2);

    printf("Código da Cidade (A letra do estado seguida de um número de 01 a 04):\n");
    fgets(atributoCodigoCidade2, 5, stdin);
    atributoCodigoCidade2[strcspn(atributoCodigoCidade2, "\n")] = '\0';

    printf("Nome da Cidade:\n");
    fgets(atributeNomeCidade2, 51, stdin);
    atributeNomeCidade2[strcspn(atributeNomeCidade2, "\n")] = '\0';

    printf("População (número inteiro):\n");
    scanf("%d", &atributoPopulacao2);

    printf("Área (em km2):\n");
    scanf("%f", &atributoArea2);

    printf("PIB:\n");
    scanf("%f", &atributoPIB2);

    printf("Número de Pontos Turísticos (número inteiro):\n");
    scanf("%d", &atributoPontosTuristicos2);

    // Novos valores para o desafio
    float densidadePopulacional1 = atributoPopulacao1 / atributoArea1;
    float densidadePopulacional2 = atributoPopulacao2 / atributoArea2;
    float pibPerCapita1 = (atributoPIB1 * 1000000000.0f) / atributoPopulacao1;
    float pibPerCapita2 = (atributoPIB2 * 1000000000.0f) / atributoPopulacao2;



    // printar dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", atributoEstado1);
    printf("Código: %s\n", atributoCodigoCidade1);
    printf("Nome da Cidade: %s\n", atributeNomeCidade1);
    printf("População: %d\n", atributoPopulacao1);
    printf("Área: %.2f km²\n", atributoArea1);
    printf("PIB: %2f bilhões de reais\n", atributoPIB1);
    printf("Número de Pontos Turísticos: %d\n", atributoPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    // printar dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", atributoEstado2);
    printf("Código: %s\n", atributoCodigoCidade2);
    printf("Nome da Cidade: %s\n", atributeNomeCidade2);
    printf("População: %d\n", atributoPopulacao2);
    printf("Área: %.2f km²\n", atributoArea2);
    printf("PIB: %.2f bilhões de reais\n", atributoPIB2);
    printf("Número de Pontos Turísticos: %d\n", atributoPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
