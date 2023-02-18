#include <stdio.h>
#include <string.h>


int main () {
    char stringa[50];
    int lunghezza = 1;
    printf("Inserisci parole\n");
    fgets(stringa, sizeof(stringa), stdin);

    for(int i=0;i<strlen(stringa);i++){
        if(stringa[i] == ' '){
            lunghezza=strlen(stringa) - i;
        }
    }
    printf("%d", lunghezza);
}