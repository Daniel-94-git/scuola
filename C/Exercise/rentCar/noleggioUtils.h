#ifndef NOLEGGIOUTILS
#define NOLEGGIOUTILS
//int menu();
int login();
char* visualizzaAuto();
char *visualizzaMotorizzazioni(char *modello_scelto);
int f_giorni();
int calcolaNoleggioGiornaliero(char *modello_scelto,char *motorizzazione_scelta,int giorni);
void lista_modelli_motorizzazioni();
float calcolo_noleggio_restituito(char *modello, char *motorizzazione, float km_percorsi, int giorni);
int restituizione();


#endif // NOLEGGIOUTILS