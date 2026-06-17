#include <stdio.h>

int main(){
    int idade = 0;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);

    int eh_menor_que_16anos = idade < 16;
    int eh_menor_que_18anos = idade < 18;
    int eh_menor_que_70anos = idade < 70;

    // if (eh_maior_que_16anos) {
    //     printf("Com %i anos voce pode votar\n", idade);
    // } else {
    //     printf("Com %i anos voce NAO pode votar\n", idade);
    // }
 
    // int eh_maior_que_18anos = idade >= 18;
    // int eh_menor_70anos = idade < 70;

    // if (eh_maior_que_18anos && eh_menor_70anos) {
    //     printf("Com %i anos voce TEM que votar\n", idade);
    // } 

    if (eh_menor_que_16anos) {
        printf("Com %i anos voce NAO pode votar\n", idade);
    } else if (eh_menor_que_18anos) {
        printf("Com %i anos voce pode votar\n", idade);
    } else if (eh_menor_que_70anos) {
        printf("Com %i anos voce TEM que votar\n", idade);
    } else {
        printf("Com %i anos voce pode votar \n", idade);
    }

    return 0;
}