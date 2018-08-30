#include <stdio.h>

int
fibonacci(int n){
	if ( n == 1 || n == 2 ) return 1;
	else return fibonacci(n-1) + fibonacci(n-2);
}

int
main(void){
	int n = 0,
	    i = 0,
	    somatorio = 0;

	printf("Insira o numero de N:\n");
	scanf("%d", &n);

	for( i = 1 ; i <= n ; i ++ ){
		somatorio += fibonacci(i);
		printf("%d ", fibonacci(i));
	}

	printf("\n");
	printf("Somatorio: %d\n", somatorio);

	return 0;
}
