#include <stdio.h>

int
main(void){
	float maior_altura = 0,
	      menor_altura = 0,
	      media_altura_m = 0,
	      media_altura_h = 0,
	      altura = 0,
	      homens = 0,
	      mulheres = 0;

	int cod = 0,
	    i = 0;

	for ( i = 0 ; i < 10 ; i++ ){
		do{
			printf("Insira o valor do codigo e altura:\n");
			scanf("%d %f", &cod, &altura);
		} while ( cod != 1 && cod != 2 );
		if ( i == 0 ){
			maior_altura = altura;
			menor_altura = altura;
		} else {
			if( altura > maior_altura )
				maior_altura = altura;
			else if( altura < menor_altura )
				menor_altura = altura;
		}
		switch ( cod ){
			case 1:
				media_altura_h += altura;
				homens++;
				break;
			case 2:
				media_altura_m += altura;
				mulheres++;
				break;
			default:
				break;
		}
	}

	if ( homens > 0 ) media_altura_h /= homens;
	if ( mulheres > 0 ) media_altura_m /= mulheres;

	printf("Maior altura: %f\n", maior_altura);
	printf("Menor altura: %f\n", menor_altura);
	printf("Media da altura homens: %f\n", media_altura_h);
	printf("Media da altura mulheres: %f\n", media_altura_m);

	return 0;
}
