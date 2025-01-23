#include <stdio.h>
#include <string.h>
#include "noleggioUtils.c"

// STRUTTURA BASE PER RACCOLTA DATI

typedef struct SelezioneCliente
{
    char modello[15];
    char motorizzazione[15];
    int giorni;
}Selection;

int main()
{

    // Variabili 

    int run_program = 1;
    char utente_scelta;
    int registrato;
    char accesso = 'L';
    char visita = 'S';
    char uscita = '0';
    char restituzione = 'R'; 
    int giorni;


    // Login e visualizzazione menu

    printf("----------------- WELCOME TO RENT CARS -----------------\n");

    while (run_program == 1)
    {
        // CREO STRUTTURA PERSONALIZZATA "SELECTION"

        struct SelezioneCliente selection;

        printf("[L] per il login altrimenti\n[S] per consultare i modelli\n[R] per riconsegnare un auto\n[0] per uscire\n");
        scanf("%c", &utente_scelta);

        if (utente_scelta == accesso)
        {

            // LOGIN HARDCODED CON "CONTROLLO"

            registrato = login();
            if(registrato == 2){
                break;
            }

            // LANCIO FUNZIONE PER SCELTA MODELLO CON "CONTROLLO"

            char *modello_scelto = visualizzaAuto();
            if (modello_scelto == NULL)
            {
                break;
            }
            printf("Hai scelto: %s\n", modello_scelto);

            // LANCIO FUNZIONE PER SCELTA MOTORIZZAZIONE CON "CONTROLLO"

            char*motorizzazione_scelta = visualizzaMotorizzazioni(modello_scelto);
            if (motorizzazione_scelta == NULL)
            {
                break;
            }
            printf("Hai scelto: %s\n",motorizzazione_scelta);
            
            // LANCIO FUNZIONE PER RACCOGLIERE GIORNI CON "CONTROLLO"

            giorni = f_giorni();

            // INSERISCO GLI ELEMENTI NELLA STRUTTURA 

            strcpy(selection.modello,modello_scelto);
            strcpy(selection.motorizzazione,motorizzazione_scelta); // Non riesco a passare la struttura nella funzione
            selection.giorni = giorni;

            // LANCIO FUNZIONE PER CALCOLO COSTO NOLEGGIO

            int costo_totale = calcolaNoleggioGiornaliero(modello_scelto,motorizzazione_scelta,giorni);
            printf("Il costo totale del noleggio : %d euro\n",costo_totale);
            printf("------------------------------------------------------------------\n");
        }
        else if (utente_scelta == visita)
        {
            lista_modelli_motorizzazioni();
        }
        else if (utente_scelta == restituzione)
        {
            float costo_totale;
            costo_totale = restituizione();
            printf("Il noleggio ha un costo totale di : %.2f euro\n", costo_totale);
            printf("------------------------------------------------------------------\n");
        }
        else if (utente_scelta == uscita)
        {
            printf("Arrivederci!\n");
            run_program = 0;
        }
    }

    return 0;
}