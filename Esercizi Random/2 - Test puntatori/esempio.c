#include <stdio.h>

int main (int argc, char *argv[]) {
    float x=1.45, y;
    float *ip=NULL;
    ip = &x;
    *ip=200+*ip;
    y = *ip;
    printf("y=%.2f", y);
    return 0;
}
