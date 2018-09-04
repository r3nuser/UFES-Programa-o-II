#include <stdio.h>

int
main(void){
	int d1 = 0,
	    d2 = 0,
	    n = 0,
	    i = 0;

	do{
		printf("Insira um valor para n\n");
		scanf("%d", &n);
	} while ( n <= 0 );

	for ( i = 0 ; i < n ; i++ ){
		scanf("%d %d", &d1, &d2);
		if ( d1 > d2 ){
			printf("%d > %d\n", d1, d2);
		} else if ( d1 < d2 ){
			printf("%d < %d\n", d1, d2);
		} else {
			printf("%d = %d\n", d1, d2);
		}
	}

	return 0;
}
