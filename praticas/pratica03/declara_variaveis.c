#include <stdio.h>

int main() {
    int idade;
    char sexo;
    float altura;
    float peso;

    idade = 29;
    sexo = 'M';
    altura = 1.85;
    peso = 75.9;

    printf("Idade = %i anos\n", idade);
    printf("Sexo = %C\n", sexo);
    printf("Altura = %.2fm\n", altura);
    printf("Peso = %.3fkg\n", peso);

    return 0;
}