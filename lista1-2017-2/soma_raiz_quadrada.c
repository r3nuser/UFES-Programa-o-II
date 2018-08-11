#include <math.h>
#include <stdio.h>

int
main(void){
    int a = 0,
        b = 0;
    
    float soma = 0;

    printf("Insira o primeiro numero: ");
    scanf("%d", &a);
    printf("Insira o segundo numero: ");
    scanf("%d", &b);

    soma = sqrt(a) + sqrt(b);

    printf("A soma das raizes quadradas e: %f\n", soma);

    return 0;
}