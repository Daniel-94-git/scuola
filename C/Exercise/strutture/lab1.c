#include <stdio.h>
#include <string.h>

struct Person
{
    int eta ;
    int peso;
    char nome[20];
}p1;

int main (){    

    p1.eta = 10;            
    p1.peso  = 20;
    strcpy(p1.nome,"Matteo");       // Per usare strcpy devi includere <string.h>

    struct Person p2 = {50,55,"Noemi"};

    strcpy(p2.nome,"Naomi");        // Si possono cambiare i valori delle variabili create nella struct in corso d'opera

    printf("Età = %d peso = %d nome : %s\n",p1.eta,p1.peso,p1.nome);
    printf("Età = %d peso = %d nome : %s\n",p2.eta,p2.peso,p2.nome);



    return 0;
}