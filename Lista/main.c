#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
  int element;
  struct nodo* next;
} nodo;

nodo* add(int n, nodo* node);
nodo* addLast(int n, nodo* node);

nodo* removeFirst(nodo* node);
nodo* removeLast(nodo* node);

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

nodo* addLast(int n, nodo* node){
  if(node != NULL){
    nodo* next = node;
    while (next -> next != NULL){
        next = next -> next;
    }
    next -> next = add(n, NULL);
  }else{
    node = add(n, node);
  }
  return node;
}

nodo* removeFirts(nodo* node){
  if(node != NULL){
    nodo* toDelete = node;
    node = node -> next;
    free(toDelete);
  }

  return node;
}

nodo* removeLast(nodo* node){
  if(node != NULL){
    if(node -> next != NULL){
      nodo* thisNode = node;
      nodo* toDelete = node -> next;

      while(toDelete -> next != NULL){
        thisNode = toDelete;
        toDelete = toDelete -> next;
      }
      thisNode -> next = removeFirst(toDelete);
    }else{
      node = removeFirst(node);
    }
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