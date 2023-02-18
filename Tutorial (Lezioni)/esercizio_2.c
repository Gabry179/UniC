#include <stdio.h>
#include <string.h>
struct studente
{
    char nome[20];
    char cognome[20];
    char matricola[20];
    int eta;
};

int main()
{
    struct studente s1 = {"Tizio", "Aaa", "ABC123", 19};
    struct studente s2 = {"Alberto", "Bbb", "ABC123", 17};
    if (s1.eta > s2.eta)
    {
        printf("Lo studente piu' grande e' %s", s1.nome);
    }
    else
    {
        printf("Lo studente piu' grande e' %s", s2.nome);
    }
}