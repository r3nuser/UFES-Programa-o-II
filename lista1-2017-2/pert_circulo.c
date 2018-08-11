#include <math.h>
#include <stdio.h>

typedef struct point{
    int x;
    int y;
} Point;

float
dist_euclidiana(Point a, Point b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int
pert_circulo(Point centro, float raio, Point ponto){
    return dist_euclidiana(ponto, centro) <= raio ? 1 : 0;
}

int 
main(void){
    Point centro,
          ponto;
    float raio = 0;
    
    printf("Insira a coordenada do centro do circulo: ");
    scanf("%d %d", &(centro.x), &(centro.y));

    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    printf("Insira a coordenada para verificar a pertinencia: ");
    scanf("%d %d", &(ponto.x), &(ponto.y));

    if ( pert_circulo(centro,raio,ponto) ) printf("Pertence ! \n");
    else printf("Não pertence ! \n");

    return 0;
}

