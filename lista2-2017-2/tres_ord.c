#include <stdio.h>

#define MAX_LEN 3

void
printVetor(int *numeros, int length){
    int i = 0;
    for( i = 0 ; i < length ; i++ ){
        printf("%d\n",numeros[i]);
    }
}

void 
swap(int *numeros, int indexA, int indexB){
    int temp = numeros[indexA];
    numeros[indexA] = numeros[indexB];
    numeros[indexB] = temp;
}

void
bubbleSort(int *numeros, int length){
    int i = 0,
        j = 0;
    for( i = 0 ; i < length ; i++ )
        for( j = 0 ; j < length ; j++ )
            if(numeros[i]<numeros[j])
                swap(numeros,i,j);
}

int
main(void){
    int numeros[MAX_LEN],
        i = 0;
    for( i = 0 ; i < MAX_LEN ; i++ ){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Desordenado:\n");
    printVetor(numeros,MAX_LEN);
    bubbleSort(numeros,MAX_LEN);
    printf("Ordenado:\n");
    printVetor(numeros,MAX_LEN);
    return 0;
}