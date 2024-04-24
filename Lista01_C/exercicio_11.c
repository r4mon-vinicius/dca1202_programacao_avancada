#include <stdio.h>
#include <stdlib.h>

int main (){
    char x1[4] = {1, 2, 3, 4};
    int x2[4] = {1, 2, 3, 4};
    float x3[4] = {1., 2., 3., 4.};
    double x4[4] = {1, 2, 3, 4};

    //Para char: 4093, 4094, 4095;
    //Para int: 4096, 4098, 4100;
    //Para float: 4096, 4100, 4104;
    //Para double: 4100, 4108, 4116;
    //O incremento dos bytes ocorre de maneira diferente apenas para int (na questão int ocupa 2 bytes apenas).

    for(int i = 1; i < 4; i++){
        printf("%X\n", (x1 + i));
    }

    for(int i = 1; i < 4; i++){
        printf("%X\n", (x2 + i));
    }

    for(int i = 1; i < 4; i++){
        printf("%X\n", (x3 + i));
    }

    for(int i = 1; i < 4; i++){
        printf("%X\n", (x4 + i));
    }

    return 0;
}