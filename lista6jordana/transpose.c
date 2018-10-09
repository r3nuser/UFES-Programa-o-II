#include <stdio.h>

void read(int a[5][3]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 5 ; i++ )
		for( j = 0 ; j < 3 ; j++ ){
			printf("Insira o %d %d: ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void print(int a[3][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 3 ; i++ ){
		for( j = 0 ; j < 5 ; j++ )
			printf("[%d]", a[i][j]);
		printf("\n");
	}
	
	printf("\n");
}

void transpose(int a[5][3], int dest[3][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 3 ; i++ ){
		for(j = 0 ; j < 5 ; j++ ){
			dest[i][j] = a[j][i];
			printf("Colocando [%d, %d] = %d em [%d, %d] \n", j, i,a[j][i], i, j);
		}
	}
}

int main(void){
	int a[5][3];
	int b[3][5];

	read(a);
	transpose(a,b);
	
	print(b);

	return 0;
}
