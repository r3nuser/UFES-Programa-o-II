#include <stdio.h>

int mdc( int a, int b );
void swap( int *a, int *b );

void swap( int *a, int *b ){
	int aux = *a;
	*a = *b;
	*b = aux;
}

int mdc( int a, int b ){
	while( b != 0 ){
		if( b > a ) swap(&a, &b);
		a -= b;
	}
	return a;
}

int main( void ){
	int a = 0,
	    b = 0;

	scanf("%d %d", &a, &b);

	printf("MDC: %d\n", mdc(a, b));

	return 0;
}
