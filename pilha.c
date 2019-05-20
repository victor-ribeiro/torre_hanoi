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
    return NULL;
}

void imprimePilha(pilha *no){
    pilha *tmp=no;
    if(vazia(no)) printf("pilha vazia\n");
    else while(tmp){
        printf("valor: %4d\n", tmp->valor);
        tmp = tmp->prox;
    }
}

int empilha(int valor, pilha **pPilha){
    pilha *tmp = ( pilha * ) malloc( sizeof( pilha ) );
    if(!tmp) return 1;
    tmp->valor = valor;
    tmp->prox = *pPilha;
    *pPilha = tmp;
    return 0;
}

int desempilha(pilha **p){
    if(!p) return -1;
    pilha *tmp = *p;
    *p = (*p)->prox;
    free(tmp);
    return 0;
}