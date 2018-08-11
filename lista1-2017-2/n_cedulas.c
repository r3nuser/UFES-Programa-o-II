#include <stdio.h>

int
main(void){
    int quantia = 0,
        notas_de_1 = 0,
        notas_de_2 = 0,
        notas_de_5 = 0,
        notas_de_10 = 0,
        notas_de_20 = 0,
        notas_de_50 = 0,
        notas_de_100 = 0;

    printf("Insira a quantia em reais: ");
    scanf("%d", &quantia);

    notas_de_100 = quantia / 100;
    quantia = quantia % 100;
    notas_de_50 = quantia / 50;
    quantia = quantia % 50;
    notas_de_20 = quantia / 20;
    quantia = quantia % 20;
    notas_de_10 = quantia / 10;
    quantia = quantia % 10;
    notas_de_5 = quantia / 5;
    quantia = quantia % 5;
    notas_de_2 = quantia / 2;
    quantia = quantia % 2;
    notas_de_1 = quantia / 1;

    printf("Notas de 100: %d \n", notas_de_100);
    printf("Notas de 50: %d \n", notas_de_50);
    printf("Notas de 20: %d \n", notas_de_20);
    printf("Notas de 10: %d \n", notas_de_10);
    printf("Notas de 5: %d \n", notas_de_5);
    printf("Notas de 2: %d \n", notas_de_2);
    printf("Notas de 1: %d \n", notas_de_1);
    
    return 0;
}