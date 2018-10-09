#include <stdio.h>
#include <string.h>
void read(char a[5][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 5 ; i++ )
		for( j = 0 ; j < 5 ; j++ ){
			printf("Insira o %d %d: \n", i, j);
			scanf("%c", &a[i][j]);
		}
}

void print(char a[5][5]){
	int i = 0;
	int j = 0;

	for( i = 0 ; i < 5 ; i++ ){
		printf("\n");
		for( j = 0 ; j < 5 ; j++ )
			printf("[%c]", a[i][j]);
	}
	printf("\n");
}

int issubstring(char string[], char substring[]){
	int recorrence = 0;
	int i = 0;
	int k = 0;
	int j = 0;

	for( i = 0 ; i < strlen(string) ; i++ ){
		for( k = i, j = 0 ; k < strlen(string) ; k++, j++ ){
			if(substring[j] == string[k]) recorrence++;
		}
		if(recorrence == strlen(substring)) return 1;
		else recorrence = 0;
	}
	return 0;
}

int search(char a[5][5], char palavra[]){
	int i = 0;
	int j = 0;
	int k = 0;
	int recorrence = 0;

	for( i = 0 ; i < 5 ;  i++ ){
		if( issubstring(a[i], palavra) ) return 1;
	}

	return 0;
}

int main(void){
	char a[5][5];
	char palavra[50];

	read(a);

	printf("Insira a palavra:\n");
	scanf("%s", palavra);
	print(a);

	if( search(a, palavra) ){
		printf("Encontrou\n");
	}else{
		printf("Não encontrou\n");
	}

	return 0;
}
