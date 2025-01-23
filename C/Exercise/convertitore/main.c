#include <stdio.h>
#include "conversion.h"

int main()
{
    // VARIABILI

    double parametro1;
    int sceltaOperazione;
    int sceltaConversioneTemperatura;
    int sceltaConversioneValuta;

    printf("-------------------------------------------------------\n");
    printf("##### CONVERTITORE SEMPLICE DI TEMPERATURA/VALUTE #####\n");
    printf("-------------------------------------------------------\n");

    char lst_opzioni[][30] = {"1) CONVERTI TEMPERATURA", "2) CONVERTI VALUTE"};
    for (int i = 0; i <= 2; i++)
    {
        printf("%s\n", lst_opzioni[i]);
    }

    printf("Inserisci il numero dell'operazione che vuoi eseguire : ");
    scanf("%d", &sceltaOperazione);

    if (sceltaOperazione == 1)
    {
        char lst_unitaMisura[][30] = {"1) DA CELSIUS A FARENHEIT", "2) DA FARENHEIT A CELSIUS"};
        for (int i = 0; i <= 2; i++)
        {
            printf("%s\n", lst_unitaMisura[i]);
        }
        printf("Inserisci il numero per la conversione che ti interessa :  ");
        scanf("%d", &sceltaConversioneTemperatura);

        if (sceltaConversioneTemperatura == 1)
        {
            printf("Inserisci il valore che desideri convertire : ");
            scanf("%lf", &parametro1);
            double result = celsiusTOfarenith(parametro1);
            printf("-------------------------------------------------------\n");
            printf("La conversione di %2.f celsius corrisponde a :  %2.f farenheit\n ", parametro1, result);
            printf("-------------------------------------------------------\n");
        }
        else if (sceltaConversioneTemperatura == 2)
        {
            printf("Inserisci il valore che desideri convertire : ");
            scanf("%lf", &parametro1);
            double result = farenithTOcelsius(parametro1);
            printf("-------------------------------------------------------\n");
            printf("La conversione di %2.f farenheit corrisponde a :  %2.f celsius\n ", parametro1, result);
            printf("-------------------------------------------------------\n");
        }
        else
        {
            printf("Errore nella digitazione della scelta");
        }
    }
    
    else if (sceltaOperazione == 2)
    {
        char lst_unitaValuta[][30] = {"1) DA EURO A DOLLARO", "2) DA DOLLARO A EURO "};
        for (int i = 0; i <= 2; i++)
        {
            printf("%s\n", lst_unitaValuta[i]);
        }
        printf("Inserisci il numero per la conversione che ti interessa :  ");
        scanf("%d", &sceltaConversioneValuta);
    
    
        if (sceltaConversioneValuta == 1)
        {
            printf("Inserisci il valore che desideri convertire : ");
            scanf("%lf", &parametro1);

            double result = euroTOdollaro(parametro1);

            printf("-------------------------------------------------------\n");
            printf("La conversione di %2.f euro corrisponde a :  %2.f dollari\n ", parametro1, result);
            printf("-------------------------------------------------------\n");
        }
        else if (sceltaConversioneValuta == 2)
        {
            printf("Inserisci il valore che desideri convertire : ");
            scanf("%lf", &parametro1);
            double result = dollaroTOeuro(parametro1);
            printf("-------------------------------------------------------\n");
            printf("La conversione di %2.f dollari corrisponde a :  %2.f euro\n ", parametro1, result);
            printf("-------------------------------------------------------\n");
        }
        else
        {
            printf("Errore nella digitazione della scelta");
        }
    }
    else
    {
        printf("Errore nella digitazione della scelta");
    }
 
    return 0;
}