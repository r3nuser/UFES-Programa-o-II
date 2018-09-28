#include <stdio.h>

#define LENGTH 10
#define _CLEAR system("clear")

void print_vector(int *a, int len);
void swap(int *a, int *b);
void bubble_sort(int *a, int len);
int sequential_search(int *a, int len, int value);
void read_vector(int *a );
int binary_search(int *a, int value, int l, int r);

int binary_search(int *a, int value, int l, int r){
	int floor = (r + l) / 2;
	system("sleep 1");
	printf("Buscando %d em ", value);
	print_vector(a, LENGTH);
	printf("Entre %d e %d com pivo em %d\n", l, r, floor);

	if(a[floor] == value) return floor;
	if( r == l ) return -1;
	if(a[floor] > value) return binary_search(a, value, l, floor);
	if(a[floor] < value) return binary_search(a, value, floor + 1, r);
}

void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void bubble_sort(int *a, int len){
	int i = 0,
	    j = 0;
	_CLEAR;
	printf("Initial vector: ");
	print_vector(a, len);
	for( j = 0 ; j < LENGTH ; j++ ){
		for( i = 0 ; i < len - 1 ; i++ ){
			if(a[i] > a[i+1]) swap(&a[i], &a[i+1]);
		}
		len--;
	}
	printf("Final vector: ");
	print_vector(a, LENGTH);
}

int sequential_search(int *a, int len, int value){
	int i = 0;

	for( i = 0 ; i < len ; i++ ){
		if( value == a[i] )
			return 1;
	}

	return 0;
}

void print_vector(int *a, int len){
	int i = 0;

	for( i = 0 ; i < len ; i++ ){
		printf("[%d]", a[i]);
	}
	printf("\n");
}

void read_vector( int *a ){
	int i = 0;

	for( i = 0 ; i < LENGTH ; i++ ){
		do {
			_CLEAR;
			print_vector(a, i);
			printf("Insira elementos distintos:\n");
			scanf("%d", &a[i]);
		} while( sequential_search(a, i, a[i]) );
		_CLEAR;
		print_vector(a, i);
	}
}

int main(void){
	int a[LENGTH],
	    value = 0;

	read_vector(a);
	bubble_sort(a, LENGTH);

	printf("Insira o valor da busca:\n");
	scanf("%d", &value);

	value = binary_search(a, value, 0, LENGTH - 1);

	if( value == -1 ) printf("Valor não encontrado !\n");
	else printf("Valor encontrado no indice %d", value);

	return 0;
}
