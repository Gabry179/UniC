#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studente{
    char nome[20];
    char cognome [20];
    int matricola;
    struct studente *next;
}studente;


int main(){
    studente* a = (studente*)malloc(sizeof(studente));
    a->matricola = 123;
}