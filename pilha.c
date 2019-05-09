#include<stdlib.h>

typedef struct Pilha
{
    int valor;
    pilha *prox;
} pilha;

pilha *topo=NULL;

int vazia(pilha *p){
    if(!p) return 1; //pilha vazia
    return 0;
}

int empilha(int valor){
    pilha *tmp = topo;
    tmp->prox = topo;
    tmp->valor = valor;
    topo = tmp;
    return 0;
}

int desempilha(pilha *p){
    if(!p) return 1;
    pilha *tmp = topo;
    topo = tmp->prox;
    free(tmp);
}