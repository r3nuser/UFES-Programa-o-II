#include <stdio.h>

#define LEN 10
#define _QUIT_INC if( aux == len - 1 ) return 0; else aux = 0;
#define _QUIT_DEC if( aux == len - 1 ) return 1;

int order_flag( int *v, int len ){
	int i = 0,
	    aux = 0;
	// FLAG 0 RETURNS INC ORDER OR CONST
	for ( i = len ; i >= 1 ; i-- ){
		if( v[i] != v[i-1] ) break;
		aux++;
	}
	_QUIT_INC
	for ( i = len ; i >= 1 ; i-- )
		if( v[i] >= v[i-1] ) aux++;
	_QUIT_INC
	// FLAG 1 RETURNS DEC ORDER
	for ( i = len ; i >= 1 ; i-- )
		if( v[i] <= v[i-1] ) aux++;
	_QUIT_DEC
	// FLAG 2 RETURNS UNORDER
	return 2;
	// OTHER FLAG RETURN ERROR
	return -1;
}

int main( void ){
	int v[LEN],
	    i = 0;

	for( i = 0 ; i < LEN ; i++ ){
		scanf("%d", &v[i]);
	}

	switch( order_flag( v, LEN ) ){
		case 0:
			printf("Ordenado crescente ou constante\n");
			break;
		case 1:
			printf("Ordenado decrescente\n");
			break;
		case 2:
			printf("Desordenado\n");
			break;
		default:
			printf("Erro\n");
			break;
	}

	return 0;
}
