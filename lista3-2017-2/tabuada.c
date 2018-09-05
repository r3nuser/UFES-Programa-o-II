#include <stdio.h>

int
main(void){
	int n = 0,
	    m = 0,
	    i = 0,
	    j = 0;

	do {
		printf("Insira um valor valido para N e M:\n");
		scanf("%d %d", &n, &m);
	} while ( n <= 0 || m <= 0 );

	for ( i = n ; i <= m ; i++ ){
		for ( j = i ; j <= 10 ; j++ ){
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}

	return 0;
}
