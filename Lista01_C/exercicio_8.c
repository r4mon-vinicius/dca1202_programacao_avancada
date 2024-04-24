 #include <stdio.h>
 
 int main() {

    int vet[] = {4, 9, 13};

    //Exibe na tela cada elemento do vetor
    for(int i = 0; i < 3; i++){
        printf("%d", *(vet+i));
    }
    //Exibe na tela o endereço de memória de cada elemento do vetor
    for(int i = 0; i < 3; i++){
        printf("%X", vet+i);
    }

    return(0);
}