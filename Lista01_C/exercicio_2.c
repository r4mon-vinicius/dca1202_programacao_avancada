#include <stdio.h>

int main() {

    int i=5, *p;

    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);

    /* Será impresso na tela 4094, 4096, 7, 5, 15 e 9.*/

    return 0;
}