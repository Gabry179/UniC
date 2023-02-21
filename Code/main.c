#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int element;
    struct queue* next;
}nodo;

nodo* add(int n, nodo* queue){
  if(queue != NULL){
    // Elementi successivi
    nodo* next = queue;
    queue = (nodo*) malloc(sizeof(nodo));
    queue -> element = n;
    queue -> next = next;
  }else{
    // Primo elemento della lista
    queue = (nodo*) malloc(sizeof(nodo));
    queue -> element = n;
    queue -> next = NULL;
  }
  return queue;
}

nodo* enqueue(int n, nodo* queue){
  if(queue != NULL){
    nodo* next = queue;
    while (next -> next != NULL){
        next = next -> next;
    }
    next -> next = add(n, NULL);
  }else{
    queue = add(n, queue);
  }
  return queue;
}

void printQueue(nodo* queue){
    if(queue!=NULL){
        printf("Coda: ");
        while(queue!=NULL){
            printf("%d, ", queue -> element);
            queue = queue -> next;
        }
        printf("NULL\n");
    }
    else{
        printf("La lista e' vuota.");
    }
}

nodo* removeFirst(nodo* queue){
  if(queue != NULL){
    nodo* toDelete = queue;
    queue = queue -> next;
    free(toDelete);
  }
  return queue;
}

int main (int argc, char *argv[]) {
    nodo* coda;
    coda = enqueue(1,coda);
    coda = enqueue(2,coda);
    coda = enqueue(3,coda);
    coda = enqueue(4,coda);
    coda = enqueue(5,coda);
    coda = removeFirst(coda);
    printQueue(coda);
    return 0;
}