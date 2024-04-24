#include <stdio.h>
#include <stdlib.h>

void ordenador(int n) {
    //Realiza a alocação de memória referente a quantidade n de floats
    float *nums = (float*) malloc(n * sizeof(float));

    //Realiza a leitura de dos n números 
    for (int i = 0; i < n; i++){
        scanf("%f", &(nums + i)); 
    }
    //Implementando o método mais simples (bubble sort)
    float aux;
    //compara elemento a elemento, se x[i] for maior que x[i+1], suas posições são trocadas
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] > nums[j]){
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
    //Imprime na tela os n números ordenados 
    for (int i = 0; i < n; i++){
        printf("%f /n", nums[i]); 
    }
    //Libera a memória alocada
    free(nums);
}

int main() {
    //chama a função de ordenação
    ordenador(4);

    return(0);
}
