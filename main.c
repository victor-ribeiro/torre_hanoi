#include<stdio.h>
#include"pilha.h"

int main(){
    /*
    *
    * empilha e desempilha funcionando.
    * 
    */
    pilha *a = criaPilha();
    for(int i = 1; i < 10; empilha(i++, &a));
    imprimePilha(a);
    
    for(int i = 1; i < 10; i++) desempilha(&a) ;
    printf("\n\n");
    imprimePilha(a);
    return 0;
}