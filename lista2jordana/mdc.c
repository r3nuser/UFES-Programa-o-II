#include <stdio.h>

void
swap( int* x, int* y ){
	int aux = *x;
	*x = *y;
	*y = aux;
}

int
mdc( int x, int y ){
	if ( x < y ) swap( &x, &y );
	if ( y == 0 ) return x;
	else return mdc( x - y, y );
}

int
main(void){
	int a, b;

	printf("Insira o primeiro numero\n");
	scanf("%d", &a);
	printf("Insira o segundo numero\n");
	scanf("%d", &b);

	printf("MDC: %d\n", mdc(a,b));

	return 0;
}
