int transfere(pilha **origem, pilha **destino, int valor_destino){
    empilha(valor_destino, destino);
    desempilha(origem);
    return 0;
}

int resolveTorre(int n, pilha **origem, pilha **aux, pilha **destino){
    if(!origem) return 1; //origem vazia
    if(n==1){
        transfere(origem, aux,     (*origem)->valor);
        transfere(aux,    destino, (*aux)->valor   );
        printf("Torre A: ");
        imprimePilha(*origem);
        printf("Torre B: ");
        imprimePilha(*aux);
        printf("Torre C: ");
        imprimePilha(*destino);
    }
    else{
        resolveTorre(n-1, origem, destino, aux);
        resolveTorre(1, origem, aux, destino);
        resolveTorre(n-1, aux, origem, destino);
    }
    return 0;
}