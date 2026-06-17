#include <stdio.h>

    int main() {
       char tecla_pressionada;
       int numero_inteiro;
       float numero_com_seis_casas;
       double numero_com_doze_casas;

       tecla_pressionada = 'A';
       numero_inteiro = 10;
       numero_com_seis_casas = 0.123456f;
       numero_com_doze_casas = 0.123456;

       float nota_a1 = 8.0f;
       float nota_a2 = 8.5f;
       float nota_a3 = 10.0f;
       float media_final = 8.2f;

       printf("------------------------------\n");
       printf("       BOLETIM DE NOTAS\n");
       printf("------------------------------\n");
       printf("Disciplina  A1   A2   A3   MF\n");
       printf("APC1        %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, media_final);

       nota_a1 = 8.4f;
       nota_a2 = 7.5f;
       nota_a3 = 9.5f;
       media_final = 8.4f;
       printf("MD          %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, media_final);

       nota_a1 = 9.0f;
       nota_a2 = 7.6f;
       nota_a3 = 8.4f;
       media_final = 8.3f;

       printf("CALC1      %5.1f %5.1f %5.1f %5.1f\n", nota_a1, nota_a2, nota_a3, media_final);

            return 0;
    }