#include <stdio.h>

#define LEN 10

int min( int *v, int len ){
	int i = 0,
	    min = v[0];
	for( i = 1 ; i < len ; i++ )
		if( v[i] < min )
			min = v[i];
	return min;
}

int main( void ){
	int v[LEN],
	    i = 0;

	for( i = 0 ; i < LEN ; i++ ){
		scanf("%d", &v[i]);
	}

	printf("\n%d\n", min(v,LEN));

	return 0;
}
