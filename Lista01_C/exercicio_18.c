#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a,const void *b){
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

void myQsort(int *vet, int n, int (*compare) (const void *a, const void *b)){
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

void myOrdenador(int n) {
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

void qsortOrdenador(int n) {
    //Realiza a alocação de memória referente a quantidade n de floats
    float *nums = (float*) malloc(n * sizeof(float));

    //Realiza a leitura de dos n números
    for (int i = 0; i < n; i++){
        scanf("%f", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);

    //Imprime na tela os n números ordenados
    for (int i = 0; i < n; i++){
        printf("%f \n", nums[i]);
    }
    //Libera a memória alocada
    free(nums);
}

int main() {
    clock_t start, end;
    float time;

    start = clock();
    qsortOrdenador(3);
    end = clock();
    time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao utilizando o qsort: %f segundos\n", time);
    start = clock();
    myOrdenador(3);
    end = clock();
    time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao utilizando o myQsort: %f segundos\n", time); 

    return(0);
}

/*O método implementado por mim é mais rápido para arrays de tamanho pequeno, devido a sua
natureza iterativa. Já o qsort é mais rápido no caso geral (arrays de tamanho maior).*/