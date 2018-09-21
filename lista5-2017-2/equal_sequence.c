#include <stdio.h>

#define LEN 10

int equal_sequence(int *v, int *w, int len){
	int equals = 0,
	    i = 0;

	for( i = 0 ; i < len ; i++ )
		if( v[i] == w[i] ) equals++;

	return equals == len;
}

int main( void ){
	int v[LEN],
	    w[LEN],
	    i = 0;

	for ( i = 0 ; i < LEN ; i++ ){
		scanf("%d %d", &v[i], &w[i]);
	}

	if( equal_sequence(v, w, LEN) )
		printf("Estão na mesma sequencia\n");
	else printf("Não estão na mesma sequencia\n");

	return 0;
}
