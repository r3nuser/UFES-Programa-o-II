#include <stdio.h>

int
primoAt(int n){
	int i = 0,
	    mult = 0,
	    valor = 0,
	    max = 2;
	while ( 1 ){
		for( i = 1 ; i <= max ; i++ ){
			if( max % i == 0 ) mult++;
		}
		if( mult == 2 ) valor++;
		if ( n == valor ) break;
		else max++;
		mult = 0;
	}

	return max;
}

int
main(void){
	int i = 0,
	    n = 0,
	    fat = 0;

	printf("Insira o valor de n\n");
	scanf("%d", &n);

	for( i = 1 ; i <= n ; i++ ){
		if ( n % primoAt(i) == 0 ) printf("%d ", primoAt(i));
		while ( n % primoAt(i) == 0 ){
			n /= primoAt(i);
			fat++;
		}
		if ( fat != 0 ) printf("%d\n", fat);
		fat = 0;
	}

	return 0;
}
