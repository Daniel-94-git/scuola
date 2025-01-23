#include <stdio.h>
#include <math.h>
#include "pari_dispari.h"

int pari_Dispari()
{

    int valori;
    int count_pari = 0;
    int count_dispari = 0;

    printf("Inserisci il numero di valori che desideri controllare : \n");
    scanf("%d", &valori);

    int lst_valori[valori];

    for (int i = 0; i < valori; i++)
    {
        printf("%d° valore da controllare :    ", i +1 );
        scanf("%d", &lst_valori[i]);

        if (lst_valori[i] % 2 == 0)
        {
            count_pari = count_pari + 1;
        }
        else
        {
            count_dispari = count_dispari + 1;
        }
    }

    printf("PARI : %d\n", count_pari);
    printf("DISPARI : %d\n", count_dispari);

    int lst_pari[count_pari];
    int lst_dispari[count_dispari];

    for (int i = 0; i <= valori; i++)
    {
        if (lst_valori[i] % 2 == 0)
        {
            lst_pari[i] = lst_valori[i];
        }
        else
        {
            lst_dispari[i] = lst_valori[i];
        }
    }

    printf("\n\n");

    printf("I numeri pari che hai inserito :\n");
    for (int i = 0; i < count_pari; i++)
    {
        printf("%d  ", lst_pari[i]);
    }

    printf("\n\n");

    printf("I numeri dipari che hai inserito :\n");
    for (int i = 0; i < count_dispari; i++)
    {
        printf("%d  ", lst_dispari[i]);
    }

    return 0;
}