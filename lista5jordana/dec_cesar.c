#include <stdio.h>

int main(void){
	char texto[50];
	int key = 0,
	    i = 0;

	scanf("%s %d", texto, &key);

	while( texto[i] != '\0' ){
		texto[i] -= key;
		i++;
	}

	printf("Decodificado: %s\n", texto);

	return 0;
}
