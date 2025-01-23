#include <stdio.h>
#include <string.h>
#include "noleggioUtils.h"

int login()
{

    // MAIL  : pippo@gmail.com
    // PASSW : pluto

    char mail[20], password[20];
    int accesso_eseguito = 0;
    int accesso_fallito = 0;
    int esci;

    while (accesso_eseguito == 0 && accesso_fallito == 0)
    {
        printf("Inserisci qui la tua email: ");
        scanf("%s", mail);

        printf("Inserisci qui la tua password: ");
        scanf("%s", password);

        if (strcmp(mail, "pippo@gmail.com") == 0 && strcmp(password, "pluto") == 0)
        {
            printf("\n");
            printf("Bentornato %s !\n", mail);
            accesso_eseguito = 1;
        }
        else if (strcmp(mail, "pippo@gmail.com") == 0 && strcmp(password, "pluto") != 0)
        {
            printf("La password inserita non è corretta.Prego riprovare.\n");
            printf("Premi [0] per uscire [1] per riprovare: ");
            scanf("%d", &esci);

            if (esci == 0)
            {
                accesso_fallito = 1;
            }
            else if (esci == 1)
            {
                accesso_fallito = 0;
            }

            else
            {
                printf("Carattere non valido.");
            }
            if (accesso_fallito == 1)
            {
                accesso_eseguito = 2;
            }
        }
        else if (strcmp(mail, "pippo@gmail.com") != 0 && strcmp(password, "pluto") == 0)
        {
            printf("L' email inserita non è corretta.Prego riprovare.\n");
            printf("Premi [0] per uscire [1] per riprovare: ");
            scanf("%d", &esci);

            if (esci == 0)
            {
                accesso_fallito = 1;
            }
            else if (esci == 1)
            {
                accesso_fallito = 0;
            }

            else
            {
                printf("Carattere non valido.");
            }
            if (accesso_fallito == 1)
            {
                accesso_eseguito = 2;
            }
        }
        else
        {
            printf("I dati inseriti non sono corretti. Prego riprovare.\n");
        }
    }
    return accesso_eseguito;
}

char *visualizzaAuto()
{
    char *lst_auto[] = {"Audi", "Bmw", "Mercedes", "Tesla"};
    int auto_scelta = 15;

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d -- %s\n", i + 1, lst_auto[i]);
    }

    while (auto_scelta == 15)
    {
        printf("Inserisci il numero dell'auto che ti interessa oppure [0] per uscire: ");
        scanf("%d", &auto_scelta);

        if (auto_scelta == 0)
        {
            return NULL;
        }
        else if (auto_scelta == 1 || auto_scelta == 2 || auto_scelta == 3 || auto_scelta == 4)
        {
            return lst_auto[auto_scelta - 1];
        }
        else
        {
            printf("Carattere non valido.\n");
            while (getchar() != '\n')
                ;
        }
    }
    return 0;
}

char *visualizzaMotorizzazioni(char *modello_scelto)
{

    int motorizzazione = 10;
    if (strcmp(modello_scelto, "Audi") == 0)
    {
        char *lst_Motorizzazioni[] = {"Benzina", "Diesel", "Elettrica", "Ibrida"};

        printf("---------------------------------------------------------\n");

        printf("Per Audi sono disponibili le segenti motorizzazioni :\n");
        for (int i = 0; i < 4; i++)
        {
            printf("%d -- %s\n", i + 1, lst_Motorizzazioni[i]);
        }

        while (motorizzazione == 10)
        {
            printf("Inserisci il numero della motorizzazione che ti interessa , oppure [0] per uscire: ");
            scanf("%d", &motorizzazione);
            if (motorizzazione == 0)
            {
                return NULL;
            }
            else if (motorizzazione == 1 || motorizzazione == 2 || motorizzazione == 3 || motorizzazione == 4)
            {
                return lst_Motorizzazioni[motorizzazione - 1];
            }
            else
            {
                printf("Carattere non valido.\n");
                while (getchar() != '\n')
                    ;
            }
        }
    }
    else if (strcmp(modello_scelto, "Bmw") == 0)
    {
        char *lst_Motorizzazioni[] = {"Benzina", "Diesel", "Elettrica"};

        printf("---------------------------------------------------------\n");

        printf("Per Bmw sono disponibili le segenti motorizzazioni :\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%d -- %s\n", i + 1, lst_Motorizzazioni[i]);
        }

        while (motorizzazione == 10)
        {
            printf("Inserisci il numero della motorizzazione che ti interessa , oppure [0] per uscire: ");
            scanf("%d", &motorizzazione);
            if (motorizzazione == 0)
            {
                return NULL;
            }
            else if (motorizzazione == 1 || motorizzazione == 2 || motorizzazione == 3)
            {
                return lst_Motorizzazioni[motorizzazione - 1];
            }
            else
            {
                printf("Carattere non valido.\n");
                while (getchar() != '\n')
                    ;
            }
        }
    }
    else if (strcmp(modello_scelto, "Mercedes") == 0)
    {
        char *lst_Motorizzazioni[] = {"Benzina", "Diesel", "Elettrica"};

        printf("---------------------------------------------------------\n");

        printf("Per Mercedes sono disponibili le segenti motorizzazioni :\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%d -- %s\n", i + 1, lst_Motorizzazioni[i]);
        }

        while (motorizzazione == 10)
        {
            printf("Inserisci il numero della motorizzazione che ti interessa , oppure [0] per uscire: ");
            scanf("%d", &motorizzazione);
            if (motorizzazione == 0)
            {
                return NULL;
            }
            else if (motorizzazione == 1 || motorizzazione == 2 || motorizzazione == 3)
            {
                return lst_Motorizzazioni[motorizzazione - 1];
            }
            else
            {
                printf("Carattere non valido.");
                while (getchar() != '\n')
                    ;
            }
        }
    }
    else if (strcmp(modello_scelto, "Tesla") == 0)
    {
        char *lst_Motorizzazioni[] = {"Elettrica"};

        printf("---------------------------------------------------------\n");

        printf("Per Tesla è disponibile la seguente motorizzazione :\n");
        printf("%s\n", lst_Motorizzazioni[0]);

        while (motorizzazione == 10)
        {
            printf("Digita [1] per scegliere oppure 0 per uscire : ");
            scanf("%d", &motorizzazione);
            if (motorizzazione == 0)
            {
                return NULL;
            }
            else if (motorizzazione == 1)
            {
                return lst_Motorizzazioni[0];
            }
            else
            {
                printf("Carattere non valido.");
                while (getchar() != '\n')
                    ;
            }
        }
    }
    return 0;
}

int f_giorni()
{

    int giorni;

    printf("---------------------------------------------------------\n");
    do
    {
        printf("Per quanti giorni vuoi noleggiare la macchina? ");
        if (scanf("%d", &giorni) != 1)
        {
            printf("Input non valido.\n");
            // Pulisci il buffer di input
            while (getchar() != '\n')
                ; // Leggi e scarta caratteri fino a trovare un newline
        }
    } while (giorni <= 0 || giorni >= 365);

    return giorni;
}

int calcolaNoleggioGiornaliero(char *modello_scelto, char *motorizzazione_scelta, int giorni)
{

    int costo_modello;
    int costo_motorizzazione;
    int costo_totale;

    printf("------------------------------------------------------------------\n");

    printf("Lei ha scelto il seguente modello :             %s\n", modello_scelto);
    printf("Lei ha scelto la seguente motorizzazione :      %s\n", motorizzazione_scelta);
    printf("Lei ha scelto il seguente numero di  giorni :   %d\n", giorni);

    // Controllo il costo del modello
    if (strcmp(modello_scelto, "Audi") == 0)
    {

        costo_modello = 50;
    }
    if (strcmp(modello_scelto, "Bmw") == 0)
    {

        costo_modello = 70;
    }
    if (strcmp(modello_scelto, "Merceds") == 0)
    {

        costo_modello = 85;
    }
    if (strcmp(modello_scelto, "Tesla") == 0)
    {

        costo_modello = 100;
    }

    // Controllo il costo della motorizzazione
    if (strcmp(motorizzazione_scelta, "Benzina") == 0)
    {

        costo_motorizzazione = 20;
    }
    if (strcmp(motorizzazione_scelta, "Diesel") == 0)
    {

        costo_motorizzazione = 30;
    }
    if (strcmp(motorizzazione_scelta, "Ibrida") == 0)
    {

        costo_motorizzazione = 15;
    }
    if (strcmp(motorizzazione_scelta, "Elettrica") == 0)
    {

        costo_motorizzazione = 10;
    }

    // Calcolo costo totale

    costo_totale = (costo_modello + costo_motorizzazione) * giorni;

    return costo_totale;
}

void lista_modelli_motorizzazioni()
{

    int dimensione;
    char lst_modelli[4][100] = {"Audi", "Bmw", "Mercedes", "Tesla"};
    char motorizzazioniAudi[4][50] = {"Benzina", "Diesel", "Elettrica", "Ibrida"};
    char motorizzazioniBmw[3][30] = {"Benzina", "Diesel", "Elettrica"};
    char motorizzazioniMercedes[3][50] = {"Benzina", "Diesel", "Elettrica"};
    char motorizzazioniTesla[10] = {"Elettrica"};
    int costo_modelli[4] = {50, 70, 85, 100};
    int costo_motorizzazioni[4] = {20, 30, 15, 10};

    dimensione = sizeof(lst_modelli) / sizeof(lst_modelli[0]);

    for (int i = 0; i < dimensione; i++)
    {
        printf("------------------------------------------------\n");
        printf("MODELLO: %s ---- COSTO GIORNO: %d\n ", lst_modelli[i], costo_modelli[i]);
        printf("\n");

        if (strcmp(lst_modelli[i], "Audi") == 0)
        {
            for (int i = 0; i <= 3; i++)
            {
                printf("MOTORIZZAZIONE : %s ---- COSTO GIORNO: %d\n", motorizzazioniAudi[i], costo_motorizzazioni[i]);
            }
        }
        if (strcmp(lst_modelli[i], "Bmw") == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("MOTORIZZAZIONE : %s ---- COSTO GIORNO: %d\n", motorizzazioniBmw[i], costo_motorizzazioni[i]);
            }
        }
        if (strcmp(lst_modelli[i], "Mercedes") == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("MOTORIZZAZIONE : %s ---- COSTO GIORNO: %d\n", motorizzazioniMercedes[i], costo_motorizzazioni[i]);
            }
        }
        if (strcmp(lst_modelli[i], "Tesla") == 0)
        {

            // for (int i = 0; i < 2; i++)
            //{
            printf("MOTORIZZAZIONE : %s ---- COSTO GIORNO: %d\n ", motorizzazioniTesla, costo_motorizzazioni[i]);
            //}
        }
    }
    printf("\n");
}

float calcolo_noleggio_restituito(char *modello, char *motorizzazione, float km_percorsi, int giorni)
{
    int costo_modello;
    int costo_motorizzazione;
    float costo_totale;
    int costo_fisso_km = 200;

    if (strcmp(modello, "Audi") == 0)
    {

        costo_modello = 50;
    }
    if (strcmp(modello, "Bmw") == 0)
    {

        costo_modello = 70;
    }
    if (strcmp(modello, "Merceds") == 0)
    {

        costo_modello = 85;
    }
    if (strcmp(modello, "Tesla") == 0)
    {

        costo_modello = 100;
    }

    // Controllo il costo della motorizzazione
    if (strcmp(motorizzazione, "Benzina") == 0)
    {

        costo_motorizzazione = 20;
    }
    if (strcmp(motorizzazione, "Diesel") == 0)
    {

        costo_motorizzazione = 30;
    }
    if (strcmp(motorizzazione, "Ibrida") == 0)
    {

        costo_motorizzazione = 15;
    }
    if (strcmp(motorizzazione, "Elettrica") == 0)
    {

        costo_motorizzazione = 10;
    }

    if (km_percorsi > 1000)
    {

        // costo km in più dopo i mille : 2
        int plus;
        int costo_maggiorato;
        int costo_fisso_km = 200;

        plus = km_percorsi - 1000;
        costo_maggiorato = (plus * 5) + costo_fisso_km;
        costo_totale = (costo_modello + costo_motorizzazione) * giorni + costo_maggiorato;
        return costo_totale;
    }
    else
    {

        costo_totale = (costo_modello + costo_motorizzazione) * giorni + costo_fisso_km;
        return costo_totale;
    }
}

int restituizione()
{

    char modello[20];
    char motorizzazione[20];
    float km_percorsi;
    int giorni;
    float costo_totale;

    int flag = 0;

    while (flag == 0)
    {

        printf("Inserisci il modello di auto che hai noleggiato : ");
        scanf("%s", modello);
        printf("Inserisci la motorizzazione di auto che hai noleggiato : ");
        scanf("%s", motorizzazione);
        printf("Inserisci i kilometri che hai percorso : ");
        scanf("%f", &km_percorsi);
        printf("Inserisci il numero di giorni che hai noleggiato : ");
        scanf("%d", &giorni);

        costo_totale = calcolo_noleggio_restituito(modello, motorizzazione, km_percorsi, giorni);

        return costo_totale;
    }
    return 0;
}