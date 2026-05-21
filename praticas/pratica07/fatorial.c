#include <stdio.h>

int main(){
    int numero = 0;
    int fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    for(int i=numero; i>0; i--){
        fatorial = i * fatorial;
    }
        printf("A fatorial do numero indicado %i! eh: %i\n", numero, fatorial);

    return 0;
}