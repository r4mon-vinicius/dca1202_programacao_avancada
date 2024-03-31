#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b){
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

void myQsort(int *vet, int n, int (*compare) (int *a, int *b)){
    //Recebe o endereço do vetor
    int *ptr = (int *) vet;

    int aux;
    //compara elemento a elemento, se x[i] for maior que x[i+1], suas posições são trocadas
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (compare(&ptr[i], &ptr[j]) == 1){
                aux = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = aux;
            }
            else
                continue;
        }
    }
}

void ordenador(int n) {
    //Realiza a alocação de memória referente a quantidade n de floats
    int *nums = (int*) malloc(n * sizeof(int));

    //Realiza a leitura de dos n números
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    //Chama a função de ordenação
    myQsort(nums, n, compare);

    //Imprime na tela os n números ordenados
    for (int i = 0; i < n; i++){
        printf("%d \n", nums[i]);
    }
    //Libera a memória alocada
    free(nums);
}

int main() {
    //chama a função de ordenação
    ordenador(4);
    //printf("alo");

    return(0);
}
