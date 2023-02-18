#include <stdio.h>

int main(){
    int x = 17;
    int* ptr = &x;

    printf("Valore di X: %d\n", x);
    printf("Valore di &x: %d\n", &x);
    printf("Valore di ptr: %d\n", ptr);
    printf("Valore di &ptr: %d\n", *ptr);
}