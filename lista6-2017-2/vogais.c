#include <stdio.h>
#include <string.h>

int vogais(char string[]){
	int vogais = 0,
	    i = 0;

	for( i = 0 ; i < strlen(string) ; i++ ){
		switch( string[i] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vogais++;
				break;
			default:
				continue;
		}
	}

	return vogais;
}

int main(void){
	char string[50];
	scanf("%[^\n]s", string);
	printf("Numero de vogais: %d\n", vogais(string));

	return 0;
}
