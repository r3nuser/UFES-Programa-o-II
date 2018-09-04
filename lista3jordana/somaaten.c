#include <stdio.h>

int
main(void){
	int a = 0,
	    i = 0,
	    n = 0,
	    soma = 0;

	printf("Insira o valor para A:\n");
	scanf("%d", &a);

	do{
		printf("Insira um valor N:\n");
		scanf("%d", &n);
	} while ( n <= 0 );

	for ( i = a ; i < a + n ; i++ ){
		soma += i;
	}

	printf("Soma = %d\n", soma);

	return 0;
}
