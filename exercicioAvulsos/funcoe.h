#include <stdio.h>
#include <stdlib.h>

struct nodo {
    char op;
    float valor;
    struct nodo *fe;
    struct nodo *fd;
};

struct nodo *criaArvore ();

struct nodo *insereNodo (struct nodo *no, char valor);

void preOrdem (struct nodo *no);

void emOrdem (struct nodo *no);

void posOrdem (struct nodo *no);