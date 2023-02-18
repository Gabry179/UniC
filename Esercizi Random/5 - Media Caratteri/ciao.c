#include <stdio.h>
#include <string.h>
int main()
{
    char *Stringhe[] = {"Ciao","Alberto", "AAAAA"};
    int num, tot_lenght = 0;
    float media;
    num = sizeof(Stringhe) / sizeof(Stringhe[0]);
    for (int i = 0; i < num; i++)
        tot_lenght += strlen(Stringhe[i]);
    media = (float)tot_lenght / num;
    printf("%.1f\n", media);
}