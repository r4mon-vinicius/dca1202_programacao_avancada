#include <stdio.h>

int main() {

    int i, j, *p, *q;

    p = &i; //Válida. Estou guardando o endereço de memória de i em p.
    *q = &j; /*Válida. Guarda o endereço de memória de j como o conteúdo da variável apontada por q. */
    p = &*&i; //Válida. Retorna o endereço de memória de i.
    i = (*&)j; /*Ilegal. Primeiramente será avaliado o que está entre parênteses, mas não há variáveis para que os operadores possam operar, dessa forma, não há um retorno válido.*/
    i = *&j; /*Válida. Está sendo guardado o conteúdo que há no endereço de memória de j.*/
    i = *&*&j; //Válida. Guarda o conteúdo de j.
    q = *p; /*Válida. q está guardando o conteúdo que há no endereço de memória apontado por p.*/
    i = (*p)++ + *q; /*Válida. Está sendo incrementado o conteúdo do endereço de memória apontado por p e somado com o conteúdo do endereço de memória apontado por q.*/

    return 0;
}