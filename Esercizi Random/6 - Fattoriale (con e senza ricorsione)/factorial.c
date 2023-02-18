#include <stdio.h>

int main () {
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(int i=n-1;i<n;i--){
        if(i==0) break;
        n*=i;
    }
    
    printf("Il fattoriale è: %d", n);
}