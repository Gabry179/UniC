#include <stdio.h>
#include <string.h>

int main()
{
    char stringa[50];
    int cont = 1;
    printf("Inserisci parole\n");
    fgets(stringa, sizeof(stringa), stdin);

    if (stringa[0] == ' ')
    {
        cont--;
    }

    for (int i = 0; i < strlen(stringa); i++)
    {
        if (stringa[i] == ' ' && stringa[i + 1] != ' ' && stringa[strlen(stringa)-1] != ' ')
        {
            cont++;
        }
    }

    printf("Le parole sono: ");
    printf("%d", cont);
}