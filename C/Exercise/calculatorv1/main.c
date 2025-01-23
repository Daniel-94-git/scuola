// INCLUDO TUTTE LE LIBRERIE QUI
#include <stdio.h>
#include "somma.h"
#include "sottrazione.h"
#include "moltiplicazione.h"
#include "divisione.h"
#include "pari_dispari.h"

int main()
{

    // DICHIARO TUTTE LE VARIABILI DELLA CALCOLATRICE QUI

    int scelta;
    int flag = 0;
    
    printf("########## CALCOLATRICE V1 ##########\n\n");

    printf("Benvenuto nella calcolatrice versione 0.1!!\n");
    
    do
    {
        // SVILUPPO IL PROGRAMMA QUI
        printf("\n");
        printf("#####################################\n\n");

        printf("LISTA DEI CALCOLI DIPONIBILI : \n");
        printf("1) SOMMA\n");
        printf("2) SOTTRAZIONE\n");
        printf("3) MOLTIPLICAZIONE\n");
        printf("4) DIVISIONE\n");
        printf("5) PARI O DISPARI\n");
        printf("6) ESCI\n");

        printf("#####################################\n\n");

        // RACCOLGO LA SCELTA DELL' UTENTE

        printf("Inserisci il numero corrispondente al calcolo che vuoi eseguire :");
        scanf("%d", &scelta);
        printf("\n");

        // USO LO SWITCH PER GESTIRE LE OPZIONI

        switch (scelta)
        {
        case 1:
            somma();
            break;

        case 2:
            sottrazione();
            break;

        case 3:
            moltiplicazione();
            break;

        case 4:
            divisione();
            break;
        
        case 5:
            pari_Dispari();
            break;

        case 6:
            flag = 1;
            break;

        default:
            printf("Errore , inserisci un numero da 1 a 6 per effettuare operazioni. ");
            break;
        }

        
    } while (flag == 0);

    return 0;
}