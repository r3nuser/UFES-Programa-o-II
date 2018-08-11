#include <stdio.h> 

float 
area_circ(float raio){
    return 3.14*raio*raio;
}

int
main(void){
    float raio = 0;

    printf("Insira o raio: ");
    scanf("%f", &raio);

    printf("A area do circulo é: %f\n", area_circ(raio));
    
    return 0;
}