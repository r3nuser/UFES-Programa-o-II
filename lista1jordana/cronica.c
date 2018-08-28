#include <stdio.h>

int
main(void){
	int idade = 0,
            have_doenca = 0;
	float acrescimo = 0;

	printf("Insira a sua idade\n");
	scanf("%d", &idade);
	printf("Possue doença cronica 1/0: ");
	scanf("%d", &have_doenca);

	while( have_doenca != 0 && have_doenca != 1 ){
		printf("Responda corretamente:\n");
		printf("Possui doenca cronica 1/0: ");
		scanf("%d", &have_doenca);
	}

	if ( idade >= 0 && idade <= 18 ){
		acrescimo = 83.15;
	} else if ( idade >= 19 && idade <= 33 ){
		acrescimo = 133.88;
		if( have_doenca ) acrescimo *= 1.05;
	} else if ( idade > 33 && idade <= 44 ){
		acrescimo = 203.73;
		if( have_doenca ) acrescimo *= 1.10;
	} else if ( idade >= 45 && idade <= 58 ){
		acrescimo = 312.44;
		if( have_doenca ) acrescimo *= 1.15;
	} else {
		acrescimo = 498.53;
		if( have_doenca ) acrescimo *= 1.30;
	}

	printf("O valor total a ser pago: %f\n", acrescimo);

	return 0;
}
