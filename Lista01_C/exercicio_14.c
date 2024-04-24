 #include <stdio.h>
 #include <stdlib.h>
 
/* Ponteiro para função é uma estrutura que guarda
o endereço de memória de um bloco de código (uma
função específica)*/

//Declara uma função alarme, que não recebe nem retorna valores, apenas ativa o alarme
void alarme(void){
  printf("O alarme foi ativado!\n");
}

//Declara um função caldeira, que recebe a temperatura e o ponteiro para a função alarme como parâmetros
void caldeira(unsigned int temp, void (*alarme) (void)) {
  if (temp > 300) {
    alarme();
  } 
  else {
    printf("A temperatura da caldeira está normal!\n");
  }
}

 int main() {
    //Cria um ponteira para a função alarme
    void (*p) (void) = &alarme;
    unsigned int temp1 = 310, temp2 = 200;

    //Chama a função caldeira
    caldeira(temp1, p);
    caldeira(temp2, p);
    
    return(0);
}