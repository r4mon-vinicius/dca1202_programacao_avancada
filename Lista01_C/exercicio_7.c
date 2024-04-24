 #include <stdio.h>
 
 int main() {

    int mat[4], p*, x;
    //Todas as expressões são válidas
    p = mat + 1; //p guarda o endereço do segundo elemento de mat
    p = mat; //p guarda o endereço do primeiro elemento de mat
    p = mat; //p guarda o endereço do primeiro elemento de mat
    x = (*mat); //x guarda o conteúdo do primeiro elemento de mat
   
    return(0);
}