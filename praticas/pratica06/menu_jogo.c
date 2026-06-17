#include <stdio.h>

int main (){
    int opcoes = 0;

    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");

    printf("Selecione uma das opcoes acima: ");
    scanf("%i", &opcoes);

    switch (opcoes) {
        case 1: printf("Iniciando novo jogo\n"); break;
        case 2: printf("Continuando jogo\n"); break;
        case 3: printf("Sua pontuacao eh: 5600\n"); break;
        case 4: printf("Saindo\n"); break;
        default: printf("Tente novamente."); 
    }

    return 0;
}