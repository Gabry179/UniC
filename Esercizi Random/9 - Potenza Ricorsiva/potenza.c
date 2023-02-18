#include <stdio.h>

int potenza(int m, int n){
    if(n!=1) return m*potenza(m, n-1);
    else return m;
}

int main(){
    int m=2, n=5, risultato=0;
    int temp=m;
    printf("%d", risultato=potenza(m,n));
}