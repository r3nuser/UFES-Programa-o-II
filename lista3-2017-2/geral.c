#include <stdio.h>

int
impar (int n){
	return n % 2;
}

int
Maior (int n, int n2){
	return n > n2;
}

int
Menor (int n, int n2){
	return n < n2;
}

int
main (void){
	int n = 0,
            maior = 0,
            menor = 0,
            impares = 0,
            pares = 0,
	    loops = 0,
            media = 0;

	do {
		scanf("%d", &n);

		if ( loops == 0 ){
			maior = n;
			menor = n;
		} else {
			if ( Maior( n, maior ) ) maior = n;
			else if ( Menor( n, menor ) ) menor = n;
		}

		if (impar(n)) impares++;
		else pares++;

		media += n;
		loops++;
	} while ( n != 0);

	media /= loops;

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Impares: %d\n", impares);
	printf("Pares: %d\n", pares);
	printf("Media: %d\n", media);

	return 0;
}
