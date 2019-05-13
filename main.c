#include<stdio.h>
#include"pilha.h"

int main(){
    pilha *a = criaPilha();
    imprimePilha(*a);

    empilha(5, &a);
    empilha(554, &a);
    empilha(55, &a);
    
    imprimePilha(*a);
    
    return 0;
}