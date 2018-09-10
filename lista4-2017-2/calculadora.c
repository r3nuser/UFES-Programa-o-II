#include <stdio.h>

double
soma(double a, double b){
	return a+b;
}

double
div(double a, double b){
	return a/b;
}

double
mult(double a, double b){
	return a*b;
}

double
subt(double a, double b){
	return a-b;
}

int
main(void){
	int op = 0;
	double a = 0,
	       b = 0;
	while(op != 5){
		scanf("%d %lf %lf", &op, &a, &b);
		switch(op){
			case 1:
				printf("%lf\n", soma(a,b));
				break;
			case 2:
				printf("%lf\n", subt(a,b));
				break;
			case 3:
				printf("%lf\n", mult(a,b));
				break;
			case 4:
				printf("%lf\n", div(a,b));
				break;
			default:
				break;
		}
	}
	return 0;
}
