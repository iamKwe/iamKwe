#include <stdio.h>

int main(){
    int nota1, nota2, nota3;
    float media;



    printf("*** Programa de Cálculo de Média ***\n");

 //Informar respectivas notas
    printf("Digite a nota de AV1: \n");
    scanf("%d", &nota1);

    printf("Digite a nota de AV2: \n");
    scanf("%d", &nota2);

    printf("Digite a nota do TRABALHO: \n");
    scanf("%d", &nota3);

//Calcular a média do aluno
    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("Sua média é:%.2f\n", media);

//Informar a aprovação ou reprova do aluno
    if(media>=6)
        printf("Parabéns! Voce está aprovado!");
    else
        printf("Infelizmente voce reprovou. Mas nao desista!");
    


    return 0;

}