#include <stdio.h>

int
soma(int a, int b){
	return a + b;
}

int
subt(int a, int b){
	return a - b;
}

int
mult(int a, int b){
	return a*b;
}

int
div(int a, int b){
	return a/b;
}

int
main(void){
	int a = 0,
	    b = 0,
	    op = 0;

	do{
		do{
			printf("\nInsira os valores para A e B\n");
			scanf("%d %d", &a, &b);
		} while ( b == 0 );

		printf("1 - adicao\n");
		printf("2 - subtracao\n");
		printf("3 - multiplicacao\n");
		printf("4 - divisao\n");
		printf("5 - saida\n");

		scanf("%d", &op);

		switch ( op ){
			case 1:
				printf("Soma: %d\n", soma(a,b));
				break;
			case 2:
				printf("Subtracao: %d\n", subt(a,b));
				break;
			case 3:
				printf("Multiplicacao: %d\n", mult(a,b));
				break;
			case 4:
				printf("Divisao: %d\n", div(a,b));
				break;
			case 5:
			default:
				break;
		}
	} while ( op != 5 );

	return 0;
}
