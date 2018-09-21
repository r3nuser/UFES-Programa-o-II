#include <stdio.h>

int fatorial( int n ){
	if ( n > 1 )
		return n * fatorial(n-1);
	return n;
}

int main( void ){
	int n = 0;
	scanf("%d", &n);

	printf("\n%d\n", fatorial(n));
	return 0;
}
