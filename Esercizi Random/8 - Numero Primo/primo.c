#include <stdio.h>
#include <stdbool.h>

int main () {
    int n=0;
    bool primo=false;
    printf("Inserisci un numero:");
    scanf("%d", &n);

    if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n%11!=0){
        primo=true;
    }
    else{
        if(n==2 || n==3 || n==5 || n==7 || n==11){
            primo=true;
        }
    }
    if(primo==true) printf("Il numero e' primo");
    else printf("Il numero non e' primo");
}