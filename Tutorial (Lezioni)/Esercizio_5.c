#include <stdio.h>
#include <string.h>

int main(){
    char nome, cognome, datadinascita[10];
    printf("Inserisci l'iniziale del nome\n");
    scanf("%c", &nome);
    fflush(stdin);
    printf("Inserisci l'iniziale del cognome\n");
    scanf("%c", &cognome);
    fflush(stdin);
    printf("Inserisci la data di nascita\n");
    scanf("%s", datadinascita);
    printf("%c, %c, %s\n",nome, cognome, datadinascita);
}
