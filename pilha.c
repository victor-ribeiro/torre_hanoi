#include<stdlib.h>

typedef struct Pilha pilha;

struct Pilha{
    int valor;
    pilha *prox;
};

int vazia(pilha *p){
    return !p;
}

//cria um no para a pilha. retorna NULL se falhar na criação
pilha* criaPilha(){
    return (pilha*) malloc(sizeof(pilha*));
}

void imprimePilha(pilha no){
    pilha *tmp=&no;
    if(vazia(&no)){ 
        printf("pilha vazia\n");
        return;
    }
    for(tmp = &no; !tmp; tmp = tmp->prox) printf("valor: %4d\n", tmp->valor);
}

int empilha(int valor, pilha **pPilha){
    pilha *tmp = ( pilha * ) malloc( sizeof( pilha ) );
    if(!tmp) return 1;
    tmp->valor = valor;
    tmp->prox = *pPilha;
    *pPilha = tmp;
    return 0;
}

int desempilha(pilha *p){
    if(!p) return 1;
    // pilha *tmp = topo;
    // topo = tmp->prox;
    // free(tmp);
}