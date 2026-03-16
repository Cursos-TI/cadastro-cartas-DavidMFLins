#include <stdio.h> //incluindo biblioteca

int main(){

    //Declarando variaveis
    char estado[50]; 
    char codigocarta[50]; 
    char nomedacidade[50]; 
    int populacao;
    float areakm;
    float pib;
    int pontosturisticos;

    //Obtendo resultados x1

    printf ("Digite o Estado: \n");
    scanf  ("%s" , estado); 

    printf ("Digite o Código da Carta: \n");
    scanf  ("%s" , codigocarta);

    printf ("Digite o Nome da Cidade: \n");
    scanf  (" %[^\n]" , nomedacidade); 

    printf ("Digite a população: \n");
    scanf  ("%d" , &populacao);

    printf ("Digite Área (em km²): \n");
    scanf  ("%f" , &areakm);

    printf ("Digite o PIB: \n");
    scanf  ("%f" , &pib);

    printf ("Digite Número de Pontos Turísticos: \n");
    scanf  ("%d" , &pontosturisticos);

    // Exibindo resultados x1
    
    printf ("\n--- Dados da Carta 1 ---\n");
    printf ("Estado: %s\n" , estado); 
    printf ("Código da Carta: %s\n" , codigocarta);
    printf ("Nome da Cidade: %s\n" , nomedacidade);
    printf ("População: %d\n" , populacao);
    printf ("Área: %f km²\n" , areakm);
    printf ("PIB: %f\n" , pib);
    printf ("Número de Pontos Turísticos: %d\n\n" , pontosturisticos);

    //Obtendo resultados x2

    printf ("Digite o Estado: \n");
    scanf  ("%s" , estado);

    printf ("Digite o Código da Carta: \n");
    scanf  ("%s" , codigocarta);

    printf ("Digite o Nome da Cidade: \n");
    scanf  (" %[^\n]" , nomedacidade);

    printf ("Digite a população: \n");
    scanf  ("%d" , &populacao);

    printf ("Digite Área (em km²): \n");
    scanf  ("%f" , &areakm);

    printf ("Digite o PIB: \n");
    scanf  ("%f" , &pib);

    printf ("Digite Número de Pontos Turísticos: \n");
    scanf  ("%d" , &pontosturisticos);

    // Exibindo resultados x2
    
    printf ("\n--- Dados da Carta 2 ---\n");
    printf ("Estado: %s\n" , estado);
    printf ("Código da Carta: %s\n" , codigocarta);
    printf ("Nome da Cidade: %s\n" , nomedacidade);
    printf ("População: %d\n" , populacao);
    printf ("Área: %f km²\n" , areakm);
    printf ("PIB: %f\n" , pib);
    printf ("Número de Pontos Turísticos: %d\n" , pontosturisticos);

    return 0; //Boa conduta
}