#include<stdio.h>

#include"pilha.h"
#include"torre.h"

#define TAM 3

pilha *a;
pilha *b;
pilha *c;

int main(){
    
    a = criaPilha();
    b = criaPilha();
    c = criaPilha();

    for(int i = TAM; i > 0; empilha(i--, &a));

    resolveTorre(TAM, &a, &b, &c);
    return 0;
}