#include <stdio.h>
#include <stdlib.h>
#define n 2000

int len(char frase[])
{
    int lunghezza = 0;
    for (int i = 0; i < n; i++)
    {
        if (frase[i] != ' ')
        {
            if (frase[i] == '\0')
                return lunghezza;
        }
        lunghezza++;
    }
}

int main()
{
    // char frase[n] = "";
    char *frase;
    frase = (char *)malloc(n * sizeof(char));
    int lunghezza = 0;
    frase[0] = 'a';
    frase[1] = '\0';
    // scanf("%s", frase);
    lunghezza = len(frase);
    printf("%d", lunghezza);
}