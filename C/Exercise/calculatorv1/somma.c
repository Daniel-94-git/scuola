#include <stdio.h>
#include "somma.h"


float somma(){

    int valori  = 0;
    float sommaV = 0;

    printf("Inserisci il numero di valori che desideri sommare : \n");
    scanf("%d",&valori);

    float lst_valori[valori];

    printf("Raccolgo i valori che intendi sommare : ");
    printf("\n");
    
    for (int i = 0; i < valori; i++)
    {
        printf("%d° valore :    ",i +1);
        scanf("%f",&lst_valori[i]);
        sommaV = sommaV + lst_valori[i];
    }
    printf("La somma dei valori corrisponde a : %.2f\n",sommaV);
    
    return sommaV;

}