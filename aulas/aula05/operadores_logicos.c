#include <stdio.h>

int main(){
    int idade;

    printf("Entre com a idade do cidadao: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    // operadores logicos
    // 1 - verdadeiro, 0 - falso
    // E - && - falso E qualquer coisa = falso
    // OU - || - verdadeiro OU qualquer coisa = verdadeiro
    // NAO - ! - NAO verdadeiro = falso, NAO falso = verdadeiro

    int eh_obrigado_votar = idade >= 18 && idade <= 70;
    int eh_facultativo_votar = (idade >=16 && idade < 18) || idade > 70;
    int nao_eh_obrigado_votar = !eh_obrigado_votar;

    printf("Voce tem %i anos e deve votar? %i \n", idade, eh_obrigado_votar);    
    printf("Voce tem %i anos e pode votar? %i \n", idade, eh_facultativo_votar);
    printf("Voce tem %i anos e nao deve votar? %i \n", idade, nao_eh_obrigatorio_votar);

    return 0;
}