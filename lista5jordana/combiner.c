#include <stdio.h>
#include <string.h>


char* substring(char *a, int index){
	int i = 0;

	if( index > strlen(a) ) return " ";

	for( i = index ; i < index + strlen(a) ; i++ ){
		a[i - index] = a[i];
	}

	return a;
}

void alterna(char *a, char *b, char *dest){
	int i = 0,
	    j = 0,
	    k = 0,
	    min = strlen(a) > strlen(b) ? strlen(b) : strlen(a);

	for( k = 0 ; k < min * 2 ; k++ ){
		if( k % 2 == 0){
			dest[k] = a[i];
			i++;
		} else {
			dest[k] = b[j];
			j++;
		}
	}

	dest[k] = '\0';

	if( strlen(a) > strlen(b) )
		printf("\n%s\n", strcat(dest, substring(a,i)));
	else printf("\n%s\n", strcat(dest, substring(b,j)));

}

int main(int argc, char **argv){

	if( argc < 3 ){
		printf("Insira duas strings\n");
		return 0;
	}

	char dest[strlen(argv[1]) + strlen(argv[2]) + 1];

	alterna(argv[1], argv[2], dest);

	return 0;
}
