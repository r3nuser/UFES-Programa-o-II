#include <stdio.h>
#include <string.h>

int main(void){
	char str[20];
	int i = 0;
	printf("Insira a string:\n");
	scanf("%[^\n]s", str);
	for( i = 0 ; i < strlen(str) ; i++ )
		switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				break;
			default:
				printf("%c", str[i]);
		}
	printf("\n");

	return 0;
}
