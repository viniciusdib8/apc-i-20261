#include <stdio.h>

int main () {
    int idade = 0;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    int eh_crianca = idade <= 12;
    int eh_adolescente = idade < 18;
    int eh_adulto = idade < 65;
    int eh_idoso = idade >= 65;
    int nao_existe = idade < 0;

    if (nao_existe) {
        printf("%i: ERRO\n", idade);
    } else if (eh_crianca) {
        printf("Sua idade %i o classifica como criança\n", idade);
    } else if (eh_adolescente) {
        printf("Sua idade %i o classifica como adolescente\n", idade);
    } else if (eh_adulto) {
        printf("Sua idade %i o classifica como adulto\n", idade);
    } else if (eh_idoso){
        printf("Sua idade %i o classifica como idoso\n", idade);
    } else if (nao_existe) {


    return 0;
}