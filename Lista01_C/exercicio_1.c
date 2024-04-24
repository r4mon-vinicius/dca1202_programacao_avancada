#include <stdio.h>

int main() {

    int i = 3, j = 5;
    int *p, *q;

    p = &i;
    q = &j;

    p == &i; /* O valor da comparação será 1 (verdadeiro), uma vez que p guarda o endereço de memória da variável i e "&i" retorna o endereço de memória de i. */

    *p - *q; /* O resultado da expressão é o valor -2, pois "*p" retorna o conteúdo do endereço de memória que p aponta, assim como "*q". Dessa forma, *p - *q é igual a 3 - 5, que é igual a -2. */

    **&p; /* Podemos entender a expressão como sendo 
    *(*(&p)). &p retorna o endereço de memória de p, 
    *(&p) retorna o conteúdo que está salvo no endereço de memória de p, que é o endereço de memória de i. Por último, *(*(&p)) retorna o conteúdo do endereço de memória de i, que é 3. */

    3 - *p/(*q) + 7; /* A expressão resulta no valor 10. "*p" e "*q" retornam os conteúdos dos endereços de memória salvos em cada um dos ponteiros. Como a divisão tem precedência maior, a divisão de 3/5 será realizada primeiro, resultando em 0, pois a divisão é entre números inteiros. O resto da expressão será avaliada da esquerda para a direita, 3 - 0 = 3 e 3 + 7 = 10.*/

    return 0;
}