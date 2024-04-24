 #include <stdio.h>
 
 int main() {
    int valor, *p1;
    float temp, *p2;
    char aux, *p3, *nome = "Ponteiros";
    int vetor[3], idade;
    int *p4, *p5;  

    /* (a) Resultado: 20. p1 aponta para o endereço de memória da variável valor. Quando faz-se *p1 = 20, está sendo acessado o conteúdo de valor e atribuindo-o 20. */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    /* (b) Resultado: 29.0 . Da mesma forma que p1 aponta para o endereço de memória da variável valor, p2 aponta para temp. Quando faz-se *p2 = 29.0, está sendo acessado o conteúdo de temp e atribuindo-o valor 29.0.*/
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);

    /* (c) Resultado: "P". p3 guarda o endereço do primeiro elemento de nome. aux recebe o conteúdo desse endereço (o número associado a letra P na tabela ascii).*/
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    /* (d) Resultado: "e". p3 guarda o endereço do quinto elemento de nome. aux recebe o conteúdo desse endereço (o número associado a letra e na tabela ascii).*/
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    /* (e) Resultado: "P". Quando é atribuido nome a p3, p3 recebe o endereço do primeiro elemento de nome, aquele que caracteriza a sequência de dados. Dessa forma, quando o conteúdo do endereço que p3 aponta é impresso, temos "P". */
    p3 = nome;
    printf("%c \n", *p3);

    /* (f) Resultado: "e". Quando somamos 4 a p3, estamos pulando 4 elementos na memória, ou seja, indo para o quinto elemento, que é "e". */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g) Resultado: "t". Quando decrementamos p3, estamos voltando 1 elemento na memória, ou seja, indo para o quarto elemento, que é "t".*/
    p3--;
    printf("%c \n", *p3);

    /* (h) Resultado: 31. p4 recebe o endereço do primeiro elemento do vetor. Idade recebe o conteúdo do endereço que p4 aponta, sendo exibido, dessa forma, 31. */
    vetor[0] = 31
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* (i) Resultado: 45. p4 recebe o endereço do primeiro elemento do vetor. Quando somamos +1 à p4, vamos para o endereço do próximo elemento. Logo, p5 recebe o endereço do segundo elemento, que é 45.*/
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* (j) Resultado: 27. p4 recebe o endereço que p5 aponta + 1. Logo, p4 recebe o endereço do terceiro elemento, que é 27. */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) Resultado: 31. p4 recebe o endereço de p4 - 2. Como p4 aponta para o terceiro elemento, quando subtraído 2, p4 passará a apontar para o primeiro elemento, que é 31.*/
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) Resultado: 45. p5 recebe o endereço do terceiro elemento do vetor subtraído de 1. Logo, p5 guardará o endereço do segundo elemento, que é 45.*/
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) Resultado: 27. Como p5 estava apontando para o segundo elemento, agora que está sendo incrementado passará a apontar para o terceiro elemento, que tem conteúdo 27.*/
    p5++;
    printf("%d \n", *p5);

  return(0);
 }