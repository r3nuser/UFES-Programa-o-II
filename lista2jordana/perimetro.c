#include <stdio.h>

typedef struct point{
	int x;
	int y;
} Ponto;

int
main(){
	int altura = 0,
	    largura = 0;
	Ponto inf_esquerdo,
	      sup_direito;

	printf("Insira a altura: \n");
	scanf("%d", &altura);
	printf("Insira a largura: \n");
	scanf("%d", &largura);

	printf("\nO perimetro do retangulo e: %d\n", (2*largura+2*altura));

	printf("Insira o ponto inferior esquerdo:\n");
	scanf("%d %d", &inf_esquerdo.x, &inf_esquerdo.y);

	printf("Insira o ponto superior direito:\n");
	scanf("%d %d", &sup_direito.x, &sup_direito.y);

	printf("\n sup_direito (%d,%d)\n", sup_direito.x, sup_direito.y);
	printf("inf_esquerdo (%d,%d)\n", inf_esquerdo.x, inf_esquerdo.y);

	printf("\nO perimetro do retangulo e: ");
	printf("%d \n", ((sup_direito.y - inf_esquerdo.y)*2 +
			(sup_direito.x - inf_esquerdo.x)*2) );

	return 0;
}
