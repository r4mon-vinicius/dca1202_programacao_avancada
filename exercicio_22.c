#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int x, y, z;

    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    z = a + b;

    while (a) {
        x = x | b; //1010 | 0001
        y = y ^ a;
        z = z & (a+b);
        a = a >> 1;
        b = b << 1;
    }

    printf("%d %d %d \n", x, y, z);

    //O resultado da saída será 15, 13, 0.

    return 0;
}