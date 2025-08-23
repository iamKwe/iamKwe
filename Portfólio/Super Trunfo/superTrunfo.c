#include <stdio.h>

int main(){

    // Primeira carta
    char letra;
    int numero;
    char estado[20];
    int populacao;
    float km;
    float pib;
    int turistico;
    

    // Segunda carta
    char letra2;
    int numero2;
    char estado2[20];
    int populacao2;
    float km2;
    float pib2;
    int turistico2;
    
    

    // Criar primeira carta

    printf("Seja Bem-Vindo! Siga os passos para criar suas duas cartas.\n");

    printf("A seguir, voce criara a sua primeira carta. \n");

    printf("Considerando os seguintes Estados: Amazonas, Pernambuco, Ceara, Rondonia, Goias, Mato Grosso, Sao Paulo, Espirito Santo. Digite a primeira letra apenas um deles: \n");
    scanf("%c", &letra);

    printf("De 01 a 04, digite o código da carta: \n");
    scanf("%d", &numero);

    printf("Digite o nome de uma cidade, em relacao ao Estado escolhido: \n");
    scanf("%s", &estado);

    printf("Digite o numero populacional da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (Km²): \n");
    scanf("%f", &km);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Por ultimo, digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &turistico);

    float densidade = populacao / km;
    float capita = pib / populacao;
    float superPoder = populacao + pib + (1 / densidade) + capita + turistico + km;

    // Criar segunda carta
    
    printf("Sua primeira carta foi concluida!\n");

    printf("A seguir, voce criara a sua segunda carta.\n");

    printf("Considerando os seguintes Estados: Amazonas, Pernambuco, Ceara, Rondonia, Goias, Mato Grosso, Sao Paulo, Espirito Santo. Digite a primeira letra apenas um deles: \n");
    scanf(" %c", &letra2);

    printf("De 01 a 04, digite o código da carta: \n");
    scanf("%d", &numero2);

    printf("Digite o nome de uma cidade, em relacao ao Estado escolhido: \n");
    scanf("%s", &estado2);

    printf("Digite o numero populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (Km²): \n");
    scanf("%f", &km2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Por ultimo, digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &turistico2);

    printf("Maravilha! Voce concluiu sua segunda carta.\n");
    printf("Essas sao suas cartas: \n");

    float densidade2 = populacao2 / km2;
    float capita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + pib2 + (1 / densidade2) + capita2 + turistico2 + km2;

    printf("Carta 1: \n - ESTADO: %c \n - CODIGO: %c%d \n - NOME DA CIDADE: %s \n - POPULACAO: %d \n - AREA: %.2f \n - PIB: %.2f \n - DENSIDADE POPULACIONAL: %.2f hab/km²\n - PIB per Capita: %.2f reais\n - N° PONTOS TURISTICOS: %d \n - SUPER PODER: %d\n", letra, letra, numero, estado, populacao, km, pib, densidade, capita, turistico, (int)(superPoder > superPoder2));
    printf("Carta 2: \n - ESTADO: %c \n - CODIGO: %c%d \n - NOME DA CIDADE: %s \n - POPULACAO: %d \n - AREA: %.2f \n - PIB: %.2f \n - DENSIDADE POPULACIONAL: %.2f hab/km²\n - PIB per Capita: %.2f reais\n - N° PONTOS TURISTICOS: %d \n - SUPER PODER: %d\n", letra2, letra2, numero2, estado2, populacao2, km2, pib2, densidade2, capita2, turistico2, (int)(superPoder2 > superPoder));

    return 0;

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrao.
    %e: Imprime um numero de ponto flutuante na notacao cientifica
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

}
