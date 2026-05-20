#include <stdio.h>

int main(){
    int numero = 0;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    printf("Os multiplos do numero %i\n", numero );
    for(int i=1; i<100; i++){
        if (i % numero == 0){
            printf("%i ", i);
        }
    }

    return 0;
}