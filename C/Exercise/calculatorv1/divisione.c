#include <stdio.h>
#include "divisione.h"

float divisione()
{

    int valori = 0;
    float divisioneV;
    int flag = 1;

    printf("Inserisci il numero di valori che desideri dividere : \n");
    scanf("%d", &valori);

    float lst_valori[valori];
    do
    {
        printf("Raccolgo i valori che intendi dividere : ");
        printf("\n");

        for (int i = 0; i < valori; i++)
        {
            printf("%d° valore :    ", i + 1);
            scanf("%f", &lst_valori[i]);

            if (lst_valori[i] == 0)
            {
                printf("Non è possibile dividere per zero!\n");
                printf("Ricominciamo : \n\n");
                break;
            }

            else if (i >= 1)
            {
                divisioneV = lst_valori[0];
                divisioneV = divisioneV / lst_valori[i];
                printf("La divisione di %.2f per %.2f risulta : %.2f\n", (divisioneV * lst_valori[i]), lst_valori[i], divisioneV);
                lst_valori[0] = divisioneV;
                if (valori == i)
                {
                    flag = 0;
                }
            }
        }
    }while (flag == 0);
    
    return 0;
}