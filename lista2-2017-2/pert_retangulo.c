#include <stdio.h>

typedef struct point{
    int x;
    int y;
} Point;

char*
pert_retangulo(Point sup_esquerdo, Point inf_direito, Point p){
    return (p.x>=sup_esquerdo.x&&p.x<=inf_direito.x)&&(p.y<=sup_esquerdo.y&&p.y>=inf_direito.y)?"Pertence.":"Não pertence."; 

}

int
main(void){
    Point sup_esquerdo,
          inf_direito,
          ponto;
    
    printf("Insira a coordenada superior esquerda do retangulo: ");
    scanf("%d %d", &(sup_esquerdo.x),&(sup_esquerdo.y));
    printf("Insira a coordenada inferior direita do retangulo: ");
    scanf("%d %d", &(inf_direito.x),&(inf_direito.y));
    printf("Insira a coordenada do ponto que deseja verificar: ");
    scanf("%d %d", &(ponto.x),&(ponto.y));

    printf("%s\n",pert_retangulo(sup_esquerdo,inf_direito,ponto));
    return 0;
}