#include <stdio.h>

int
main(void){
    float a = 0,
          b = 0,
          c = 0;
              
    printf("Insira o primeiro numero: ");
    scanf("%f", &a);
    printf("Insira o segundo numero: ");
    scanf("%f", &b);
    printf("Insira o terceiro numero: ");
    scanf("%f", &c);

    printf("A media e: %f\n",((a+b+c)/3));

    return 0;
}