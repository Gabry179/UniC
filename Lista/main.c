#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
  int element;
  struct nodo* next;
} nodo;

nodo* add(int n, nodo* node);
nodo* addLast(int n, nodo* node);

void printList(nodo* list);

int main (int argc, char *argv[]){

  nodo *lista = NULL;
  lista = add(1, lista);
  lista = add(2, lista);
  lista = add(33, lista);

  printList(lista);

  return 0;
}

nodo* add(int n, nodo* node){
  if(node != NULL){
    // Elementi successivi
    nodo* next = node;
    node = (nodo*) malloc(sizeof(nodo));
    node -> element = n;
    node -> next = next;
  }else{
    // Primo elemento della lista
    node = (nodo*) malloc(sizeof(nodo));
    node -> element = n;
    node -> next = NULL;
  }
  return node;
}

void printList(nodo * list){
  if(list != NULL){
    printf("List -> ");
    while(list != NULL){
      printf("%d -> ",list -> element);
      list = list -> next;
    }
    printf("NULL \n");
  }
	else {
    printf("LISTA VUOTA \n");
  }
}