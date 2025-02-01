#include <stdio.h>
#include <string.h>
#include "noleggio.h"

int menu()
{

    char menu[3][20] = {"1)Login ", "2)Visitatore ", "0)Esci "};
    int scelta = 15;

    printf("-----------------------------------------------------------------------\n");
    printf("######################## BENVENUTO IN RENTCAR #########################\n");
    printf("-----------------------------------------------------------------------\n");

    do
    {

        for (int i = 0; i < 3; i++)
        {
            printf("%s\n", menu[i]);
        }

        printf("Scrivi il numero dell'azione che vuoi esegurie : ");
        scanf("%d", &scelta);

        if (scelta != 1 && scelta != 2 && scelta != 0)
        {
            printf("Carattere inserito non valido.\n");
            while (getchar() != '\n')
                ;
        }

    } while (scelta != 1 && scelta != 2 && scelta != 0);

    return scelta;
}

int login()
{

    char utenteEsatto[] = {"pippo"};
    char passEsatta[] = {"pluto"};
    char nomeUtente[10];
    char passUtente[10];
    int flag = 0;
    int loggato = 5;

    printf("\n");
    printf("-----------------------------------------------------------------------\n");
    printf("################################ LOGIN ################################\n");
    printf("-----------------------------------------------------------------------\n");

    while (flag == 0)
    {
        printf("Inserisci il tuo nome utente: ");
        scanf("%s", nomeUtente);

        printf("Inserisci la tua password: ");
        scanf("%s", passUtente);

        if (strcmp(nomeUtente, utenteEsatto) == 0 && strcmp(passUtente, passEsatta) == 0)
        {
            printf("Bentornato %s\n", nomeUtente);
            loggato = 1;
            flag = 1;
        }
        else
        {

            while (loggato == 5)
            {
                int scelta;
                printf("Nome utente o password errati, premi 0 per uscire 1 per riprovare\n");
                scanf("%d", &scelta);
                if (scelta == 0)
                {
                    loggato = 0;
                    flag = 1;
                }
                else if (scelta == 1)
                {
                    loggato = 4;
                }
                else
                {

                    printf("Il caratere inserito non è valido!\n");
                    while (getchar() != '\n');
                    
                }
            }
        }
    }

    return loggato;
}

int azioneUtente()
{

    char lstMenu[3][30] = {"1)Noleggia auto", "2)Concludi noleggio", "0)Esci"};
    int dimensione;
    int scelta;
    int flag = 0;

    printf("\n");
    printf("-----------------------------------------------------------------------\n");
    printf("################################# MENU ################################\n");
    printf("-----------------------------------------------------------------------\n");

    dimensione = sizeof(lstMenu) / sizeof(lstMenu[0]);

    for (int i = 0; i < dimensione; i++)
    {
        printf("%s\n", lstMenu[i]);
    }

    while (flag == 0)
    {
        printf("Numero azione che desideri eseguire: ");
        scanf("%d", &scelta);
        if (scelta != 1 && scelta != 2 && scelta != 0)
        {
            printf("Carattere inserito non valido.\n");
            while (getchar() != '\n')
                ;
        }
        else
        {
            flag = 1;
        }
    }

    return scelta;
}

void listaMarche()
{

    char lstVeicoli[4][10] = {"AUDI", "BMW", "MERCEDES", "TESLA"};
    int dimensione;

    dimensione = sizeof(lstVeicoli) / sizeof(lstVeicoli[0]);

    printf("\n");
    printf("-----------------------------------------------------------------------\n");
    printf("############################### MARCHE ################################\n");
    printf("-----------------------------------------------------------------------\n");

    printf("Ecco la lista dei veicoli disponibili in catalogo: \n");
    for (int i = 0; i < dimensione; i++)
    {
        printf("%s\n", lstVeicoli[i]);
    }
    printf("\n");
}

void listaMotorizzazioni()
{

    char lstVeicoli[4][15] = {"AUDI", "BMW", "MERCEDES", "TESLA"};
    char motorizzazioniAudi[4][15] = {"1)Benzina", "2)Diesel", "3)Elettrica", "4)Ibrida"};
    char motorizzazioniBmw[3][15] = {"1)Benzina", "2)Diesel", "3)Elettrica"};
    char motorizzazioniMercedes[3][15] = {"1)Benzina", "2)Diesel", "3)Ibrida"};
    char motorizzazioniTesla[] = {"1)Elettrica"};
    int dimensioneLstAudi = sizeof(motorizzazioniAudi) / sizeof(motorizzazioniAudi[0]);
    int dimensioneLstBmw = sizeof(motorizzazioniBmw) / sizeof(motorizzazioniBmw[0]);
    int dimensioneLstMercedes = sizeof(motorizzazioniMercedes) / sizeof(motorizzazioniMercedes[0]);

    // dimensioneLstTesla = sizeof(motorizzazioniTesla)/sizeof(motorizzazioniTesla[0]);

    printf("-----------------------------------------------------------------------\n");
    printf("########################### MOTORIZZAZIONI ############################\n");
    printf("-----------------------------------------------------------------------\n");

    printf("Lista delle motorizzazioni disponibili per marca:\n");
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%s:\n", lstVeicoli[i]);
        printf("\n");

        if (strcmp(lstVeicoli[i], "AUDI") == 0)
        {
            for (int j = 0; j < dimensioneLstAudi; j++)
            {
                printf("%s\n", motorizzazioniAudi[j]);
            }
        }

        if (strcmp(lstVeicoli[i], "BMW") == 0)
        {
            for (int j = 0; j < dimensioneLstBmw; j++)
            {
                printf("%s\n", motorizzazioniBmw[j]);
            }
        }

        if (strcmp(lstVeicoli[i], "MERCEDES") == 0)
        {
            for (int j = 0; j < dimensioneLstMercedes; j++)
            {
                printf("%s\n", motorizzazioniMercedes[j]);
            }
        }

        if (strcmp(lstVeicoli[i], "TESLA") == 0)
        {
            for (int i = 0; i < 1; i++)
            {
                printf("%s\n", motorizzazioniTesla);
            }
        }

        printf("\n");
    }
}

char *sceltaMarca()
{

    static char sceltaCliente[15];
    int flag = 0;

    listaMarche();

    do
    {
        printf("Scrivi la marca :");
        scanf("%s", sceltaCliente);

        if (strcmp(sceltaCliente, "AUDI") == 0 || strcmp(sceltaCliente, "BMW") == 0 ||
            strcmp(sceltaCliente, "MERCEDES") == 0 || strcmp(sceltaCliente, "TESLA") == 0)
        {
            printf("Hai scelto: %s\n", sceltaCliente);
            flag = 1;
        }
        else
        {

            printf("Scelta non corretta o possibile.\n");
            flag = 0;
        }

    } while (flag == 0);

    return sceltaCliente;
}

char *sceltaMotorizzazione(char *marcaScelta)
{

    char motorizzazioniAudi[4][15] = {"1)Benzina", "2)Diesel", "3)Elettrica", "4)Ibrida"};
    char motorizzazioniBmw[3][15] = {"1)Benzina", "2)Diesel", "3)Elettrica"};
    char motorizzazioniMercedes[3][15] = {"1)Benzina", "2)Diesel", "3)Ibrida"};
    char motorizzazioniTesla[] = {"1)Elettrica"};
    int dimensioneLstAudi = sizeof(motorizzazioniAudi) / sizeof(motorizzazioniAudi[0]);
    int dimensioneLstBmw = sizeof(motorizzazioniBmw) / sizeof(motorizzazioniBmw[0]);
    int dimensioneLstMercedes = sizeof(motorizzazioniMercedes) / sizeof(motorizzazioniMercedes[0]);
    static char motorizzazioneScelta[15];
    int codiceMarca = 0;
    int flag = 0;

    printf("-----------------------------------------------------------------------\n");
    printf("########################### MOTORIZZAZIONI ############################\n");
    printf("-----------------------------------------------------------------------\n");

    if (strcmp(marcaScelta, "AUDI") == 0)
    {
        codiceMarca = 1;
    }
    else if (strcmp(marcaScelta, "BMW") == 0)
    {
        codiceMarca = 2;
    }
    else if (strcmp(marcaScelta, "MERCEDES") == 0)
    {
        codiceMarca = 3;
    }
    else if (strcmp(marcaScelta, "TESLA") == 0)
    {
        codiceMarca = 4;
    }

    switch (codiceMarca)
    {
    case 1:

    {
        for (int j = 0; j < dimensioneLstAudi; j++)
        {
            printf("%s\n", motorizzazioniAudi[j]);
        }
    }
    break;
    case 2:

    {
        for (int j = 0; j < dimensioneLstBmw; j++)
        {
            printf("%s\n", motorizzazioniBmw[j]);
        }
        break;
    }
    case 3:
    {
        for (int j = 0; j < dimensioneLstMercedes; j++)
        {
            printf("%s\n", motorizzazioniMercedes[j]);
        }
        break;
    }

    case 4:
    {

        printf("%s\n", motorizzazioniTesla);
        break;
    }

    default:
        printf("Errore nello sviluppo del programma.");
        break;
    }


    while (flag == 0)
    {
        printf("Inserisci la motorizzazione (es:Benzina):  ");
        scanf("%s", motorizzazioneScelta);

        if (strcmp(motorizzazioneScelta, "Benzina") == 0 || strcmp(motorizzazioneScelta, "Diesel") == 0 ||
        strcmp(motorizzazioneScelta, "Ibrida") == 0 || strcmp(motorizzazioneScelta, "Elettrica") == 0){
            flag = 1;
            printf("Hai scelto %s\n",motorizzazioneScelta);

        }
        else{
            printf("Carattere inserito non valido.\n");
            flag = 0;
        }
    }
    
    return motorizzazioneScelta;
}

int giorniNoleggio()
{

    int noleggio = 0;

    printf("-----------------------------------------------------------------------\n");
    printf("########################### TEMPO NOLEGGIO ############################\n");
    printf("-----------------------------------------------------------------------\n");

    while (noleggio <= 0)
    {
        printf("Inserisci i giorni del noleggio (numero intero positivo): "); 
        scanf("%d",&noleggio);
        if (noleggio > 0) {
            printf("Hai inserito %d giorni\n",noleggio);
        }
        else if (noleggio != 1 || noleggio <= 0)
        {
            printf("Inserisci un numero positivo.\n");
            while (getchar() != '\n');
        }
        
    }
    

    return noleggio;
}

int kmDaPercorrere(int tariffaKm)
{

    int kilometri;
    char supero[3];
    int flag = 0;

    printf("-----------------------------------------------------------------------\n");
    printf("######################### KILOMETRI DA FARE ###########################\n");
    printf("-----------------------------------------------------------------------\n");

    while (flag == 0)
    {
        printf("Fino a 300 km il costo è fisso e di 50 euro,\nsuperati i 300 km ogni kilometro costa %d euro.\n", tariffaKm);
        printf("Pensi di superare la soglia (si/no):");
        scanf("%s", supero);

        if (strcmp(supero, "no") == 0)
        {
            kilometri = 300;
            flag = 1;
        }
        else if (strcmp(supero, "si") == 0)
        {
            do
            {
                printf("Inserisci i kilometri che pensi di fare (numero intero positivo): ");
                if (scanf("%d", &kilometri) != 1 || kilometri <= 0)
                {
                    printf("Inserisci un numero positivo.\n");
                    while (getchar() != '\n')
                        ;
                }
                else
                {
                    flag = 1;
                }
            } while (flag == 0);
        }
        else
        {
            printf("Carattere inserito non valido.\n");
            while (getchar() != '\n')
                ;
        }
    }

    return kilometri;
}

int kmGiaPercorsi()
{

    int kilometri;
    int flag = 0;

    printf("-----------------------------------------------------------------------\n");
    printf("######################### KILOMETRI PERCORSI ##########################\n");
    printf("-----------------------------------------------------------------------\n");

    while (flag == 0)
    {

        do
        {
            printf("Inserisci il numero senza virgola dei km che hai percorso: ");
            if (scanf("%d", &kilometri) != 1 || kilometri <= 0)
            {
                printf("Inserisci un numero positivo.\n");
                while (getchar() != '\n')
                    ;
            }
            else
            {
                flag = 1;
            }
        } while (flag == 0);
    }
    return kilometri;
}
// QUESTE FUNZIONANO TUTTE

int calcoloNoleggio(char *marcaScelta, char *motorizzazioneScelta, int tempoNoleggio, int kmPercorsi, int costoFissoKm)
{

    int costoTotale;
    int calcoloCostoKm;
    int scartoKm;

    // costo macchina al giorno

    int costoAUDI = 10;
    int costoBMW = 15;
    int costoMERCEDES = 20;
    int costoTESLA = 50;

    // costo motorizzazione al giorno

    int costoBenzina = 5;
    int costoDiesel = 8;
    int costoHybrida = 9;
    int costoElettrica = 17;

    // calcolo costo km

    if (kmPercorsi > 300)
    {
        scartoKm = (kmPercorsi - 300);
        calcoloCostoKm = scartoKm * 1 + costoFissoKm;
    }
    else
    {
        calcoloCostoKm = 50;
    }

    // calcolo totale noleggio per marca e motorizzazione

    if (strcmp(marcaScelta, "AUDI") == 0)
    {
        if (strcmp(motorizzazioneScelta, "Benzina") == 0)
        {
            costoTotale = (costoAUDI + costoBenzina + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Diesel") == 0)
        {
            costoTotale = (costoAUDI + costoDiesel + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Ibrida") == 0)
        {
            costoTotale = (costoAUDI + costoHybrida + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Elettrica") == 0)
        {
            costoTotale = (costoAUDI + costoElettrica + calcoloCostoKm) * tempoNoleggio;
        }
    }

    if (strcmp(marcaScelta, "BMW") == 0)
    {
        if (strcmp(motorizzazioneScelta, "Benzina") == 0)
        {
            costoTotale = (costoBMW + costoBenzina + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Diesel") == 0)
        {
            costoTotale = (costoBMW + costoDiesel + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Elettrica") == 0)
        {
            costoTotale = (costoBMW + costoElettrica + calcoloCostoKm) * tempoNoleggio;
        }
    }

    if (strcmp(marcaScelta, "MERCEDES") == 0)
    {
        if (strcmp(motorizzazioneScelta, "Benzina") == 0)
        {
            costoTotale = (costoMERCEDES + costoBenzina + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Diesel") == 0)
        {
            costoTotale = (costoMERCEDES + costoDiesel + calcoloCostoKm) * tempoNoleggio;
        }
        if (strcmp(motorizzazioneScelta, "Ibrida") == 0)
        {
            costoTotale = (costoMERCEDES + costoHybrida + calcoloCostoKm) * tempoNoleggio;
        }
    }

    if (strcmp(marcaScelta, "TESLA") == 0)
    {

        if (strcmp(motorizzazioneScelta, "Elettrica") == 0)
        {
            costoTotale = (costoTESLA + costoElettrica + calcoloCostoKm) * tempoNoleggio;
        }
    }

    return costoTotale;
}

void riepilogoNoleggio(char *marcaScelta, char *motorizzazioneScelta, int tempoNoleggio, int kmPercorsi, int costoNoleggio)
{

    
    printf("-----------------------------------------------------------------------\n");
    printf("########################## RIEPILOGO FINALE ###########################\n");
    printf("-----------------------------------------------------------------------\n");

    printf("Hai scelto di noleggiare : %s\n", marcaScelta);
    printf("Hai scelto la motorizzazione : %s\n", motorizzazioneScelta);
    printf("Il giorni di noleggio : %d\n", tempoNoleggio);
    printf("Con una percorrenza di : %d km\n", kmPercorsi);
    printf("Il costo giornaliero del noleggio per questa configurazione è di : %d euro\n",costoNoleggio/tempoNoleggio);
    printf("Il costo totale del noleggio per questa configurazione è di : %d euro\n", costoNoleggio);
    printf("Ti aspettiamo in sede!\n");
}