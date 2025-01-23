#include <stdio.h>
#include "moltiplicazione.h"


float moltiplicazione(){

    int valori;
    float moltiplicazioneV = 1;


    printf("Inserisci il numero di valori che desideri moltiplicare : \n");
    scanf("%d",&valori);

    float lst_valori[valori];

    printf("Raccolgo i valori che intendi moltiplicare : ");
    printf("\n");
    
    for (int i = 0; i < valori; i++)
    {
        printf("%d° valore :    ",i +1);
        scanf("%f",&lst_valori[i]);
        moltiplicazioneV = moltiplicazioneV * lst_valori[i];
    }

    printf("La moltiplicazione dei valori : %.2f\n",moltiplicazioneV);
    
    return moltiplicazioneV;

}