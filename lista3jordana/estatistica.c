#include <stdio.h>

int
main(void){
	char leitura;
	int carros = 0,
	    quilometragem_total = 0,
	    quilometragem = 0,
	    invalidas = 0;
	while( 1 ){
		do{
			printf("Deseja realizar uma nova leitura? S/N\n");
			scanf(" %c", &leitura);
			if( leitura == 'S' || leitura == 'N' ) break;
			printf("Dados invalidos, insira novamente\n");
			invalidas++;
		} while( leitura != 'S' || leitura != 'N' );
		if ( leitura == 'N' ) break;
		else{
			do{
				printf("Insira a quilometragem:\n");
				scanf("%d", &quilometragem);
				if ( quilometragem >= 0 ) break;
				printf("Quilometragem invalida\n");
				invalidas++;
			} while ( quilometragem <= 0 );
			quilometragem_total += quilometragem;
		}
		carros++;
	}
	printf("Quantidade de carros pesquisados: %d\n", carros);
	printf("Quilometragem total: %d\n", quilometragem_total);
	printf("Quantidade de dados invalidos: %d\n", invalidas);
	return 0;
}
