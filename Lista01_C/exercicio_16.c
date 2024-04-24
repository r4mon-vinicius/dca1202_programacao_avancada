#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

void ordenador(int n) {
    //Realiza a alocação de memória referente a quantidade n de floats
    float *nums = (float*) malloc(n * sizeof(float));

    //Realiza a leitura de dos n números
    for (int i = 0; i < n; i++){
        scanf("%f", &nums[i]);
    }

    qsort(nums, n, sizeof(float), compare);

    //Imprime na tela os n números ordenados
    for (int i = 0; i < n; i++){
        printf("%f \n", nums[i]);
    }
    //Libera a memória alocada
    free(nums);
}

int main() {
    //chama a função de ordenação
    ordenador(4);

    return(0);
}
