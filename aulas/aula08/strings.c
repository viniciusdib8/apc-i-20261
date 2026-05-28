#include <stdio.h>
#include <string.h>

int main(){
    char texto[11];
    texto[0] = 'O';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = 'l';
    
    printf("%s\n", texto);

    strcpy(texto, "Bom"); // texto = "Bom"
    printf("%s", texto);

    for(int i = 0; i < 11; i++){
        printf("%c", texto[i]);
    }
    printf("\n");

    //concatenar a string
    strcat(texto, " dia"); // texto + dia
    printf("%s\n", texto);

    // tamanho da string
    int tamanho = strlen(texto);
    printf("O texto '%s' tem %i caracteres\n", texto, tamanho);
    int capacidade = sizeof(texto);
    printf("O texto guarda ate %i caracteres\n", capacidade);

    //preencher a string com um caracter
    memset(texto, 'a', 8);
    printf("%s\n", texto);
    //limpa a string
    memset(texto, '\0', capacidade);
    printf("%s\n", texto);
    
    // string > outra, string == outra
    int compara = strcmp("banana", "laranja");
    printf("banana com laranja = %i\n", compara);

    return 0;
}