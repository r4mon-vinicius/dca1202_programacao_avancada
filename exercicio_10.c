#include <stdio.h>

//O programa resultará em erro de compilação
//X aponta para um inteiro, que será convertido para
//um endereço em hexadecimal
//Em teoria, deveria ser impresso o incremento do 
//conteúdo do endereço de memória que x aponta
void main(){
   int const *x = 3;
   printf("%d", ++(*x));
}