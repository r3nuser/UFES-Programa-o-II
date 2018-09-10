
#include <stdlib.h>
#include <stdio.h>

typedef struct vector_2_d{
	int i;
	int j;
} Vector_2_d;

int** multiply_matrix(int** a, int** b, Vector_2_d a_dim, Vector_2_d b_dim);
void print_matrix(int** a, Vector_2_d a_dim);
void read_matrix(int** a, Vector_2_d a_dim);
int** create_matrix(Vector_2_d a_dim);

int** multiply_matrix(int** a, int** b, Vector_2_d a_dim, Vector_2_d b_dim){
	int i = 0,
	    j = 0,
	    k = 0,
 	    l = 0;
	int **c;
	Vector_2_d c_dim;
	if(a_dim.j != b_dim.i) return NULL;

	c_dim.i = a_dim.i;
	c_dim.j = b_dim.j;

	c = create_matrix(c_dim);

	for( i = 0 ; i < a_dim.i ; i++ ){
		for( j = 0 ; j < b_dim.j ; j++ ){
			for( k = 0 ; k < a_dim.j ; k++ ){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	return c;
}

void print_matrix(int** a, Vector_2_d a_dim){
	int i = 0,
	    j = 0;
	printf("\n");
	for( i = 0 ; i < a_dim.i ; i++ ){
		for( j = 0 ; j < a_dim.j ; j++ )
			printf("[%d]", a[i][j]);
		printf("\n");
	}
	printf("\n");

}

void read_matrix(int** a, Vector_2_d a_dim){
	int i = 0,
	    j = 0;
	for( i = 0 ; i < a_dim.i ; i++ ){
		for( j = 0 ; j < a_dim.j ; j++ ){
			printf("Insira o valor da [%d,%d]:\n", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}

int** create_matrix(Vector_2_d a_dim){
	int i = 0;
	int** a = (int**) malloc(a_dim.i * sizeof(int*));
	for( i = 0 ; i < a_dim.i ; i++ ){
		a[i] = (int *) malloc(a_dim.j * sizeof(int));
	}
	return a;
}

int main(void){
	Vector_2_d a_dim;
	Vector_2_d b_dim;
	Vector_2_d c_dim;

	a_dim.i = 3;
	a_dim.j = 2;

	b_dim.i = 2;
	b_dim.j = 4;

	c_dim.i = 3;
	c_dim.j = 4;

	// a [3][2]
	// b [2][4]
	// c [3][4]

	int **a,
	    **b,
	    **c;

	a = create_matrix(a_dim);
	b = create_matrix(b_dim);


	read_matrix(a, a_dim);
	read_matrix(b, b_dim);

	c = multiply_matrix(a, b, a_dim, b_dim);

	print_matrix(a, a_dim);
	print_matrix(b, b_dim);
	print_matrix(c, c_dim);

	return 0;
}
