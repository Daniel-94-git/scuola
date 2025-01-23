#include <stdio.h>
#include "sottrazione.h"


float sottrazione(){

    int valori  = 0;
    float appoggio = 0;
    float sottrazioneV;

    printf("Inserisci il numero di valori che desideri sottrarre : \n");
    scanf("%d",&valori);

    float lst_valori[valori];

    printf("Raccolgo i valori che intendi sottrarre : ");
    printf("\n");
    
    for (int i = 0; i < valori; i++)
    {
        printf("%d° valore :    ",i +1);
        scanf("%f",&lst_valori[i]);
        appoggio = appoggio + lst_valori[i];
    }
    sottrazioneV = (lst_valori[0]*2) -appoggio ;

    printf("La sottrazione dei valori corrisponde a : %.2f\n",sottrazioneV);
    
    return sottrazioneV;
}