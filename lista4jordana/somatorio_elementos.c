#include <stdio.h>

#define LENGTH 10

int read_vetor(int *v){
	int i = 0;

	for( i = 0 ; i < LENGTH ; i++ ){
		scanf("%d", &v[i]);
	}
}

int somatorio(int *v){
	int i = 0,
	    soma = 0;

	for( i = 0 ; i < LENGTH ; i++ ){
		soma += v[i];
	}

	return soma;
}

int main(void){
	int v[LENGTH];

	read_vetor(v);

	printf("\nSomatorio:%d\n", somatorio(v));

	return 0;
}
