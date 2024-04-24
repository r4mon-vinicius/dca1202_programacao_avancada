#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB)
{
  for (int i = 0; i < linhasA; i++) {
    for (int j = 0; j < colunasB; j++) {
        *(C + (i * colunasB + j)) = 0;
        for (int k = 0; k < colunasA; k++) {
            *(C + (i * colunasB + j)) += *(A + (i * colunasB + k)) * *(B + (k * colunasB + j));
        }
    }
  }
}

int main(void)
{
  
  int A[3][3] = {{1, 1, 1},
                 {1, 1, 1},
                 {1, 1, 1}};

  int B[3][3] = {{1, 0, 0},
                 {0, 1, 0},
                 {0, 0, 1}};
 
  int C[3][3];

  multiplica_matrizes(&A, &B, &C, 3, 3, 3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}