#include <stdio.h>

int main(){

    unsigned char paises = 195;
    int idiomas = 7100;
    long long int populacao_mundial = 8274065924LL;
    long double proporcao_aurea = 1.61803398874989484820L;

    printf ("Quantidade total de paises no mundo = %i\n", paises);
    printf ("Quantidade total de idiomas no mundo = %i\n", idiomas);
    printf ("Populacao mundial = %lli\n", populacao_mundial);
    printf ("Proporcao aurea = %.20Lf\n", proporcao_aurea);

    return 0;
}