#include<stdio.h>

#include"pilha.h"
#include"torre.h"

pilha *a;
pilha *b;
pilha *c;

int main(){
    int nDiscos;

    printf("informe o numero de discos: ");
    scanf("%d", &nDiscos);

    a = criaPilha();
    b = criaPilha();
    c = criaPilha();

    for(int i = nDiscos; i > 0; empilha(i--, &a)); //inicia a pilha

    printf("Torre A:\n");
    imprimePilha(a);
    printf("Torre B:\n");
    imprimePilha(b);
    printf("Torre C:\n");
    imprimePilha(c);
    printf("\n\n");


    resolveTorre(nDiscos, &a, &b, &c);
    return 0;
}