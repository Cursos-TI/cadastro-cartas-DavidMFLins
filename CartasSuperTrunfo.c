#include <stdio.h> //incluindo biblioteca

int main(){

    //Declarando variaveis cidade1
    char estado1[50]; 
    char codigocarta1[50]; 
    char nomedacidade1[50]; 
    int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidadepop1;
    float pibpercapita1;

    char estado2[50]; 
    char codigocarta2[50]; 
    char nomedacidade2[50]; 
    int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidadepop2;
    float pibpercapita2;

    //Abertura do programa

    printf("  __  __                       _       \n");
    printf(" |  \\/  |                     | |      \n");
    printf(" | \\  / | __ _  ___ __ _ _   _| |_   _ \n");
    printf(" | |\\/| |/ _` |/ __/ _` | | | | | | | |\n");
    printf(" | |  | | (_| | (_| (_| | |_| | | |_| |\n");
    printf(" |_|  |_|\\__,_|\\___\\__,_|\\__,_|_|\\__, |\n");
    printf("                                  __/ |\n");
    printf("  SUPER TRUNFO                   |___/ \n");
    printf("----------------------------------------\n\n");

    //Obtendo resultados x1

    printf ("Digite o Estado1: \n");
    scanf  ("%s" , estado1); 

    printf ("Digite o Código da Carta1: \n");
    scanf  ("%s" , codigocarta1);

    printf ("Digite o Nome da Cidade1: \n");
    scanf  (" %[^\n]" , nomedacidade1); 

    printf ("Digite a população1: \n");
    scanf  ("%d" , &populacao1);

    printf ("Digite Área1 (em km²): \n");
    scanf  ("%f" , &areakm1);

    printf ("Digite o PIB1: \n");
    scanf  ("%f" , &pib1);

    printf ("Digite Número de Pontos Turísticos1: \n");
    scanf  ("%d" , &pontosturisticos1);

    printf("\n\n"); //espaço entre a inserção das duas cidades

    //Obtendo resultados 2

    printf ("Digite o Estado2: \n");
    scanf  ("%s" , estado2);

    printf ("Digite o Código da Carta2: \n");
    scanf  ("%s" , codigocarta2);

    printf ("Digite o Nome da Cidade2: \n");
    scanf  (" %[^\n]" , nomedacidade2);

    printf ("Digite a população2: \n");
    scanf  ("%d" , &populacao2);

    printf ("Digite Área2 (em km²): \n");
    scanf  ("%f" , &areakm2);

    printf ("Digite o PIB2: \n");
    scanf  ("%f" , &pib2);

    printf ("Digite Número de Pontos Turísticos2: \n");
    scanf  ("%d" , &pontosturisticos2);

    //Calculo de PIB E Densidade Populacional cidade 1

    densidadepop1 = (float) ( populacao1 / areakm1);
    pibpercapita1 = (float) (pib1 / populacao1);

    //Calculo de PIB E Densidade Populacional cidade 2

    densidadepop2 = (float) ( populacao2 / areakm2);
    pibpercapita2 = (float) (pib2 / populacao2);

    // Exibindo resultados 1
    
    printf ("\n--- Dados da Carta 1 ---\n");
    printf ("Estado: %s\n" , estado1); 
    printf ("Código da Carta: %s\n" , codigocarta1);
    printf ("Nome da Cidade: %s\n" , nomedacidade1);
    printf ("População: %d\n" , populacao1);
    printf ("Área: %f km²\n" , areakm1);
    printf ("PIB: %f\n" , pib1);
    printf ("A Densidade populacional é: %f\n" , densidadepop1);
    printf ("O PIN per capita é: %f\n" , pibpercapita1);

    // Exibindo resultados 2
    
    printf ("\n--- Dados da Carta 2 ---\n");
    printf ("Estado: %s\n" , estado2);
    printf ("Código da Carta: %s\n" , codigocarta2);
    printf ("Nome da Cidade: %s\n" , nomedacidade2);
    printf ("População: %d\n" , populacao2);
    printf ("Área: %f km²\n" , areakm2);
    printf ("PIB: %f\n" , pib2);
    printf ("Número de Pontos Turísticos: %d\n" , pontosturisticos2);
    printf ("A Densidade populacional é: %f\n" , densidadepop2);
    printf ("O PIB per capita é: %f\n" , pibpercapita2);

    printf ("\n\n"); //espaço final do codigo

    return 0; //Boa conduta
}