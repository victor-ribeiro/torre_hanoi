#include<stdio.h>

#include"pilha.h"
#include"torre.h"

#define TAM 3

int main(){
    /*
    * empilha e desempilha funcionando.
    */
    pilha *a = criaPilha();
    pilha *b = criaPilha();
    pilha *c = criaPilha();

    for(int i = 1; i < TAM; empilha(i++, &a));

    resolveTorre(TAM, &a, &b, &c);
    printf("\n\n");
    imprimePilha(a);
    return 0;
}