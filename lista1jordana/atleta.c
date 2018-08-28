#include <stdio.h>

int
main(void){
	int idade = 0;
	char* categoria;

	printf("Insira a idade de um atleta: \n");
	scanf("%d", &idade);

	if( idade >= 5 && idade <= 10 ) categoria = "Infantil";
	else if( idade >= 11 && idade <= 17 ) categoria = "Juvenil";
	else if( idade >= 18 && idade <= 30 ) categoria = "Profissional";
	else categoria = "Senior";

	printf("A categoria é: %s\n", categoria);

	return 0;
}
