#include <stdio.h>

int
menor(int a, int b){
    return a < b ? a : b;
}

int
menor_3(int a, int b, int c){
    return menor(a,menor(b,c));
}

int
main(void){
    int a = 0,
        b = 0,
        c = 0;

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);
    printf("Insira o terceiro numero: ");
    scanf("%d", &c);

    printf("O menor e: %d\n", menor_3(a,b,c));
    
    return 0;
}