#include <stdio.h>

typedef struct point{
    int x;
    int y;
}Point;

int
perimetro(Point a, Point b){
    return ((b.x-a.x)*2)+((b.y-a.y)*2);
}

int
main(void){
    Point inf_esquerdo,
          sup_direito;
    
    printf("Insira o ponto inferior esquerdo: ");
    scanf("%d %d", &(inf_esquerdo.x), &(inf_esquerdo.y));
    printf("Insira o ponto superior direito: ");
    scanf("%d %d", &(sup_direito.x), &(sup_direito.y));

    printf("O perimetro e: %d\n",perimetro(inf_esquerdo,sup_direito));

    return 0;
}