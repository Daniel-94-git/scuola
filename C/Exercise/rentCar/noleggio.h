#ifndef NOLEGGIOUTILS
#define NOLEGGIOUTILS 

// scelta utente su azioni da eseguire fra : andare al login , uscire , visitatore
int menu();

// login utente hardcoded
int login();

// da loggato menu per scegliere se noleggiare un auto oppure restituirla
int azioneUtente();

// visualizza la lista dei veicoli del rentcar                   
void listaMarche();

// visualizza la lista delle motorizzazioni delle auto           
void listaMotorizzazioni();

// scelta utente marca veicolo   es(AUDI)                               
char *sceltaMarca();

// scelta utente motorizzazione veicolo es (Benzina)                        
char *sceltaMotorizzazione(char *marcaScelta);

// raccoglie per quanti giorni tieni o hai tenuto l'auto
int giorniNoleggio();

// raccolgo i km per il noleggio
int kmDaPercorrere(int tariffaKm);

// raccolgo i km percorsi effettivamente
int kmGiaPercorsi();

// calcolo il costo effettivo del noleggio , anche sul rientro del veicolo da un noleggio
int calcoloNoleggio(char *marcaScelta , char *motorizzazioneScelta , int tempoNoleggio, int kmPercorsi, int costoFissoKm); 

// stampo a video con una funzione void il riepilogo del noleggio e relativi costi
void riepilogoNoleggio(char *marcaScelta , char *motorizzazioneScelta , int tempoNoleggio, int kmPercorsi, int costoNoleggio);

#endif // NOLEGGIOUTILS