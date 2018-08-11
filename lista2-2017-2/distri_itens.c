#include <stdio.h>

int 
main(void){
    int pessoas = 0,
        itens = 0,
        i = 0,
        j = 0;
    
    printf("Insira o numero de pessoas: ");
    scanf("%d", &pessoas);
    printf("Insira o numero de itens: ");
    scanf("%d", &itens);

    if (pessoas > 0)
        for( i = 0; i < itens ; i++ ){
            j++;
            if (j > pessoas) j = 1;
        }

    printf("%d\n", j);
    
    return 0;
}