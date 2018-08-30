#include <stdio.h>

int
main(void){
	int i = 0,
	    somatorio = 0,
	    nota = 0;

	for( i = 0 ; i < 4 ; i++ ){
		printf("Insira a %d nota:\n", i+1);
		scanf("%d", &nota);
		somatorio += nota;
	}

	if( somatorio >= 32 )
		printf("Aprovado sem PF\n");
	else if( somatorio >= 20 && somatorio < 32 )
		printf("Aluno faz PF - Min: %f\n", (100 - somatorio)/10.0);
	else printf("Reprovado diretamente\n");

	return 0;
}
