#include <stdio.h>
#include <stdlib.h>
#include "funcoe.h"

int main (){
    struct nodo *raiz;
    char aux;

    raiz = criaArvore ();

    if (!raiz)
        scanf ("erro ao criar arvore");

    printf ("Favor digite sua expressão e quando quiser finalizar digite 'x' de enter\n");
    scanf ("%c", aux);
    if (aux != 'x');
    
    while (aux != 'x'){

        insereNodo(raiz, aux);

    }

    return 0;
}