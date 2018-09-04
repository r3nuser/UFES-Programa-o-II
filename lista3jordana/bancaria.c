#include <stdio.h>

int
main(void){
	int menu = 0;
	float saldo = 0,
	      entrada = 0;
	do{
		printf("1 - depósito\n");
		printf("2 - retirada\n");
		printf("3 - fim\n");
		scanf("%d %f", &menu, &entrada);
		switch( menu ){
			case 1:
				saldo += entrada;
				break;
			case 2:
				saldo -= entrada;
				break;
			case 3:
			default:
				break;
		}
	} while ( menu != 3 );

	printf("Saldo:%f\n", saldo);
	if( saldo > 0 ) printf("Conta Positiva\n");
	else if( saldo < 0 ) printf("Conta Estourada");
	else printf("Conta Zerada");

	return 0;
}

