#include <stdio.h>

void read(int a[5][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 5 ; i++ )
		for( j = 0 ; j < 5 ; j++ ){
			printf("Insira o %d %d: ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void print(int a[5][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 5 ; i++ ){
		printf("\n");
		for( j = 0 ; j < 5 ; j++ )
			printf("[%d]", a[i][j]);
	}
	printf("\n");
}

void produto(int a[5][5], int b[5][5], int c[5][5]){
	int i = 0;
	int j = 0;
	int k = 0;

	for( i = 0 ; i < 5 ; i++ )
		for( j = 0 ; j < 5 ; j++)
			c[i][j] = 0;

	for( i = 0 ; i < 5 ; i++ )
		for( j = 0 ; j < 5 ; j++ )
			for( k = 0 ; k < 5 ; k++ )
				c[i][j] += a[i][k] * b[k][j];
}

int main(void){
	int a[5][5];
	int b[5][5];
	int c[5][5];

	read(a);
	read(b);
	produto(a, b, c);
	print(a);
	print(b);
	print(c);

	return 0;
}
