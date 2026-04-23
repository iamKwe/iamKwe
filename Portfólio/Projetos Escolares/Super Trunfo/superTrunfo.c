#include <stdio.h>

int main(){

    int opcao;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuar1, recuar2, resultado1, resultado2;

    // Menu inicial do jogo

    printf("### Escolha uma opcao ###\n");
    printf("1. Iniciar o jogo\n");
    printf("2. Regras\n");
    printf("3. Sair do jogo\n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("\nBem-vindo ao jogo!\n");   // Comecar o jogo

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

    printf("Siga os passos para criar suas duas cartas.\n");

    printf("Primeira carta!\n");

    printf("Considerando os seguintes Estados: Amazonas, Pernambuco, Ceara, Rondonia, Goias, Mato Grosso, Sao Paulo, Espirito Santo. Digite a primeira letra apenas um deles: \n");
    scanf(" %c", &letra);

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

    printf("Segunda carta!\n");

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

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrao.
    %e: Imprime um numero de ponto flutuante na notacao cientifica
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */




    // Escolha o primeiro atributo.

    printf("\n=== Escolha o primeiro atributo! ===\n");
    printf("\nA. ATAQUE!\n");
    printf("\nD. DEFESA!\n");
    printf("\nR. RECUAR!\n");
    printf("Escolha a comparacao: \n");
    scanf(" %c", &primeiroAtributo);

        // Referente ao atributo selecionado

        switch (primeiroAtributo){

        case 'A':
        case 'a':

            printf("Voce escolheu a opcao de atacar!\n");
            resultado1 = superPoder > superPoder2;
            break;
        case 'D':
        case 'd':

            printf("Voce escolheu a opcao de defender!\n");
            resultado1 = densidade > densidade2;
            break;
        case 'R':
        case 'r':

            printf("Voce escolheu a opcao de ataque!\n");
            resultado1 = capita > capita2;
            break;          
        default:

            printf("Opcao inválida!");
            break;
        }


    // Escolha o segundo atributo

     do{
        printf("\n=== Escolha o segundo atributo! ===\n");
        printf("\n = ATENCAO | OS VALORES DEVEM SER DIFERENTE DO PRIMEIRO!! = \n");
        printf("\nA. ATAQUE!\n");
        printf("\nD. DEFESA!\n");
        printf("\nR. RECUAR!\n");
        printf("Escolha a comparacao: \n");
        scanf(" %c", &segundoAtributo);

        if(primeiroAtributo == segundoAtributo){

            printf("Voce escolheu o mesmo atributo! Tente um diferente.");
        }
    } while (primeiroAtributo == segundoAtributo);
    

            switch (segundoAtributo){

            case 'A':
            case 'a':

            printf("Voce escolheu a opcao de atacar!\n");
            resultado2 = superPoder > superPoder2;           
                break;
            case 'D':
            case 'd':

            printf("Voce escolheu a opcao de defender!\n");
            resultado2 = densidade > densidade2;
                break;
            case 'R':
            case 'r':

            printf("Voce escolheu a opcao de ataque!\n");
            resultado2 = capita > capita2;
                break;       
            default:

            printf("Opcao inválida!");
                break;
                }



                if (resultado1 == resultado2){                  
                    if (resultado1 == 1){
                    printf("Parabéns, a primeira carta venceu!\n");
                } 
                    else {
                        printf("Voce perdeu... a segunda carta venceu!\n");
                    } 
                } 
                    
                else {
                    printf("Empatou!");
                    }                     
           break;
        case 2: // Regras do jogo

        printf("Regas do jogo!\n");
        printf("1. O jogador cria duas cartas com atributos de cidades brasileiras.\n");
        printf("2. Os atributos incluem populacao, area, PIB, etc.\n");
        printf("3. Um 'Super Poder' e calculado para cada carta com base em seus atributos.\n");
        printf("4. A carta com o maior 'Super Poder' vence a rodada (indicado por 'SUPER PODER: 1').\n");
            break;
        case 3:

        printf("Saindo...\n"); // Sair do jogo
            break;
        default:

        printf("Opcao invalida\n");
        break;
        }
    }
