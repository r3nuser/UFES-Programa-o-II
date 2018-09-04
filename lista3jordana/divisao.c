#include <stdio.h>

int
main(void){
	int a = 0,
	    b = 0;

	char novamente;

	do{
		printf("Insira o primeiro numero:\n");
		scanf("%d", &a);
		do{
			printf("Insira o segundo numero:\n");
			scanf("%d", &b);
		} while ( b == 0 );

		printf("Resultado: %d\n", a/b);

		do{
			printf("Deseja realizar outro calculo [S/N]?\n");
			scanf(" %c", &novamente);
		} while ( novamente != 'S' && novamente != 'N' );
	} while ( novamente == 'S' );

	return 0;
}
