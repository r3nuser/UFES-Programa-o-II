#include <stdio.h>

int
main(void){
	int idade = 0,
	    idade_maior_nota = 0,
 	    idade_mais_velho = 0;

	float nota = 0,
	      nota_maior = 0,
	      nota_mais_velho = 0;

	while ( 1 ){
		printf("Insira a idade e a nota:\n");
		scanf("%d %f", &idade, &nota);
		if ( nota < 0 ) break;
		if ( nota > nota_maior ){
			idade_maior_nota = idade;
			nota_maior = nota;
		}
		if ( idade > idade_mais_velho ){
			nota_mais_velho = nota;
			idade_mais_velho = idade;
		}
	}

	printf("A idade do aluno de maior nota: %d\n", idade_maior_nota);
	printf("Nota do aluno mais velho: %f\n", nota_mais_velho);

	return 0;
}
