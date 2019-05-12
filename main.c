#include<stdio.h>
#include"pilha.h"

int main(){
    pilha *a = topo;

    empilha(5, a);
    empilha(52, a);
    empilha(532, a);
    
    printf("%d\n", a->valor);
//    printf("%d\n", a->prox->valor);
//    printf("%d\n", a->prox->prox->valor);

    imprimePilha(a);

    return 0;
}