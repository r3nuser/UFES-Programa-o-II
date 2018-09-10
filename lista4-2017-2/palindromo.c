#include <stdio.h>

int
inverte_n(unsigned int n){
	unsigned int inverso = 0;

	while( n > 0 ){
		inverso += n % 10;
		n /= 10;
		if( n > 0 ) inverso *= 10;
	}

	return inverso;
}

int
palindromo(unsigned int n){
	unsigned int inverso = inverte_n(n);

	return inverso == n;
}

int
main(void){
	unsigned int n = 0;

	scanf("%d", &n);

	if( palindromo(n) ) printf("\nPalindromo\n");
	else printf("\nNao e palindromo\n");

	return 0;
}
