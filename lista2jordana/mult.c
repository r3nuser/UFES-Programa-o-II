#include <stdio.h>

int
main(void){
	int n = 0;

	do{
		printf("Insira o numero:\n");
		scanf("%d", &n);

		if ( n % 2 == 0 &&
		     n % 3 == 0 &&
		     n % 5 == 0 &&
		     n % 7 == 0 )
			printf("Saida: 0\n");
		else if ( n % 2 == 0 || n % 3 == 0 )
			printf("Saida: 1");
		else if( n % 5 == 0 && n % 7 == 0 )
			printf("Saida: 2");
	} while( n != 1 );
	return 0;
}
