#include <stdio.h>

int
main(void){
    char letra;

    printf("Insira a letra: ");
    scanf("%c", &letra);

    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("É uma vogal.\n");
            break;
        default:
            printf("Não é uma vogal");
            break;
    }

    return 0;
}