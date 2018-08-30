#include <stdio.h>

int
main(void){
	char a, b;
	int i = 0;

	printf("Insira a primeira letra\n");
	scanf("%c", &a);
	printf("Insira a segunda letra\n");
	scanf(" %c", &b);

	for( i = a ; i <= b ; i++ ){
		printf("%c", i);
	}

	printf("\n Caracteres entre eles %d \n", (b - a)-1);

	return 0;
}
