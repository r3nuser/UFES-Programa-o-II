#include <stdio.h>

int
segmento(int a, int b){
	if( a < b ) return 0;
	int auxiliar = 1,
	    a_seg = 0,
	    a_temp = a;
	while( a_seg < b ){
		a_seg += auxiliar*(a%10);
		a/=10;
		auxiliar*=10;
	}
	return b == a_seg;
}

int
main(void){
	int a = 0,
	    b = 0;
	scanf("%d %d", &a, &b);
	if( segmento(a, b) ) printf("Sim\n");
	else printf("Não\n");
	return 0;
}
