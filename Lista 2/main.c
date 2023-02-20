#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int element;
    struct nodo* next;
}nodo;

nodo* add(int n, nodo* node){
    if(node!=NULL){
        nodo* next = node;
        node = (nodo*)malloc(sizeof(node));
        node -> element = n;
        node -> next = next;
    }
    else{
        node = (nodo*)malloc(sizeof(node));
        node -> element = n;
        node -> next = NULL;
    }
}

void printList(nodo* list){
    if(list!=NULL){
        printf("Lista: ");
        while(list!=NULL){
            printf("%d, ",list -> element);
            list = list -> next;
        }
        printf("NULL\n");
    }
    else{
        printf("La lista e' vuota.");
    }
}

int main () {
    nodo* lista = NULL;
    lista = add(1,lista);
    lista = add(2,lista);
    printList(lista);
}