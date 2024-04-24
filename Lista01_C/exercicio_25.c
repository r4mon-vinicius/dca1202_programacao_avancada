#include <stdio.h>
#include <stdlib.h>

int ***alloc3D(int x, int y, int z){

    //Alocando espaço para o vetor auxiliar que irá guardar o endereço das linhas
    int ***matriz = (int ***)malloc(x*sizeof(int **));

     // Alocando espaço para as linhas
    for (int i = 0; i < y; i++) {
        matriz[i] = (int **)malloc(y*sizeof(int *));
        // Alocando espaço para as colunas
        for (int j = 0; j < z; j++) {
            matriz[i][j] = (int *)malloc(z*sizeof(int));
        }
    }

    return matriz;
}

void printPlane(int ***matriz, int x, int y, int plane) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", matriz[i][j][plane]);
        }
        printf("\n");
    }
}

void modElement(int ***matriz, int x, int y, int z, int valor) {
    if (valor == 1 || valor == 0){
        matriz[x][y][z] = valor;
    }
    else {
        printf("Valor inválido, digite 0 ou 1.");
    }
}

int main() {
    int altura, largura, profundidade;

    //Captura as dimensões da matriz tridimensional
    printf("Digite a altura, largura e profundidade da matriz: ");
    scanf("%d %d %d", &altura, &largura, &profundidade);

    //Alocar memória para a matriz
    int ***matriz = alloc3D(altura, largura, profundidade);

    // Exemplo de uso: preencher a matriz com valores aleatórios
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                printf("Digite o valor para o elemento da matriz (0 ou 1): ");
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }
    //Imprime um plano
    int plane = 0;
    printPlane(matriz, altura, largura, plane);
    //Modifica um elemento
    modElement(matriz, 0, 0, 0, 1);

    //Liberando memória das colunas
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            free(matriz[i][j]);
        }
        //Liberando memória das linhas
        free(matriz[i]);
    }
    //Liberando memória do array de ponteiros para as linhas
    free(matriz);

    return 0;
}
