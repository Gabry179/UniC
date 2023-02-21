#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int element;
    struct nodo* next;
}nodo;

nodo* push(int n, nodo* pile){
    if(pile!=0){
        nodo* next = pile;
        pile = (nodo*)malloc(sizeof(pile));
        pile -> element = n;
        pile -> next = next;
    }
    else{
        pile = (nodo*)malloc(sizeof(pile));
        pile -> element = n;
        pile -> next = NULL;
    }
}

nodo* rmElement(nodo* pile){
    if(pile!=NULL){
        nodo* daRimuovere = pile;
        pile = pile -> next;
        free(daRimuovere);
    }
    else{
        printf("La pila non ha elementi.");
    }
    return pile;
}

int pop(nodo* pile){
    int a;
    if(pile!=NULL){
        nodo* daPrelevare = pile;
        pile = pile -> next;
        a = daPrelevare->element;
    }
    else{
        printf("La pila non ha elementi.");
    }
    return a;
}

void printPile(nodo* pile){
    if(pile!=NULL){
        printf("Pila: ");
        while(pile!=NULL){
            printf("%d, ", pile -> element);
            pile = pile -> next;
        }
        printf("NULL\n");
    }
    else{
        printf("La lista e' vuota.");
    }
}

int main (int argc, char *argv[]) {
    struct nodo* pila;
    pila = push(1,pila);
    pila = push(2,pila);
    pila = push(3,pila);
    pila = push(4,pila);
    pila = push(5,pila);
    printf("%d\n", pop(pila));
    pila = rmElement(pila);
    printPile(pila);
    return 0;
}