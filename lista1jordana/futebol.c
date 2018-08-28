#include <stdio.h>

int
game(){
	int gol_vasco = 0,
	    gol_flamengo = 0,
	    jogar = 0;

	printf("Insira o numero de gols pelo flamengo:\n");
	scanf("%d", &gol_flamengo);
	printf("Insira o numero de gols pelo vasco:\n");
	scanf("%d", &gol_vasco);

	if( gol_flamengo > gol_vasco ){
		printf("Flamengo campeao\n");
	}else if( gol_vasco < gol_flamengo ){
		printf("Vasco campeao\n");
	}else
		printf("Empate\n");

	printf("\nDeseja jogar novamente:\n");
	printf("1 - SIM\n");
	printf("2 - NAO\n");
	scanf("%d", &jogar);

	if ( jogar == 1) return 1;
	else return 0;
}

int
main(void){
	do {
		game();
	} while ( game() );
	return 0;
}
