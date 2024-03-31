#include <stdio.h>
#include <stdlib.h>

//A
void f( ){
    void *s;
    s = malloc(50);
    free(s);
}
 
 //B
int f( ){
    float *a;
    return 0;
}

//C 
//Aqui há um vazamento de memória
int f(char *data){
    void *s;
    s = malloc(50);
    int size = strlen(data);

    if (size > 50) /*O vazamento de memória acontece 
    nesse trecho. Se size for maior que 50, a função 
    retornará -1, mas não fará a liberação de memória.*/
        return(-1);
    free(s);
    return 0;
}

//D
int *f(int n){
    int *num = malloc(sizeof(int)*n);
    return num;
}

int main(void){
    int *num;
    num = f(10);
    free(num);
    return 0;
}

//E
void f(int n){
    char *m = malloc(10);
    char *n = malloc(10);
    free(m);
    m = n;
    free(m);
    free(n);
}




