#include <stdio.h>

int 
main(void){
    char letra;

    printf("Insira uma letra minuscula: ");
    scanf("%c", &letra);

    if(letra >= 'a' && letra <= 'z') printf("Versão maiuscula: %c\n", letra-32);
    else printf("Caracter não é letra ou não é minuscula.\n");

    return 0;
}