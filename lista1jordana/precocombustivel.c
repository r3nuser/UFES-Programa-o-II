#include <stdio.h>


int
main(void){
	int escolha = 0,
	    litros = 0;

	float preco_total = 0;

	printf("\nEscolha qual combustivel:\n");

	printf("0: Gasolina - R$ 3,15\n");
	printf("1: Alcool   - R$ 2,83\n");

	scanf("%d", &escolha);

	while( escolha != 0 && escolha != 1 ){
		printf("\nPor favor, escolha corretamente:\n");
		printf("0: Gasolina - R$ 3,15\n");
		printf("1: Alcool   - r$ 2,83\n");
		scanf("%d", &escolha);
	}

	printf("Insira o numero de litros\n");
	scanf("%d", &litros);

	if( escolha ) preco_total = litros * 2.83;
	else preco_total = litros * 3.15;

	printf("Preço total a ser pago: %f\n", preco_total);

	return 0;
}
