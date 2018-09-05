#include <math.h>
#include <stdio.h>

int
main(void){
	int x = 0,
	    i = 0;
	long double s = 0;

	printf("Insira o valor de X :\n");
	scanf("%d", &x);

	for( i = 0 ; i < x ; i++ ){
		s += exp(i);
	}

	printf("\n%.6Lf\n", s);

	return 0;
}
