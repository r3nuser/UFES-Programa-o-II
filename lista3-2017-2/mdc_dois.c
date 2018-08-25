#include <stdlib.h>
#include <stdio.h>

int
get_primo(int pos){
	if(!pos || pos<0) return 0;

	int counter = 0,
            i = 0,
	    limit = 1,
	    iterator = 0;

	int *primos = (int*) malloc(sizeof(int));

	for( i = 0 ; i < pos ; i++ ){

		while( 1 ){
			iterator++;
			printf("Iterator = %d ; Limit = %d \n", iterator, limit);
			if(limit % iterator == 0){ 
				printf("\n%d divisivel por %d ",limit, iterator);
				counter++;
				printf("\nCONTADOR: %d\n", counter);
			}

			if(iterator >= limit ){
				printf("\nIterador %d maior que o limite %d\n",iterator,limit);
				limit++;
				iterator = 0;
				if( counter == 2 || limit-1 == 1 ){
					printf("\n%d primo !!\n", limit-1);
					primos[i] = limit-1;
					primos = (int*) realloc(primos, (sizeof(int)*(i+1)));
					counter = 0;
					break;
				}
				counter = 0;
			}

		}
	}

	return primos[pos-1];
}

int
mdc(int a, int b){
	if(a < 0 || b < 0 || a > b) return 0;
}

int
main (void){
	int n = 0,
	    m = 0;

	printf("Insira um valor para N e M: ");
	scanf("%d %d", &n, &m);

	while( n >= m ){
		printf("O valor de N deve ser menor que M:\n");
		printf("Insira um valor para N e M: ");
		scanf("%d %d", &n, &m);
	}

	printf("\n%d %d\n", get_primo(n), get_primo(m));


	return 0;
}
