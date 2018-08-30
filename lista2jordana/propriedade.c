#include <stdio.h>

int
main(void){
	int i = 0,
	    ab = 0,
	    cd = 0,
            ef = 0;

	for( i = 1000 ; i < 9999 ; i++ ){
		cd = i % 100;
		ab = i / 100;
		ef = ab + cd;
		if( (ef*ef) == i ){
			printf("%d \n", i);
		}
	}

	return 0;
}
