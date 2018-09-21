#include <stdio.h>

#define LEN 10

void soma( int *v, int *w , int len){
	int i = 0;

	for( i = 0 ; i < len ; i++ ){
		v[i] += w[i];
	}
}

int main( void ){
	int v[LEN],
	    w[LEN],
	    i = 0;

	for( i = 0 ; i < LEN ; i++ ){
		scanf("%d %d", &v[i], &w[i]);
	}

	soma(v, w, LEN);
	printf("\n");
	for( i = 0 ; i < LEN ; i++ ){
		printf("%d\n", v[i]);
	}

	return 0;
}
