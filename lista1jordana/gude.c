#include <stdio.h>

int
pert_altura(float n){
	return n >= 1.75 && n <= 1.90;
}

int
pert_peso(float n){
	return n >= 70 && n <= 80;
}

int
main(void){
	float peso = 0,
	      altura = 0;

	printf("Insira o peso:\n");
	scanf("%f", &peso);
	printf("Insira a altura:\n");
	scanf("%f", &altura);

	if( !pert_altura(altura) && !pert_peso(peso) )
		printf("TOTALMENTE RECUSADO\n");
	else if( !pert_altura(altura) )
		printf("RECUSADO POR ALTURA\n");
	else if( !pert_peso(peso) )
		printf("RECUSADO POR PESO\n");
	else
		printf("ACEITO\n");

	return 0;
}
