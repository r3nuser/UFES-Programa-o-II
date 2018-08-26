#include <stdlib.h>
#include <stdio.h>

int
mdc_euclidiano(int menor, int maior){
	if( maior % menor == 0 ) return menor;

	while ( maior % menor != 0 ) {
		int aux = menor;
		menor = maior % menor;
		maior = menor;
	};
	return maior;
}
int
main(void){
	int n = 0,
	    m = 0;

	printf("Insira um valor para N e M: ");
	scanf("%d %d", &n, &m);

	while( n >= m ){
		printf("O valor de N deve ser menor que M:\n");
		printf("Insira um valor para N e M: ");
		scanf("%d %d", &n, &m);
	}

	printf("\n%d %d MDC = %d\n", n, m, mdc_euclidiano(n, m));

	return 0;
}
