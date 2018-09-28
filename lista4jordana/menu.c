#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 21
#define break_line printf("\n")

void menu(char *v, char *w);
void reverse(char *v);
int recorrence(char *v, char ch);
void substring(char *v, int length);
void first_ocorrence(char *v, char ch, char c1);

int main(void){
	char s1[LENGTH],
	     s2[LENGTH];
	s1[0] = '\0';
	menu(s1, s2);
	return 0;
}

void reverse(char *v){
	int i = 0;
	break_line;
	for( i = strlen(v) - 1 ; i >= 0 ; i-- ){
		printf("%c", v[i]);
	}
	break_line;
}

int recorrence(char *v, char c){
	int i = 0,
	    counter = 0;
	for( i = 0 ; i < strlen(v) ; i++ ){
		if( v[i] == c ) counter++;
	}

	return counter;
}

void substring(char *v, int length){
	int index = 0;

	printf("Insira o indice\n");
	scanf("%d", &index);
	if(index >= length) return;
	int i = 0,
	    j = 0;
	char substring[length - index];

	for( i = index ; i < length ; i++ ){
		substring[j] = v[i];
		j++;
	}
	substring[length - index] = '\0';

	printf("\nSubstring: %s\n", substring);
}

void first_ocorrence(char *v, char ch, char c1){
	int i = 0;
	for( i = 0 ; i < strlen(v) ; i++ ){
		if( v[i] == c1 ){
			v[i] = ch;
			break;		}
	}
	printf("%s\n", v);
}

void menu(char *v, char *w){
	int index = 0;

	char op, character, c1;

	printf("a - Ler uma String:\n");
	printf("b - Imprimir tamanho S1:\n");
	printf("c - Comparar S1, S2:\n");
	printf("d - Concatenar S1 com S2\n");
	printf("e - Imprimir a reversa de S1\n");
	printf("f - Recorrencia de caracter em S1\n");
	printf("g - Substring da string S1\n");
	printf("h - Substituir a primeira por C2\n");

	scanf(" %c", &op);
	system("clear");
	switch( op ){
		case 'a':
			scanf("%s", v);
			break;
		case 'b':
			printf("Tamanho:%d\n", strlen(v));
			break;
		case 'c':
			printf("Insira s2:\n");
			scanf("%s", w);
			index = strcmp(v, w);
			if( index > 0 ) {
				printf("S1 tem menor valor que S2\n");
			} else if( index < 0 ) {
				printf("S2 tem menor valor que S1\n");
			} else {
				printf("S1 e S2 sao iguais\n");
			}
			break;
		case 'd':
			printf("Insira s2:\n");
			scanf("%s", w);
			printf("\nConcatenacao: %s\n", strcat(v, w));
			break;
		case 'e':
			reverse(v);
			break;
		case 'f':
			printf("Insira o caracter\n");
			scanf(" %c", &character);
			printf("Recorrencia: %d\n", recorrence(v, character));
			break;
		case 'g':
			substring(v, strlen(v));
			break;
		case 'h':
			printf("Insira dois caracteres:\n");
			scanf(" %c %c", &character, &c1);
			first_ocorrence(v, character, c1);
			break;
		default:
			return;
			break;
	}

	menu(v, w);
}
