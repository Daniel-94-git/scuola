#include <stdio.h>

int main()
{
    int *pc, c;  // QUI VENGONO DICHIARATI UN PUNTATORE E UNA VARIABILE DI TIPO INT
    c = 5;
    pc = &c;     //TRAMITE LA E COMMERCIALE COLLEGO IL PUNTATORE PC ALL'INDIRIZZO DELLA VARIABILE C
    c = 1;
    printf("%d\n", c);   // STAMPO IL CONTENUTO DELLA VARIABILE C
    printf("%d\n", *pc); // STAMPO IL CONTENUTO CHE VEDE IL POINTER 
    printf("%p\n", pc);  // STAMPO L'INDIRIZZO A CUI È COLLEGATO IL POINTER
    
    *pc = 4;             // CAMBIO IL CONTENUTO DELLA VARIABILE C ATTRAVERSO IL POINTER
    printf("%d\n", c);   // STAMPO IL CONTENUTO DELLA VARIABILE C AGGIORNATO


    int * point;
    int value = 5;
    int numero = 9;

    point = &value;
    printf("Indirizzo di value : %p\n",point);
    printf("Contenuto della variabile visto attraverso point : %d\n",*point);

    *point = 15; 
    printf("Nuovo contenuto di value : %d\n",*point);

    *point = numero;
    printf("Ho spostato il puntatore su numero : %d\n",*point);
    point = &numero;
    printf("Indirizzo di numero : %p\n",point);
    point = &value;
    printf("Ritorno a indirizzo value : %p\n",point);
    


    return 0;
}