#include <stdio.h>

int Somma(int num){
    int somma = 0, m=0;
    while(num>0){    
        m=num%10;
        somma=somma+m;
        num=num/10;
    }
    return somma;
}

int main(){
    int n=0;
    printf("Inserisci il numero\n");
    scanf("%d", &n);
    n = Somma(n);
    printf("La somma e' %d", &n);
}