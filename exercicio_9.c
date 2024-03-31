#include <stdio.h>

/*Da maneira que está escrito, o programa dará erro.
Não posso atribuir valores dentro da declaração do struct*/
struct teste{
    int x = 3;
    char nome[4] = "jose";
};

int main(){
    struct teste *s;
    
    printf("%d", s->x); //seria impresso 3
    printf("%s", s->name); //seria impresso josé

    return 0;
 }