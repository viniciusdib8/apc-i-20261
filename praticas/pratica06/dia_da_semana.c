#include <stdio.h>

int main (){
    int dia_semana = 0;

    printf("Digite um numero de 1 a 7: ");
    scanf("%i", &dia_semana);

    switch (dia_semana) {
        case 1: printf("Domingo eh: final de semana\n"); break;
        case 7: printf("Sabado eh: final de semana\n"); break;
        case 2: printf("Segunda-feira eh: dia util\n"); break;
        case 3: printf("Terca-feira eh: dia util\n"); break;
        case 4: printf("Quarta-feira eh: dia util\n"); break;
        case 5: printf("Quinta-feira eh: dia util\n"); break;
        case 6: printf("Sexta-feira eh: dia util\n"); break;
        default: printf("Invalido! Tente novamente.\n");
    }

    return 0;
}