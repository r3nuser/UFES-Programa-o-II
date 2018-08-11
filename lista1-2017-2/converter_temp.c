#include <stdio.h>

float
fah_to_cel(int fah){
    return ((fah-32)*5)/9;
}

float
cel_to_fah(int cel){
    return cel*1.8+32;
}

int
main(void){
    float temp = 0;
    char type;
    int flag = 0;

    printf("Insira a temperatura e a unidade de medida :\n");
    scanf("%f %c", &temp, &type);

    switch (type){
        case 'F':
        case 'f':
            type = 'C';
            temp = fah_to_cel(temp);
            break;
        case 'C':
        case 'c':
            type = 'F';
            temp = cel_to_fah(temp);
            break;
        default:
            flag = 1;
            break;
    }

    if (flag) printf("Entrada inválida !\n");
    else printf("Temperatura convertida -> %f %c", temp, type); 

    return 0;
}