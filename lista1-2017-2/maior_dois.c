#include <stdio.h>

int 
maior(int a, int b){
    return a > b ? a : b;
}
int
main(void){
    int a = 0,
        b = 0;
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &a);
    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("O maior e: %d\n", maior(a,b));
    
    return 0;
}