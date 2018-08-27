#include <math.h>
#include <stdio.h>

int main(int argc, char** argv){
	float i = 1,
	      k = 0;
	int n = 0;

	scanf("%d", &n);

	for( i = 1 ; i <= n ; i++ ){
		k +=  6/pow(i, 2);
	}

	k = sqrt( k );

	printf("\nPI Value: %f\n", k);

	return 0;
}
