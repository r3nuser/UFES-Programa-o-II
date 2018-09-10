#include <stdio.h>

void swap(int* a, int* b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void
sequencia_pares(int a, int b){
	int i = 0;
	if( a > b ) swap(&a, &b);
	for( i = a; i <= b; i++ )
		if( i % 2 == 0 ) printf("%d ", i);
}

int
main(void){
	int a = 0,
	    b = 0;

	scanf("%d %d", &a, &b);
	sequencia_pares(a,b);

	return 0;
}
