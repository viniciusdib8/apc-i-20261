#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao = 0;

    do {
        system ("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Fazer uma recarga\n");
        printf("3 - Ver mensagens recebidas\n");
        printf("4 - Ver ultimas chamadas\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch (opcao){
            case 1: printf ("Seu saldo eh de R$10,00\n"); break;
            case 2: {
                int valor = 0;
                do {
                system("clear");
                printf("Valores de recarga disponiveis\n");
                printf("10 - R$10,00\n");
                printf("20 - R$20,00\n");
                printf("50 - R$50,00\n");
                printf("Escolha um valor => "); 
                scanf("%i", &valor);
                while(getchar() != '\n');

                switch(valor){
                    case 10: printf("Recarga de R$10,00 realizada\n"); break;
                    case 20: printf("Recarga de R$20,00 realizada\n"); break;
                    case 50: printf("Recarga de R$50,00 realizada\n"); break;
                    case 0: break;
                    default: printf("Valor invalido! Tente de novo\n");
                }

                printf("Pressione ENTER para continuar...");
                getchar();
                } while (valor != 0);
                break;
        }
            case 3: printf("Voce nao tem mensagens\n"); break;
            case 4: printf("99999-8888\n"); break;
            case 5: printf("Agradecemos o contato. Ate logo!\n"); break;
            default: printf("Opcao invalida! Tente de novo\n"); 
        }

        printf("Pressione ENTER para continuar...");
        getchar();

    } while (opcao != 5);

    return 0;
}