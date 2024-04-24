#include <stdio.h>
#include <stdlib.h>

int main() {
    //A matriz m é 4 x 8 porque um unsigned long só possui 32 bits, ou seja, os outros 32 bits seriam perdidos
    unsigned char m[4][8] = {{1, 1, 1, 1, 1, 1, 1, 1},
                             {0, 0, 0, 0, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1, 1},
                             {0, 0, 0, 0, 0, 0, 0, 0}};

    //Definindo a variável estado com valor inicial 0
    unsigned long estado = 0;

    //Acessando cada elemento da matriz
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 8; j++){
            estado = estado << 1; //Deslocando um bit à esquerda
            estado = estado | (unsigned long)m[i][j]; 
            //Realizando um ou bit a bit
            // ex: 0100 | 0001 = 0101
        }
    }

    //Printando os bits da variável estado
    for (int i = sizeof(estado) * 8 - 1; i >= 0; i--) {
        printf("%lu", (estado >> i) & 1);
    }

    return(0);
}