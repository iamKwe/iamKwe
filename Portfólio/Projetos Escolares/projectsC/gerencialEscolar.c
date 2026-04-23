#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("--- Menu de Gerenciamento de Estudante ---\n");
    printf("1. Calcular Media\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
            //Calcular a nota do aluno.
        printf("Calcular Media\n");
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);        
        
            if((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10)){
                media = (nota1 + nota2) / 2;
                printf("A media é %f.2\n", media);
            }
                else{
                    printf("Entrada invalida.\n");
                }
        break;
    case 2:
                //Determinar se o aluno esta ou nao aprovado.
        printf("Determinar Status\n");
        printf("Informe a media do aluno: ");
        scanf("%f", &media);
        media >= 6 ? printf("Aprovado!\n") : printf("Reprovado!\n");
        break;
    case 3:
        printf("Saindo do sistema...\n");
    break;
    default:
        printf("Opcao invalida. Tente novamente...\n");
        break;
    }

    return 0;

}