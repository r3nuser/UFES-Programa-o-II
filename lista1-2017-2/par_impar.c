#include <stdio.h>

char*
par_ou_impar(int num){
    return num % 2 == 0 ? "par" : "impar";
}
int
main(void){
    int num = 0;

    printf("Por favor, insira um numero: ");
    scanf("%d", &num);

    printf("O numero é %s.\n", par_ou_impar(num));

    return 0;    
}