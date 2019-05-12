#include<stdlib.h>

typedef struct Pilha pilha;

struct Pilha{
    int valor;
    pilha *prox;
};

pilha *topo=NULL;

int vazia(pilha *p){
    if(!p) return 1; //pilha vazia
    return 0;
}

//cria um no para a pilha. retorna NULL se falhar na criação
pilha* criaPilha(){
    pilha *tmp = (pilha*) malloc(sizeof(pilha*));
    if(!tmp) return NULL;
    return tmp;
}

void imprimePilha(pilha *valor){
    pilha *tmp;
    if(vazia(valor)) printf("pilha vazia\n");
    else for(tmp = valor; !tmp; tmp = tmp->prox) printf("valor: %4d\n", tmp->valor);
    //else printf("valor: %4d\n", tmp->valor);
}

int empilha(int valor, pilha *pPilha){
    pilha *tmp = (pilha *) malloc(sizeof(pilha));
    if(!tmp) return 1;
    
    tmp->valor = valor;
    tmp->prox = pPilha;
    pPilha = tmp;

    return 0;
}

int desempilha(pilha *p){
    if(!p) return 1;
    pilha *tmp = topo;
    topo = tmp->prox;
    free(tmp);
}