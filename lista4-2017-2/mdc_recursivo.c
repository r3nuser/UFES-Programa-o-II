#include <stdio.h>

void swap( int *a, int *b ){
	int aux = *a;
	*a = *b;
	*b = aux;
}

int mdc( int a, int b ){
	if ( b > a ) swap(&a, &b);
	if ( b == 0 ) return a;
	else return mdc(a-b, b);
}

int main( void ){
	int a = 0,
	    b = 0;

	scanf("%d %d", &a, &b);

	printf("MDC: %d\n", mdc(a,b));

	return 0;
}
