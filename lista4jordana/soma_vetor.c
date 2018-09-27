#include <stdio.h>

#define LENGTH 10

void read_vetor(int *v){
	int i = 0;

	for( i = 0 ; i < LENGTH ; i++ ){
		scanf("%d", &v[i]);
	}
}

void print_vetor(int *v){
	int i = 0;
	for( i = 0 ; i < LENGTH ; i++ )
		printf("|%d|\n", v[i]);
}

void soma(int *v, int *w, int *dest){
	int i = 0;
	for( i = 0 ; i < LENGTH ; i++ ){
		dest[i] = v[i] + w[i];
	}
}

int main(){
	int v[LENGTH],
	    w[LENGTH],
	    z[LENGTH];

	read_vetor(v);
	read_vetor(w);
	soma(v,w,z);
	print_vetor(z);

	return 0;
}
