int transfere(pilha **origem, pilha **destino, int valor_destino){
    empilha(valor_destino, destino);
    desempilha(origem);
    return 0;
}

int resolveTorre(int n, pilha **origem, pilha **aux, pilha **destino){
    extern pilha *a, *b,  *c;
    if(!origem) return -1; //origem vazia
    if(n==1){
        transfere(origem, destino, (*origem)->valor);
        printf("Torre A:\n");
        imprimePilha(a);
        printf("Torre B:\n");
        imprimePilha(b);
        printf("Torre C:\n");
        imprimePilha(c);
        printf("\n\n");
    }
    else{
        resolveTorre(n-1, origem, destino, aux);
        resolveTorre(1, origem, aux, destino);
        resolveTorre(n-1, aux, origem, destino);
    }
    return 0;
}