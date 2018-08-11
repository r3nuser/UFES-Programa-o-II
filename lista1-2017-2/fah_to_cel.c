#include <stdio.h>

float
fah_to_cel(float fahrenheit){
    return ((fahrenheit - 32)*5)/9;
}

int
main(void){
    float fah = 0;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &fah);

    printf("A temperatura em celsius e: %f\n", fah_to_cel(fah));

    return 0;
}