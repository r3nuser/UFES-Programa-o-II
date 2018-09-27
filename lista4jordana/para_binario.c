#include <stdio.h>

int main(void){
	int palavra[50];
	int n = 0,
	    i = 0;

	scanf("%d", &n);

	while( n != 0 ){
		palavra[i] = n%2;
		n /= 2;
		i++;
	}

	for( n = i - 1 ; n >= 0 ; n-- ){
		printf("%d", palavra[n]);
	}
	printf("\n");

	return 0;
}
