#include <math.h>
#include <stdio.h>

float
area_circulo(float r){
    return 3.141592*r*r;
}

float
raio_circulo(float a){
    return sqrt(a/(3.141592));
}

int 
main(void){
    float area = 0,
          raio = 0;

    printf("Insira o raio para calcular a area: ");
    scanf("%f", &raio);

    area = area_circulo(raio);

    printf("A area do circulo com raio %f e: %f\n", raio, area);
    printf("O raio do circulo com area %f e: %f", area/2, raio_circulo(area/2));

    return 0;
}