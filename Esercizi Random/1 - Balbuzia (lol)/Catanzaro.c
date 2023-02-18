#include <stdio.h>

int main () {
    char stringa[20], *p;
    char* ptrs = "ABCD";
    p = stringa;
    while(*ptrs != '\0'){
        *p++ = *ptrs;
        *p++ = *ptrs;
        *p++ = *ptrs++;
    }
    printf("%s", stringa);
}