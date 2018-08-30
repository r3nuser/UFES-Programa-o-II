#include <math.h>
#include <stdio.h>

float
s1(int n){
	if( n <= 0 ) return 0;
	int i = 0,
	    j = 1;
	float s = 0;

	for( i = 1 ; i <= n ; i++ ){
		s += j/i;
		j += 2;
	}

	return s;
}

float
s2(int n){
	if( n <= 0 ) return 0;
	int i = 0;
	float s = 0;
	for( i = 1 ; i <= n ; i++ ){
		s += pow(2,i)/((n + 1) - i);
	}

	return s;
}

float
s3(int n){
	if( n <= 0 ) return 0;
	int i = 0;
	float s = 0;

	for( i = 1 ; i <= n ; i++ ){
		if( i % 2 != 0)
			s += i/pow(i,2);
		else
			s -= i/pow(i,2);
	}

	return s;
}

float
main(void){
	int n = 0;

	printf("Insira um valor para N:\n");
	scanf("%d", &n);

	printf("S1: %.2f\n", s1(n));
	printf("S2: %.2f\n", s2(n));
	printf("S3: %.2f\n", s3(n));

	return 0;
}
