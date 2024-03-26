 #include <stdio.h>
 
 int main() {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;

    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");

    for(i = 0 ; i <= 4 ; i++){
        printf("i = %d",i);
        printf(" vet[%d] = %.1f",i, vet[i]);
        printf(" *(f + %d) = %.1f",i, *(f+i));
        printf(" &vet[%d] = %X",i, &vet[i]);
        printf(" (f + %d) = %X", i, f+i);
        printf("\n");
    }
    /* Foram obtidas as repostas esperadas. No primeiro printf é impresso o valor de i para cada iteração. No segundo printf será impresso o valor do vetor referente à posição indexada por i. No terceiro printf será impresso o conteúdo do endereço de memória de cada posição do vetor. Nos outros será feita a impressão dos endereços de memória de cada posição do vetor, usando o ponteiro f ou o operador &, que retorna o endereço de memória. */

  return(0);
 }