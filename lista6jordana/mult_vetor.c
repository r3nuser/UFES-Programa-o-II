#include <stdio.h>

void read(int a[3][3]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 3 ; i++ )
		for( j = 0 ; j < 3 ; j++ ){
			printf("Insira o %d %d: \n", i, j);
			scanf("%d", &a[i][j]);
		}
}

void readvetor(int a[]){
	int i = 0;
	for( i = 0 ; i < 3 ; i++ ){
		printf("Insira o %d: \n", i);
		scanf("%d", &a[i]);
	}
}

void print(int a[3][3]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 3 ; i++ ){
		printf("\n");
		for( j = 0 ; j < 3 ; j++ )
			printf("[%d]", a[i][j]);
	}
	printf("\n");
}

void printvetor(int a[]){
	int i = 0;
	
	for( i = 0 ; i < 3 ; i++ ){
		printf("[%d]\n", a[i]);
	}
	printf("\n");
}

void produto(int a[3][3], int b[3], int c[3]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 3 ; i++ )
			c[i] = 0;

	for( i = 0 ; i < 3 ; i++ )
		for( j = 0 ; j < 3 ; j++ )
				c[i] += a[i][j] * b[j];
}

int main(void){
	int a[3][3];
	int b[3];
	int c[3];

	read(a);
	readvetor(b);
	produto(a, b, c);
	print(a);
	printvetor(b);
	printvetor(c);

	return 0;
}
