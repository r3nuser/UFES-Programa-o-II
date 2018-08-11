#include <math.h>
#include <stdio.h>

double
grau_para_rad(int grau){
    return (grau*3.14)/180;
}

int
main(void){
    int grau = 0;
    double rad = 0;

    printf("Insira o valor em grau: ");
    scanf("%d", &grau);

    rad = grau_para_rad(grau);

    printf("O valor do seno e: %lf\n", sin(rad));
    printf("O valor do cosseno e: %lf\n", cos(rad));
    printf("O valor da tangente e: %lf\n", tan(rad));

    return 0;
}