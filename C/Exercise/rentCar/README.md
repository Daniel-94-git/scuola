# RentApp

## Menù

**Benvenuto in Predazzo rent cars**  
Scegli 0 per uscire dal menù oppure seleziona una delle opzioni seguenti digitanto il numero corrispondendte:  

* [L] per il login altrimenti [S] per consultare i modelli  
* 0 - Esci  
* 1 - Visualizzione modelli  
  * Scelta motorizzazione:
    * D - diesel
    * B - benzina
    * E - elettrica
    * H - ibrida  
      * Giorni noleggio:  
      Totale: 150€  

* 2 - Riconsegna auto  
Inserisci i dati relativi al noleggio dell'auto:  
Modello:  
Motorizzazione:  
Km percorsi:  
Giorni noleggio:  

## Funzioni  

* **char visualizzaAuto()**  
Visualizza tutti i modelli di auto disponibili e ritorna il modello scelto tramite la selezione da un menù.  
visualizzaAuto() -> **Audi**, BMW, Mercedes, Tesla  
return Audi

* **char visualizzaMotorizzazioni(char modello[20])**  
Visualizza tutte le motorizzazioni associate al modello passato come parametro e restituisce il la motorizzazione scelta dal menù.
visualizzaMotorizzazioni(Audi) -> Benzina, **Diesel**, Elettico, Ibrido  
return Diesel

* **int riconsegnaAuto(char modello, char motorizzazione, int KMpercorsi, int giorniNoleggio)**  
Prende i parametri relativi al noleggio dell'auto e calcola il totale dovuto.  
Restituisce il totale da pagare  
riconsegnaAuto(BMW, Benzina, 1000, 2) -> return 250

* **int calcolaNoleggioGiornaliero(char modello, char motorizzazione, int giorni)**  
Calcola il preventivo giornaliero relativo al noleggio di un auto considerando i parametri passati.  
riconsegnaAuto(BMW, Benzina, 2) -> return 250  

---

### Funzioni aggiuntive

**void salvaPreventivo(Auto auto)**  
Salva su file il preventivo con tutte le voci relative al noleggio  

**void salvaPreventivoPdf(Auto auto)**  
Salva su file pdf il preventivo  

#### CRUD  

**void creaUtente()**  
Crea un nuovo utente  

**Utente visualizzaUtente(int idUtente)**  
Visualizza le impostazioni di un determinato utente. Ritorna una struttura di tipo Utente
return utente  

**void updateUtente(Utente user)**  
Modifica impostazioni utente  

**void cancellaUtente(int idUtente)**  
Cancella uno specifico utente  
