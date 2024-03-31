#include <stdio.h>
#include <stdlib.h>

void memoryLeak1() {
    int *ptr = (int *)malloc(sizeof(int));
    //Não há liberação da memória ou retorno do ponteiro
}

void *memoryLeak2() {
    int *ptr = (int *)malloc(sizeof(int));
    ptr = (int *)malloc(sizeof(int)); 
    //Reatribuição sem liberar a memória anterior
    return ptr;
}

void memoryLeak3() {
    for (int i = 0; i < 10; i++) {
        int *ptr = (int *)malloc(sizeof(int));
    } 
    //Nesse caso está ocorrendo 10 alocações
    //mas não há a liberação de memória das 10 alocações, apenas da última
    free(ptr);
}

int main (){
    
    return 0;
}