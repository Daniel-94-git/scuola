#include <stdio.h>

int main(){

    // Dichiarazione di un puntatore e stampa del valore puntato:

    int c, *ptr;

    c = 10;
    ptr = &c;

    printf("%d\n", *ptr); // stampa valore puntato
    printf("%p\n", ptr);  // stampa inidirzzo 

    printf("------------------------------------------------------------\n");


    // Scambio di due numeri usando puntatori:

    int a = 10;
    int b = 5;
    int *ptr1 , *ptr2 , ptr3;

    ptr1 = &a;
    ptr2 = &b;

    printf("Prima dello scambio : prt1 = %d -- ptr2 = %d\n",*ptr1,*ptr2);

    ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = ptr3;

    printf("Dopo lo scambio :     prt1 = %d -- ptr2 = %d\n",*ptr1,*ptr2);

    printf("------------------------------------------------------------\n");


    // Incremento di un numero usando un puntatore:

    int s = 0;
    int *ptrS;

    ptrS = &s;

    for (int i = 0; i < 10; i++)
    {
        *ptrS = *ptrS + 1;
        printf("%d  ",*ptrS);
    }
    printf("Incremento array con puntatore\n");
    
    printf("------------------------------------------------------------\n");


    //Somma di elementi di un array usando puntatori

    int array1[9] = {10,25,32,47,58,69,72,85,91};
    int somma;
    int *ptrA,*prtB;

    ptrA = &array1[0];
    

    for (int i = 0; i < 8; i++)
    {
        somma =  *ptrA+ptrA[i +1];
        *ptrA = somma;
        printf("%d  ",somma);
        
    }
    printf("Somma array con puntatore\n");
    printf("------------------------------------------------------------\n");


    // Modifica di un array usando puntatori

    int array[5] = {1,2,3,4,5};
    int *ptrM1;
    int raddoppio; 
    
    ptrM1 = &array[0];

    printf("Prima del raddoppio del contenuto dell'array: \n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d  ",ptrM1[i]);
    }
    printf("\n");

    printf("Dopo il raddoppio del contenuto dell'array: \n");
    for (int i = 0; i <= 4; i++)
    {
        raddoppio = ptrM1[i]*2;
        printf("%d  ",raddoppio);
    }
    printf("\n");
    printf("------------------------------------------------------------\n");



    return 0;
}