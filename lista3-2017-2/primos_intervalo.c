#include <stdio.h>

int
main(void){
	int n = 0,
	    m = 0,
	    i = 0,
	    j = 0,
	    mult = 0;

	printf("Insira o valor para n ");
	scanf("%d", &n);

	do {
		printf("Insira o valor para m ");
		scanf("%d", &m);
	} while ( m <= n );

	printf("\n");

	for ( i = n ; i <= m ; i++ ){
		for ( j = 1 ; j <= i ; j++ )
			if( i % j == 0 ) mult++;
		if( mult == 2 ) printf("%d\n", i);
		mult = 0;
	}

	return 0;
}
