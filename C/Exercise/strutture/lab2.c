#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char nome[20];
    int eta;
    int peso;
} person;

int main()
{

    person p1;

    strcpy(p1.nome, "Daniel");
    p1.eta = 30;
    p1.peso = 70;

    printf("Nome : %s età: %d peso: %d \n",p1.nome,p1.eta,p1.peso);

    return 0;
}
