 #include <stdio.h>
 
 int main() {

    int pulo[3] = {1, 2, 3, 4};

    printf("*(pulo + 2) = %d \n", *(pulo + 2)); //referencia o valor do terceiro elemento
    printf("*(pulo + 4) = %d \n", *(pulo + 4));
    printf("pulo + 4 = %d \n", pulo + 4);
    printf("pulo + 2 = %d", pulo + 2);
   
    return(0);
}