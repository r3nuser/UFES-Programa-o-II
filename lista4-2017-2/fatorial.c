#include <stdlib.h>
#include <stdio.h>

int
fatorial(int n){
	if( n == 0 ) return 0;
	int i = 0,
	    fat = 1;
	for ( i = 1 ; i <= n ; i++ )
		fat*=i;
	return fat;
}

int
main(void){
	int n = 0;
	do {
		printf("Insira um numero positivo para calcular o fatorial:\n");
		scanf("%d", &n);
	} while ( n < 0 );

	printf("Fatorial: %d\n", fatorial(n));
	printf("%d\n", sizeof(int));
	return 0;
}
