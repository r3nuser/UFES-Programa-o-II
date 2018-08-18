#include <stdio.h>
#include <stdlib.h>

int
main(void){
	int n = 0,
	    m = 0,
	    i = 0;

	printf("Insira um valor para N e M:");
	scanf("%d %d", &n, &m);

	while( n > m ){
		printf("N deve ser menor que M:\n");
		printf("Insira um valor para N e M:");
		scanf("%d %d", &n, &m);
	}

	printf("Pares:\n");
	for( i = n ; i <= m ; i++ )
		if( i % 2 == 0)
			printf("%d\n", i);

	return 0;
}
