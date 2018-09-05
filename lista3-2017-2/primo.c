#include <stdio.h>

int
main(void){
	int n = 0,
	    i = 0,
	    mult = 0;

	printf("Insira o valor para n:\n");
	scanf("%d", &n);

	for ( i = 1 ; i <= n ; i++ )
		if ( n % i == 0 ) mult++;

	if ( mult == 2 ) printf("O numero %d é primo\n", n);
	else printf("O numero %d não é primo\n", n);

	return 0;
}
