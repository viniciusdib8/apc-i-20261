#include <stdio.h>

int main(){
    int nota = 0;

    printf("Informe a nota do usuario: ");
    scanf("%i", &nota);
    while(getchar() != '\n');

    while(nota < 0 || nota > 10){
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);
    }

    printf("A nota do usuario eh: %i", nota);

    return 0;
}