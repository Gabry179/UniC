#include <stdio.h>

int fatt(int n){
    if(n>1) return n*fatt(n-1);
    else return n;
}


int main () {
    int n=5;
    int fattoriale;

    fattoriale=fatt(n);
    printf("%d", fattoriale);
}