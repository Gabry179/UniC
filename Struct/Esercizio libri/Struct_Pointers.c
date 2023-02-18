#include <stdio.h>
#include <string.h>

struct Book{
    int code;
    char titolo[100];
    double price;
} x, *p;

int main () {
    p = &x;
    x.code = 1;
    strcpy(x.titolo, "Ciao Alberto");
    x.price = 99.99;
    printf("%.2f", (*p).price);
}