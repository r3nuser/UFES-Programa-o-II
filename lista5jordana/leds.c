#include <stdio.h>

int leds( int n ){
	switch( n ){
		case 0:
		case 6:
		case 9:
			return 6;
		case 1:
			return 2;
		case 2:
		case 3:
		case 5:
			return 5;
		case 4:
			return 4;
		case 7:
			return 3;
		case 8:
			return 7;
		default:
			return 0;
	}
}

int main(){
	int counter = 0,
	    i = 0;
	char numero[50];

	printf("Insira o numero:\n");
	scanf("%s", numero);

	while( numero[i] != '\0' ){
		counter += leds( numero[i] - 48);
		i++;
	}

	printf("LEDS necessarios: %d\n", counter);

	return 0;
}
