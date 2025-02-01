#include <stdio.h>
#include "noleggio.h"


int main()
{

    int sceltaMenu;
    int loggato;
    int azioneDaMenu;
    int tempoNoleggio;
    int kmPercorsi;
    int tariffaKm = 1;
    int costoNoleggio;
    int costoFissoKm = 50;
    int flag = 0;

    while (flag == 0)
    {
        sceltaMenu = menu();
        // Uscita dal programma
        if (sceltaMenu == 0)
        {
            printf("Arrivederci!\n");
            flag = 1;
        }

        // Procedura di login
        else if (sceltaMenu == 1)
        {
            loggato = login();
            if (loggato == 1)
            {
                azioneDaMenu = azioneUtente();

                if (azioneDaMenu == 1)
                {

                    char *marcaScelta = sceltaMarca();
                    char *motorizzazioneScelta = sceltaMotorizzazione(marcaScelta);
                    tempoNoleggio = giorniNoleggio();
                    kmPercorsi = kmDaPercorrere(tariffaKm);
                    printf("%s\n", motorizzazioneScelta);
                    printf("%d\n", tempoNoleggio);
                    costoNoleggio = calcoloNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoFissoKm);
                    riepilogoNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoNoleggio);
                    flag = 0;
                }
                else if ((azioneDaMenu == 2))
                {
                    char *marcaScelta = sceltaMarca();
                    char *motorizzazioneScelta = sceltaMotorizzazione(marcaScelta);
                    tempoNoleggio = giorniNoleggio();
                    kmPercorsi = kmGiaPercorsi();
                    costoNoleggio = calcoloNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoFissoKm);
                    riepilogoNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoNoleggio);
                    flag = 0;
                }
                else if (azioneDaMenu == 0)
                {
                    printf("Arriverderci!\n");
                    flag = 1;
                }
                
            }

            else if (loggato == 0)
            {
                printf("Alla prossima volta.\n");
                flag = 1; // esce dal programma definitivamente
            }
        }

        else if (sceltaMenu == 2)
        {
            listaMarche(); // modalità visisatore
            listaMotorizzazioni();
        }
    }
    /////////////////////////////////////////////////
    /*
        sceltaMenu = menu();
        // Uscita dal programma
        if (sceltaMenu == 0)
        {
            printf("Arrivederci!\n");
        }

        // Procedura di login
        else if (sceltaMenu == 1)
        {
            loggato = login();
            if (loggato == 1)
            {
                azioneDaMenu = azioneUtente();

                if (azioneDaMenu == 1)
                {

                    char *marcaScelta = sceltaMarca();
                    char *motorizzazioneScelta = sceltaMotorizzazione(marcaScelta);
                    tempoNoleggio = giorniNoleggio();
                    kmPercorsi = kmDaPercorrere(tariffaKm);
                    printf("%s\n", motorizzazioneScelta);
                    printf("%d\n", tempoNoleggio);
                    costoNoleggio = calcoloNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoFissoKm);
                    riepilogoNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoNoleggio);


                    return 0;
                }
                else if ((azioneDaMenu == 2))
                {
                    char *marcaScelta = sceltaMarca();
                    char *motorizzazioneScelta = sceltaMotorizzazione(marcaScelta);
                    tempoNoleggio = giorniNoleggio();
                    kmPercorsi = kmGiaPercorsi();
                    costoNoleggio = calcoloNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoFissoKm);
                    riepilogoNoleggio(marcaScelta, motorizzazioneScelta, tempoNoleggio, kmPercorsi, costoNoleggio);
                }

            }

            else if (loggato == 0)
            {
                printf("Alla prossima volta.\n");
                return 0; // esce dal programma definitivamente
            }
        }

        else if (sceltaMenu == 2)
        {
            listaMarche(); // modalità visisatore
            listaMotorizzazioni();
        }
    */
    return 0;
}