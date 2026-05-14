#include <stdio.h>

int main (){
    int numero_inteiro = 0;

    printf("Insira um numero: ");
    scanf("%i", &numero_inteiro);

    int eh_par = numero_inteiro % 2 == 0;

    if (eh_par) {
        printf("O numero %i eh par\n", numero_inteiro);
    } else {
        printf("O numero %i eh impar\n", numero_inteiro);
    }

    return 0;
}