#include <stdio.h>

int main(){
    int opcao = 0;

    do{
        printf("Bem vindo ao menu do jogo!\n");
        printf("Selecione uma opcao abaixo: \n");
        printf("1 - Criar novo jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuacao\n");
        printf("4 - Sair\n");
        printf("Opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao){
            case 1: printf("Comecando novo jogo...\n"); break;
            case 2: printf("Voltando ao jogo...\n"); break;
            case 3: printf("Sua pontuacao eh de: 1350!\n");
            case 4: printf("Saindo. Ate logo!\n"); break;
            default: printf("Opcao invalida. Tente novamente!\n");
        }
    } while (opcao != 4);

    return 0;
}