#include <stdio.h>
#include <stdlib.h>

void somaVetor(int vetor1[], int vetor2[], int *vetorSoma, int num)
{
    for (int i = 0; i < num; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }
} 

int main(void) {
    int vetor1[] = {1, -1, 1};
    int vetor2[] = {-1, 1, -1};
    int soma[3], *p;
    
    p = soma;
    //só é necessário passar o endereço de memória do vetor resultante
    //os outros vetores são passados por valor
    somaVetor(vetor1, vetor2, p, 3);
    //Exibe o resultado da soma
    for (int i = 0; i < 3; i++) {
        printf("%d ", soma[i]);
    }
    return 0;
}