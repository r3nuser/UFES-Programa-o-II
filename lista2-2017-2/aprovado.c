#include <stdio.h>

int
main(void){
    float nota1 = 0,
          nota2 = 0,
          media = 0;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if (media >= 7) printf("%.1f - Aprovado !\n", media);
    else if (media >= 5) printf("%.1f - Recuperação !\n", media);
    else printf("%.1f - Reprovado !\n", media);
        
    return 0;
}