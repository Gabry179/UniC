#include <stdio.h>

int main () {
    int t1=0, t2=1, prossimo=t1+t2;
    int n=0;
    printf("Inserisci n: ");
    scanf("%d", &n);
    n+=1;
    printf("Numeri: %d", t2);

    for(int i = 3;i<=n;i++){
        printf(", %d", prossimo);
        t1=t2;
        t2=prossimo;
        prossimo=t1+t2;
    }
    printf(".");
}