#include <stdio.h>
#define MAX_LENGTH_A 10
#define MAX_LENGTH_B 5

void print_vetor(int *v, int len){
	int i = 0;
	for( i = 0 ; i < len ; i++ )
		printf("%d\n", v[i]);
}

void leitura_distinta(int *v, int len){
	int i = 0,
	    j = 0,
	    lidos = 0;

	for( i = 0 ; i < len ; i++ ){
		printf("Insira o %d valor:\n", i+1);
		scanf("%d", &v[i]);
		for( j = 0; j < lidos ; j++ ){
			if( v[i] == v[j] ){
				printf("Valor repetido\n");
				printf("Insira novamente ...\n");
				i--;
				lidos--;
				break;
			}
		}
		lidos++;
	}

}

void contido(int *a, int a_length ,int *b, int b_length){
	int i = 0,
	    j = 0,
	    contidos = 0;
	for( i = 0 ; i < b_length ; i++ )
		for( j = 0 ; j < a_length ; j++ )
			if( b[i] == a[j] ){
				contidos++;
				break;
			}
	if( contidos == b_length )
		printf("Totalmente contido\n");
	else if( !contidos )
		printf("Nao esta contido\n");
	else printf("Parcialmente contido\n");
}

int main(void){
	int a[MAX_LENGTH_A],
	    b[MAX_LENGTH_B];

	leitura_distinta(a, MAX_LENGTH_A);
	leitura_distinta(b, MAX_LENGTH_B);

	contido(a, MAX_LENGTH_A, b, MAX_LENGTH_B);
}
