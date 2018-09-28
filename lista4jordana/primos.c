#include <stdio.h>

#define LENGTH 50

int isPrimo(int v){
	int i = 0,
	    counter = 0;

	for( i = 1 ; i < ((int) v / 2) + 1 ; i++ ){
		if( v % i == 0 ) counter++;
	}

	return counter == 1;
}

void preencheVetor(int *v){
	int i = 0;

	for( i = 0 ; i < LENGTH;  i++ )
		v[i] = i;
}

int main(){
	int vetor[50],
	    i = 0;

	preencheVetor(vetor);

	for( i = 0 ; i < LENGTH ; i++ )
		if( isPrimo(vetor[i]) )
			printf("%d\n", vetor[i]);

	return 0;
}
