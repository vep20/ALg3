#include "funcoe.h"

struct nodo *criaArvore (){
    struct nodo *aux;

    aux = malloc (sizeof (struct nodo));
    if (!aux)
        return NULL;

    aux->fe = NULL;
    aux->fd = NULL;
    
    return aux;

}

struct nodo *insereNodo (struct nodo *no, char valor){
    struct nodo *aux;

    if (!no)
        return NULL;


    return aux;
}

void preOrdem (struct nodo *no){
    if (no != NULL){
        printf(no->);
        preOrdem (no->fe);
        preOrde (no->fd);
    }
}

void emOrdem (struct nodo *no){
    if (no != NULL){
        preOrdem (no->fe);
        printf(no->);
        preOrde (no->fd);
    }
}

void posOrdem (struct nodo *no){
     if (no != NULL){
        preOrdem (no->fe);
        preOrde (no->fd);
        printf(no->);
    }
}

void verificaOperador (char aux){
    int valido = 0;

    switch (aux){
    case '+':
        valido = 1;
        break;
    case '-':
        valido = 1;
        break;
    case '*':
        valido = 1;
        break;
    case '/':
        valido = 1;
        break;       
    
    default:
        break;
    }

    return valido;
}